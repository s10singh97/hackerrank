#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    public:
    int a, b;
    int display()
    {
        cout<<a<<" "<<b<<"\n";   
    }
};

class RectangleArea: public Rectangle
{
    public:
    void read_input()
    {
        cin>>a>>b;
        if(a < 1 || b < 1 || a > 100 || b > 100)
            exit(0);
    }
    int display()
    {
        int mul = a*b;
        cout<<mul;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}