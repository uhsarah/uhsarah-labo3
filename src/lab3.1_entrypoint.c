#include "entrypoint.h"

#include "raylib.h" 

void raylib_start(void){
    InitWindow(500,500,"Hello World !");
    SetTargetFPS(60);
    
    while(!WindowShouldClose()) {
        if(IsKeyDown(KEY_ESCAPE)) {
            break;
        }
    
        Color bleuDoux = (Color){0,100,200,255};
        BeginDrawing();
        ClearBackground(WHITE);
        
        DrawRectangleLines(200,400,100,100,bleuDoux);
        DrawRectangleLines(212,325,75,75,bleuDoux);
        DrawRectangleLines(225,275,50,50,bleuDoux);

        DrawLine(210,275,290,275,bleuDoux);
        DrawRectangleLines(230,235,40,40,bleuDoux);

        DrawLine(212,350,170,290,bleuDoux);
        DrawLine(286,350,350,390,bleuDoux);

        EndDrawing();
    }
    CloseWindow();
}