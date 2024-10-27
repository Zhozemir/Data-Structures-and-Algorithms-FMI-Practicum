
// Даден е масив от цели числа в диапазона [-100, 100]. Пренаредете масива така, че числата с еднакви абсолютни стойности да бъдат поставени едно до друго.

#include <iostream>
#include <vector>

void sort(std::vector<int>& arr) {

    const int MAX_VALUE = 100;

    std::vector<int> positive(MAX_VALUE + 1, 0);
    std::vector<int> negative(MAX_VALUE + 1, 0);


    for (auto& num : arr) {

        if (num >= 0)
            positive[num]++;

        else
            negative[-num]++;

    }


    int ind = 0;

    for (int i = 1; i <= MAX_VALUE; i++) {

        while (positive[i] > 0 || negative[i] > 0) {

            if (positive[i] > 0) {

                arr[ind++] = i;
                positive[i]--;

            }
            if (negative[i] > 0) {

                arr[ind++] = -i;
                negative[i]--;

            }
        }
    }


    while (positive[0] > 0) {

        arr[ind++] = 0;
        positive[0]--;

    }

}

int main() {

    std::vector<int> nums = { -1, 5, 3, 4, 1, -3, -4, -5, 1 };

    sort(nums);

    for (auto& num : nums) {

        std::cout << num << " ";

    }

}
