//  // enum 
// #include<iostream>
// using namespace std;
// enum gender{male,female};
// int main()
// {
//      gender g =female;
//      switch(g)
//      {
//         case male:
//         cout<<"gender male";
//         break;
//         case female:
//         cout<<"gender female";
//         break;
//      }
// }




// //   class 
// #include<iostream>
// using namespace std;
// class circle
// {   private:
//       float radius;
//       public:
       
//       float area(float radius)
//       {
//        return (22*radius*radius)/7;
//       }
//       float circumference(float radius)
//       {
//         return 3.14*radius*2;
//       }

// };
// int main()

// {  circle o;//object declaration
//   float r;
//   cout<<"enter the radius: ";
//   cin>>r;
//  cout<<"area of the circle : "<<o.area(r)<<endl;
//  cout<<"area of the circumference : "<<o.circumference(r)<<endl;


// return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
class student
{
  private:
   int a;
   string name;
   public:
   void getdata()
   {
    cin>>a>>name;

   }
   void print()
   {
    cout<<"no : "<<a<<endl;
    cout<<"name :"<<name<<endl;
   }
};
int main()
{  student o;
    
 //o.getdata();
 //o.print();
vector<int>a={1,2,3};
a.push_back(12);
a.push_back(15);
a.pop_back();
for(auto i:a)
cout<<i<<" ";
cout<<endl;

cout<<"elements at index is : "<<a.at(2)<<endl;



}
