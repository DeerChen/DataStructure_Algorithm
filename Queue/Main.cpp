/*
 * @Author: Senkita
 * @Date: 2020-04-10 14:43:02
 * @LastEditEditor: Senkita
 * @LastEditTime: 2020-04-10 15:26:32
 * @Description: Main function entry.
 */

#include "Queue.h"
#include <string>

using namespace std;
int main(void){
    Queue<string> q(3);
    q.enQueue("a");
    q.enQueue("b");
    q.deQueue();
    q.output();
    return 0; 
}