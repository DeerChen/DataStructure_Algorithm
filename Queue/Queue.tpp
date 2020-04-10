/*
 * @Author: Senkita
 * @Date: 2020-04-10 14:43:31
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 15:26:07
 * @Description: Implement interfaces.
 */

#include <iostream>
using namespace std;

template <typename T>
Queue<T>::Queue(int capacity)
{
    this->capacity = capacity;
    this->queue = new T[capacity];
};

template <typename T>
void Queue<T>::enQueue(T element)
{
    if ((rear + 1) % capacity == front)
    {
        throw "Queue Full!";
    }
    queue[rear] = element;
    rear = (rear + 1) % capacity;
};

template <typename T>
T Queue<T>::deQueue()
{
    if (rear == front)
    {
        throw "Queue Empty!";
    }
    
    T data = queue[front];
    front = (front + 1) % capacity;
    return data;
};

template <typename T>
void Queue<T>::output()
{
    for (int i = front; i != rear; i = (i + 1) % capacity)
    {
        cout << queue[i] << " ";
    }
};

template <typename T>
Queue<T>::~Queue(){};