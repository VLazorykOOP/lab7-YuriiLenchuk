template <typename T>
class Array {
private:
    T* data;
    int size;

public:
    Array(T* arr, int arrSize) : size(arrSize) {
        data = new T[size];
        for (int i = 0; i < size; i++) {
            data[i] = arr[i];
        }
    }

    ~Array() {
        delete[] data;
    }

    int getSize() const {
        return size;
    }

    T& operator[](int index) {
        return data[index];
    }

    class Iterator {
    private:
        T* ptr;

    public:
        Iterator(T* ptr) : ptr(ptr) {}

        T& operator*() {
            return *ptr;
        }

        Iterator& operator++() {
            ptr++;
            return *this;
        }

        bool operator!=(const Iterator& other) const {
            return ptr != other.ptr;
        }
    };

    Iterator begin() {
        return Iterator(data);
    }

    Iterator end() {
        return Iterator(data + size);
    }
};