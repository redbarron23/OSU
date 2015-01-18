#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v2(10);
    std::iota(v2.begin(), v2.end(), 9);
    return 0;
}
