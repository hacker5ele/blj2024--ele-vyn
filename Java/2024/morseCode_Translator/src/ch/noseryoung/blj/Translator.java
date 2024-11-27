package ch.noseryoung.blj;
import java.util.HashMap;


public class Translator {
    private HashMap<Character, String> textToMorse = new HashMap<>();
    private HashMap<String, Character> morseToText = new HashMap<>();

    public Translator() {
        translator();
    }

    public void translator() {

        //Alphabet
        String[] morseAlphabet = {".-", "-...", "-.-.", "-..", "--...", "..-.", "--.", "....", "..",
                ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
                "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        for (char c = 'A'; c <= 'Z'; c++) {
            textToMorse.put(c, morseAlphabet[c - 'A']);
            morseToText.put(morseAlphabet[c - 'A'], c);

        }

        //Numbers
        String[] morseNumbers = {".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
        for (char c = '1'; c <= '9'; c++) {
            textToMorse.put(c, morseNumbers[c - '1']);
            morseToText.put(morseNumbers[c - '1'], c);
        }

        //Signs
        textToMorse.put('.', ".-.-.-");
        textToMorse.put(',', "--..--");
        textToMorse.put('?', "..--..");
        textToMorse.put('!', "-.-.--");
        textToMorse.put(':', "---...");
        textToMorse.put('\'', ".----.");
        textToMorse.put('-', "-....-");
        textToMorse.put('/', "-..-.");
        textToMorse.put('(', "-.--.");
        textToMorse.put(')', "-.--.-");

        textToMorse.put(' ', "/");
        morseToText.put("/", ' ');
    }

    //Method to translate morse to text
    public String morseToText(String morse) {
        StringBuilder text = new StringBuilder(); // structure of answer
        String[] morseWords = morse.split(" "); // space

        for (String morseChar : morseWords) { // for each morse sign in the array
            Character c = morseToText.get(morseChar); // Translation of morse sign into a sign from Hashmap
            if (c != null) { // when a possible sign is found
                text.append(c); // attach sign to answer
            } else {
                text.append("?"); // give a '?' when unknown sign
            }
        }
        return text.toString(); // Give back answer as String
    }

    // Method to translate text to morse
    public String textToMorse(String text) {
        StringBuilder morseCode = new StringBuilder();
        for (char c : text.toUpperCase().toCharArray()) {
            String morse = textToMorse.get(c);
            if (morse != null) {
                morseCode.append(morse).append(" ");
            } else {
                morseCode.append("? "); // Unbekanntes Zeichen
            }
        }
        return morseCode.toString().trim();
    }

}