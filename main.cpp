#include "myQueue.h"


using namespace std;

int main() {
    myQueue<int> intQueue;
    myQueue<string> stringQueue;
    myQueue<double> doubleQueue;

    string filePath;
    cout << "Enter the path to the input file: ";
    cin >> filePath;

    ifstream inputFile(filePath);
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    int numInts;
    inputFile >> numInts;
    for (int i = 0; i < numInts; ++i) {
        int num;
        inputFile >> num;
        intQueue.enqueue(num);
    }

    int numStrings;
    inputFile >> numStrings;
    inputFile.ignore(); // Ignore the newline character
    for (int i = 0; i < numStrings; ++i) {
        string line;
        getline(inputFile, line);
        stringQueue.enqueue(line);
    }

    int numDoubles;
    inputFile >> numDoubles;
    for (int i = 0; i < numDoubles; ++i) {
        double num;
        inputFile >> num;
        doubleQueue.enqueue(num);
    }

    inputFile.close();

    cout << "Queued Integers\n" << endl;
    while (!intQueue.isempty()) {
        cout << intQueue.dequeue() << endl;
    }

    cout << "\nQueued Strings\n" << endl;
    while (!stringQueue.isempty()) {
        cout << stringQueue.dequeue() << endl;
    }

    cout << "\nQueued Doubles\n" << endl;
    while (!doubleQueue.isempty()) {
        cout << doubleQueue.dequeue() << endl;
    }


    return 0;
}
