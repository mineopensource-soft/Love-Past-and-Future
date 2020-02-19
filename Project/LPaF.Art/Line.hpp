#include"Point.hpp"
#ifndef LPaF_Art_Line
#define LPaF_Art_Line

namespace LPaF
{
namespace Art
{
class Line
{
public:
    Line()=default;
    Line(Point CONST & first,Point CONST & second):first(first),second{second}
    {
        if((first.getX()!=second.getX())&&(first.getY()!=second.getY()))
            throw "LINE_ERROR"
        }
    ~Line()=default;
    void drawLine()
    {
        //1.first=second 2.first.x=second.x(|) 3.first.y=second.y(--)
        if (first.getX()==second.getX() )
            if (first.getY()==second.getY())
                return;
            else
            {
                int howLong=first.getY()-second.getY();
                if(howLong > 0)
                {
                    //howLong>0:first is above the second
                    this->doDrawStraight(first,second)
                }
                else
                {
                    //howlong<0:second is above the first
                    this->doDrawStraight(second,first)
                }
                else
                {
                    if (first.getX()==second.getX() )
                        return;
                    else if(first.getX()<second.getX())
                        doDrawRow(first,second);
                    else
                        doDrawRow(second,first);
                }
            }
    }

protected:
private:
    Point const first,second;
    void doDrawStraight(Point const &a,Point const &b)
    {
        Utility::gotoxy(a.getX(),a.getY());
        for(int i=y; i<b.getY(); ++i)
        {
            std::cout<<"|";
            Utility::gotoxy(a.getX(),i+1);
        }
    }
    void doDrawRow(Point const &a,Point const &b)
    {
        Utility::gotoxy(a.getX(),a.getY());
        for(int i=x; i<b.getX(); ++i)
        {
            std::cout<<"-";
            Utility::gotoxy(i+1,a.getY());
        }
    }


};

} //namespace Art
} //namespace LPaF
#endif // LPaF_Art_Line
