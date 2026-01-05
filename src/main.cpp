#include "raylib.h"

int main() {
    InitWindow(800, 600, "Dream2B - The Atelier");
    SetTargetFPS(60);

    Texture2D dressTexture = LoadTexture("assets/textures/dress_test.jpg");

    if(dressTexture.id <= 0){

    }

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Mannequin is live", 20, 20, 20, LIGHTGRAY);
        DrawTexture(dressTexture, 300, 100, WHITE);
        EndDrawing();
    }

    UnloadTexture(dressTexture);
    CloseWindow();
    return 0;
}