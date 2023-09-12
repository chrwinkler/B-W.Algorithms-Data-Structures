#include "MaxHeapImpl.h"
#include <stdexcept>

// the Implentation from MaxHeap.h file
//
MaxHeapImpl::MaxHeapImpl() {
    // Constructor implementation
}

bool MaxHeapImpl::isEmpty() const {
    // Implementation for isEmpty
}

int MaxHeapImpl::size() {
    // Implementation for size
}

void MaxHeapImpl::insert(const int x) {
    // Implementation for insert
}

const int MaxHeapImpl::findMax() const {
    // Implementation for findMax
}

int MaxHeapImpl::deleteMax() {
    // Implementation for deleteMax
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
