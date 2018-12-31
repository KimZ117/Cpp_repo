#include<iostream>

#define AREA(l, b) (l * b)
int main(){
    
    int l1 = 10, l2 = 5, area;
    area = AREA(l1, l2);
    std :: cout << "Area of rectanle is: " << area;
    return 0;
}