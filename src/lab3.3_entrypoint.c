#include "entrypoint.h"
#include "raylib.h"

void raylib_start(void){
    
   
    InitWindow(500,500,"BallGame !"); SetTargetFPS(60);
    int PositionX = 225;
    int PositionY = 225;
    int BallSize = 50;
    bool x = false;
    bool y = true;

    while(!WindowShouldClose()) {
        if(IsKeyDown(KEY_ESCAPE)) {
            break;
        }
        Color noir = (Color){0,0,0,255};

        BeginDrawing();
        ClearBackground(WHITE);

        DrawRectangle(PositionY,PositionX,50,50,noir);

           

            if(PositionY >= 500 - BallSize || PositionY <= 0 ) {
                if (x == true){
                    x = false;
                }
                else{
                    x = true;
                }
            }

            if (x == true){
                PositionY += 3; 
            }
            if (x == false){
                PositionY -= 3;
            }
            
            if(PositionX >= 500 - BallSize || PositionX <= 0 ) {
                if (y == true){
                    y = false;
                }
                else{
                    y = true;
                }
            }

            if (y == true){
                PositionX += 2; 
            }
            if (y == false){
                PositionX -= 2;
            }
        EndDrawing();
    }
    CloseWindow();
}