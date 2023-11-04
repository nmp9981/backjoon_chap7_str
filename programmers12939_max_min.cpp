#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string answer;//정답
vector<int> num;//숫자 배열

//문자열 분리
vector<string> split(string input,char del){
    vector<string> result;
    stringstream ss(input);
    string temp;
    
    while(getline(ss,temp,del)) result.push_back(temp);
    return result;
}
//숫자 배열로 바꾸기
void NumArray(string s){
    vector<string> array= split(s,' ');//공백으로 구분
    for(int i=0;i<array.size();i++) num.push_back(stoi(array[i]));//숫자로 바꾸기
}
string solution(string s) {
    NumArray(s);//숫자 배열로 바꾸기
    sort(num.begin(),num.end());//오름차순 정렬
    answer = to_string(num[0])+" "+to_string(num[num.size()-1]);//min,max
    return answer;
}
