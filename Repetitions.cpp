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

    string s;
    cin >> s;
    int n = s.size() ;

    int mx = 0,cnt = 0;

    for(int i=0 ;i < n-1 ;i++ ){
        while(s[i] == s[i+1]){
            cnt ++ ;
            i ++ ;
        }
        mx = max(mx ,cnt+1) ;
        cnt = 0;
    }
    
    cout << max(1,mx) << endl ;;

}