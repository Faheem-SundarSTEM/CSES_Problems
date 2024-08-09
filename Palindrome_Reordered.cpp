//   M_u_h_a_m_m_a_d - S.A.W  (B.B.U.H) 

# include <bits/stdc++.h>

using namespace std ;

# define int long long 
# define all(x) (x).begin(),(x).end()
# define sowhat ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i;}

signed main()
{
    sowhat ;;

    string s;
    cin >> s;

    map <char , int> Cnt;

    for(int i =0 ;i < s.size();i++)
        Cnt[s[i]] ++ ;

    int cnt = 0 ;

    for(auto i : Cnt){
        if(i.second % 2 == 1){
            cnt ++;
            char c = i.first ; 
        }
    }

    if(cnt <= 1){
        deque <char> dq1 ,dq2 ;
        char cc;
        int vv = 0 ;
        for(auto i : Cnt){
            if(i.second & 1){ 
                vv = i.second;
                cc = i.first ;
                continue ;
            }

            int w = i.second/2 , ww = w;
            while(w--) 
                dq1.push_front(i.first);
            while(ww--)
                dq2.push_back(i.first) ;
        }
        if(cnt == 1){
            print(dq1) ;
            for(int i =0 ;i < vv;i++)
                cout << cc;
            print(dq2);
            cout << endl ;
        }
        else {
            print(dq1) ;
            print(dq2);
            cout << endl ;    
        }
    }
    else{
        cout << "NO SOLUTION" << endl;
    }
}