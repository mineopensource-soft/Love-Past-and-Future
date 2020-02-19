#ifndef LPaF_Menu_Menu
#define LPaF_Menu_Menu
#include<vector>
#include<string>
#include<iostream>
namespace LPaF
{
namespace Menu
{
class MenuGenerator
{
public:
    MenuGenerator(std::vector<std::string> const & menulist)
    {
        for (auto item : menulist)
        {
            menulist_.push_back(item);
        }
    }
    MenuGenerator()=default;
    ~MenuGenerator()=default;
    void init(std::vector<std::string> const & menulist)
    {
        for (auto item : menulist)
        {
            menulist_.push_back(item);
        }
    }
    void output()
    {
       for(unsigned int i=0;i<menulist_.size();++i)
       {
           std::cout<<(i+1)<<"  "<<menulist_[i]<<std::endl;
       }
    }
    inline std::ostream& showNotices()
    {
        std::cout<<"°´ESC¼üÍË³ö¡£";
        return std::cout;
    }

protected:
private:

    std::vector <std::string> menulist_;
};

}
}

#endif // LPaF_Menu_Menu
