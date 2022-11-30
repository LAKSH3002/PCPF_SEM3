
#include <iostream>
using namespace std;
class student{
    private:
    int marks, roll;
    char name;
    
    // setter methods to 
    public: void setmarks(int m)
    {
        marks = m;
    }
    public: void setroll(int r)
    {
        roll = r;
    }
    // getter methods
    public : int getmarks(){
        return marks;
    }
    public :int getroll()
    {
        return roll;
    }
};
int main() 
{
    student s;
    s.setmarks(80);
    s.setroll(57);
    
    cout<<s.getmarks()<<endl;
    cout<<s.getroll()<<endl;
    std::cout << "Hello world!";

    return 0;
}
