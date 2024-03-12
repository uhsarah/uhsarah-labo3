#include "entrypoint.h"
#include "raylib.h"

void raylib_start(void){
    
   
    InitWindow(500,500,"Player !"); SetTargetFPS(60);
    int PositionX = 225;
    int PositionY = 225;

    while(!WindowShouldClose()) {
        if(IsKeyDown(KEY_ESCAPE)) {
            break;
        }
        Color noir = (Color){0,0,0,255};

        BeginDrawing();
        ClearBackground(WHITE);

        DrawRectangle(PositionY,PositionX,50,50,noir);
        if(IsKeyDown(KEY_W)) {
            PositionX -= 5;
        }
        if(IsKeyDown(KEY_S)) {
            PositionX += 5;
        }
        if(IsKeyDown(KEY_A)) {
            PositionY -= 5;
        }
        if(IsKeyDown(KEY_D)) {
            PositionY += 5;
        }

        if(PositionX > 500) {
            PositionX = 0;
        }
        if(PositionX < 0) {
            PositionX = 500;
        }
        if(PositionY > 500) {
            PositionY = 0;
        }   
        if(PositionY < 0) {
            PositionY = 500;
        }

        EndDrawing();
    }
    CloseWindow();
}