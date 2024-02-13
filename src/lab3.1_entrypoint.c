#include "entrypoint.h"

#include "raylib.h" 

void raylib_start(void){
    InitWindow(500,500,"Hello World !");
    SetTargetFPS(60);
    
    while(!WindowShouldClose()) {
        if(IsKeyDown(KEY_ESCAPE)) {
            break;
        }
    
    
        BeginDrawing();
        ClearBackground(BLACK);
        
        DrawRectangleLines(200,400,100,100,(Color){255,0,0,255});
        DrawRectangleLines(212,325,75,75,(Color){255,0,0,255});
        DrawRectangleLines(225,275,50,50,(Color){255,0,0,255});

        DrawLine(210,275,290,275,(Color){255,0,0,255});

        EndDrawing();
    }
    CloseWindow();
}