#include <iostream>


void stars(int n){
if (n>0){
 std::cout<<"*";
 return stars(n-1);
} else{
    std::cout<<"\n";
}
}