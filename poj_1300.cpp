/*
Description
You are a butler in a large mansion. This mansion has so many rooms that they are merely referred to by 
number (room 0, 1, 2, 3, etc...). Your master is a particularly absent-minded lout and continually leaves 
doors open throughout a particular floor of the house. Over the years, you have mastered the art of 
traveling in a single path through the sloppy rooms and closing the doors behind you. Your biggest problem 
is determining whether it is possible to find a path through the sloppy rooms where you: 

1.Always shut open doors behind you immediately after passing through 
2.Never open a closed door 
3.End up in your chambers (room 0) with all doors closed 

In this problem, you are given a list of rooms and open doors between them (along with a starting room). 
It is not needed to determine a route, only if one is possible. 

你是一座大宅邸的管家。这栋宅邸的房间如此之多，而且只用数字指代（0、1、2、3号房等）。你的主人是个特别心不在焉的混蛋，
经常在一个楼层任由门不关就离开。这些年来，你已经掌握了沿着一条路径穿过那些邋遢的房间，关上身后的门的技巧。你最大的问题
是是否可能找到一条穿过邋遢房间的路径而且：
1.经过后要立即关上门。
2.永远不要打开关闭的门
3.关上所有的门，最后进入你的房间(0房间)。
在这个问题中，您将得到一个房间列表和它们之间的打开的门（以及一个起始房间）。
只要有可能，就不需要确定路线。

Input
Input to this problem will consist of a (non-empty) series of up to 100 data sets. Each data set will be 
formatted according to the following description, and there will be no blank lines separating data sets. 
A single data set has 3 components: 

1.Start line - A single line, "START M N", where M indicates the butler's starting room, and N indicates the 
number of rooms in the house (1 <= N <= 20). 
2.Room list - A series of N lines. Each line lists, for a single room, every open door that leads to a room 
of higher number. For example, if room 3 had open doors to rooms 1, 5, and 7, the line for room 3 would 
read "5 7". The first line in the list represents room 0. The second line represents room 1, and so on 
until the last line, which represents room (N - 1). It is possible for lines to be empty (in particular, 
the last line will always be empty since it is the highest numbered room). On each line, the adjacent rooms 
are always listed in ascending order. It is possible for rooms to be connected by multiple doors! 
3.End line - A single line, "END" 

Following the final data set will be a single line, "ENDOFINPUT". 

Note that there will be no more than 100 doors in any single data set. 
这个问题的输入将包括多达100个数据集的（非空）系列。每个数据集将根据以下描述格式化，并且不会有空行来分隔数据集。
单个数据集包含三个部分：
1.起始行-单行“START M N”，其中M表示管家的起始房间，N表示房子里的房间数（1<=N<=20）。
2.房间清单-一系列N行的序列。每一行都列出了每个房间的每扇打开通向更大数字代号的门。例如，如果3号房间通向1、5和7号房间的门是
敞开的，那么3号房间的线路记作“5 7”。列表中的第一行表示房间0。第二行表示房间1，依此类推，最后一行代表房间（N-1）。可能
有的行是空的（特别的，最后一行总是空的，因为它是编号最高的房间）。在每行上，相邻的房间总是按升序排列。房间可以通过多个
门连接！
3.结束行-单行，“END”
在最终数据集后面是一行“ENDOFINPUT”。
注意，在任何一个数据集中，将不超过100个门。
Output
For each data set, there will be exactly one line of output. If it is possible for the butler (by following 
the rules in the introduction) to walk into his chambers and close the final open door behind him, print a 
line "YES X", where X is the number of doors he closed. Otherwise, print "NO". 
对于每个数据集，将恰好有一行输出。如果管家可能（遵循所介绍的规则）走进他的房间，关上身后最后一扇敞开的门，打印
“YES X”，其中X是他关闭的门数。否则，打印“NO”。

Sample Input
START 1 2
1

END
START 0 5
1 2 2 3 3 4 4




END
START 0 10
1 9
2
3
4
5
6
7
8
9

END
ENDOFINPUT

Sample Output
YES 1
NO
YES 10
*/




#include <iostream>
using namespace std;
int main()
{
    
    system("pause");
    return 0;
}