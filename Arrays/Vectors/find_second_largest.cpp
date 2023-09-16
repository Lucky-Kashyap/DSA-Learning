#include <iostream>
#include <vector>
#include <climits>

int findSecondLargest(const std::vector<int> &arr)
{
    int largest = INT_MIN;       // Initialize largest to a very small value
    int secondLargest = INT_MIN; // Initialize secondLargest to a very small value

    for (int num : arr)
    {
        if (num > largest)
        {
            secondLargest = largest;
            largest = num;
        }
        else if (num > secondLargest && num != largest)
        {
            secondLargest = num;
        }
    }

    return secondLargest;
}

int main()
{
    std::vector<int> arr = {12, 4, 9, 7, 15, 6};

    int secondLargest = findSecondLargest(arr);

    if (secondLargest != INT_MIN)
    {
        std::cout << "The second largest number is: " << secondLargest << std::endl;
    }
    else
    {
        std::cout << "There is no second largest number in the array." << std::endl;
    }

    return 0;
}
