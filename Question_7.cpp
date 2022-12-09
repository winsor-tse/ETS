class Shape {
	public:
		Shape();
		float get_area();

	private:
		float area, perimeter;
};

/*
https://cplusplus.com/forum/beginner/129857/
can be
 header file used in C/C++ files to include the declaration of variables, constants, and functions
*/

class Circle : public Shape {
  private:
    // Private member variable to store the radius of the circle
    float radius;

  public:
    // Constructor to initialize the radius of the circle
    Circle(float radius) : radius(radius) {}

    // Method to draw the circle
    void draw();

    // Method to get the area of the circle
    float getArea();
};

class Square : public Shape {
  private:
    // Private member variable to store the side length of the square
    float side;

  public:
    // Constructor to initialize the side length of the square
    Square(float side);

    // Method to get the area of the square
    float getArea();
};

class Rectangle : public Shape {
  private:
    // Private member variables to store the length and width of the rectangle
    float length, width;

  public:
    // Constructor to initialize the length and width of the rectangle
    Rectangle(float length, float width);

    // Method to get the area of the rectangle
    float getArea();
};

class Triangle : public Shape {
  private:
    // Private member variables to store the sides of the triangle
    float side1, side2, side3;

  public:
    // Constructor to initialize the sides of the triangle
    Triangle(float side1, float side2, float side3);

    // Method to get the area of the triangle
    float getArea() ;
};

class Right_Triangle : public Triangle {
    private:
    // Private member variables to store the sides of the right triangle
    float side1, side2;
    public:
    // Constructor to initialize the sides of the triangle
    Right_Triangle(float side1, float side2);

    // Method to get the area of the triangle
    // use the pythreom theorem to get the c
    float getArea();

};


class Rhombus : public Shape {
  private:
    // Private member variables to store the side length and angle of the rhombus
    float side, angle;

  public:
    // Constructor to initialize the side length and angle of the rhombus
    Rhombus(float side, float angle);

    // Method to get the area of the rhombus
    float getArea();
};


class eclipse: public Circle {
  private:
    // Private member variables to store the side length and angle of the eclipse
    float major_radius, minor_radius;

  public:
    // Constructor to initialize 
    Rhombus(float major_radius, float minor_radius);

    // Method to get the area of the rhombus
    float getArea();
};
