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
    int nTopP;//͹��������� - 1��ȥ�����㣩
    double area;//͹�����
    point site_C[MAX]; //͹������
    bool bArea;//͹������Ƿ��Ѽ���������ı��
} a[25];


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

/*�ȽϾ���͵����ߵ����ң����ڶԵ������*/
bool Comp(point p1, point p2)
{
    if (GetArea(baseP, p1, p2) == 0)
        return GetDistence(baseP, p1) < GetDistence(baseP, p2);
    if (GetArea(baseP, p1, p2) > 0)
        return true;
    return false;
}

/*�õ�һ����͹���Ķ���*/
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

/*����һ��͹�������*/
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
    int count = 0;//͹���ĸ���
    while (cin >> n && n != -1)
    {
        GetBasePoint(n);
        GetConvex(count, n);
        AreaOfConvex(count);
        count++;
    }
    point t;//Ҫ�жϵĵ㣬����������½λ��
    double dAllArea = 0;//�����
    while (cin >> t.x >> t.y)
    {
        bool flag = false;
        for (int i = 0; i < count && !flag; i++)//��������������͹��
        {
            if (!a[i].bArea)//��͹��û�б����뵽������У����Լ����򲻼����ظ����
            {
                for (int j = 0; j < a[i].nTopP && !flag; j++)//����͹������
                {
                    //�жϵ��Ƿ���͹����
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
    //�����λС���ĸ�ʽ
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << dAllArea;
    system("pause");
    return 0;
}
