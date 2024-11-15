package ch.noseryoung.blj;

public class Person {
    private String name;
    private String favoriteColor;
    private int age;
    private String bestfriend;
    private String characteristics;

    // Konstruktor
    public Person(String name){
        this.name = name;

    }

    public void presentYourself(){
        System.out.println("Ich bin" +  name +
                "meine Lieblingsfarbe ist " + favoriteColor + ". Ich bin " + age
        + ". Mein beste/r Kolleg/in ist " + bestfriend + "Meine Eigenschaften sind"
        + characteristics);
    }

    // Getter + Setter
    public String getFavoriteColor() {
        return favoriteColor;
    }
    public void setFavoriteColor(String favoriteColor){
        this.favoriteColor = favoriteColor;
    }

    public String getName() {
        return name;
    }
    public void setAge(int age) {
        this.age = age;
    }

    public String getBestfriend(){
        return bestfriend;
    }
    public void setBestfriend(String bestfriend){
        this.bestfriend = bestfriend;
    }

    public String getCharacteristics() {
        return characteristics;
    }
    public void setCharacteristics(String characteristics){
        this.characteristics = characteristics;
    }
}
