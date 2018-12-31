#include <iostream>
#include <string>

using namespace std;
// int main()
// {
//     string start;
//     int StartRoom, RoomNum;


//     system("pause");
//     return 0;
// }

int main()
{
    int n;
    int s=0;
    while (cin >> n && n!=-1)
    {
        s+=n;
    }
    cout << s;
    system("pause");
    return 0;
}