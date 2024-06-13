import java.util.Scanner;
class oddEven{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int r=sc.nextInt();
		if (r%2==0) {
			System.out.println("Even");
		}
		else{
			System.out.println("Odd");
		}
	}
}