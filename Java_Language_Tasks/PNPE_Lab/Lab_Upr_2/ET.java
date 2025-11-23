//package Java_Language_Tasks.PNPE_Lab.Lab_Upr_2;

public class ET extends Company{
    String imeSpb;
    double kapital;
    double aktualenKap;

    public ET(String nameFirma,String dataFirma, String bulsat, String imeSpb, double kapital, double aktualenKap){
        super(nameFirma, dataFirma, bulsat);
        this.imeSpb = imeSpb;
        this.kapital = kapital;
        this.aktualenKap = aktualenKap;
    }

    public String getSpb(){
            return imeSpb;
        }
    public void setSpb(String imeSpb){ 
        this.imeSpb=imeSpb;
    }

    public double getKapital(){
            return kapital;
        }
    public void setKapital(double kapital){ 
        this.kapital=kapital;
    }

    public double getAktualenKap(){
            return aktualenKap;
        }
    public void setAktualenKap(double aktualenKap){ 
        this.aktualenKap=aktualenKap;
    }



    public double kalkuliraPechalba(){
        return aktualenKap - kapital;
    }
}





