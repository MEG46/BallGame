#include <iostream>
#include <raylib.h>

using namespace std;

int main(){
	
	int ballX = 400;
	int ballY = 400;
	int speed = 5;
	InitWindow(1000,500,"Ball Game - My First Game Man :)");
	SetTargetFPS(60);
	InitAudioDevice();
    Music music = LoadMusicStream("C:/Users/ESAD/Desktop/BallGame/BallGame/letmeknow.mp3");
    PlayMusicStream(music);
	while(WindowShouldClose() == false){
        UpdateMusicStream(music);
		if(IsKeyDown(KEY_RIGHT)||IsKeyDown(KEY_D)){
			ballX += speed;
		}else if(IsKeyDown(KEY_LEFT)||IsKeyDown(KEY_A)){
			ballX -= speed;
		}else if(IsKeyDown(KEY_UP)||IsKeyDown(KEY_W)){
			ballY -= speed;
		}else if(IsKeyDown(KEY_DOWN)||IsKeyDown(KEY_S)){
			ballY += speed;
		}
	BeginDrawing();
	ClearBackground(WHITE);
	DrawCircle(ballX,ballY,31,BLACK);
	EndDrawing();
	}
    UnloadMusicStream(music);
    CloseAudioDevice();
	CloseWindow();
	return 0;
}