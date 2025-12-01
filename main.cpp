#include <iostream>
#include <vector>
using namespace std;

// Функция для нахождения максимального значения в массиве
int findMax(vector<int> arr) {
    if (arr.empty()) {
        cout << "Массив пуст!" << endl;
        return 0;
    }

    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    vector<int> numbers = {3, 7, 2, 9, 5, 1};
    int result = findMax(numbers);
    cout << "Максимальное значение: " << result << endl;
    return 0;
}
