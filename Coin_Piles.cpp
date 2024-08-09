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

    while(n --){

        int a, b;
        cin >> a >> b;

        if(a < b)
            swap(a,b);


        int w = a/2 ;
        int ww = a/2 ;

        if(w == b-ww){
            cout <<  "1YES" << endl;
        }
        else if(ww == a-w){
            cout << "2YES" << endl ;
        }
        else{
            cout << "NO" << endl;
        }
    }
}