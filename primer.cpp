#include <iostream>
double add(int &c,double&d);
int main()
{
    int a = 2;
    double b = 4.0;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    double e = add(a,b);
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<e<<std::endl;
}
double add(int &c,double &d)
{
    c +=1;
    d +=1;
    double f = c+d;
    return f; 
}