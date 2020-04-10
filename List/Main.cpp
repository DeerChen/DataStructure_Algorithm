/*
 * @Author: Senkita
 * @Date: 2020-04-10 11:28:35
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 13:57:44
 * @Description: Main function entry.
 */

#include <string>
#include "List.h"
#include <iostream>

using namespace std;
int main(void)
{
    List<string> l;

    cout << l.isEmpty() <<endl;

    l.insert(0, "a");
    l.insert(0, "b");
    l.insert(0, "d");
    l.insert(1, "c");

    cout << l.del(0) << endl;
    cout << l.find(0) << endl;
    l.output();
    return 0;
};