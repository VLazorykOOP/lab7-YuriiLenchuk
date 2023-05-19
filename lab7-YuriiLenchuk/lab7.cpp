#include <iostream>
#include "Task1.cpp"
#include "Task2.cpp"
#include "Task3.cpp"
#include "Task4.cpp"

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

void Task3() {
    CircularQueue<int> queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    std::cout << "Front element: " << queue.frontElement() << std::endl;

    queue.dequeue();

    std::cout << "Front element after dequeue: " << queue.frontElement() << std::endl;

    queue.enqueue(5);
    queue.enqueue(6);

    std::cout << "Is queue full? " << (queue.isFull() ? "Yes" : "No") << std::endl;

    while (!queue.isEmpty()) {
        std::cout << "Dequeued element: " << queue.frontElement() << std::endl;
        queue.dequeue();
    }

    std::cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << std::endl;

    return;
}

void Task4() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int arrSize = 5;

    Array<int> myArray(arr, arrSize);

    std::cout << "Array elements: ";
    for (Array<int>::Iterator it = myArray.begin(); it != myArray.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return;
}