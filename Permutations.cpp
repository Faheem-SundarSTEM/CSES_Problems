//   M_u_h_a_m_m_a_d - S.A.W  (B.B.U.H) 

# include <bits/stdc++.h>

using namespace std ;

# define int long long 
# define all(x) (x).begin(),(x).end()
# define sowhat ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}
# define in binary_search
# define max(a,b) ((a>b)?a:b)

signed main()
{
    sowhat ;;

    int n ;
    cin >> n;

    if(n < 4 and n != 1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        vector <int> evens , odds ;
        for(int i = 1;i <= n;i++){
            if(i & 1)
                odds.push_back(i) ;
            else
                evens.push_back(i) ;
        }
        print(evens);
        print(odds);
        cout << endl;
    }

}