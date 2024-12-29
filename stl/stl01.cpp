#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second
class person
{
  public:
      person(string name ,int age){
       this->m_name=name;
       this->m_age=age;
      }

    bool operator==(const person & p){

        if (this->m_age==p.m_age){
            return true;
        }else{
            return false;
        }
    }

  string m_name;
  int m_age;

};
void myprint(int val){

 cout<<val<<" ";

}
class myprint2
{
public:
   void operator()(int val){
    cout<<val<< " ";
   }
};
class myprint1
{
public:
   void operator()(person & p){
    cout<<p.m_name<<":"<<p.m_age<< " ";
   }
};

class greater20
{
public:
   bool operator()(const person & p){
    return p.m_age >=20;
   }
};


void test01(){

    vector<int > v1;
    for(int i=0;i<10;i++){

        v1.push_back(i);
    }

   for_each(v1.begin(),v1.end(),myprint2());


}
void test02(){

    vector<int > v1;
    for(int i=11;i<20;i++){

        v1.push_back(i);
    }

   for_each(v1.begin(),v1.end(),myprint);
}

void test03(){

    vector<person > p;
    person p1("aaa",10);
    person p2("bbb",20);
    person p3("ccc",30);
    person p4("ddd",40);
    person p5("eee",50);

    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    p.push_back(p5);


     for_each(p.begin(),p.end(),myprint1());

    int num=count_if(p.begin(),p.end(),greater20());
   
    cout<<"num=" <<num <<endl;
}



void test04(){

    vector<person > p;
    person p1("aaa",35);
    person p2("bbb",20);
    person p3("ccc",35);
    person p4("ddd",40);
    person p5("eee",35);

    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    p.push_back(p5);

    person v("ggg",35);

     for_each(p.begin(),p.end(),myprint1());

    int num=count(p.begin(),p.end(),v);
   
    cout<<"num=" <<num <<endl;
}



int main (void){
    fast
    test01();
    cout<<endl;
    test02();
    cout<<endl;
    test03();
    cout<<endl;
     test04();
    cout<<endl;
   
    return 0;
}