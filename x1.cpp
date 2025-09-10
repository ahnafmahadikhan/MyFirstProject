/*

***(SET)
    set<int> s;
    int num;cin>>num;
    for(int i=0;i<num;i++){
    s.insert();
    }

***(VECTOR PAIR)
    vector<pair<int,int>> vp;
    for(int i=0;i<num;i++){
        int x,y;cin>>x>>y;
        vp.push_back({x,y});
    }

***(Kadane's Algo)
    vector<int> kadane_len ;
    int num;cin>>num;
    for(int i=0;i<num;i++){
       int x;cin>>x;
       kadane_len.push_back(x);
    }
    int len=0;int max_len=0;
    for(int i=0;i<num;i++){
        len=len+kadane_len[i];
        max_len=max(max_len,len);
        if(len<0){len=0;}
    }
    cout<<max_len;


***(MAP)
    map<int, int> m;
        for(auto i : arr){
            m[i]++;
        }
    for(auto  pair : m){
        cout << pair.first << pair.second <<endl;
    }

***(BINARY SEARCH)
    while(high-low>1){
        int mid=(high+low)/2;
        if(v[mid]<find){
           low=mid+1;}
        else{
            high=mid;}
    }

***(PRIME_NUMBER)
    const int N=1e7+10;
    vector<bool> prime(N,1);
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++){
     if(prime[i]==true){
        for(int j=2*i;j<N;j=j+i){
            prime[j]=false;
    }   }   }
 
***(PRIME_FACTORIZATION)
    vector<int> primefactor(int n) {
    vector<int> spf(n + 1, 0);
    for(int i = 2; i <= n; i++) {
        spf[i] = i;
    }
    for(int i = 2; i * i <= n; i++) {
        if(spf[i] == i) {
        for(int j = i * i; j <= n; j += i) {
            if(spf[j] == j) {
                spf[j] = i; 
    } } } }
    vector<int> prime_factorization;
    while(n != 1) {
        prime_factorization.push_back(spf[n]);
       n = n / spf[n];}
    return prime_factorization;
    }

***(DIVISOR & SUM)
    const int N=1e5+10;
    vector<int> divisors(N);
    int sum[N];
    for(int i=1;i<N;i++){
     for(int j=i;j<N;j+=i){
        divisors[j].push_back(i);
        sum[j]+=i;
    }   }

***(Depth First Search__graph)
const int NUM=1e5+10;
bool visit[NUM];
vector<int> graph[NUM];
void DFS(int vertex){
    visit[vertex]=true;
    for(int child:graph[vertex]){
     if(visit[child]) continue;
     DFS(child);}
}

***(Depth First Search__tree)
const int NUM=1e5+10;
vector<int> tree[NUM];
int depth[NUM],height[NUM];
void DFS(int vertex,int parent=0){
    for(int child:tree[vertex]){
        if(child==parent) continue;
        depth[child]=depth[vertex]+1;
        DFS(child,vertex);
        height[vertex]=max(height[vertex],height[child]+1);
    }
}

***(BFS__GRAPH)
const int NUM=1e5+10;
vector<int> graph[NUM];
int visit[NUM];
int level[NUM];
void BFS(int source){
    queue <int> q;
    q.push(source);
    visit[source]=1;
    while(!q.empty()){
        int current_vertex=q.front();
        q.pop();
        for(int child:graph[current_vertex]){
            if(!visit[child]){
                q.push(child);
                visit[child]=1;
                level[child]=level[current_vertex]+1;
            }
        }
    }

}

***(UPPER & LOWER BOUND)
auto it=upper_bound(v.begin(),v.end(),find_element);
auto it=lower_bound(v.begin(),v.end(),find_element);

***(Binary Exponentiation)
ll int M=1e9+7;
int bin_expo(ll int base,ll int power){
    int answer=1;ll int M=1e9+7;
    while(power){
        if(power%2==1){
            answer=(answer%M*base%M)%M;
            power=power-1;}
        else{
            power=power/2;
            base=(base%M*base%M)%M;}
    }
    return answer;

***Decimal__To__Binary
int decimalToBinary(int n) {
    int binary = 0, i = 0;
    while (n > 0) {
        binary += (n % 2) * pow(10, i);
        n /= 2;
        ++i;
    }
    return binary;
}


}

#int arr_size=sizeof(arr)/sizeof(arr[0]);
#stoi  #to_string
#__gcd()
#__builtin_popcount
#char ch='b'&'_';
#char ch='B'|' ';

*/

#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES"<<endl
#define Yes cout<<"Yes"<<endl
#define NO  cout<<"NO" <<endl
#define No  cout<<"No" <<endl
#define ll long long
const unsigned int MOD = 1000000007;
// sort(x.begin(),x.end(), greater<long long int>());
// sort(x,x+num, greater<long long int>());

int solve(int xx){

    //uSe__Long__Long
   // int num;cin>>num;
    int num=1;
    if(num==1){
        return 12;
    }
    
}

int main(){

    std::ios::sync_with_stdio(0); std::cin.tie(0);

    // int t;cin>>t;
    // while(t--){
    //     solve();
    // }
   int x= solve(1);
    cout<<x;


    return 0;
}
