#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> helloWorld(int n){
vector<string> output;
  for (int i = 1; i <= n; i++){ 
    if (i %15 == 0){
        output.push_back("HelloWorld");
    }
        else if (i % 3 == 0){
        output.push_back("Hello");
        }
        else if (i % 5 == 0){
        output.push_back("World");
        }
        else { 
        output.push_back (to_string(i));
        }
    }  
    return output;
}
