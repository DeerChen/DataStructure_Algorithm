/*
 * @Author: Senkita
 * @Date: 2020-04-10 14:42:43
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 15:50:38
 * @Description: Define queue.
 */
#pragma once

template <class T>
class Queue
{
private:
    int capacity;
    T *queue;
    int front=0;
    int rear=0;

public:
    Queue(int capacity);
    void enQueue(T element);
    T deQueue();
    void output();
    ~Queue();
};

#include "Queue.tpp"