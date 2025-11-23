package Java_Language_Tasks.PNPE_Lab.Lab_Upr_7.Zad_1;

import java.util.Objects;

public class Photo {

    String ime;
    int godina;
    int size;

    Photo(String ime, int godina, int size){
        this.ime = ime;
        this.godina = godina;
        this.size = size;
    }


    public String getIme(){
        return ime;
    }

    public int getGodina(){
        return godina;
    }

    public int getSize(){
        return size;
    }

    @Override
    public boolean equals(Object o){
        if(this == o){
            return true;
        }

        if(!(o instanceof Photo)){
            return false;
        }
        Photo photo= (Photo) o;
        return godina == photo.godina &&
                size == photo.size &&
                Objects.equals(ime, photo.ime);
    }
    

    @Override
    public int hashCode(){
        return Objects.hash(ime,godina,size);
    }
}
