#include <iostream>
#include "Task1.cpp"
#include "Task2.cpp"

void Task1() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    char arr2[] = { '1', '2', '3', '4', '5'};
    int size = 5;

    double av1 = average(arr1, size);
    double av2 = average(arr2, size);

    std::cout << "Average: " << av1 << ' ' << av2 << std::endl;

    return;
}

void Task2() {
    int arr1[] = { 5, 2, 1, 4, 3 };
    char arr2[] = { '5', '2', '1', '4', '3' };
    int size = 5;

    selectionSort(arr1, size);
    selectionSort(arr2, size);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr1[i] << ' ';
    }
    std::cout << std::endl;
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr2[2];
    }

    return;
}

