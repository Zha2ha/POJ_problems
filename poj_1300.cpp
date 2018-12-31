#include <iostream>
#include <string>

using namespace std;
int main()
{
    int M, N;
    string mark;//��ʼ�����Ǻ�
    string edges;//�ߣ���������
    while (cin >> mark)
    {
        if (mark == "ENDOFINPUT")
            break;
        cin >> M >> N;
        cin.ignore();//ȥ�������е�"\n"�������Ӱ��getline()��ʹ��
        int cnt = 0;//�رյ��ŵ�����
        int door[20] = {0};//door[i]��ʾ��i���ڵ�Ķ�
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
        int odd = 0, even = 0;//�ڵ�Ķ����ֱ�Ϊ������ż���Ľڵ����
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