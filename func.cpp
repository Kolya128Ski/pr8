#include <iostream>

long long factorial(int x){
    if(x < 0)
        throw std::invalid_argument{"No factorial of negative number!"};
    long long res = 1;
    while(x)
        res *= x--;
    return res;
}

int main(){

    int x = 0;
    std::cout<<"Factorial calculation\nEnter number: ";
    std::cin>>x;
    std::cout<<"The factorial of "<<x<<" is "<<factorial(x)<<std::endl;
    
    return 0;
}