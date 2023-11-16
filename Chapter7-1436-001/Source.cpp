#include <iostream>

#include<iomanip>

using namespace std;

int main()
{
    //int a = 5 + 2 + 64; 
    //double b = 5.0 + 3.0; 

    //char c = 'a' + 'b'; 


    //string s1 = "alpha";
    //string s2 = "beta";
    //string s3 = s1 + s2 + s1; 

    //cout << a << endl; //7 
    //cout << fixed << setprecision(5) << b << endl; //8.0000 0
    //cout << c << endl; //what is this?

    //cout << s3 << endl; //prints the "concatenated" result 

    string s1 = "lowercase words";

    //for (int i = 0; i <= s1.length(); i++)
    //{
    //    //cout << toupper(fullGreeting[i]) << endl;
    //    cout << (char)(toupper(s1[i]));
    //}

    //s1.append('z');

    s1 = " "; //empty string
    //string::npos 
    cout << s1 << endl; 
    cout << std::boolalpha << s1.empty() << endl; 
    
    s1 = "alpha";

    cout << s1.find('p') << endl; //-1? 
    //append 
    // 
    //string s2 = "abcde";
    //{}[]()
    //[] -> index operator / subscript operator 

    //cout << s1[s1.length() - 2] << endl;
    //cout << s2[1] << endl;
    //int array[3] = {1, 2, 3} //ITSE 1302 



    return 0;
}