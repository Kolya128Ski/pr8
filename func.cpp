#include <iostream>

long long factorial(int x){
    if(x < 0)
        throw std::invalid_argument{"No factorial of negative number!"};
    long long res = 1;
    while(x)
        res *= x--;
    return res;
}
