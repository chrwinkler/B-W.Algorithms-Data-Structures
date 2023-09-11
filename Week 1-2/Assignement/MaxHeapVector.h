#pragma once
using namespace std;
#include <vector>
#include "MaxHeap.h"

class MaxHeapVector : public MaxHeap
{
private:
    vector<int> v;

public:
    MaxHeapVector() {}
    virtual ~MaxHeapVector() {}

    virtual bool isEmpty() const
    {
    }

    virtual int size()
    {
    }

    virtual void insert(const int x)
    {
    }
};
