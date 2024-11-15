package ch.noseryoung.blj;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Person max = new Person(" Max ");
        max.setFavoriteColor("Blau");
        max.setAge(16);
        max.setBestfriend("Luna.");
        max.setCharacteristics(" freundlich und hilfsbereit.");

        Person tim = new Person(" Tim ");
        tim.setFavoriteColor("Rot");
        tim.setAge(19);
        tim.setBestfriend("Ray.");
        tim.setCharacteristics(" offen und lustig.");

        Person luna = new Person(" Luna ");
        luna.setFavoriteColor("Violet");
        luna.setAge(15);
        luna.setBestfriend("Max.");
        luna.setCharacteristics(" laut und nett.");

        Person ray = new Person(" Ray ");
        ray.setFavoriteColor("Türkis");
        ray.setAge(20);
        ray.setBestfriend("Tim.");
        ray.setCharacteristics(" streng und zielstrebig.");


        max.presentYourself();
        tim.presentYourself();
        luna.presentYourself();
        ray.presentYourself();



        Scanner createPers = new Scanner(System.in);
        System.out.println("Enter Name:");
        String name = createPers.nextLine();
        System.out.println("Enter fav color:");
        String favColor = createPers.nextLine();
        System.out.println("Enter Age:");
        int age = createPers.nextInt();
        createPers.nextLine();
        System.out.println("Enter Bestfriend:");
        String bestFriend = createPers.nextLine();
        System.out.println("Enter Characteristics:");
        String charact = createPers.nextLine();

        Person newPerson = new Person(name, favColor, age, bestFriend, charact);
        newPerson.presentYourself();

        System.out.println("New Name: ");
        String newName = createPers.nextLine();
        newPerson.setName(newName);
        System.out.println("New Fav color:");
        String newColor = createPers.nextLine();
        newPerson.setFavoriteColor(newColor);
        System.out.println("New Age:");
        int newAge = createPers.nextInt();
        newPerson.setAge(newAge);
        createPers.nextLine();
        System.out.println("New Bestfriend:");
        String newFriend = createPers.nextLine();
        newPerson.setBestfriend(newFriend);
        System.out.println("New Characteristics:");
        String newcharac = createPers.nextLine();
        newPerson.setCharacteristics(newcharac);

        newPerson.presentYourself();



    }

}