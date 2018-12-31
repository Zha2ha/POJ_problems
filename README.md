# �㷨������������ҵ��Ŀ
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

* ��������
    * �������� <br>
��Щ������ѽ��������һ�����׽���ļ򻯡��������������ģ�ͣ��е������壩�����ѣ����翼��һ��500ǧ�ס�500ǧ��ƽ����ǰ���ױ���ƽԭ���硣 <br>
�����������ʹ�õ�ģ���У�ƽ�������ɼ�����ս��������ɡ�����������Ȼ��ս����ȴ���ϸ�Ĺ��������ߣ�ÿ����������һ�¸�ǽ�����ֺܱ�����Χ�ţ����ǽ����������������������������Ϊ�˱������������ÿ�����������Լ��ķ��糧��<br>
��ս���ĳ嶯���̫ǿ��ʱ���������񾭳��������������䵼����ÿһö��ë�ȵ�����Sanitary Cleansing Universal Destroyer������һ�������ĳ�ǽ�ڣ��ʹݻ�����������ķ��糧��û��������ʧ���� <br>
������������������λ�ã�ͨ��ָ�������ķ���λ�úͷ��糧��λ�ã��͵������λ�ã���дһ������ȷ�����������ڵ���������ը֮��û�е������������ <br>
���������ļ���������������ص������⣬ÿ��������Χ��ǽ�ڱ���Ϊ�����ȵġ�������Χ��ǽ����С�ܳ��ߣ�����ȫ��Χ�˰������������з��ݺͷ���վ������������������С�ܳ���Χ���������� <br>
ÿ������ֻ��һ������վ�� <br>
����֮����ܴ��ڿհ׵Ŀռ䡣

    * ���� <br>
������һ�����������������Լ�һ���������λ�õ��������С�
һ��������һ���ϵ�����N��3<=N<=100����ǵģ�����ʾ���������վ����������һ�б�ǵ�վ��x��y���꣬��������N-1��
��x,y�����ʾ�õ�վ�����סլλ�á�NΪ-1��ʾ�������еĽ�����������һ��������
�����һ������������֮�󣬽���һ�������������������꣬��ǵ��������λ�á�ÿ�����λ��ռһ�С�ִ�е���������
ֱ������Ľ�β��
ʹ��500�����500���������ϵ������Թ���Ϊ��λָ��λ�á��������궼��0��500֮���������������һ����һ���ɿո��
����������ʾ����������������20��������ɣ��Լ����������ĵ���������

    * ��� <br>
����ɵ���������ɣ���ʾ�������������е����������Ժ�û�е�������������������λС����ʽ�����

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

* �������� <br>
    * �������� <br>
����һ����լۡ�Ĺܼҡ��ⶰլۡ�ķ������֮�࣬����ֻ������ָ����0��1��2��3�ŷ��ȣ�����������Ǹ��ر��Ĳ����ɵĻ쵰��
������һ��¥�������Ų��ؾ��뿪����Щ���������Ѿ�����������һ��·��������Щ���ݵķ��䣬���������ŵļ��ɡ��������������Ƿ�����ҵ�һ���������ݷ����·�����ң�<br>
1.������Ҫ���������š�<br>
2.��Զ��Ҫ�򿪹رյ��š�<br>
3.�������е��ţ���������ķ���(0����)��<br>
����������У������õ�һ�������б������֮��Ĵ򿪵��ţ��Լ�һ����ʼ���䣩��<br>
ֻҪ�п��ܣ��Ͳ���Ҫȷ��·�ߡ�<br>

    * ����<br>
�����������뽫�������100�����ݼ��ģ��ǿգ�ϵ�С�ÿ�����ݼ�����������������ʽ�������Ҳ����п������ָ����ݼ���
�������ݼ������������֣�<br>
1.��ʼ��-���С�START M N��������M��ʾ�ܼҵ���ʼ���䣬N��ʾ������ķ�������1<=N<=20����<br>
2.�����嵥-һϵ��N�е����С�ÿһ�ж��г���ÿ�������ÿ�ȴ�ͨ��������ִ��ŵ��š����磬���3�ŷ���ͨ��1��5��7�ŷ�������ǳ����ģ���ô3�ŷ������·������5 7�����б��еĵ�һ�б�ʾ����0���ڶ��б�ʾ����1���������ƣ����һ�д����䣨N-1���������е����ǿյģ��ر�ģ����һ�����ǿյģ���Ϊ���Ǳ����ߵķ��䣩����ÿ���ϣ����ڵķ������ǰ��������С�����֮�����ͨ����������ӣ�<br>
3.������-���У���END�����������ݼ�������һ�С�ENDOFINPUT����<br>
ע�⣬���κ�һ�����ݼ��У���������100���š�

    * ���<br>
����ÿ�����ݼ�����ǡ����һ�����������ܼҿ��ܣ���ѭ�����ܵĹ����߽����ķ��䣬����������һ�ȳ������ţ���ӡ
��YES X��������X�����رյ����������򣬴�ӡ��NO����

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