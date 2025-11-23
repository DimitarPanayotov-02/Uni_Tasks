//package Java_Language_Tasks.PNPE_Lab.Lab_Upr_2;



//14.10.2025

public class Company {
    String nameFirma;
    String dataFirma;
    String bulsat;

    public Company(String nameFirma, String dataFirma, String bulsat) {
        this.nameFirma = nameFirma;
        this.dataFirma = dataFirma;
        this.bulsat = bulsat;
    }


    public String getName() {
			return nameFirma;
		}   
    public void setName(String nameFirma){
        this.nameFirma=nameFirma;
    }   

    public String getData(){
        return dataFirma;
    }
    public void setData(String dataFirma){
        this.dataFirma=dataFirma;
    }


    public String getBulsat(){
        return bulsat;
    }
    public void setBulsat(String bulsat){
        if(bulsat.length() == 10){
            this.bulsat = bulsat;
        }else{
            System.out.println("Ne staa len.");
        }
    }




    


}


