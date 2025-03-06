#include <iostream>
#include <vector>
#include <algorithm>

int sumOfThreeHighest(const std::vector<int>& numbers) {
    std::vector<int> sNumbers = numbers;
    std::sort(sNumbers.begin(), sNumbers.end(), std::greater<int>());
    return sNumbers[0] + sNumbers[1] + sNumbers[2];
}

int main() {
    std::vector<int> nums = {5, 10, 15, 20, 25};
    std::cout << "Sum of top three highest numbers: " << sumOfThreeHighest(nums) << std::endl;

    return 0;
}
