
template <class T>
void myQueue<T>::enqueue(T& item) {
    elts.push_back(item); // Insert the item into the rear of the elts vector
}

template <class T>
T myQueue<T>::dequeue() {
    T frontItem = elts.front(); // Get the item at the front of the elts vector
    elts.erase(elts.begin()); // Remove the item at the front
    return frontItem;
}

template <class T>
bool myQueue<T>::isempty() {
    return elts.empty(); // Returns true if the elts vector is empty
}
