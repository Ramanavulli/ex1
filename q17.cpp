#include <iostream>
#include <sstream>

double Series(int pTerms)
{
    double result;
    for (int i = 1; i <= pTerms; i++)
	{
        result += (double)1 / (double)i;
        result=result*(-1.0);
    }
    return result;
}

int main() 
{
    std::cout << std::fixed << "the resultant sum of series is:"<<Series(999);
	return 0;
}
