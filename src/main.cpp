#include "raylib.h"
#include "core/ClothingItem.hpp" // Import the new file we just made

int main() {
    // 1. Setup the Window
    InitWindow(800, 600, "Dream2B - The Atelier");
    SetTargetFPS(60);

    // 2. LOAD RESOURCES
    // Load the raw image from the void
    Texture2D texGown = LoadTexture("assets/textures/dress_test.jpg");

    // Create a SMART Object
    // We are telling the game: "This texture is a Torso item named 'Royal Silk'."
    ClothingItem myDress("purple_gown", "Royal Silk", ClothingSlot::Torso, texGown);

    // 3. GAME LOOP
    while (!WindowShouldClose()) {
        
        // --- LOGIC (Update) ---
        // If the Spacebar is pressed, flip the visibility switch
        if (IsKeyPressed(KEY_SPACE)) {
            myDress.isVisible = !myDress.isVisible;
        }

        // --- RENDER (Draw) ---
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Press SPACE to toggle the dress.", 20, 20, 20, LIGHTGRAY);
        DrawText(myDress.name.c_str(), 300, 50, 20, DARKGRAY); // Draw the item name!

        // Only draw the pixels if the logic says so
        if (myDress.isVisible) {
            DrawTexture(myDress.texture, 300, 100, WHITE);
        }

        EndDrawing();
    }

    // 4. CLEANUP
    UnloadTexture(texGown);
    CloseWindow();

    return 0;
}