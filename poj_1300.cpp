#include <iostream>
#include <string>

using namespace std;
int main()
{
    int M, N;
    string mark;//开始结束记号
    string edges;//边，用于输入
    while (cin >> mark)
    {
        if (mark == "ENDOFINPUT")
            break;
        cin >> M >> N;
        cin.ignore();//去掉缓冲中的"\n"，否则会影响getline()的使用
        int cnt = 0;//关闭的门的数量
        int door[20] = {0};//door[i]表示第i个节点的度
        for (int i = 0; i < N; i++)
        {
            getline(cin, edges);
            //cout << edges << endl;
            int len = edges.size();
            for (int j = 0; j < len; j++)
            {
                if (edges[j] != ' ')
                {
                    int d = edges[j] - '0';
                    cnt++;
                    door[i]++;
                    door[d]++;
                }
            }
        }
        cin >> mark;
        int odd = 0, even = 0;//节点的度数分别为奇数和偶数的节点个数
        for (int i = 0; i < N; i++)
        {
            if (door[i] % 2)
                odd++;
            else
                even++;
        }
        if (odd == 0 && M == 0)
            cout << "YES " << cnt << endl;
        else if (odd == 2 && M != 0)
            cout << "YES " << cnt << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}