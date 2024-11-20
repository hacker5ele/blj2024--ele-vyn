package ch.noseryoung.blj;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        ArrayList<String> suitcase = new ArrayList<>();
        suitcase.add("Yoda");
        suitcase.add("Cactus");
        suitcase.add("Chicky");
        suitcase.add("Laptop");
        System.out.println("Initial suitcase contents: " + suitcase);

        System.out.println("Continue adding to the list. Type 'enough' to stop.");

        Scanner userInput = new Scanner(System.in);
        while (true) {
            System.out.println("Add an object (or type 'enough' to finish): ");
            String object = userInput.nextLine();

            if (object.equalsIgnoreCase("enough")) {
                break;
            }

            suitcase.add(object);
            System.out.println("Updated suitcase: " + suitcase);
        }

        System.out.println("Final suitcase contents: " + suitcase);
        userInput.close();
    }
}