import java.util.Scanner;
class circle{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Radious:");
		int r=sc.nextInt();
		double Area= Math.PI*r*r;
		System.out.println("Area:"+Area);

	}
}