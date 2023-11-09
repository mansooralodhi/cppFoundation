#include<iostream>
using namespace std;

/*
Observe: object programming (first operand), calls the operator+/operator- 
function with calculus (second operand) as arugment.
Note: operator overloaded function return type may not need to have class return type.
*/

class CourseMarks{
    int sessionalMarks;
    int semesterMarks;
    public:
    
        CourseMarks(){
            sessionalMarks=0; 
            semesterMarks=0;
        }
        CourseMarks(int sessional, int semester){
            sessionalMarks = sessional;
            semesterMarks = semester;
        }
        void displayMarks(){
            cout << "Sessional Marks: "<< sessionalMarks << 
            "Semester Marks: " << semesterMarks << endl;
        }
        void operator+= (int marks){ semesterMarks += marks;}
        void operator-= (int marks){ semesterMarks -= marks;}
        void operator++ (){ semesterMarks += 1;}
        void operator-- (){ semesterMarks -= 1; }

        CourseMarks operator-(CourseMarks marks);
        CourseMarks operator+ (CourseMarks marks);

};


int main(){
    CourseMarks programming(40, 35), calculus(35, 45);
    
    CourseMarks total = programming + calculus; 
    total.displayMarks();

    CourseMarks difference = programming - calculus;
    difference.displayMarks();

    int bonus=50;
    CourseMarks totMarks(100, 100); 
    totMarks += bonus;
    // bonus += totMarks; not possible.
    totMarks.displayMarks();

    CourseMarks myMarks(1000, 1000);
    ++myMarks;
    myMarks.displayMarks(); 

    return 0;
}

CourseMarks CourseMarks::operator- (CourseMarks marks){
    CourseMarks m;
    cout << " " << m.sessionalMarks << endl;
    m.sessionalMarks = marks.sessionalMarks - sessionalMarks; 
    m.semesterMarks = marks.semesterMarks - semesterMarks;
    return m; 
}
CourseMarks operator+ (CourseMarks marks){
    CourseMarks m;
    m.sessionalMarks = marks.sessionalMarks + sessionalMarks; 
    m.semesterMarks = marks.semesterMarks + semesterMarks;
    return m; 
}      
