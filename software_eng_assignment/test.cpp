#include <iostream>
#include <array>
using namespace std;
void print(const array<int, 10> &nums)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "nums [" << i << "] : " << nums[i] << '\n';
    }
}
int main()
{
    array<int, 10> nums = {3, 4, 5, 6, 2, 7, 3, 8, 3, 10};
    print(nums);
    return 0;
}