#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>


using namespace std;

template <class T>
class myQueue {
public:
    myQueue() : elts() {}
    void enqueue(T& item);
    T dequeue();
    bool isempty();

protected:
    vector<T> elts;
};

// Include the implementation file here to resolve linker issues
#include "myQueue.tpp"
#endif // MYQUEUE_H
