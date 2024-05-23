#include <bits/stdc++.h>
using namespace std;
long c;
vector<vector<long>> all_move;
void tower(long n, long from, long to, long temp)
{
    if (n == 0) return;
    tower(n - 1, from, temp, to);
    c++;
    vector<long> move;
    move.push_back(from);
    move.push_back(to);
    all_move.push_back(move);

    tower(n - 1, temp, to, from);
}

int main()
{
    long N;
    cin >> N;
    tower(N, 1, 3, 2);
    cout<<c<<endl;
    for(long i=0;i<all_move.size();i++){
        cout<<all_move[i][0]<<" "<<all_move[i][1]<<endl;
    }
    return 0;
}