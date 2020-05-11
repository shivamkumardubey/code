#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
char p[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char q[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   int r[26]={0};
int l=s.length();
int j=0;
for(int i=0;i<l;i++){
  for(int j=0;j<26;j++)
  {
      if(s[i]==p[j]||s[i]==q[j]){
          r[j]=1;
      }

  }
}
for(int t=0;t<26;t++)
{
if(r[t]==1){
    j++;
    if(j==26) return "pangram";
}
}
 return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
