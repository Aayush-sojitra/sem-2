import java.util.Scanner;
class Prac22{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size:");
		int n=sc.nextInt();
		int arr[]=new int[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter value of array a["+i+"]");
            arr[i]=sc.nextInt();
        }

        int arr1[]=new int[n-1];
        System.out.println("Enter index:");
		int ind=sc.nextInt();
       
       
        for (int i = 0; i <=ind; i++) {
           if(i==ind){
          break;
           }
           else{
            arr1[i]=arr[i];
           }
        }
         for (int i = ind+1; i < n; i++) {
            arr1[i-1]=arr[i];
        }
        System.out.println("Array:");
        for(int i=0;i<n;i++){
             System.out.print(arr1[i]+ " ");
        }
       
        
	}
}