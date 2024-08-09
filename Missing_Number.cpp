//   M_u_h_a_m_m_a_d - S.A.W  (B.B.U.H) 

# include <bits/stdc++.h>

using namespace std ;

# define int long long 
# define all(x) (x).begin(),(x).end()
# define sowhat ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl;
# define in binary_search

signed main()
{
    sowhat ;;

    int n ;
    cin >> n;

    bool marked[200050] = {0};
    
    for(int i = 0 ; i < n-1;i++){
        int a;
        cin >> a;
        marked[a] = 1 ;
    }

    for(int i = 1 ;i <= n ; i++){
        if(!marked[i]){
            cout << i << endl;
            goto end ;
        }
    }
    end:
    cerr << "bye : "  << endl;
}