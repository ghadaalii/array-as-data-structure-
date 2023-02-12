#include <iostream>
using namespace std;
#include "Array.h"
#include "Array.cpp"
int main() {
    int size;
    cout << "Enter the array size \n";
    cin >> size;
    Array arr(size);
    arr.Fill();
    arr.display();
    cout << "Array size "<< arr.getSize() << " and array length " << arr.getLength() << endl;
    cout << "Enter the value you want to search :\n";
    int k;
    cin >> k;
    int index = arr.search(k);
    if(index == -1){
        cout << "Item not found :(" << endl;
    }else{
        cout << "the item index " << index<< "\n";
    }
    cout << "Enter the item you want to append in array \n";
    int newItem ;
    cin >> newItem ;
    arr.appened(newItem);
    arr.display();
    cout << "Enter the index and item to insert \n";
    int ind;
    cin >> ind;
    cin >> newItem;
    arr.insert(ind , newItem);
    cout << "Array size "<< arr.getSize() << " and array length " << arr.getLength() << endl;
    cout << "Enter the index of item you want to delete \n";
    cin >> index;
    arr.delet(index);
    arr.display();
    cout << "Enter new size to enlarge the array \n";
    int newsize ;
    cin >> newsize;
    arr.Enlarge(newsize);
    cout << "Array size "<< arr.getSize() << " and array length " << arr.getLength() << endl;
    int sizeOfOtherArray ;
    cout << "\n Enter size of other array to be merged \n";
    cin >> sizeOfOtherArray;
    Array other(sizeOfOtherArray);
    other.Fill();
    arr.Merge(other);
    cout << "Array size "<< arr.getSize() << " and array length " << arr.getLength() << endl;
}
