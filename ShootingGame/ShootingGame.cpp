#include "DxLib.h"
#include <math.h>
#define N 20

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	int BallX, BallY, BallGraph;
	int Bw, Bh, Sw, Sh;
	int SquareX, SquareY, SquareW, SquareH, SquareGraph, SquareDirection = 0;//0なら右、1なら左に動く
	int SquareDamageFlag = 0, SquareDamageCounter = 0, SquareDamageGraph;
	int ShotX[N], ShotY[N], ShotH, ShotW, ShotGraph, ShotFlag[N], ShotBFlag = 0;
	int SquareShotFlag = 0, SquareShotGraph, SquareShotCounter = 0;
	int i;
	double SquareShotX, SquareShotY, SquareShotSpeedX, SquareShotSpeedY;
	for (i = 0; i < N; i++) {
		ShotFlag[i] = 0;
	}

	SetGraphMode(640, 480, 16);

	if (DxLib_Init() == -1)return -1;

	SetDrawScreen(DX_SCREEN_BACK);

	BallGraph = LoadGraph("Ball.png");
	BallX = 288; BallY = 400;

	SquareGraph = LoadGraph("Square.png");
	SquareX = 0; SquareY = 50;

	ShotGraph = LoadGraph("Shot.png");

	SquareDamageGraph = LoadGraph("SquareDamage.png");

	SquareShotGraph = LoadGraph("SquareShot.png");

	GetGraphSize(ShotGraph, &ShotW, &ShotH);
	GetGraphSize(SquareGraph, &SquareW, &SquareH);

	//GetGraphSize(グラフの識別番号, グラフの幅が入る変数, グラフの高さが入る変数);
	GetGraphSize(BallGraph, &Bw, &Bh);
	GetGraphSize(ShotGraph, &Sw, &Sh);

	while (1) {
		ClearDrawScreen();
		//ボールの操作ルーチン
		{
			if (CheckHitKey(KEY_INPUT_S) == 1)BallY += 3;
			if (CheckHitKey(KEY_INPUT_W) == 1)BallY -= 3;
			if (CheckHitKey(KEY_INPUT_D) == 1)BallX += 3;
			if (CheckHitKey(KEY_INPUT_A) == 1)BallX -= 3;
			//画面外に出たのを戻す
			if (BallX < 0)BallX = 0;
			if (BallX > 640 - 64)BallX = 640 - 64;
			if (BallY < 0)BallY = 0;
			if (BallY > 480 - 64)BallY = 480 - 64;

			DrawGraph(BallX, BallY, BallGraph, FALSE);
		}
		//ショットの位置確定とフラグ管理	
		//&演算子はビットごとに積を取る
		if (GetMouseInput() & MOUSE_INPUT_LEFT != 0) {
			if (ShotBFlag == 0) {
				for (i = 0; i < N; i++) {
					if (ShotFlag[i] == 0) {


						ShotX[i] = BallX + (Bw - Sw) / 2;
						ShotY[i] = BallY + (Bh - Sh) / 2;

						ShotFlag[i] = 1;
						ShotBFlag = 1;
						break;
					}
				}
			}
		}
		else {
			ShotBFlag = 0;
		}
		for (i = 0; i < N; i++) {
			//ショットの移動ルーチン
			if (ShotFlag[i] == 1) {
				ShotY[i] -= 16;
				if (ShotY[i] < -80) {
					ShotFlag[i] = 0;
				}
				DrawGraph(ShotX[i], ShotY[i], ShotGraph, FALSE);
			}
		}
		//スクエアの移動ルーチン
		{
			if (SquareDamageFlag == 1) {
				DrawGraph(SquareX, SquareY, SquareDamageGraph, FALSE);
				SquareDamageCounter++;
				if (SquareDamageCounter == 30) {
					SquareDamageFlag = 0;
				}
				SquareShotFlag = 0;
			}
			else {
				if (SquareDirection == 0)SquareX += 3;
				if (SquareDirection == 1)SquareX -= 3;

				if (SquareX < 0) {
					SquareX = 0;
					SquareDirection = 0;
				}

				if (SquareX > 640 - 64) {
					SquareX = 640 - 64;
					SquareDirection = 1;
				}
				DrawGraph(SquareX, SquareY, SquareGraph, FALSE);
				SquareShotCounter++;
				if (SquareShotCounter == 60) {
					if (SquareShotFlag == 0) {//?
						SquareShotX = SquareX + (SquareW - ShotW) / 2;
						SquareShotY = SquareY + (SquareH - ShotH) / 2;


						double sb, sbx, sby, bx, by, sx, sy;

						sx = SquareShotX + Sw / 2;
						sy = SquareShotY + Sh / 2;

						bx = BallX + Bw / 2;
						by = BallY + Bh / 2;

						sbx = bx - sx;
						sby = by - sy;

						sb = sqrt(sbx*sbx + sby * sby);

						//sb/sbで１ビット分動く、よってsbx/sbでx方向に1ビット分動く
						SquareShotSpeedX = sbx / sb * 8;
						SquareShotSpeedY = sby - sb * 8;

						SquareShotFlag = 1;
					}
					SquareShotCounter = 0;
				}
			}
			if (SquareShotFlag == 1) {
				SquareShotX += SquareShotSpeedX;
				SquareShotY += SquareShotSpeedY;

				if (SquareShotY > 480 || SquareShotY < 0 || SquareShotX > 640 || SquareShotX < 0)SquareShotFlag = 0;

				DrawGraph((int)SquareShotX, (int)SquareShotY, SquareShotGraph, FALSE);
			}
		}

		//弾の数だけ当たり判定する
		for (i = 0; i < N; i++) {
			if (ShotFlag[i] == 1) {
				if (((ShotX[i] > SquareX && ShotX[i] < SquareX + SquareW) || (ShotX[i] < SquareX && ShotX[i] + ShotW > SquareX)) &&
					((ShotY[i] > SquareY && ShotY[i] < SquareY + SquareH) || (ShotY[i] < SquareY && ShotY[i] + ShotH > SquareY))) {
					ShotFlag[i] = 0;
					SquareDamageFlag = 1;
					SquareDamageCounter = 0;
				}
			}
		}

		ScreenFlip();

		if (ProcessMessage() == -1)break;
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)break;
	}
	DxLib_End();
	return 0;
}