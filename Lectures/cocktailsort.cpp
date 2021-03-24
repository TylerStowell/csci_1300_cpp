#include <iostream>
#include <cstdlib>

using namespace std;

void display(int[], int);

void cocktailsort(int values[], int size) {

    int tmp;    // temporary holding variable for swapping
    int j;      // loop variable

    // these will change each time we get to an endpoint
    int beg = 0;        // where should forward shuffling begin? / backward shuffling end?
    int end = size - 1; // where should forward shuffling end? / backward shuffling begin?

    while (beg < end) {

        // shuffling forward
        for (j = beg; j < end; j++) {
            // swap elements values[j] and values[j+1]
            if (values[j] > values[j+1]) {
                tmp = values[j+1];
                values[j+1] = values[j];
                values[j] = tmp;
            }
        }

        cout << "after --> ";
        display(values, size);

        // shuffling backward
        for (j = end; j > beg; j--) {
            // swap elements values[j] and values[j-1]
            if (values[j] < values[j-1]) {
                tmp = values[j-1];
                values[j-1] = values[j];
                values[j] = tmp;
            }
        }

        cout << "after <-- ";
        display(values, size);

        // update the endpoints
        end--;
        beg++;
    }
}

int main() {

    srand(time(0)); // set random seed

    // create a random array of integers
    const int size = 20;
    int array1[size];
    for (int i=0; i<size; i++) {
        array1[i] = rand() % 31;
    }
    display(array1, size);

    // do the bubble sort
    cocktailsort(array1, size);
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
