class Bird{
    public void fly(){
        System.out.println("The bird flies");
    }
}

public class parrot extends Bird{
    public void speak(){
        System.out.println("I am a parrot that speaks");
    }

    public static void main(String[] args) {
        parrot parrot01 = new parrot();

        parrot01.fly();
        parrot01.speak();
    }
}
