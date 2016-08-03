#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int string_to_int(string n)
{
    int num;
    stringstream ss;
    ss << n ;
    ss >> num;
    return num;
}

string int_to_string (int n)
{
    string num;
    stringstream ss;
    ss << n;
    ss >> num;
    return num;
}

bool palindrome(string input, int input_size)
{
    for(int i = 0 ; i < input_size ; i++)
    {

        if(input[i] != input[input_size-1-i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n,num,boolean = 1,cou = 0;
    string p;
    cin >> n;
    string input[50],input2[50];
    for(int i = 0 ; i < n ; i++)
        cin >> input[i];

    for(int i = 0 ; i < n ; i++)
    {
        cou = 0 ;
        while(boolean)
        {
            boolean = palindrome(input[i] ,input[i].size()); //判斷是否迴文
            if(boolean == 1)
                cou++;
            input2[i] = input[i];
            for(int j = 0 ; j < input[i].size() ; j++)//reverse  from input to input2
                input2[i][j] = input[i][input[i].size()-1-j];
            if(boolean == 1)
            {
                num = string_to_int(input[i]) + string_to_int(input2[i]);       // 轉換成INT 相加
                input[i] = int_to_string(num);      //轉回STRING
            }
        }
        boolean = 1;
        cout << cou << " " << input[i] << endl;
    }
    return 0;
}




