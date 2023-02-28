#include <iostream>

using namespace std;

void _sort(int nums[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i%2; j < n-1; j += 2)
        {
            if (nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
            }
        }
    }
}

void dubles(int nums[], int n)
{
    int j = 0;
    int dubles[n];

    for (int i = 0; i < n-1; i++)
    {
        if (nums[i] == nums[i+1])
        {
            dubles[j] = nums[i];
            j++;
        }
    }

    cout << "Repeated numbers: ";
    for (int i = 0; i < j; i++)
    {
        cout << dubles[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int n = 5;
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }

    _sort(nums, n);

    cout << "Minimum number: " << nums[0] << endl;

    dubles(nums, n);

    cout << endl;

    return 0;
}
