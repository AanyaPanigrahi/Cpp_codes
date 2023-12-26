#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student{

public :

// instance variables
int reg;
string name;

// class variable
static string college;

void setReg(int reg){

// instance variable parameter
this->reg = reg;
}

static void collegeName(string college, int reg){
student :: college = college;
}

};

string student::college = "LPU";

int main() {

student s1;
s1.setReg(1);
student::collegeName("CU",1);

cout<<s1.name<<" "<<student :: college<<"\n";

return 0;
}