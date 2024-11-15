package ch.noseryoung.blj;

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


    }

}