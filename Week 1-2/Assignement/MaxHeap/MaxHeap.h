#ifndef _MAXHEAP_H_
#define _MAXHEAP_H_

using namespace std;

// Code providet
class MaxHeap
{
public:
    // Is the heap empty?
    virtual bool isEmpty() const = 0;

    // Number of elements in the heap
    virtual int size() = 0;

    // add an element to the heap
    virtual void insert(const int x) = 0;

    // Find the maximum element in the heap
    virtual const int findMax() const = 0;

    // Delete and return the maximum element of the heap
    virtual int deleteMax() = 0;
};

#endif