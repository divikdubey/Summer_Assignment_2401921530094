import java.util.Random;

// Abstract Class
abstract class Compartment {
    public abstract String notice();
}

// FirstClass
class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class Compartment";
    }
}

// Ladies
class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies Compartment";
    }
}

// General
class General extends Compartment {
    @Override
    public String notice() {
        return "General Compartment";
    }
}

// Luggage
class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage Compartment";
    }
}

// Test Class
public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] compartments = new Compartment[10];
        Random random = new Random();

        for (int i = 0; i < compartments.length; i++) {

            int choice = random.nextInt(4) + 1; // 1 to 4

            switch (choice) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }

        // Polymorphism
        System.out.println("Compartments:");

        for (Compartment c : compartments) {
            System.out.println(c.notice());
        }
    }
}