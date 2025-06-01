//twosum solution
#include <iostream>
#include <vector>
using namespace std;

vector<int> two_sum(const vector<int>& array, int target) {
    for (int i = 0; i < array.size(); ++i) {
        for (int j = i + 1; j < array.size(); ++j) {
            if (array[i] + array[j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1}; // если не найдено
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int targ;
    cout << "Введите target: ";
    cin >> targ;

    vector<int> result = two_sum(arr, targ);
    cout << "Индексы: " << result[0] << ", " << result[1] << endl;

    return 0;
}