#include "vector_functions.h"
#include <algorithm>
#include <iostream>
#include <vector>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> vec)
{
    int count = std::count_if(vec.begin(), vec.end(), [](int i){return i % 5 == 0;});
    return count;
}


void addElements(std::vector<int>& v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}