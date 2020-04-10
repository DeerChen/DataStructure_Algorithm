/*
 * @Author: Senkita
 * @Date: 2020-04-10 10:54:32
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 13:54:10
 * @Description: Define list.
 */

#pragma once
#include "Node.h"

template <class T>
class List
{
private:
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    List();
    bool isEmpty();
    void insert(int index, T data);
    T del(int index);
    T find(int index);
    void output();
    ~List();
};

#include "List.tpp"