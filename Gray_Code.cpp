//   M_u_h_a_m_m_a_d - S.A.W  (B.B.U.H) 

# include <bits/stdc++.h>

using namespace std ;

# define int long long 
# define all(x) (x).begin(),(x).end()
# define sowhat ios::sync_with_stdio(false); cin.tie(0) ;
# define print(a) for(auto i:a){cout<<i<<' ';}cout<<endl;


vector <string> v;

void fft(int a[] , const int n){
    string s = "" ;
    for(int i = 0; i < n ; i++){
        s += to_string(a[i]);
    }
    v.push_back(s) ;
}

void bin(const int n ,int a[] ,int i){
    if(i == n){
        fft(a , n) ;
        return ;
    }
    else {
        a[i] = 0 ;
        bin(n ,a ,i + 1);
    }
    a[i] = 1 ;
    bin(n,a , i+1);
}

signed main()
{
    sowhat ;;

    int n ;
    cin >> n;

    int a[n] ;

    bin(n,a,0);

    vector <string> SE ;

    print(v);

    for(int i =0 ;i < v.size()-1;i++){
        string s = v[i] ;
        for(int j =i+1;j < v.size()-1;j++){
            string ss = v[j] ;
            int cnt = 0 ;
            for(int j = 0 ;j < s.size() ;j++){
                if(s[j] != ss[j]){
                    cnt ++ ;
                }
            }
            if(cnt == 1){
                SE.push_back(ss); 
            }
        }
    }
    for(string i : SE)cout << i << endl ;
}