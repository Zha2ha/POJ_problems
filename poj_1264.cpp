/*
Description
Some problems are difficult to solve but have a simplification that is easy to solve. Rather than deal with 
the difficulties of constructing a model of the Earth (a somewhat oblate spheroid), consider a 
pre-Columbian flat world that is a 500 kilometer x 500 kilometer square. 
In the model used in this problem, the flat world consists of several warring kingdoms. Though warlike, the 
people of the world are strict isolationists; each kingdom is surrounded by a high (but thin) wall designed 
to both protect the kingdom and to isolate it. To avoid fights for power, each kingdom has its own electric 
power plant. 
When the urge to fight becomes too great, the people of a kingdom often launch missiles at other kingdoms. 
Each SCUD missile (anitary leansing niversal estroyer) that lands within the walls of a kingdom destroys 
that kingdom's power plant (without loss of life). 

Given coordinate locations of several kingdoms (by specifying the locations of houses and the location of 
the power plant in a kingdom) and missile landings you are to write a program that determines the total 
area of all kingdoms that are without power after an exchange of missile fire. 
In the simple world of this problem kingdoms do not overlap. Furthermore, the walls surrounding each 
kingdom are considered to be of zero thickness. The wall surrounding a kingdom is the minimal-perimeter 
wall that completely surrounds all the houses and the power station that comprise a kingdom; the area of a 
kingdom is the area enclosed by the minimal-perimeter thin wall. 
There is exactly one power station per kingdom. 
There may be empty space between kingdoms. 
有些问题很难解决，但有一个容易解决的简化。与其解决建造地球模型（有点扁的球体）的困难，不如考虑一个500千米×500千米平方
的前哥伦比亚平原世界。
在这个问题中使用的模型中，平面世界由几个交战的王国组成。世界人民虽然好战，但却是严格的孤立主义者；每个王国都被一堵高墙
（但又很薄）包围着，这堵墙既用来保护王国又用来孤立它。为了避免争夺电力，每个王国都有自己的发电厂。
当战争的冲动变得太强烈时，王国人民经常向其他王国发射导弹。每一枚飞毛腿导弹（Sanitary Cleansing Universal Destroyer）
落入一个王国的城墙内，就摧毁了这个王国的发电厂（没有生命损失）。
给定几个王国的坐标位置（通过指定王国的房屋位置和发电厂的位置）和导弹打击位置，编写一个程序，确定所有王国在导弹火力轰炸
之后没有电力的总面积。
在这个问题的简单世界里，王国并不重叠。此外，每个王国周围的墙壁被认为是零厚度的。王国周围的墙是最小周长边，它完全包围了
包括王国的所有房屋和发电站；王国的区域是由最小周长边围起来的区域。
每个王国只有一个发电站。
王国之间可能存在空白的空间。

Input
The input is a sequence of kingdom specifications followed by a sequence of missile landing locations. 
A kingdom is specified by a number N (3 <= N <= 100) on a single line which indicates the number of sites 
in this kingdom. The next line contains the x and y coordinates of the power station, followed by N-1 lines 
of x, y pairs indicating the locations of homes served by this power station. A value of -1 for N indicates 
that there are no more kingdoms. There will be at least one kingdom in the data set. 
Following the last kingdom specification will be the coordinates of one or more missile attacks, indicating 
the location of a missile landing. Each missile location is on a line by itself. You are to process missile 
attacks until you reach the end of the file. 
Locations are specified in kilometers using coordinates on a 500 km by 500 km grid. All coordinates will be 
integers between 0 and 500 inclusive. Coordinates are specified as a pair of integers separated by 
white-space on a single line. The input file will consist of up to 20 kingdoms, followed by any number of 
missile attacks. 
输入是一串王国的描述序列以及一串导弹打击位置的描述序列。
一个王国由一行上的数字N（3<=N<=100）标记的，它表示这个王国的站点数量。下一行标记电站的x和y坐标，接下来的N-1行
的x,y坐标表示该电站供电的住宅位置。N为-1表示王国序列的结束。至少有一个王国。
在最后一个王国的描述之后，将是一个或多个导弹攻击的坐标，标记导弹打击的位置。每个打击位置占一行。执行导弹攻击，
直到文件的结尾。
使用500公里乘500公里网格上的坐标以公里为单位指定位置。所有坐标都是0到500之间的整数。坐标由一行内一对由空格分
隔的整数表示。输入序列最多可由20个王国组成，以及任意数量的导弹攻击。

Output
The output consists of a single number representing the total area of all kingdoms without electricity after 
all missile attacks have been processed. The number should be printed with (and correct to) two decimal 
places.
输出由单个数字组成，表示所有王国在所有导弹攻击后以后没有电力的总面积。输出以两位小数形式输出。。

Sample Input
12
3 3
4 6
4 11
4 8
10 6
5 7
6 6
6 3
7 9
10 4
10 9
1 7
5
20 20
20 40
40 20
40 40
30 30
3
10 10
21 10
21 13
-1
5 5
20 12

Sample Output
70.50
*/




#include <iostream>
using namespace std;
int main()
{
    
    system("pause");
    return 0;
}