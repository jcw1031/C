class Shape{
    Shape* next;
protected:
    virtual void draw();
public:
    Shape() {next = NULL;}
    virtual ~Shape(){std::cout<<"~Shape()"<<std::endl;}
    void paint();
    Shape* add(Shape* p);
    Shape* getNext(){return next;}
};