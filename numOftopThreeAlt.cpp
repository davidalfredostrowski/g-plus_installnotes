#include <iostream>
#include <vector>
#include <limits>

int sumOfThreeHighest(const std::vector<int>& numbers) {

    int max1;
    int max2;
    int max3;

    for (int num : numbers) {
        if (num > max1) {
            max3 = max2;
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max3 = max2;
            max2 = num;
        } else if (num > max3) {
            max3 = num;
        }
    }
    return max1 + max2 + max3;
}

int main() {
 /// make sure to include at least three
        std::vector<int> nums = {5, 10, 15, 20, 25};
        std::cout << "Sum of top three highest numbers: " << sumOfThreeHighest(nums) << std::endl;
}






