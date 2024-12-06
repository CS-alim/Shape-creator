//Copyright 2024 Alim
#include "PixelShape.h"

namespace CSCE240_Program6 {

// Constructor
PixelShape::PixelShape(const std::string& shape_name, char pixel_char) {
    if (!shape_name.empty()) {
        name = shape_name;
    } else {
        name = "?";
    }

    // Ensure the pixel character is valid (ASCII 33 to 126 inclusive)
    if (pixel_char >= 33 && pixel_char <= 126) {
        pixel = pixel_char;
    } else {
        pixel = '*';
    }
}


// Virtual destructor
PixelShape::~PixelShape() {}

// Mutators
void PixelShape::SetName(const std::string& shape_name) {
    if (!shape_name.empty()) {
        name = shape_name;
    }
}

void PixelShape::SetPixel(char pixel_char) {
    if (pixel_char >= 33 && pixel_char <= 126) {
        pixel = pixel_char;
    }
}

// Accessors
std::string PixelShape::GetName() const {
    return name;
}

char PixelShape::GetPixel() const {
    return pixel;
}

// Virtual Print function
void PixelShape::Print(bool filled) const {
    std::cout << name << std::endl;
}

// Dummy implementation for operator*=
PixelShape& PixelShape::operator*=(double factor) {
    return *this;
}

} 
