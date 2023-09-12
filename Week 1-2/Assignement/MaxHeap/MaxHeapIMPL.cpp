#include "MaxHeapImpl.h"
#include <stdexcept>

// the Implentation from MaxHeap.h file
//
MaxHeapImpl::MaxHeapImpl() {
    // Constructor implementation
}

bool MaxHeapImpl::isEmpty() const {
    return heap.empty();
}

int MaxHeapImpl::size() {
    return heap.size();
}

void MaxHeapImpl::insert(const int x) {
      // Add the new element to the end of the vector
    heap.push_back(x);

    // Maintain the max heap property
    int index = heap.size() - 1;
    while (index > 0) {
        int parentIndex = (index - 1) / 2;
        if (heap[index] > heap[parentIndex]) {
            std::swap(heap[index], heap[parentIndex]);
            index = parentIndex;
        } else {
            break; // Max heap property is satisfied
        }
    }
}

const int MaxHeapImpl::findMax() const {
    if (isEmpty())
        {
            throw std::runtime_error("Heap is empty");
        }
        return heap[0];
}

int MaxHeapImpl::deleteMax() {
       // If We have an empty heap then we can't find the MaxHeap
        if (isEmpty())
        {
            throw std::runtime_error("Heap is empty");
        }

        // Swaping the root that is the maximum element with the last element
        int maxElement = heap[0];
        heap[0] = heap.back();
        heap.pop_back();

        // sift down to maintain the max heap property
        int index = 0;
        int size = heap.size();
        while (true)
        {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int largest = index;

            if (leftChild < size && heap[leftChild] > heap[largest])
            {
                largest = leftChild;
            }
            if (rightChild < size && heap[rightChild] > heap[largest])
            {
                largest = rightChild;
            }
             
            if (largest != index)
            {
                // Swap the current element with the larger child
                std::swap(heap[index], heap[largest]);
                // Update the index to the new position of the element
                index = largest;
            }
            else
            {
                break;
            }
        }
        // The MaxHeap has been found 
        return maxElement;
}

// Iterator class definition
class MaxHeapImpl::Iterator {
private:
    std::vector<int>::iterator it;

public:
    Iterator(std::vector<int>::iterator it) : it(it) {}

    // Overload the * operator to get the value at the iterator
    int operator*() const {
        return *it;
    }

    // Overload the ++ operator to advance the iterator
    Iterator& operator++() {
        ++it;
        return *this;
    }

    // Overload the equality operator for comparison
    bool operator==(const Iterator& other) const {
        return it == other.it;
    }

    // Overload the inequality operator for comparison
    bool operator!=(const Iterator& other) const {
        return it != other.it;
    }
};

MaxHeapImpl::Iterator MaxHeapImpl::begin() {
    return Iterator(heap.begin());
}

MaxHeapImpl::Iterator MaxHeapImpl::end() {
    return Iterator(heap.end());
}
