#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int sl=0,l=0,d=0,s=0;
  for(int i=0;i<n;i++)
  {
     if(password[i]>=65&&password[i]<=90){
          sl=1;
     }
     else if(password[i]>=97&&password[i]<=122){
          l=1;
     }
     else if(password[i]>=48&&password[i]<=57){
          d=1;
     }
     else{
          s=1;
     }
  }
  int sum=sl+l+d+s;
  if(sum==4&&n>=6){ return 0;}
  else if(s!=4&&n>=6){return 4-sum;}
  else{
    int left1=6-n; 
    int left= 4-sum;
     if(left1>left){
         return left1;
     }
     else{return left;}
     }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
