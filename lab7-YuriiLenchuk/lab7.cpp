#include <iostream>
#include "Task1.cpp"

void Task1() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    char arr2[] = { '1', '2', '3', '4', '5'};
    int size = 5;

    double av1 = average(arr1, size);
    double av2 = average(arr2, size);

    std::cout << "Average: " << av1 << ' ' << av2 << std::endl;

    return;
}