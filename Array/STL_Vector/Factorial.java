import java.util.Scanner;
class Factorial{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        while(true){
            System.out.print("Enter a Non-Negative Number: ");
            int num=sc.nextInt();
            sc.nextLine();
            if(num<0){
                System.out.println("Number cannot be negative");
            }
            else{
                System.out.println("Factorial of " + num + " is " + fact(num));
            }
            System.out.println("Want to input another number ? : (y/n)");
            String choice=sc.nextLine();

            if(choice.equals("n") || choice.equals("no")){
                break;
            }
        }
        sc.close();
        System.out.println("Program Ended");
    }
    static int fact(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n*fact(n-1);
    }
}