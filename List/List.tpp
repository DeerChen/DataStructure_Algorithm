/*
 * @Author: Senkita
 * @Date: 2020-04-10 10:55:23
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 13:58:58
 * @Description: Implement interfaces.
 */

#include <iostream>

using namespace std;

template <typename T>
List<T>::List()
{
    head = new Node<T>;
    tail = new Node<T>;

    head->next = tail;
    tail->next = nullptr;

    size = 0;
};

template <typename T>
bool List<T>::isEmpty()
{
    return head->next == tail;
};

template <typename T>
void List<T>::insert(int index, T data)
{
    if (index < 0 || index > size)
    {
        throw "Out Of Range!";
    }

    Node<T> *node;
    node = new Node<T>;

    if (index == 0)
    {
        node->data = data;
        node->next = head->next;
        head->next = node;
    }
    else if (index == size)
    {
        tail->data = data;
        tail->next = node;
        node->next = nullptr;
        tail = tail->next;
    }
    else
    {
        Node<T> *p = head->next;
        int i = 0;
        while (i < index - 1)
        {
            p = p->next;
            i++;
        }
        node->data = data;
        node->next = p->next;
        p->next = node;
    }

    size++;
};

template <typename T>
T List<T>::del(int index)
{
    if (index < 0 || index > size)
    {
        throw "Out Of Range!";
    }

    Node<T> *node;
    node = new Node<T>;

    if (index == 0)
    {
        node = head->next;
        head->next = node->next;
    }
    else
    {
        Node<T> *p = head->next;
        int i = 0;
        while (i < index - 1)
        {
            p = p->next;
            i++;
        }
        node = p->next;
        p->next = node->next;
    }
    size--;
    return node->data;
};

template <typename T>
T List<T>::find(int index)
{
    if (index < 0 || index > size)
    {
        throw "Out Of Range!";
    }

    Node<T> *p = head->next;
    for (int i = 0; i < index; i++)
    {
        p = p->next;
    }
    return p->data;
};

template <typename T>
void List<T>::output()
{
    Node<T> *p = head->next;
    while (p != tail)
    {
        cout << p->data << " ";
        p = p->next;
    }
};

template <typename T>
List<T>::~List(){};