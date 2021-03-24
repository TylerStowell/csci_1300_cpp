#include <iostream>
#include <cstdlib>

using namespace std;

void bubblesort(int values[], int size) {

    int tmp;   // temporary holding variable for swapping

    // loop over the number of passes through the list to sort
    // i represents how far from the end of the list we can stop comparing on each pass
    for (int i = 1; i < size; i++) {

        // start comparing at front of the list (j=0)
        // the last i elements have already bubbled down to where they belong
        for (int j = 0; j < size - i; j++) {

            if (values[j] > values[j+1]) {
                // swap elements values[j] and values[j+1]
                tmp = values[j+1];
                values[j+1] = values[j];
                values[j] = tmp;
            }
        }
    }
}

void display(int[], int);

int main() {

    srand(time(0)); // set random seed

    // create a random array of integers
    const int size = 20;
    int array1[size];
    for (int i=0; i<size; i++) {
        array1[i] = rand() % 11;
    }
    display(array1, size);

    // do the bubble sort
    bubblesort(array1, size);
    display(array1, size);

    return 0;
}

//==============================================================================

void display(int array[], int size) {
    for (int i=0; i<size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
