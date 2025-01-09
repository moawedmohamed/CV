#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[8] = {1, 5, 6, 7, 2, 5, 9, 8};
    sort(arr1, arr1 - 8);
    // cout << arr1[8] << " " << endl;
    for (size_t i = 0; i < 8; i++)
    {
        cout << arr1[i] << " ";
    }
}
