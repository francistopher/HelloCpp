// credit to https://stackoverflow.com/questions/3581528/how-is-the-square-root-function-implemented
#include "sqrttt.h"

long double sqrttt(long double x)
{
    long double root = 1;
    for (int i = 1; i <= 10; i++)
    {
        root -= (root * root - x) / (2 * root); // hmmm
    }
    return root;
}