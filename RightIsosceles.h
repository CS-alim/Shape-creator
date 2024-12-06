//Copyright 2024 Alim
#ifndef RIGHTISOSCELES_H
#define RIGHTISOSCELES_H

#include "PixelShape.h"

namespace CSCE240_Program6 {

class RightIsosceles : public PixelShape {
private:
    int leg; 
public:
    // Constructor with default arguments
    RightIsosceles(int leg_length = 2, char pixel_char = '*');

    // Virtual destructor
    virtual ~RightIsosceles();

    // Mutator
    void SetLeg(int leg_length);

    // Accessor
    int GetLeg() const;

    // Overloaded *= operator
    RightIsosceles& operator*=(double factor) override;

    // Print function
    void Print(bool filled = true) const override;
};

} 

#endif
