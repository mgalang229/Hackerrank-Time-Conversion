#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    stringstream ss(s);
    int a, b, c;
    char ch;
    ss >> a >> ch >> b >> ch >> c >> ch;
    string s2;
    s2 += ch;
    ss >> ch;
    s2 += ch;
    string s3;
    if(a == 12 && s2 == "PM"){
        s3 = s.substr(0, 8);
    } else if(a == 12 && s2 == "AM"){
        s3 += "00";
        s3 += s.substr(2, 6);
    } else if(s2 == "PM"){
        a += 12;
        s3 += to_string(a);
        s3 += s.substr(2, 6);
    } else{
        s3 = s.substr(0, 8);
    }
    return s3;
}
int main(){
    ofstream fout(getenv("OUTPUT_PATH"));
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    fout << result << "\n";
    fout.close();
    return 0;
}
