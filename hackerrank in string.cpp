#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
   int l=s.length();
   char p[10]={'h','a','c','k','e','r','r','a','n','k'};
    int j=0;
   for(int i;i<l;i++){
     
      if(p[j]==s[i])
      {j++;
        if(j==10){
       return "YES";
   }
      } 
   }
 

    
   return "NO";
   
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
