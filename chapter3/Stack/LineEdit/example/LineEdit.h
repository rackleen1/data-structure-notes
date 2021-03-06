/********************************************************************
 *	@program name : LineEdit.c
 *	@author  name : rack
 *	@my      mail : 1740234864@qq.com
 *	@last    date : 2017.11.9
 *	@function     : 栈实现的行编辑
 *	@type         : header file
*********************************************************************/

/********************************************************************
*基本操作
*InitStack    初始化栈
*DestroyStack 销毁栈
*ClearStack   清空栈
*EmptyStack   判断栈是否为空
*LengthStack  返回栈长度
*GetTop       得到栈顶元素
*Push         插入元素 进栈
*Pop          删除元素 退栈
*LineEdit     行编辑实现函数
*TraveseStack 遍历栈
*行编辑实现方法：
*如果输入的既不是退格符，也不是退行符，则将该字符压入栈顶；如果是一个
*退格符，则删除前一个字符；如果是退行符，则将字符栈清空。
 ********************************************************************/
#ifndef _LineEdit_H
#define _LineEdit_H

/********************************************************************
 *头文件
*********************************************************************/
#include <stdio.h>
#include <stdlib.h>

/********************************************************************
 *define
*********************************************************************/
#define OK 1
#define ERROR 0
#define STACK_INIT_SIZE 100
#define STACK_INCREMWNT 10
#define OVERFLOW -2

/********************************************************************
 *自定义类型
*********************************************************************/
typedef int Status ;
typedef char Elemtype ;

/********************************************************************
 *栈结构体
*********************************************************************/
typedef struct {
  Elemtype *top ;
  Elemtype *base ;
  int stacksize ;
}SqStack ;

/********************************************************************
 *函数原型
*********************************************************************/
Status InitStack(SqStack *S);
Status ClearStack(SqStack *S);
Status DestroyStack(SqStack *S);
Status Push(SqStack *S , Elemtype e);
Status Pop(SqStack *S , Elemtype *e);
void LineEdit(SqStack *S );

#endif

/********************************************************************
 *end
********************************************************************/
