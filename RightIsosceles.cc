//Copyright 2024 Alim
#include "RightIsosceles.h"
#include <iostream>

namespace CSCE240_Program6 {

// Constructor
RightIsosceles::RightIsosceles(int leg_length, char pixel_char)
    : PixelShape("right isosceles triangle", pixel_char) {
    leg = (leg_length >= 2) ? leg_length : 2; 
}

// Destructor
RightIsosceles::~RightIsosceles() {}

// Mutator
void RightIsosceles::SetLeg(int leg_length) {
    if (leg_length >= 2) {
        leg = leg_length;
    }
}

// Accessor
int RightIsosceles::GetLeg() const {
    return leg;
}

// Overloaded *= operator
RightIsosceles& RightIsosceles::operator*=(double factor) {
    int new_leg = static_cast<int>(leg * factor);
    if (new_leg >= 2) {
        leg = new_leg;
    }
    return *this;
}

// Print function
void RightIsosceles::Print(bool filled) const {
    std::cout << name << std::endl;
    for (int i = 0; i < leg; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (filled || j == 0 || j == i || i == leg - 1) {
                std::cout << pixel << " ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

} 