//package Java_Language_Tasks.PNPE_Lab.Sem_Upr_2;

public class Test extends Car {
    public static void main(String[] args) {
        Car c1 = new Car("Audi", "A4", "cheren", 150, "benzin", "avtomatik", 2018);
        Car c2 = new Car("BMW", "X5", "bql", 250, "dizel", "avtomatik", 2020);
        Car c3 = new Car("Alfa Romeo", "Giulia", "cherven", 200, "benzin", "rachna", 2019);
        Car c4 = new Car("Audi", "A4", "cheren", 150, "benzin", "avtomatik", 2018); // дубликат
        Car c5 = new Car("Citroen", "C4", "siv", 120, "dizel", "rachna", 2017);

        Car[] cars = {c1, c2, c3, c4, c5};

        System.out.println("=== Originalen spisuk ===");
        for (Car c : cars) System.out.println(c);

        System.out.println("\n=== Koli s 'A' ===");
        for (Car c : Car.filterByFirstLetter(cars, 'A')) System.out.println(c);

        System.out.println("\n=== Vuzhodqsht ===");
        for (Car c : Car.sortByMarka(cars, true)) System.out.println(c);

        System.out.println("\n=== Nizhodqsht ===");
        for (Car c : Car.sortByMarka(cars, false)) System.out.println(c);

        System.out.println("\n=== Maha dublikati ===");
        for (Car c : Car.removeDuplicates(cars)) System.out.println(c);
    }
}