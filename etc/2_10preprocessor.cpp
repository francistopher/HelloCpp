#include <iostream>

void defineHotWoman(void)
{
    #define FINE "GIGI"
}

int main(void)
{
    #define FINEEE

    std::cout << "Hey!" << std::endl;

    #ifdef FINE
        std::cout << "Wow" << std::endl;
	    std::cout << FINE << std::endl;
    #endif

    //defineHotWoman();

    #ifdef FINEEE
        // preprocessor is too cool to follow conventions
        std::cout << "Guauuuuuu" << std::endl;
	// FINEEE doesn't represent std::cout << FINEEE << std::endl;

    #endif

    #ifndef GIGI
        std::cout << "Wowie" << std::endl;
    #endif

    #if 1 // if and only if
        std::cout << "Hadid" << std::endl;
    #endif

    return 0;
}
