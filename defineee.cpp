#include <iostream>

void defineHotWoman(void)
{
    #define VERY_FINE_WOMAN
}

int main(void)
{
    #define FINE_WOMAN

    std::cout << "Hey!" << std::endl;

    #ifdef FINE_WOMAN
        std::cout << "Wow" << std::endl;
    #endif

    //defineHotWoman();

    #ifdef VERY_FINE_WOMAN
        // preprocessor is too cool to follow conventions
        std::cout << "Guauuuuuu" << std::endl;
    #endif


    return 0;
}