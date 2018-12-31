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
    int nTopP;//凸包顶点个数 - 1（去掉基点）
    double area;//凸包面积
    point site_C[MAX]; //凸包顶点
    bool bArea;//凸包面积是否已加入总面积的标记
} a[25];


/*找到一组点的左下角的点，作为基点进行划分*/
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
//计算三个点包围的三角形的面积，用向量的叉积的方法
int GetArea(point p1, point p2, point p3)
{
    return (p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y);
}
//计算两点之间距离，用于三点一线的情况
int GetDistence(point p1, point p2)
{
    return (p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y);
}

/*比较距离和点在线的左右，用于对点的排序*/
bool Comp(point p1, point p2)
{
    if (GetArea(baseP, p1, p2) == 0)
        return GetDistence(baseP, p1) < GetDistence(baseP, p2);
    if (GetArea(baseP, p1, p2) > 0)
        return true;
    return false;
}

/*得到一组点的凸包的顶点*/
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

/*计算一个凸包的面积*/
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
    int count = 0;//凸包的个数
    while (cin >> n && n != -1)
    {
        GetBasePoint(n);
        GetConvex(count, n);
        AreaOfConvex(count);
        count++;
    }
    point t;//要判断的点，即导弹的着陆位置
    double dAllArea = 0;//总面积
    while (cin >> t.x >> t.y)
    {
        bool flag = false;
        for (int i = 0; i < count && !flag; i++)//蛮力法遍历所有凸包
        {
            if (!a[i].bArea)//该凸包没有被加入到总面积中，若以加入则不计算重复面积
            {
                for (int j = 0; j < a[i].nTopP && !flag; j++)//对于凸包顶点
                {
                    //判断点是否在凸包内
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
    //输出两位小数的格式
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << dAllArea;
    system("pause");
    return 0;
}
