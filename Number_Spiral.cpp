//   M_u_h_a_m_m_a_d - S.A.W  (B.B.U.H) 

# include <bits/stdc++.h>

using namespace std ;

# define int long long 
# define all(x) (x).begin(),(x).end()
# define sowhat ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl;
# define in binary_search
# define max(a,b) ((a>b)?a:b)

signed main()
{
    sowhat ;;

    int t; cin >> t;

    while (t--){
        int y, x; 
        cin >> y >> x;
        int k = max(x, y);
        int ans = (k-1)*(k-1);
        if (k & 1) ans += (x + (k-y));
        else ans += (y + (k-x));
        cout << ans << endl ;
    }
    return 0;
}