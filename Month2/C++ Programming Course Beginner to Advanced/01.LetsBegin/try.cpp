#include<iostream>
#include<string>
using namespace std;
class Student{
  private:
    string name;
    int age;
    int grade;
  public:
  void setName(string n){
    name = n;
  }
  void setAge(int a){
    age = a;
  }
  string getName(){
    return name;
  }
  int getAge(){
    return age;
  }
  void setGrade(int g){
    grade = g;
  }
  int getGrade(int pin){
    if(pin == 1234){
      return grade;
    }
    return 0000;
  }
};
int main(){
  Student s1;
  Student *s2 = new Student;
  (*s2).setName() = "Man";
  (*s2).setAge() = 12;
  
  s1.setName("Manav");
  s1.setAge(21);
  
  cout<<s1.getName();
  cout<<s1.getAge();
}