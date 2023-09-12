#include "MaxHeap.h"
#include "simple_list.h"

class MaxHeapList : public MaxHeap {
private:
    List<int> heap;

public:
    MaxHeapList(); // Constructor
    bool isEmpty() const override;
    int size() override;
    void insert(const int x) override;
    const int findMax() const override;
    int deleteMax() override;
};



