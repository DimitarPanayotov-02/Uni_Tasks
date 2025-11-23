package Java_Language_Tasks.PNPE_Lab.Lab_Upr_1;



//07.10.2025

import java.util.Scanner;

public class BMICalculator {

    public static void printIntroduction() {
        System.out.println("Tova e BMI kalkulator!");
        System.out.println("Izchislqva vashiq Body Mass Index (BMI).");
        System.out.println("Vuvedi visochina (sm) i teglo (kg).");
        System.out.println();
    }

    public static double getBMI(Scanner input) {
        System.out.print("Visochina (sm): ");
        double heightCm = input.nextDouble();

        System.out.print("Vasheto teglo (kg): ");
        double weightKg = input.nextDouble();

        double heightInches = heightCm * 0.3937;
        double weightPounds = weightKg * 2.2046;

        double bmi = bmiFor(weightPounds, heightInches);

        return bmi;
    }

    public static double bmiFor(double weight, double height) {
        return (weight * 703) / (height * height);
    }

    public static String getStatus(double bmi) {
        if (bmi <= 18.5) {
            return "underweight";
        } else if (bmi <= 25) {
            return "normal";
        } else if (bmi <= 30) {
            return "overweight";
        } else {
            return "obese";
        }
    }

    public static void reportResults(int number, double bmi, String status) {
        double roundedBMI = Math.round(bmi * 100.0) / 100.0;
        System.out.println("Result #" + number + ": your BMI = " + roundedBMI + " -> " + status);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        printIntroduction();

        double bmi = getBMI(input);
        String status = getStatus(bmi);

        reportResults(1, bmi, status);

        input.close();
    }
}