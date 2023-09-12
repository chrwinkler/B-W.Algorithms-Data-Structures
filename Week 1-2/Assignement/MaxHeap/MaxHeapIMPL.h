#ifndef MAXHEAPIMPL_H
#define MAXHEAPIMPL_H

#include "MaxHeap.h"
#include <vector>

class MaxHeapImpl : public MaxHeap
{
private:
    std::vector<int> heap;

public:
    MaxHeapImpl(); // Constructor
    bool isEmpty() const override;
    int size() override;
    void insert(const int x) override;
    const int findMax() const override;
    int deleteMax() override;

    // Iterator class declaration
    class Iterator;
    Iterator begin();
    Iterator end();
};

#endif



