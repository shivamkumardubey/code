#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
 
  for(int i=0;i<((s.length())-1);i++)
  {
      if(s[i]==s[i+1])
      {
          s.erase(i,2);
          i=-1;
          if(s.length()==0){
              return "Empty String";
          }
       
      }
  }
  
 return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
