#include <iostream>

int main() {
    // Write C++ code here
    int r = 7 ;
    
    for(int i=1 ; i<=r ; i++){
        for (int j=1 ; j<=i ; j++){
            if((i+j)%2==0)
            std::cout << " 1 ";
            else
            std::cout << " 0 ";
        }
        std::cout << "\n";
    }
    return 0;
}
