class Vehicle{
    public int speed = 0;
    public String color = "";
}

public class carv02 extends Vehicle{
    public int price = 0;

    public carv02 (int speed, String color, int price){
        this.speed = speed;
        this.color = color; 
        this.price = price; 
    }

    public void displayDetails(){
        System.out.println("The car speed is " + this.speed + " and the color of the car is " + this.color + " with a price of " + this.price);
    }

    public static void main(String[] args) {
        carv02 thisCar = new carv02(200, "Blue", 900);

        thisCar.displayDetails(); 
    }
}
