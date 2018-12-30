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
��Щ������ѽ��������һ�����׽���ļ򻯡��������������ģ�ͣ��е������壩�����ѣ����翼��һ��500ǧ�ס�500ǧ��ƽ��
��ǰ���ױ���ƽԭ���硣
�����������ʹ�õ�ģ���У�ƽ�������ɼ�����ս��������ɡ�����������Ȼ��ս����ȴ���ϸ�Ĺ��������ߣ�ÿ����������һ�¸�ǽ
�����ֺܱ�����Χ�ţ����ǽ����������������������������Ϊ�˱������������ÿ�����������Լ��ķ��糧��
��ս���ĳ嶯���̫ǿ��ʱ���������񾭳��������������䵼����ÿһö��ë�ȵ�����Sanitary Cleansing Universal Destroyer��
����һ�������ĳ�ǽ�ڣ��ʹݻ�����������ķ��糧��û��������ʧ����
������������������λ�ã�ͨ��ָ�������ķ���λ�úͷ��糧��λ�ã��͵������λ�ã���дһ������ȷ�����������ڵ���������ը
֮��û�е������������
���������ļ���������������ص������⣬ÿ��������Χ��ǽ�ڱ���Ϊ�����ȵġ�������Χ��ǽ����С�ܳ��ߣ�����ȫ��Χ��
�������������з��ݺͷ���վ������������������С�ܳ���Χ����������
ÿ������ֻ��һ������վ��
����֮����ܴ��ڿհ׵Ŀռ䡣

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
������һ�����������������Լ�һ���������λ�õ��������С�
һ��������һ���ϵ�����N��3<=N<=100����ǵģ�����ʾ���������վ����������һ�б�ǵ�վ��x��y���꣬��������N-1��
��x,y�����ʾ�õ�վ�����סլλ�á�NΪ-1��ʾ�������еĽ�����������һ��������
�����һ������������֮�󣬽���һ�������������������꣬��ǵ��������λ�á�ÿ�����λ��ռһ�С�ִ�е���������
ֱ���ļ��Ľ�β��
ʹ��500�����500���������ϵ������Թ���Ϊ��λָ��λ�á��������궼��0��500֮���������������һ����һ���ɿո��
����������ʾ����������������20��������ɣ��Լ����������ĵ���������

Output
The output consists of a single number representing the total area of all kingdoms without electricity after 
all missile attacks have been processed. The number should be printed with (and correct to) two decimal 
places.
����ɵ���������ɣ���ʾ�������������е����������Ժ�û�е�������������������λС����ʽ�������

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
#include <string>
#include <iomanip>
#include <algorithm>
const int MAX = 105;
using namespace std;
struct point
{
    int x, y;
} baseP, p[MAX];

struct CArea
{
    int nTopP;
    double area;
    point site_C[MAX]; //͹������
    bool bArea;
} a[25];
int k; //a[k] reference to the no.k kingdom

/*�ҵ�һ�������½ǵĵ㣬��Ϊ������л���*/
void GetBasePoint(int n)
{
    cin >> p[0].x >> p[0].y;
    baseP.x = p[0].x;
    baseP.y = p[0].y;
    int pos = 0;
    for (int j = 1; j < n; j++)
    {
        cin >> p[j].x >> p[j].y;
        if (p[j].y < baseP.y || (p[j].y == baseP.y && p[j].x < baseP.x))
        {
            baseP.x = p[j].x;
            baseP.y = p[j].y;
            pos = j;
        }
    }
    swap(p[0], p[pos]);
}
//�����������Χ�������ε�������������Ĳ���ķ���
int GetArea(point p1, point p2, point p3)
{
    return (p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y);
}
//��������֮����룬��������һ�ߵ����
int GetDistence(point p1, point p2)
{
    return (p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y);
}

bool Comp(point p1, point p2)
{
    if (GetArea(baseP, p1, p2) == 0)
        return GetDistence(baseP, p1) < GetDistence(baseP, p2);
    if (GetArea(baseP, p1, p2) > 0)
        return true;
    return false;
}

void GetConvex(int i, int n)
{
    a[i].bArea = false;
    sort(p + 1, p + n, Comp);
    a[i].site_C[0] = p[0];
    a[i].site_C[1] = p[1];
    a[i].nTopP = 1;
    for (int j = 2; j < n; j++)
    {
        while (a[i].nTopP > 0 && GetArea(a[i].site_C[a[i].nTopP - 1], a[i].site_C[a[i].nTopP], p[j]) <= 0)
        {
            a[i].nTopP--;
        }
        a[i].site_C[++a[i].nTopP] = p[j];
    }
}

void AreaOfConvex(int i)
{
    a[i].site_C[++a[i].nTopP] = p[0];
    for (int j = 0; j < a[i].nTopP; j++)
    {
        a[i].area += GetArea(baseP, a[i].site_C[j], a[i].site_C[j + 1]);
    }
    a[i].area = a[i].area / 2.0;
}

int main()
{
    int n;
    int count = 0;
    while (cin >> n && n != -1)
    {
        GetBasePoint(n);
        GetConvex(count, n);
        AreaOfConvex(count);
        count++;
    }
    point t;
    double dAllArea = 0;
    while (cin >> t.x >> t.y)
    {
        bool flag = false;
        for (int i = 0; i < count && !flag; i++)
        {
            if (!a[i].bArea)
            {
                for (int j = 0; j < a[i].nTopP && !flag; j++)
                {
                    if (GetArea(a[i].site_C[0], a[i].site_C[j], t) >= 0 && GetArea(a[i].site_C[0], a[i].site_C[j + 1], t) <= 0)
                    {
                        if (GetArea(a[i].site_C[j], t, a[i].site_C[j + 1]) <= 0)
                        {
                            a[i].bArea = true;
                            flag = true;
                            dAllArea += a[i].area;
                        }
                    }
                }
            }
        }
    }

    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << dAllArea;
    system("pause");
    return 0;
}
