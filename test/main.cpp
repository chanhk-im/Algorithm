#include <iostream>
#include <vector>

using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void heapify_up(int index) {
        if (index == 0) return;

        int parent = (index - 1) / 2;
        if (heap[parent] > heap[index]) {
            swap(heap[parent], heap[index]);
            heapify_up(parent);
        }
    }

    void heapify_down(int index) {
        int left_child = 2 * index + 1;
        int right_child = 2 * index + 2;
        int smallest = index;

        if (left_child < heap.size() && heap[left_child] < heap[smallest]) {
            smallest = left_child;
        }
        if (right_child < heap.size() && heap[right_child] < heap[smallest]) {
            smallest = right_child;
        }
        if (smallest != index) {
            swap(heap[smallest], heap[index]);
            heapify_down(smallest);
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        heapify_up(heap.size() - 1);
    }

    int pop() {
        if (heap.empty()) {
            cout << "Heap is empty." << endl;
            return -1;
        }

        int value = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify_down(0);

        return value;
    }

    bool is_empty() {
        return heap.empty();
    }

    void print() {
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap heap;

    heap.insert(5);
    heap.insert(3);
    heap.insert(7);
    heap.insert(2);
    heap.insert(8);

    heap.print();

    while (!heap.is_empty()) {
        cout << heap.pop() << " ";
    }
    cout << endl;

    return 0;
}
