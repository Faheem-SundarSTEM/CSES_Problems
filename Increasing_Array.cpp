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

    int n ;
    cin >> n;

    vector <int> v;
    
    for(int i =0 ;i < n;i++){
        int w;
        cin >> w;
        v.push_back(w); 
    }

    int ope = 0 ;

    for(int i =0 ;i < n-1 ;i++){
        if(v[i+1] < v[i]){
            int w = (v[i] - v[i+1]) ;
            v[i+1] += w;
            ope += w ;
        }
    }

    cout << ope << endl;
}