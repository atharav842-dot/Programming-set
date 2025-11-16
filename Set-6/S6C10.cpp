    #include<iostream>
    using namespace std;

    class Shape{
        public:
        virtual void area(){}
    };
    class Rectangle:public Shape{
        public:
        float base=5.5;
        float height=10.5;
        void area()
        {
            cout<<"Area of rectangle: "<<base*height<<endl;
        }
    };
    class Circle:public Shape{
        public:
        float radius=6.72;
        void area()
        {
            cout<<"Area of circle: "<<3.14*radius*radius<<endl;
        }
    };
    class Triangle:public Shape{
        public:
        float base=5.5;
        float height=10.5;
        void area()
        {
            cout<<"Area of trinagle: "<<0.5*base*height;
        }
    };
    int main()
    {
        Shape *aakaar[3];
        aakaar[0]= new Rectangle();
        aakaar[1]= new Circle();
        aakaar[2]= new Triangle();
        
        cout<<"After calculating , areas are:- \n";
        for(int i=0;i<3;i++)
        {
            aakaar[i]->area();
        }

        for(int i=0;i<3;i++)
        {
            delete aakaar[i];
        }
        return 0;
    }