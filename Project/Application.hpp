//prev modify 20200219.
//modify log:
//<first> 20200219
#include<fstream>
#include<iostream>
#include "LPaF.Menu/Menu.hpp"
#include "LPaF.Constants/Constants.hpp"
#include "LPaF.Functions/Functions.hpp"
#include "LPaF.Feature/FeatureJumper.hpp"

#ifndef LPaF_Global_Application
#define LPaF_Global_Application

namespace LPaF
{
namespace _Application
{
class Application
{
public:
    Application()=default;
    ~Application()=default;
    void init()
    {
        doInit();
    }
    int Execute()
    {
        Functions::ShowMenu();
        std::cin.get();
        return 0;
    }
protected:
    // NO_PROTECTED_MEMBER
private:
    void doInit()
    {
        //empty
    }
    void Goto(int number)
    {
       // FeatureJumper

    }

};

} //namespace Application
} //namespace LPaF


#endif // LPaF_Global_Application
