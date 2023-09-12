#include "MaxHeap.h"
#include "MaxHeapImpl.h"
#include <iostream>

int main() {
    MaxHeapImpl maxHeap;

    maxHeap.insert(5);
    maxHeap.insert(10);
    maxHeap.insert(3);

    std::cout << "Heap size: " << maxHeap.size() << std::endl;

    std::cout << "Heap elements (max to min): ";
    for (MaxHeapImpl::Iterator it = maxHeap.begin(); it != maxHeap.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Max element: " << maxHeap.findMax() << std::endl;

    int deletedMax = maxHeap.deleteMax();
    std::cout << "Deleted max element: " << deletedMax << std::endl;

    return 0;
}
