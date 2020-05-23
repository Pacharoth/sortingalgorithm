#include <iostream>
using namespace std;

//insert sorted algorithm
void insertSorted(int array[], int sizeofArray){
    int j,value;
    for (int i = 1; i < sizeofArray; i++) {
        j=i;
        while (j > 0 && array[j-1] > array[j]){
            swap(array[j],array[j-1]);           //it is like swap but it is not swap obviously
            j--;
        }
    }
}

//buble sorted
void bubleSorted(int array[], int sizeofArray){
    int value,j,index;
    for (int i = 0; i < sizeofArray; i++) {
        for ( j = 0; j < sizeofArray-1; j++) {
            value = array[j+1];
            if (array[j] > array[j+1])
                swap(array[j],array[j+1]);
        }
    }
}

//create selection sorted
void selectionSorted(int array[], int sizeofArray){
    int i,j,iMin;
    for ( j = 0; j < sizeofArray-1; j++) {
         iMin = j;
        for (i = j+1; i < sizeofArray; i++) {
            if (array[i] < array[iMin]) {
                iMin = i;
            }
        }
        if (iMin != j) {
            swap(array[iMin], array[j]);
        }

    }
}


//printsorted
void printSorted(int array[], int sizeofArray){
    for (int i = 0; i < sizeofArray; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
