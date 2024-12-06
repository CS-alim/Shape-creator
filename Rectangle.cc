//Copyright 2024 Alim
#include "Rectangle.h"

namespace CSCE240_Program6 {

// Constructor
Rectangle::Rectangle(int rect_length, int rect_width, char pixel_char)
    : PixelShape("rectangle", pixel_char) {
    // Validate and assign length
    length = (rect_length > 0) ? rect_length : 2;
    // Validate and assign width
    width = (rect_width > 0) ? rect_width : 1;
}

// Destructor
Rectangle::~Rectangle() {}

// Mutators
void Rectangle::SetLength(int rect_length) {
    if (rect_length > 0) {
        length = rect_length;
    }
}

void Rectangle::SetWidth(int rect_width) {
    if (rect_width > 0) {
        width = rect_width;
    }
}

// Accessors
int Rectangle::GetLength() const {
    return length;
}

int Rectangle::GetWidth() const {
    return width;
}

Rectangle& Rectangle::operator*=(double factor) {
    int new_length = static_cast<int>(length * factor);
    int new_width = static_cast<int>(width * factor);

    if (new_length >= 1 && new_width >= 1) {
        length = new_length;
        width = new_width;
    }
    return *this;
}

void Rectangle::Print(bool filled) const {
    std::cout << name << std::endl;
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            if (filled || i == 0 || i == length - 1 || j == 0 || j == width - 1) {
                std::cout << pixel << " ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

} 
