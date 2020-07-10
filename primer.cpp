#include <iostream>
double add(int &c,double&d);
int main()
{
    int a = 2;
    double b = 2.0;
    std::cout<<a<<"/n"<<b<<"/n"<<std::endl;
    double e = add(a,b);
    std::cout<<a<<"/n"<<b<<"/n"<<e;
}
double add(int &c,double &d)
{
    c +=1;
    d +=1;
    double f = c+d;
    return f; 
}