// Single Inheritance: is-A relationship
#include <iostream>

class regpoly
{
    private: int nsides;
    protected: int lsides;
    public:
    regpoly() // default constructor necessary in base class depending on the compiler
    {}
    regpoly(int n,int l){ // parmaterised constructor
        nsides = n;
        lsides = l;
    }
    void show()
    {
        std::cout<<"THE REGULAR POLYGON HAS "<<nsides<<" AND OF LENGTH "<<lsides<<std::endl;
    }
    };
    //END OF CLASS 1
    
    //Defining base class and inherting properties from parent class
    class square : public regpoly  // square is a regpoly
    {
        private:int area,peri;
        public:
        square(int l)
        { lsides=l;}
        void calcarea()
        {
            area = lsides*lsides;
        }
        void show() // 
        {
            std::cout<<"THE SQUARE HAS SIDES OF LENGTH "<<lsides<<std::endl;
        }
        void showarea(){
            std::cout<<"THE AREA OF SQUARE IS "<<area<<std::endl;
        }
    };
    // End of class 2
int main() {
    // Write C++ code here
    std::cout<<"DISPLAYING REGULAR POLYGON DETAILS"<<std::endl;
    regpoly r(6,9);
    r.show();
    std::cout<<"\n"<<std::endl;
    
    std::cout<<"SQUARE DETAILS ARE AS FOLLOWS"<<std::endl;
    square s(10);
    s.show();
    s.calcarea();
    s.showarea();

    return 0;
}
