package Java_Language_Tasks.PNPE_Lab.Lab_Upr_7.Zad_1;

public class Main {
    
    public static void main(String[] args){

        Photo photo1 = new Photo("Nature", 2022, 300);
        Photo photo2 = new Photo("Cityscape", 2023, 500);

        PhotoGallery photos = new PhotoGallery();
        
        photos.addPhoto(photo1);
        photos.addPhoto(photo2);

        System.out.println("Total size: " + photos.getTotalSize());

        photos.removePhoto("Nature");
        System.out.println("After removing Nature, total: " + photos.getTotalSize());
    }
}
