
import java.util.*;

public class Car{
    String marka;
    String model;
    String cvqt;
    int power;
    String engineType;
    String transmissionType;
    int god;

    public Car(){
    }

    public Car(String marka, String model, String cvqt, int power, String engineType, String transmissionType, int god){
        this.marka = marka;
        this.model = model;
        this. cvqt = cvqt;
        this. power = power;
        this. engineType = engineType;
        this.transmissionType = transmissionType;
        this.god = god;
    
    }


    public String getMarka(){
        return marka;
    }
    public void setMarka(String marka){
        this.marka = marka;
    }


    public String getModel(){
        return model;
    }
    public void setModel(String model){
        this.model = model;
    }


    public String getCvqt(){
        return cvqt;
    }
    public void setCvqt(String cvqt){
        this.cvqt = cvqt;
    }


    public int getPow(){
        return power;
    }
    public void setPow(int power){
        this.power = power;
    }


    public String getType(){
        return engineType;
    }
    public void setType(String engineType){
        this.engineType = engineType;
    }


    public String getTra(){
        return transmissionType;
    }
    public void setTra(String transmissionType){
        this.transmissionType = transmissionType;
    }


    public int getGod(){
        return god;
    }
    public void setGod(int god){
        this.god = god;
    }



    public static Car[] filterByFirstLetter(Car[] cars, char letter) {
        List<Car> result = new ArrayList<>();
        for (Car car : cars) {
            if (car.getMarka().toLowerCase().charAt(0) == Character.toLowerCase(letter)) {
                result.add(car);
            }
        }
        return result.toArray(new Car[0]);
    }


    public static Car[] sortByMarka(Car[] cars, boolean ascending) {
        List<Car> list = new ArrayList<>(Arrays.asList(cars));
        list.sort((c1, c2) -> ascending
                ? c1.getMarka().compareToIgnoreCase(c2.getMarka())
                : c2.getMarka().compareToIgnoreCase(c1.getMarka()));
        return list.toArray(new Car[0]);
    }


    public static Car[] removeDuplicates(Car[] cars) {
        List<Car> unique = new ArrayList<>();
        for (Car car : cars) {
            if (!unique.contains(car)) {
                unique.add(car);
            }
        }
        return unique.toArray(new Car[0]);
    }

}
