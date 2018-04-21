#include <iostream>

using namespace std;
template <class F , class S> // you can input two parameters
F smaller(F a, S b){
    return (a<b?a:b); // if a<b return a else b
}
int main()
{
    int x=12;
    double y = 19.29;
    cout<< smaller(x,y)<<endl;
    return 0;
}
