#include <iostream>

// the main function
int main(){
    int a;
    std::cout << "Hello Single step 3 lines, and check the value of variable `a`.\nThen, single step 2 more lines, and again check the value of `a`.\nContinue execution till debugging is terminated (after `return 0;` line).\nSubmit your implementationthere!" << std::endl;
    a = 12;
    std::cout << "a=" << a << std::endl;

    a = 13;
    std::cout << "a=" << a << std::endl;
    return 0;
}