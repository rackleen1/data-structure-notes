/********************************************************************
 *	@program name : UseLinkedQueue.c
 *	@author  name : rack
 *	@my      mail : 1740234864@qq.com
 *	@last    date : 2017.11.24
 *	@function     : 单链队列
 *	@type         : main file
*********************************************************************/

/********************************************************************
*基本操作
*InitQueue    初始化队列
*DestroyQueue 销毁队列
*ClearQueue   清空队列
*EmptyQueue   判断队列是否为空
*LengthQueue  队列长度
*GetHead      得到队头元素
*EnQueue      插入队尾元素
*DeQueue      删除对头元素
*QueueTraverse遍历元素
*实现原理：
*
*********************************************************************/

/********************************************************************
 *头文件
*********************************************************************/
#include "LinkedQueue.h"

/********************************************************************
 *主函数
*********************************************************************/
int main()
{ //主函数
  LinkedQueue Q ;
  QElemType e ;
  int a[6] = {1 ,3 ,5, 2 , 6 ,7} ;
  int i ;
 //printf("测试InitQueue函数\n", );
  printf("初始化队列...\n");
  InitQueue(&Q);
  printf("\n");

  printf("判断队列是否为空...\n");
  EmptyQueue(&Q);
  printf("\n");

  printf("向队列插入元素：\n");
  EnQueue(&Q , a);
  printf("\n");

  printf("删除队列元素：\n");
  DeQueue(&Q , &a);
  printf("\n");

 // Destoryqueue(&Q);

  return 0 ;
}
