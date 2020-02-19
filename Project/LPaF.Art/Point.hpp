#ifndef LPaF_Art_Point
#define LPaF_Art_Point
#include"../LPaF.Functions/Functions.hpp"
namespace LPaF
{
namespace Art
{

class Point
{
public:
    Point()=default;
    Point(int x,int y):x{x},y{y}{}
    ~Point()=default;
    void DrawPoint()
    {
        Utilities::gotoxy(x,y);
        std::cout<<".";
    }
    inline int getX(){return x;}
    inline int getY(){return y;}
protected:
private:
    int const x,y;
};
}
}
#endif // LPaF_Art_Point

