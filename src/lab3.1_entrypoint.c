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
        Color noir = (Color){0,0,0,255};
        Color brun = (Color){100,10,0,255};

        BeginDrawing();
        ClearBackground(bleuDoux);
        
        //Body
        DrawRectangle(200,400,100,100,WHITE);
        DrawRectangleLines(200,400,100,100,noir);

        DrawRectangle(212,325,75,75,WHITE);
        DrawRectangleLines(212,325,75,75,noir);


        DrawRectangle(225,275,50,50,WHITE);
        DrawRectangleLines(225,275,50,50,noir);

        //Eyes
        DrawRectangle(255,290,10,10,noir);
        DrawRectangle(235,290,10,10,noir);

        //Nose
        DrawRectangle(250,302,10,5,brun);

        //Hat
        DrawRectangle(215,275,70,8,noir);
        DrawRectangle(230,235,40,40,noir);

        //Arms
        DrawLine(212,350,170,290,brun);
        DrawLine(213,351,171,291,brun);
        DrawLine(214,353,173,292,brun);

        DrawLine(286,350,350,390,brun);
        DrawLine(287,351,351,391,brun);
        DrawLine(288,352,352,392,brun);

        //Buttons
        DrawRectangle(247,340,5,5,brun);
        DrawRectangle(247,360,5,5,brun);
        DrawRectangle(247,380,5,5,brun);

        //Snowflakes
        DrawRectangle(30,30,8,8,WHITE);
        DrawRectangle(150,40,8,8,WHITE);
        DrawRectangle(350,70,8,8,WHITE);
        DrawRectangle(80,230,8,8,WHITE);
        DrawRectangle(330,270,8,8,WHITE);
        DrawRectangle(370,380,8,8,WHITE);
        DrawRectangle(380,230,8,8,WHITE);
        DrawRectangle(175,200,8,8,WHITE);

        EndDrawing();
    }
    CloseWindow();
}