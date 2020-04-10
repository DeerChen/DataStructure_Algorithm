/*
 * @Author: Senkita
 * @Date: 2020-04-10 09:49:39
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 10:32:44
 * @Description: Implement interfaces.
 */

#include <iostream>

using namespace std;

template <typename T>
Arr<T>::Arr(int capacity){
    this->capacity = capacity;
    this->arr = new T[capacity];
};

template <typename T>
void Arr<T>::insert(int index, T element){
    if (index < 0 || index > size){
        throw "Out Of Range!";
    } else if (index >= capacity){
        expansion();
    }
    for (int i = size - 1; i >= index; i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    size++;
};

template <typename T>
T Arr<T>::del(int index){
    if (index < 0 || index > size)
    {
        throw "Out Of Range!";
    }
    T element = arr[index];
    for (int i = index; i >= size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
    return element;
};

// 快删
template <typename T>
T Arr<T>::fastDel(int index){
    if (index < 0 || index > size){
        throw "Out Of Range!";
    }
    T element = arr[index];
    arr[index] = arr[size - 1];
    size--;
    return element;
};

// 数组扩容
template <typename T>
void Arr<T>::expansion(){
    T *newArr = new T[capacity * 2];
    for (int i = 0; i < capacity; i++){
        newArr[i] = arr[i];
    }
    arr = newArr;
    capacity *= 2;
};

template <typename T>
void Arr<T>::output(){
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
};

template <typename T>
Arr<T>::~Arr(){};