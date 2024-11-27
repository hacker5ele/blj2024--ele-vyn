package ch.noseryoung.blj;

import java.util.Scanner;

public class Starter {

    public static void main(String[] args) {

        Translator translator = new Translator();
        Scanner scanner = new Scanner(System.in);



           System.out.println("Welcome to the Morse Code Translator!");
           System.out.println("In this Translator you can translate a morse code to a text or a text into a morse code.");
        while(true) { System.out.println("Choose:\n" +
                   "1. Morse to Text\n" +
                   "2. Text to Morse\n" +
                   "3. End Programm\n");

           int choice = scanner.nextInt();
           scanner.nextLine();

           if (choice == 1) {

               System.out.println("Enter the Morse code you want to translate:");
               String morse = scanner.nextLine();
               String translatedText = translator.morseToText(morse);
               System.out.println("Translated Text: " + translatedText);

           } else if (choice == 2) {
               System.out.print("Enter Text you want to translate: ");
               String text = scanner.nextLine();
               String morseCode = translator.textToMorse(text);
               System.out.println("Morse-Code: " + morseCode);
           } else if (choice == 3) {
               System.out.println("Translator has been ended, Have a nice day!");
               break;

           } else {
               System.out.println("This choice ain't possible, choose between 1-3");
           }
           System.out.println();

       }

    }
}