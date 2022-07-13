#include<iostream>
using namespace std;

double area(float radius){
    cout<< "Area of Circle is : " << 3.14  * radius * radius<<" sq.units"<<endl;
    cout<<endl;
    cout<<"------------------------------------------"<<endl;
}

int area(float length, float breadth){
    cout<< "Area of Rectangle is : " <<length * breadth <<" sq.units"<<endl;
    cout<<endl;
    cout<<"------------------------------------------"<<endl;
}

double area(int base, int height){
    cout<< "Area of Triangle is : " <<0.5 * base * height <<" sq.units"<<endl;
    cout<<endl;
    cout<<"------------------------------------------"<<endl;
}

int  area(int side){
    cout<< "Area of Square is : " << side * side  <<" sq.units"<<endl;
    cout<<endl;
    cout<<"------------------------------------------"<<endl;
}


int main(){
    float radius,length,breadth ;

    int shape,base,height,side;
    char ch;
    do
    {
        cout<<"Choose Shape to find the Area."<<endl;
        cout<<endl;

        cout<<" 1.Circle \n 2.Rectangle \n 3.Triangle \n 4.Square"<<endl;
        cout<<endl;
        

        cout<<"Enter Your Choice : ";
        cin>>shape;
        cout<<"------------------------------------------"<<endl;

        switch (shape)
        {
        case 1: cout<<"Area of Circle."<<endl;
                cout<<"Enter Radius of the Circle. ";
                cin>>radius;
                area(radius);
                break;

        case 2: cout<<"Area of Rectangle."<<endl;
                cout<<"Enter Length of the Rectangle. ";
                cin>>length;
                cout<<"Enter Breadth of the Rectangle. ";
                cin>>breadth;
                area(length,breadth);
                break;

         case 3: cout<<"Area of Triangle."<<endl;
                cout<<"Enter Base of the Triangle. ";
                cin>>base;
                cout<<"Enter Height of the Triangle. ";
                cin>>height;
                area(base,height);
                break;
            
        case 4: cout<<"Area of Square."<<endl;
                cout<<"Enter Side of the Square. ";
                cin>>side;
                area(side);
                break;

        default: cout<<"Enter Valid Choice."<<endl;
                break;
        }
     
    cout<<"Do You Want to Continue (y/n) ? ";
    cin>>ch;
    cout<<"------------------------------------------"<<endl;
    } while (ch == 'Y' || ch == 'y');
    
    return 0;
}