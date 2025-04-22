class Employee{
    public void work(){
        System.out.println("I am an employee");
    }
}

public class Manager extends Employee{
    public void manage(){
        System.out.println("I do the work of a manager.");
    }
    
    public static void main(String[] args) {
        Manager newObj = new Manager();

        newObj.work();
        newObj.manage();
    }
}
