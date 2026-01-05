#include "raylib.h"

int main() {
    InitWindow(800, 600, "Dream2B - The Atelier");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("We are LIVE, Drac!", 300, 280, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}