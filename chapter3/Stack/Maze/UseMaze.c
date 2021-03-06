/********************************************************************
 *	@program name : UseMaze.c
 *	@author  name : rack
 *	@my      mail : 1740234864@qq.com
 *	@last    date : 2017.11.11
 *	@function     : 迷宫求解
 *	@type         : main file
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
*TraveseStack 遍历栈
*visit        输出遍历结果
*MazePath     迷宫路径
*Pass         通过的位置
*FootPrint    打印足迹
*NextPos      下一位置
*MakePrint    打印最终位置
*迷宫求解实现方法：穷举求解
*从入口出发，顺某一方向前进，若能走通，继续往前走；否则沿路退回，换一个方
*向继续探索，直至所有可能的通路都探索完为止。
*********************************************************************/

/********************************************************************
 *头文件
*********************************************************************/
#include "Maze.h"

/********************************************************************
 *主函数
*********************************************************************/
int main()
{
  PosType MazeStart , MazeEnd ;
  int i , j ;
  //表示入口与出口坐标
  MazeStart.x = 1 ;
  MazeStart.y = 1 ;
  MazeEnd.x = 8 ;
  MazeEnd.y = 8 ;
  printf("迷宫：\n");
  //二层循环打印迷宫
  for(i = 0 ; i < 10 ; ++i)
  {
    for(j = 0 ; j < 10 ; ++j)
    {
      printf("%d",MazeMap[i][j]); //打印出迷宫地图
    }
    printf("\n");    //一次j循环为一行
  }
  printf("\n\n");
  if(MazePath(MazeStart , MazeEnd))
  {
	printf("/n恭喜！走通了迷宫！");
  }
  else
  {
	printf("/n很遗憾！无法走通迷宫！");
  }
  return 0 ;
}

/********************************************************************
 *end
*********************************************************************/
