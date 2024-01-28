#ifndef Sandbox_hpp
#define Sandbox_hpp

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int h, int w);
    void setWidth(int w);
    void setHeight(int h);
    void displayRectangle() const;
};

int FindArea(int height, int width);

#endif /* Sandbox_hpp */
