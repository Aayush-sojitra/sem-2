import java.util.Scanner;
class fac{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int r=sc.nextInt();
		int s=1;
		for (int i=1;i<=r ;i++ ) {
			s=s*i;
		}
		System.out.println("Factorial:"+s);
	}
}