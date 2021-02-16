#include<bits/stdc++.h>
using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    int n,m; 
  cin>>n;
  m=sizeof(s)/2;
 string a,b;
 for(int i=0;i<m;i++)
  a[i]=s[i];
  for(int i=m;i<2*m;i++)
  b[i-m]=s[i];
  int j;
  if(a=!b)
  return NO;
  else
  return YES;

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

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
