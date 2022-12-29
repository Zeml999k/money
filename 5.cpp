#include <iostream> //you have an unlimited number of coins of N different denominations. Determine whether it is possible to exchange given K sums of money with their help.
void money(int cash)
{
    int ruble = 1, two = 2, five = 5, ten = 10;
    int r = 0, tw = 0, f = 0, te = 0;
    int buffer = cash;
    while(cash != 0)
    {
        if(cash - ten >= 0)
        {
            cash -= ten;
            te++;
        }
        if(cash - five >= 0)
        {
            cash -= five;
            f++;
        }
        if(cash - two >= 0)
        {
            cash -= two; 
            tw++;
        }
        if(cash - ruble >= 0)
        {
            cash -= ruble;
            r++;
        }
    }
    if(cash == 0) { std::cout << buffer << " разменяли на " << te << " десяток, " << f << " пятерок, " << tw << " двоек, " << r << " единиц" << std::endl; }
    else { std::cout << buffer << " нельзя разменять!" << std::endl;}
}
int main()
{
   int value = 0;
   std::cout << "введите ваше количество денег, которые хотите попробовать разменять: " << std::endl;
   std::cin >> value;
   money(value);
   return 0;
}

