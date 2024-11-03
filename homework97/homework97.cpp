#include <iostream>
using namespace std;

const int SIZE = 5;

int main() {
    int array1[SIZE] = { 1, 0, -3, 4, 5 };
    int array2[SIZE] = { -1, 2, 0, -4, 3 };
    int result[SIZE*2];
    int index = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (array1[i] > 0) {
            result[index++] = array1[i];
        }
        if (array2[i] > 0) {
            result[index++] = array2[i];
        }
    }
    for (int i = 0; i < SIZE; i++) 
    {
        if (array1[i] == 0) {
            result[index++] = array1[i];
        }
        if (array2[i] == 0) {
            result[index++] = array2[i];
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (array1[i] < 0) {
            result[index++] = array1[i];
        }
        if (array2[i] < 0) {
            result[index++] = array2[i];
        }
    }
    cout << "Результирующий массив: ";
    for (int i = 0; i < SIZE*2; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
