//
// Created by alshehab on 10/02/2023.
//

#ifndef ARRAY_ARRAYIMP_H
#define ARRAY_ARRAYIMP_H


class Array {
private:
    int size;
    int length;
    int *ptr ;
public:
    Array(int arrSize);
    void Fill();
    void display();
    int getSize();
    int getLength();
    int search(int key);
    int appened(int newitem);
    int insert(int index , int item);
    int delet(int index);
    int Enlarge(int newsze);
    void Merge(Array other);
};


#endif //ARRAY_ARRAYIMP_H
