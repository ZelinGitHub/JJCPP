#ifndef		FDECLARE_H
#define FDECLARE_H

//arrT是一个int[10]数组类型的别名
typedef int arrT[10];
//arrT是一个int[10]数组类型的别名
using arrT = int[10];

//arrT* func3(int i);
//
//auto func2(int i)->int(*)[10];

//typedef string::size_type sz;
//默认实参
//string screen(sz ht=24,sz wid=80,char backgrnd=' ');
//函数声明
int KT();
#endif
