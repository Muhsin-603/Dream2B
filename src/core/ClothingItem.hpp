#ifndef CLOTHING_ITEM_HPP
#define CLOTHING_ITEM_HPP

#include "raylib.h"
#include <string>

// The "Slots" where items can go.
// By using an enum, we prevent errors like putting shoes on your head.
enum class ClothingSlot {
    Skin,       // 0: The base body
    Underwear,  // 1: Foundation
    Legs,       // 2: Pants/Skirts
    Torso,      // 3: Shirts/Dresses
    Feet,       // 4: Shoes
    Accessory   // 5: Tiaras/Wings
};

struct ClothingItem {
    std::string id;         // Internal ID (e.g., "gown_lavender")
    std::string name;       // Display Name (e.g., "Lavender Silk Gown")
    ClothingSlot slot;      // Where does it fit?
    Texture2D texture;      // The image data
    bool isVisible;         // Is the player wearing it?

    // The Constructor: A blueprint to build items quickly
    ClothingItem(std::string _id, std::string _name, ClothingSlot _slot, Texture2D _tex) {
        id = _id;
        name = _name;
        slot = _slot;
        texture = _tex;
        isVisible = true; // Default to showing it
    }
};

#endif