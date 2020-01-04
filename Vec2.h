#ifndef VEC2_H
#define VEC2_H

#include <math.h>
#define TILE_SIZE  64
#include <iostream>
class Vec2
{
    public:
        Vec2();
        virtual ~Vec2();
    Vec2(float x, float y,float w =0, float h = 0 ) : X(x),Y(y), W(w), H(h){}
    float X;
    float Y;
    float W;
    float H;
    float GetLength() const;
    float GetLengthSq() const;
   int GetArrayIndex(int Size_of_Rows){ return X/TILE_SIZE + ((Y/TILE_SIZE)*Size_of_Rows); }
double GetDistance(const Vec2& rhs ) {return sqrt((this->X-rhs.X)*(this->X-rhs.X) + (this->Y-rhs.Y)*(this->Y-rhs.Y));}

Vec2 selectRect(int x,int y);

   Vec2& Normalize();
   Vec2 GetNormalized() const;
double GetRatio(double x, double y);
    Vec2 operator+(const Vec2& rhs) const;  //lhs +rhs
        Vec2& operator+=(const Vec2& rhs);
        Vec2 operator*(float rhs) const;  //lhs +rhs
        Vec2& operator*=(float rhs);
        bool operator==(const Vec2& rhs) const;
        Vec2 operator-(const Vec2& rhs) const;
        Vec2& operator-=(const Vec2& rhs);
    protected:

    private:
};

#endif // VEC2_H
