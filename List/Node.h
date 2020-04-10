/*
 * @Author: Senkita
 * @Date: 2020-04-10 08:31:42
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 11:32:49
 * @Description: Define node.
 */

#pragma once

template <class T>
class Node
{
public:
    T data;
    Node *next;
};