//Copyright 2024 Alim
#ifndef PIXELSHAPE_H
#define PIXELSHAPE_H

#include <string>
#include <iostream>

namespace CSCE240_Program6 {

class PixelShape {
protected:
    std::string name;
    char pixel;

public:
    PixelShape(const std::string& shape_name = "?", char pixel_char = '*');
    virtual ~PixelShape();

    void SetName(const std::string& shape_name);
    void SetPixel(char pixel_char);

    std::string GetName() const;
    char GetPixel() const;

    virtual void Print(bool filled = true) const;
    virtual PixelShape& operator*=(double factor); 

};

} 

#endif
