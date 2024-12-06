//Copyright 2024 Alim
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "PixelShape.h"

namespace CSCE240_Program6 {

class Rectangle : public PixelShape {
private:
    int length;
    int width;

public:
    Rectangle(int rect_length = 2, int rect_width = 1, char pixel_char = '*');
    virtual ~Rectangle();

    void SetLength(int rect_length);
    int GetLength() const;

    void SetWidth(int rect_width);
    int GetWidth() const;

    Rectangle& operator*=(double factor) override;
    void Print(bool filled = true) const override;
};

}

#endif
