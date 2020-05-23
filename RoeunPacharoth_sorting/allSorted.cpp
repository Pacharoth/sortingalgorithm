#include "sorted.h"

int main(int argc, char const *argv[]) {
    int sizeofArray = 5;
    int array[sizeofArray] = {10,2,15,8,2};
    int array1[4] = {5,2,9,1};


    cout<<"Before sorted"<<endl;
    for (int i = 0; i < sizeofArray; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Selection sorted"<<endl;
    selectionSorted(array,sizeofArray);
    printSorted(array,sizeofArray);

    cout<<"sorted by insert"<<endl;
    insertSorted(array,sizeofArray);
    printSorted(array,sizeofArray);
    cout<<endl;

    cout<<"buble sorted"<<endl;
    bubleSorted(array,sizeofArray);
    printSorted(array,sizeofArray);
    cout<<"Before sorted"<<endl;
    for (int i = 0; i < 4; i++) {
        cout<<array[i]<<" ";
    }

    return 0;
}
