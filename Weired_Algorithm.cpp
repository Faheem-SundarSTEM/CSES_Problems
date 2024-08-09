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

    int n;
    cin >> n;

    cout << n << ' ';
    while(n != 1){
        if(n % 2 == 0){
            cout << n/2 << ' ';
            n = n /2  ;
        }
        else{
            cout << 3 * n  + 1 << ' ';
            n = n * 3 + 1 ;
        }
    }
    cout << '\n' ;
}