//
// Created by alshehab on 10/02/2023.
//
#include <iostream>
using namespace std;
#include "Array.h"

Array::Array(int arrSize) {
    size = arrSize;
    length = 0 ;
    ptr = new int[arrSize];

}

void Array::Fill() {
    int numberOfItems;
    cout << "How many items you want to fill ? "<<endl;
    cin >> numberOfItems;
    if(numberOfItems>size){
        cout << "You cannot exceed the array size :)"<<endl;
        return;
    }else{
        for (int i = 0; i < numberOfItems ; i++) {
            cout << "Enter item of index " << i << endl;
            cin >> ptr[i];
            length++;
        }
    }

}

void Array::display() {
    cout << "Display Array Items \n";
    for(int i =0 ; i < length ; i++) {
        cout << ptr[i] << "\t";
    }
    cout << endl;
}

int Array::getSize() {
    return size;
}

int Array::getLength() {
    return length;
}

int Array::search(int key) {
    int index =-1 ;
    for(int i = 0 ; i < length ; i++){
        if(ptr[i]==key){
            index = i ;
            break;
        }
    }
}

int Array::appened(int newitem) {
    if(length < size){
        ptr[length] = newitem;
        length++;
    }else{
        cout << "Array is full :( \n";
    }
}

int Array::insert(int index, int item) {
    if(index >= 0 && index < size){
        for(int i = length ; i > index ; i--){
            ptr[i] = ptr[i -1];
        }
        ptr[index] = item;
        length++;
    }else{
        cout << "Error :( index out of range \n";
    }
}

int Array::delet(int index) {
    if (index < size && index >= 0){
        for(int i = index ; i < length-1 ; i++){
            ptr[i] = ptr[i+1];
        }
        length--;
    }else
        cout << "not find items to delete :) \n";
}

int Array::Enlarge(int newsze) {
    if(newsze <= size){
        cout << "Error, it must be large \n";
    } else{
        size = newsze;
        int *oldArray = ptr;
        ptr = new int[newsze];
        for(int i = 0 ; i < length ; i++){
            ptr[i] = oldArray[i];
        }
        delete[]oldArray;
    }
}

void Array::Merge(Array other) {
    int newsize = size + other.getSize();
    size = newsize;
    int *old = ptr;
    ptr = new int[newsize];
    int i ;
    for(i =0 ; i <length ; i++){
        ptr[i] = old[i];
    }
    delete[]old;
    int j =i ;
    for(int i =0 ; i <other.getLength() ; i++)
    {
        ptr[j++] = other.ptr[i];
        length++;
    }
}
