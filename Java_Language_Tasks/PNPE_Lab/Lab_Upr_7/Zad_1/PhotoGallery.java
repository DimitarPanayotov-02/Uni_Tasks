package Java_Language_Tasks.PNPE_Lab.Lab_Upr_7.Zad_1;

import java.util.HashMap;

public class PhotoGallery {
    HashMap<String, Photo> photos;

    public PhotoGallery(){
        photos = new HashMap<>();
    }

    public void addPhoto(Photo photo) {
        photos.put(photo.getIme(), photo);
    }

    public Photo getPhoto(String name) {
        return photos.get(name);
    }

    public void removePhoto(String name) {
        photos.remove(name);
    }

    public int getTotalSize() {
        int total = 0;
        for (Photo photo : photos.values()) {
            total += photo.getSize();
        }
        return total;
    }
}
