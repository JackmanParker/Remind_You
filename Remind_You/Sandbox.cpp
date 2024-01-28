#include "Sandbox.hpp"
#include <iostream>

// Constructor implementation
Rectangle::Rectangle(int h, int w) : width(w), height(h) {}

// Method implementations
void Rectangle::setWidth(int w) {
    width = w;
}

void Rectangle::setHeight(int h) {
    height = h;
}

void Rectangle::displayRectangle() const {
    std::cout << "Height = " << height << ", Width = " << width << std::endl;
}

// Function definition
int FindArea(int height, int width) {
    return (height * width);
}
