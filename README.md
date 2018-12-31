# 算法设计与分析大作业题目
#### POJ1264
* English Description
    * Description <br>
Some problems are difficult to solve but have a simplification that is easy to solve. Rather than deal with
the difficulties of constructing a model of the Earth (a somewhat oblate spheroid), consider a 
pre-Columbian flat world that is a 500 kilometer x 500 kilometer square. <br>
In the model used in this problem, the flat world consists of several warring kingdoms. Though warlike, the
people of the world are strict isolationists; each kingdom is surrounded by a high (but thin) wall designed
to both protect the kingdom and to isolate it. To avoid fights for power, each kingdom has its own electric
power plant. <br>
When the urge to fight becomes too great, the people of a kingdom often launch missiles at other kingdoms. 
Each SCUD missile (anitary leansing niversal estroyer) that lands within the walls of a kingdom destroys 
that kingdom's power plant (without loss of life). <br>
Given coordinate locations of several kingdoms (by specifying the locations of houses and the location of 
the power plant in a kingdom) and missile landings you are to write a program that determines the total 
area of all kingdoms that are without power after an exchange of missile fire. <br>
In the simple world of this problem kingdoms do not overlap. Furthermore, the walls surrounding each 
kingdom are considered to be of zero thickness. The wall surrounding a kingdom is the minimal-perimeter 
wall that completely surrounds all the houses and the power station that comprise a kingdom; the area of a 
kingdom is the area enclosed by the minimal-perimeter thin wall. <br>
There is exactly one power station per kingdom. <br>
There may be empty space between kingdoms.

    * Input <br>
The input is a sequence of kingdom specifications followed by a sequence of missile landing locations. <br>
A kingdom is specified by a number N (3 <= N <= 100) on a single line which indicates the number of sites 
in this kingdom. The next line contains the x and y coordinates of the power station, followed by N-1 lines of x, y pairs indicating the locations of homes served by this power station. A value of -1 for N indicates that there are no more kingdoms. There will be at least one kingdom in the data set. Following the last kingdom specification will be the coordinates of one or more missile attacks, indicating the location of a missile landing. Each missile location is on a line by itself. You are to process missile 
attacks until you reach the end of the file. <br>
Locations are specified in kilometers using coordinates on a 500 km by 500 km grid. All coordinates will be integers between 0 and 500 inclusive. Coordinates are specified as a pair of integers separated by 
white-space on a single line. The input file will consist of up to 20 kingdoms, followed by any number of 
missile attacks.

    * Output <br>
The output consists of a single number representing the total area of all kingdoms without electricity after all missile attacks have been processed. The number should be printed with (and correct to) two decimal places.

* 中文描述
    * 问题描述 <br>
有些问题很难解决，但有一个容易解决的简化。与其解决建造地球模型（有点扁的球体）的困难，不如考虑一个500千米×500千米平方的前哥伦比亚平原世界。 <br>
在这个问题中使用的模型中，平面世界由几个交战的王国组成。世界人民虽然好战，但却是严格的孤立主义者；每个王国都被一堵高墙（但又很薄）包围着，这堵墙既用来保护王国又用来孤立它。为了避免争夺电力，每个王国都有自己的发电厂。<br>
当战争的冲动变得太强烈时，王国人民经常向其他王国发射导弹。每一枚飞毛腿导弹（Sanitary Cleansing Universal Destroyer）落入一个王国的城墙内，就摧毁了这个王国的发电厂（没有生命损失）。 <br>
给定几个王国的坐标位置（通过指定王国的房屋位置和发电厂的位置）和导弹打击位置，编写一个程序，确定所有王国在导弹火力轰炸之后没有电力的总面积。 <br>
在这个问题的简单世界里，王国并不重叠。此外，每个王国周围的墙壁被认为是零厚度的。王国周围的墙是最小周长边，它完全包围了包括王国的所有房屋和发电站；王国的区域是由最小周长边围起来的区域。 <br>
每个王国只有一个发电站。 <br>
王国之间可能存在空白的空间。

    * 输入 <br>
输入是一串王国的描述序列以及一串导弹打击位置的描述序列。
一个王国由一行上的数字N（3<=N<=100）标记的，它表示这个王国的站点数量。下一行标记电站的x和y坐标，接下来的N-1行
的x,y坐标表示该电站供电的住宅位置。N为-1表示王国序列的结束。至少有一个王国。
在最后一个王国的描述之后，将是一个或多个导弹攻击的坐标，标记导弹打击的位置。每个打击位置占一行。执行导弹攻击，
直到输入的结尾。
使用500公里乘500公里网格上的坐标以公里为单位指定位置。所有坐标都是0到500之间的整数。坐标由一行内一对由空格分
隔的整数表示。输入序列最多可由20个王国组成，以及任意数量的导弹攻击。

    * 输出 <br>
输出由单个数字组成，表示所有王国在所有导弹攻击后以后没有电力的总面积。输出以两位小数形式输出。

