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

    int sm = (n * (n+1))/2;

    int hf = sm / 2  ;

    if(sm & 1){
        cout << "NO" << endl;
    }
    else{
        int ss = 0 ,cnt = 0;
        vector <int> v, vv ;
        
        for(int i =1 ;i <= n;i++)vv.push_back(i);
        
        for(int i = 1;i <= n;i++){
            if(ss+i < hf){
                ss += i;
                v.push_back(i);
                cnt ++ ;
                vv[i-1] = 0;
            }
            else if(ss+i == hf){
                cnt ++;
                v.push_back(i) ;
                vv[i-1]=0;
                break ;
            }
            else{
                ss += i ;
                v.push_back(i) ;
                vv[i-1] = 0;
                int u = ss-hf;
                v[u-1] = 0 ;
                vv.push_back(u) ;
                break ;
            }
        }
        cout << "YES" << endl << cnt << endl;
        for(int i : v){
            if(i != 0)
                cout << i << ' ';
        }
        cout << endl << n-cnt << endl;
        for(int i : vv){
            if(i != 0){
                cout << i << ' ' ;
            }
        }
        cout << endl ;
    }
}