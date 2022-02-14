#include<iostream>
using namespace std;

class Box{
    public:
        double getVolume( void ){
            return length * breadth * heigth;
        }
        void setLength( double len ){
            length = len;
        }
        void setBreadth( double bre ){
            breadth = bre;
        }
        void setHeigth( double hei ){
            heigth = hei;
        }
        //重载运算符，重载运算符：operator和其后的运算符构成
        Box operator+( const Box& b ){
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.heigth = this->heigth + b.heigth;
            return box;
        }
    private:
        double length;
        double breadth;
        double heigth;

};

int main(){
    Box box1,box2,box3;
    double volume = 0.0;
    box1.setLength(3);
    box1.setBreadth(4);
    box1.setHeigth(5);
    box2.setLength(6);
    box2.setBreadth(7);
    box2.setHeigth(8);
    volume = box1.getVolume();
    cout << "Volume of box1 : " << volume << endl;
    box3 = box1 + box2;
    volume = box3.getVolume();
    cout << "Volume of box3 : " << volume << endl;
    return 0;
}