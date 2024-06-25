import java.util.Scanner;


class Student_detail{
    int Enrollment_no;
    String Name;
    int Semester;
    int CPI;
    Scanner sc=new Scanner(System.in);
    void get_Detail(){
       
        System.out.println("Enter Name:");
        Name=sc.nextLine();
        System.out.println("Enter Number:");
        Enrollment_no=sc.nextInt();
        System.out.println("Enter Samester:");
        Semester=sc.nextInt();
        System.out.println();
        System.out.println("Enter CPI:");
        CPI=sc.nextInt();

    }
    void print_Detail(){
        System.out.println("Number="+Enrollment_no);
        System.out.println("Name="+Name);
        System.out.println("Semester="+Semester);
        System.out.println("CPI="+CPI);
    }

}

public class Prac35 {
    public static void main(String[] args) {
        Student_detail arr[]=new Student_detail[5];
        for(int i=0;i<5;i++){
            arr[i]=new Student_detail();
            System.out.println("Enter For Student "+(i+1));
            arr[i].get_Detail();
            arr[i].print_Detail();
        }
    }
}
