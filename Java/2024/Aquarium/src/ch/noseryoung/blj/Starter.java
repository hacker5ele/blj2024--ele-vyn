package ch.noseryoung.blj;
import java.util.Scanner;


public class Starter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int width = getNumber("What is the width of the Aquarium(x)?", scanner);
        int height = getNumber("What is the height of the Aquarium(y)?", scanner);
        WaterType waterType = getWaterType(scanner);

        Aquarium aquarium = new Aquarium(width, height, waterType );

        while(true){
            System.out.println("Would you like to add Fish (y/n)?");
            String yesNo = scanner.nextLine();
            if(yesNo.equalsIgnoreCase("n")){
                break;
            }
            if(yesNo.equalsIgnoreCase("y")){
                Fish fish = createFish(scanner);
                if(aquarium.addFish(fish)){
                    System.out.println("Fish has been added");
                }
                else{
                    System.out.println("Fish hasn't been added, either wrong water type or invalid coordinate!");
                }
            }
        }
        aquarium.printAquarium();

        while (true) {
            System.out.println("Would you like to move your Fish? (y/n)");
            String answer = scanner.nextLine();

            if (answer.equalsIgnoreCase("n")) {
                System.out.println("Alright, have a good day");
                break;
            }
            if (answer.equalsIgnoreCase("y")) {
                System.out.println("Which Fish would you like to move, type name of fish");
                String fishName = scanner.nextLine();
                Fish fish = aquarium.findAndTakeFish(fishName);
                if (fish != null) {
                    Movement movement = getMovement(scanner);
                    Fish newFish = fish.moveFish(movement);
                    if (!aquarium.addFish(newFish)) {
                        aquarium.addFish(fish);
                        System.out.println("Wrong move");
                    } else {
                        System.out.println("Fish moved");
                    }
                } else {
                    System.out.println("Fish not found");
                }
            }
            aquarium.printAquarium();
        }

    }

    private static Movement getMovement(Scanner scanner) {
        Movement movement = null;
        while(movement == null){
            System.out.println("Where do you want to move (up, down, left or right)?");
            String mv = scanner.nextLine();
            if(mv.equalsIgnoreCase("up")) {
                movement = Movement.UP;
            }
            else  if(mv.equalsIgnoreCase("down")) {
                movement = Movement.DOWN;
            }
            else  if(mv.equalsIgnoreCase("left")) {
                movement = Movement.LEFT;
            }
            else  if(mv.equalsIgnoreCase("right")) {
                movement = Movement.RIGHT;
            }
            else{
                System.out.println("Wrong input, enter up, down, left or right");
            }
        }
        return movement;
    }

    private static Fish createFish(Scanner scanner) {
        System.out.println("What is your Fish name?");
        String name = scanner.nextLine();
        int x = getNumber("What is the x coordinate of your fish?", scanner);
        int y = getNumber("What is the y coordinate of your fish?", scanner);
        WaterType waterType = getWaterType(scanner);
        Fish fish = new Fish(name, x, y, waterType);
        return fish;
    }

    private static int getNumber(String question, Scanner scanner) {
        int number = 0;
        while(number <= 0) {
            System.out.println(question);
            number = scanner.nextInt();
            scanner.nextLine();

        }
        return number;
    }
    private static WaterType getWaterType(Scanner scanner){
        WaterType waterType = null;
        while(waterType == null){
            System.out.println("What type of water do you want(salty/fresh)?");
            String wt = scanner.nextLine();
            if(wt.equalsIgnoreCase("Fresh")){
                waterType = WaterType.FRESH;
            }
            else if(wt.equalsIgnoreCase("Salty")){
                waterType = WaterType.SALTY;
            }
            else{
                System.out.println("Wrong input, either fresh or salty");
            }
        }
        return waterType;

    }

}