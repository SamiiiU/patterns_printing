#include <iostream>

int main() {
    // Write C++ code here
    int r = 5 ;
    
    for(int i=1 ; i<=r ; i++){
        for (int j=1 ; j<=r-i ; j++){
            std::cout << "   ";
        }
        for (int j=1 ; j <= r ;j++){
            std::cout << " * ";
        }
        std::cout << "\n";
    }
    return 0;
}
