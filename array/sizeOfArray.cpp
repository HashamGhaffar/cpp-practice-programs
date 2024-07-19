#include <iostream>
using namespace std;

void arrayInput(int size ,int array[]) {
    for (int i=0 ; i<size ; i++) {
        cin >> array[i];
    }
}

void printArray (int array [], int size )
{
    for (int i=0 ; i<size ; i++) {
        cout << array[i] <<endl;
    }
}

int findIndex ( int array[] , int size, int numToFind ) {
    int index = -1;
    for (int i=0 ; i<size ; i++) {
        if (array[i] == numToFind) {
            index = i;
            break;
        }
    }
    return index;
}

int findCountOfNum ( int array[] , int size, int numToFind) {
    int count=0;
    for (int i=0 ; i<size ; i++) {
        if (array[i] == numToFind) {
            count++;
        }
    }
    return count;
}

void findAllIndexes ( int array[] , int indexesArray[] , int size, int indexesArraySize,int numToFind ) {
    
    int j=0; // its is tracking our index array
    for (int i=0 ; i<size ; i++) {
        if (array[i] == numToFind) {
            indexesArray[j] = i;
            j++;
        }
    }
}

int main() {
    int size; // size for array
    cout << "enter the size of array : ";
    cin >> size; 
    int array[size]; //main subject 
    arrayInput(size , array);
    int numToFind ;
    cout << "enter the number you want to examin : "; 
    cin >> numToFind ;
    //it will find index of the first single element
    int numAtIndex = findIndex(array ,size ,numToFind);
    cout << "the index of number is (first index if repeating)" << numAtIndex <<endl;
    


    int numOfRepeations = findCountOfNum(array, size, numToFind);//itwill tell the number of repeating elements
    
    cout << "the number appears " << numOfRepeations << " times"<<endl;
    cout << "the index of number is (if repeating) " << endl;
    
    
    int indexesOfRepeatingNums[numOfRepeations];
    findAllIndexes(array,indexesOfRepeatingNums,size,numOfRepeations, numToFind);
    
    // this will print ...
    printArray(indexesOfRepeatingNums, numOfRepeations);

    return 0;
}
