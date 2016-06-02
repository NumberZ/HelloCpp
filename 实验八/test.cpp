#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main(){
    typedef map<string,int>::iterator mit;
    ifstream input;
    string word;
    map<string,int> word_count;
    mit it;

    input.open("word.txt");

    if(input.fail()){
        cout<<"文件不存在"<<endl;
        cout<<"退出程序"<<endl;
        return 0;
    }

    while(input>>word){
        auto ret = word_count.insert({word,1});
        if(!ret.second){
            ++ret.first->second;
        }
    }

    for(it=word_count.begin(); it!=word_count.end();++it){
         cout<<(*it).first<<" 出现 "<<(*it).second<<" 次"<<endl;
    }
}
