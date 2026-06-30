// 1. Write a program to create interface named Test. In this interface the member function is
// square. Implement this interface in Arithmetic class. Create one new class called ToTestInt.
// In this class use the object of Arithmetic class.

interface Test {
    int square(int n);
}

class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();
        System.out.println("Square of 5 = " + obj.square(5));
    }
}


// 2. Create an outer class with a function display, again create another class inside the outer class
// named Inner with a function called display and call the two functions in the main class.

class Outer {

    void display() {
        System.out.println("Display method of Outer class");
    }

    class Inner {

        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}

class Main1 {
    public static void main(String[] args) {
        Outer obj = new Outer();
        obj.display();

        Outer.Inner in = obj.new Inner();
        in.display();
    }
}


// 3. Create class Point with following instance variables and methods.
// Instance variables: private int x, y
// Constructors: Point(), Point(int x, int y)
// Methods: setX(), setY(), setXY()

class Point {

    private int x;
    private int y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void setX(int x) {
        this.x = x;
    }

    void setY(int y) {
        this.y = y;
    }

    void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void display() {
        System.out.println("Point = (" + x + ", " + y + ")");
    }
}

class Main2 {
    public static void main(String[] args) {
        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setXY(30, 40);
        p2.display();
    }
}


// 4. Create class Box and Box3D. Box3D extends Box.
// Include constructor.
// Set value of length, breadth, height.
// Find area and volume.

class Box {

    double length;
    double breadth;

    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    double area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    double height;

    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }
}

class Main3 {
    public static void main(String[] args) {
        Box b = new Box(10, 5);
        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(10, 5, 8);
        System.out.println("Area = " + b3.area());
        System.out.println("Volume = " + b3.volume());
    }
}