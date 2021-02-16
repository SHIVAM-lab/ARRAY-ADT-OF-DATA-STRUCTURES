#include <bits/stdc++.h>
#include<stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    int n;
    cin>>n;
    
    int m;
    string YES,NO;
    m=sizeof(s);
    if( m%2 != 0 )
    return NO;
    else{
        int mid;
        mid=m/2-1;
        int j=0;
        for(int i=1;i<=(m/2-1);i++){
            if(s[mid-j+1]==s[mid+j]){
                j=j+1;
            }
            else
            return NO;
        }
            if (s[0]==s[n-1])
            return YES;
            else
            return NO;
            
        
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}
