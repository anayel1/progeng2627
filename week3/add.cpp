#include<iostream>
int main(){
    double x, acc;
    int counter=0, n;
    std::cin>>x>>n;

    while(counter<n){acc=counter*x+x;
        counter=counter+1;}

        std::cout<<x<<"x"<<n<<"="<<acc<<std::endl;
    }

