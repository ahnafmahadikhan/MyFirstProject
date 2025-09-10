

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


bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    
    long long int reverse=0;
    long long int num=x;
    //123321
    while(num!=0){
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;    
    }
    if(reverse==x) return 1;
    else  return 0;    
}


int main(){

    std::ios::sync_with_stdio(0); std::cin.tie(0);

    cout<<isPalindrome(1251);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//𝐀𝐮𝐭𝐡𝐨𝐫:-𝐀𝐇𝐍𝐀𝐅
//𝐂𝐨𝐮𝐧𝐭𝐫𝐲:-𝐁𝐀𝐍𝐆𝐋𝐀𝐃𝐄𝐒𝐇
//𝐅𝐢𝐬𝐡 𝐑𝐚𝐭𝐢𝐧𝐠, 𝐈'𝐦 𝐢𝐧 𝐋𝐨𝐯𝐞 𝐰𝐢𝐭𝐡 𝐭𝐡𝐞 𝐄𝐱𝐩𝐞𝐫𝐢𝐞𝐧𝐜𝐞.
//_______𝐂𝐘𝐂𝐋𝐎𝐍𝐄
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}

