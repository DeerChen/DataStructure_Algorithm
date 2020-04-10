/*
 * @Author: Senkita
 * @Date: 2020-04-10 08:53:44
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 10:14:27
 * @Description: Main function entry.
 */
#include <iostream>
#include <string>
#include <vector>
#include "Arr.h"

using namespace std;
int main(void)
{
    vector<int> v = {3, 1, 2, 5, 4, 9, 7, 2};

    // 更新元素
    v[3] = 10;

    // 读取元素
    cout << v[3] << endl;

    Arr<string> a(10);

    // 中间插入元素
    a.insert(0, "a");
    a.insert(1, "b");

    // 删除中间元素
    a.del(0);

    a.output();
    return 0;
}