Sample Input <br>
12 <br>
3 3 <br>
4 6 <br>
4 11 <br>
4 8 <br>
10 6 <br>
5 7 <br>
6 6 <br>
6 3 <br>
7 9 <br>
10 4 <br>
10 9 <br>
1 7 <br>
5 <br>
20 20 <br>
20 40 <br>
40 20 <br>
40 40 <br>
30 30 <br>
3 <br>
10 10 <br>
21 10 <br>
21 13 <br>
-1 <br>
5 5 <br>
20 12 <br>

Sample Output <br>
70.50 <br>

#### 1300
* English Description
    * Description <br>
You are a butler in a large mansion. This mansion has so many rooms that they are merely referred to by 
number (room 0, 1, 2, 3, etc...). Your master is a particularly absent-minded lout and continually leaves 
doors open throughout a particular floor of the house. Over the years, you have mastered the art of 
traveling in a single path through the sloppy rooms and closing the doors behind you. Your biggest problem 
is determining whether it is possible to find a path through the sloppy rooms where you: <br>
1.Always shut open doors behind you immediately after passing through <br>
2.Never open a closed door <br>
3.End up in your chambers (room 0) with all doors closed <br>
In this problem, you are given a list of rooms and open doors between them (along with a starting room). 
It is not needed to determine a route, only if one is possible. 

    * Input <br>
Input to this problem will consist of a (non-empty) series of up to 100 data sets. Each data set will be 
formatted according to the following description, and there will be no blank lines separating data sets. 
A single data set has 3 components: <br>
1.Start line - A single line, "START M N", where M indicates the butler's starting room, and N indicates the number of rooms in the house (1 <= N <= 20). <br>
2.Room list - A series of N lines. Each line lists, for a single room, every open door that leads to a room of higher number. For example, if room 3 had open doors to rooms 1, 5, and 7, the line for room 3 would read "5 7". The first line in the list represents room 0. The second line represents room 1, and so on until the last line, which represents room (N - 1). It is possible for lines to be empty (in particular,the last line will always be empty since it is the highest numbered room). On each line, the adjacent rooms are always listed in ascending order. It is possible for rooms to be connected by multiple doors!<br> 
3.End line - A single line, "END" <br>
Following the final data set will be a single line, "ENDOFINPUT". <br>
Note that there will be no more than 100 doors in any single data set. 

    * Output <br>
For each data set, there will be exactly one line of output. If it is possible for the butler (by following the rules in the introduction) to walk into his chambers and close the final open door behind him, print a line "YES X", where X is the number of doors he closed. Otherwise, print "NO". 

* 中文描述 <br>
    * 问题描述 <br>
你是一座大宅邸的管家。这栋宅邸的房间如此之多，而且只用数字指代（0、1、2、3号房等）。你的主人是个特别心不在焉的混蛋，
经常在一个楼层任由门不关就离开。这些年来，你已经掌握了沿着一条路径穿过那些邋遢的房间，关上身后的门的技巧。你最大的问题是是否可能找到一条穿过邋遢房间的路径而且：<br>
1.经过后要立即关上门。<br>
2.永远不要打开关闭的门。<br>
3.关上所有的门，最后进入你的房间(0房间)。<br>
在这个问题中，您将得到一个房间列表和它们之间的打开的门（以及一个起始房间）。<br>
只要有可能，就不需要确定路线。<br>

    * 输入<br>
这个问题的输入将包括多达100个数据集的（非空）系列。每个数据集将根据以下描述格式化，并且不会有空行来分隔数据集。
单个数据集包含三个部分：<br>
1.起始行-单行“START M N”，其中M表示管家的起始房间，N表示房子里的房间数（1<=N<=20）。<br>
2.房间清单-一系列N行的序列。每一行都列出了每个房间的每扇打开通向更大数字代号的门。例如，如果3号房间通向1、5和7号房间的门是敞开的，那么3号房间的线路记作“5 7”。列表中的第一行表示房间0。第二行表示房间1，依此类推，最后一行代表房间（N-1）。可能有的行是空的（特别的，最后一行总是空的，因为它是编号最高的房间）。在每行上，相邻的房间总是按升序排列。房间之间可以通过多个门连接！<br>
3.结束行-单行，“END”在最终数据集后面是一行“ENDOFINPUT”。<br>
注意，在任何一个数据集中，将不超过100个门。

    * 输出<br>
对于每个数据集，将恰好有一行输出。如果管家可能（遵循所介绍的规则）走进他的房间，关上身后最后一扇敞开的门，打印
“YES X”，其中X是他关闭的门数。否则，打印“NO”。

Sample Input<br>
START 1 2<br>
1<br>

END<br>
START 0 5<br>
1 2 2 3 3 4 4<br>




END<br>
START 0 10<br>
1 9<br>
2<br>
3<br>
4<br>
5<br>
6<br>
7<br>
8<br>
9<br>

END<br>
ENDOFINPUT<br>

Sample Output<br>
YES 1<br>
NO<br>
YES 10<br>