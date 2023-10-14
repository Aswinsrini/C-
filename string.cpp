// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//  std:: string a="aswin",b="sanjey";
//    std:: string d=a+b;//the string a is aswin
//    string c=a.append(b); //the string a is aswinsanjey
//    cout<<c<<endl;
//    cout<<c.length();// both length() and size are same
//    cout<<c.size()<<endl;

   
// string name;
   
//   getline(cin,name);
//    cout<<name<<endl;

//    string cars[4]={"benz","BMW","rollsroyce","hyundai"};

//   for(int i=0;i<4;i++)
//   {
//     cout<<cars[i]<<endl;
//   }
// }


#include<iostream>
using namespace std;
class Student
{private:
   int age;
   string name;
 public:
   void display()
   {
    cin>>age;
    cin>>name;

    cout<<"name : "<< name <<endl <<" age: "<<age;
   }

};
int main()
{  class Student o;
   o.display();

}