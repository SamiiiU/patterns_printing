#include <iostream>

int main() {
    // Write C++ code here
    int r = 4 , sum = 0, c=r+r;
    
    for(int i=1 ; i<=r ; i++){
        for (int j=1 ; j<=c ; j++){
            if(j <= i || j >=(c-i+1))
            std::cout << " * ";
            else
            std::cout << "   ";
        }
        std::cout << "\n";
    }

    for(int i=r ; i>=1 ; i--){
        for (int j=c ; j>=1 ; j--){
            if(j <= i || j >=(c-i+1))
            std::cout << " * ";
            else
            std::cout << "   ";
        }
        std::cout << "\n";
    }

    return 0;
}
