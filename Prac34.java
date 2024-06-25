
import java.util.Scanner;


class Employee_detail{
    int Employee_ID;
    String Name;
    String Designation;
    int Salary;
    Scanner sc=new Scanner(System.in);
    void get_Detail(){
       
        System.out.println("Enter Name:");
        Name=sc.nextLine();
        System.out.println("Enter Id:");
        Employee_ID=sc.nextInt();
        System.out.println("Enter Designation:");
        Designation=sc.next();
        System.out.println();
        System.out.println("Enter Salary:");
        Salary=sc.nextInt();

    }
    void print_Detail(){
        System.out.println("Id="+Employee_ID);
        System.out.println("Name="+Name);
        System.out.println("Designation="+Designation);
        System.out.println("Salary="+Salary);
    }

}

public class Prac34 {
    public static void main(String[] args) {
        Employee_detail e1=new Employee_detail();
        e1.get_Detail();
        e1.print_Detail();
    }
}
