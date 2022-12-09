#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
using namespace std;


/*
Complete the following code segment to produce the output listed below.  You may abbreviate text strings as long as the meaning of the code is clear.
int i = 25;
double value = 17.4495;

Output:
The double value is equal to 17.45 and
the integer value is equal to 25.
The end.

Example Output:
The double value is equal to 17.45 and
the integer value is equal to 25.
The end


https://stackoverflow.com/questions/10922366/does-setprecision-in-c-round-if-so-why-am-i-seeing-this
Set pricision seems to work the best

*/

void q_1(int a, double b){
    //three ways to use precision, ceiling or floor
    cout<< "The double value is equal to ";
    cout<< setprecision(4) << b ;
    cout<<" and"<<endl;
    cout<<"the integer value is equal to "<< a <<"."<<endl;
    cout<<"The end"<<endl;
}

double q2_dist(int a, int b){
    double ans = sqrt(pow(a,2) + pow(b,2));
    return ans;
}

double q2_result(double a, double y){
    double ans = a + pow(a,2) + pow(a,6) + pow(y,3);
    return ans;
}

/*
question 3
https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/
In a stack, the allocation and de-allocation are automatically done by the compiler whereas, in heap, it needs to be done by the programmer manually.
*/
void q3(){
    int a = 0;
    cout << a;
}

/*
https://courses.engr.illinois.edu/cs225/fa2022/resources/stack-heap/
 To allocate heap memory in C++, use the keyword new followed by the constructor of what you want to allocate. 
 The return value of new operator will be the address of what you just created (which points to somewhere in the heap).
*/
void q4(){
    int *p = new int;
    cout<< p;
    delete p;
}

/*
https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new
*/
void q5(int rowCount, int colCount){
    int** a = new int*[rowCount];
    for(int i = 0; i < rowCount; ++i)
        a[i] = new int[colCount];
    //make sure to delete the array after creation of 2d array
    for(int i = 0; i < rowCount; ++i) {
        delete [] a[i];
    }
    delete [] a;
}

void q6(array arr, int N){
    // a ia an array or a sequence
    /*
    
    a[1] * a[2] / (N(N-1) /2) +
    ...
    a[1] * a[N] / (N(N-1) /2)  +
    ...
    a[2] * a[3] / (N(N-1) /2) +
    ...
    a[2] * a[N] (N(N-1) /2) +
    until
    a[N-1] *a[N] (N(N-1) /2) 

    dont think we can hit a[N] since two > N
    */
   int total = 0;
    for (int one=1; one<=N; one++){
      //inner loop that does the inside summation
      for (int two=one+1; two<=N; two++){
          sum = (a[one] * a[two]) / (N(N-1)/2)
          total +=sum
      }
    }
    return total;
    


}

void q7(){
    // Set the starting number to 100
    // Generate numbers in the sequence until we reach 200
    array<float, 100> arr;

    // Set the starting number to 100
    float num = 100;
    // Use a for loop to generate numbers in the sequence and add them to the array
    for (int i = 0; i < arr.size(); i++, num += 0.03) {
        arr[i] = num;
        cout<<arr[i]<<endl;
    }
}

int main(){
    //questions 1 input i = 25, value = 17.4495
    q_1(25, 17.4495);
    cout<<q2_result(q2_dist(2,2), double(2));
    q3();
    q4();
    q7();
    return 0;
}