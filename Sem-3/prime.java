import java.util.Scanner;
class prime{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number:");
		int num=sc.nextInt();
		int c=0;
		for(int i=2;i<=(num/2);i++){
			if(num%i==0){
				c++;
			}
		}
		if (c==0) {
			System.out.println("number is prime");
		}
		else{
			System.out.println("number is not prime");

		}
	}
}