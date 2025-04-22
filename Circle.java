class Shape{
    public void display(){
        System.out.println("I am a Shape.");
    }
}

public class Circle extends Shape{
    public static void main(String[] args) {
        Circle newShape = new Circle();

        newShape.display();
    }
}
