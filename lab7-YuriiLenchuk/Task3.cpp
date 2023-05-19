template <typename T>
class CircularQueue {
private:
    T* buffer;
    int capacity;
    int front;
    int rear;
    int count;

public:
    CircularQueue(int size) : capacity(size), front(0), rear(0), count(0) {
        buffer = new T[size];
    }

    ~CircularQueue() {
        delete[] buffer;
    }

    void enqueue(T value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue element." << std::endl;
            return;
        }

        buffer[rear] = value;
        rear = (rear + 1) % capacity;
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue element." << std::endl;
            return;
        }

        front = (front + 1) % capacity;
        count--;
    }

    T frontElement() const {
        if (isEmpty()) {
            std::cout << "Queue is empty. No front element." << std::endl;
            return T();
        }

        return buffer[front];
    }

    bool isEmpty() const {
        return count == 0;
    }

    bool isFull() const {
        return count == capacity;
    }
};