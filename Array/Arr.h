/*
 * @Author: Senkita
 * @Date: 2020-04-10 08:52:09
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 10:11:04
 * @Description: Define array.
 */

#pragma once

template <class T>
class Arr
{
private:
    int capacity;
    T *arr;
    int size = 0;

public:
    Arr(int capacity);
    void insert(int index, T element);
    T del(int index);
    T fastDel(int index);
    void expansion();
    void output();
    ~Arr();
};

#include "Arr.tpp"