#include <iostream>

int sum;

int sum_of_squares(int n){
if (n<0){
return 0;
}
if (n==0){
    return 0;
}
return n*n + sum_of_squares(n-1);
}