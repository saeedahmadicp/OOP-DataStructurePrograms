#include <iostream>

using namespace std;

//abstract class
class Shape{
  public:
   //pure vitual function
   virtual void draw() = 0;
};

class Triangle: public Shape{
  public:
  void draw(){
      cout << "Triangle."<<endl;
  }};

class Rectangle: public Shape{
  public:
    void draw(){
        cout << "Rectangle."<<endl;
    }};


class Square: public Shape{
   public: 
       void draw(){
           cout << "Square."<<endl;
       }
};

//function for drawing object
void drawObject(Shape* pointer){
    pointer->draw();
}

int main(void){
    Triangle a;
    Rectangle b;
    Square c;
    drawObject(&a);
    drawObject(&b);
    drawObject(&c);
    return 0;
}