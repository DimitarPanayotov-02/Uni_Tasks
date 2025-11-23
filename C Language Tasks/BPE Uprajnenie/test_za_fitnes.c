# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct Info{
    char name[56];
    char id[7];
    float price;
    int shkaf;
};


void appendUsers(FILE *fptr,struct Info **members, int *len, int *capacity){
    if(*len >= *capacity){
        struct Info *temp = realloc(*members, sizeof(struct Info) * (*len + 1 ));

        if(temp == NULL){
            printf("ne realokira\n");
            return ;
        }

        *members = temp;
        *len += 1;
        *capacity += 1;
    }

    struct Info member;

    printf("Imena: \n");
    fgets(member.name, 56, stdin);
    member.name[strcspn(member.name, "\n")] = '\0';

    printf("ID: \n");
    scanf("%s", member.id);
    member.id[strcspn(member.id, "\n")] = '\0';

    printf("Cena mesec: \n");
    scanf("%lf", &member.price);
    

    printf("Shkaf: \n");
    scanf("%d", &member.shkaf);
    

    int nameLen = strlen(member.name);

    fprintf(fptr, "%d ;%s ;%s ; %.2f; %d\n",nameLen, member.name, member.id,
                member.price,member.shkaf);

}


void showbellowAverage(FILE *fptr, struct Info *members, int len){
    int sum = 0;
    for(int i = 0; i< len; i++){
        sum += members[i].price; 
    }
    float sredno = sum / len;
    if (len == 0) {
        printf("No members to average.\n");
        return;
    }
    for (int i = 0; i < len; i++){
        if(members[i].price < sredno){
            printf("%s - %s - %.2f\n", members[i].name, members[i].id, members[i].price);
        }
    }
}

void surchBinBin(struct Info *members, int len) {
    FILE *fptrbin = fopen("members.bin", "rb");
    if (!fptrbin) {
        printf("members.bin ne se otvarq\n");
        return;
    }

    char surch[7];
    printf("kogo tursite(id): ");
    fgets(surch, 7, stdin);
    surch[strcspn(surch, "\n")] = '\0'; // remove newline if any

    struct Info temp;
    int found = 0;

    while (fread(&temp, sizeof(struct Info), 1, fptrbin) == 1) {
        if (strcmp(temp.id, surch) == 0) {
            printf("\n---------\n");
            printf("Bin Names: %s\n", temp.name);
            printf("Bin ID: %s\n", temp.id);
            printf("Bin M-price: %.2f\n", temp.price);
            printf("Bin Shkaf: %d\n", temp.shkaf);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("nqq hora\n");
    }

    fclose(fptrbin);
}

void surchBin(struct Info *members, int len){
    FILE *fptrbin = fopen("members.bin", "rb");
    if(!fptrbin){
        printf("members.bin ne se otvarq");
        return;
    }

    char surch[7];

    printf("kogo tursite(id): ");
    fgets(surch,7,stdin);
    surch[strcspn(surch, "\n")] = '\0';

    char line[128];
    int found = 0;
    while (fgets(line,sizeof(line),fptrbin)){
        char name[56], id[7];
        float price;
        int shkaf;
        if(sscanf(line, "%[^;];%[^;];%f;%d", name, id, &price, &shkaf)){
            if(strcmp(id, surch) == 0){
                printf("\n---------\n");
                printf("Bin Names: %s\n", name);
                printf("Bin ID: %s\n", id);
                printf("Bin M-price: %f\n", price);
                printf("Bin Shkaf: %d\n", shkaf);
                found = 1;
                break;
            }
        }
    }

    if (!found){
        printf("nqq hora");
    }
    fclose(fptrbin);
}


int main(){
    FILE *fptr = fopen("members.txt", "a");
    if(!fptr){
        printf("members.txt not open");
        return 1;
    }
    

    int len = 0, capacity = 10;
    
    struct Info *members = malloc(sizeof(struct Info) * capacity);
    struct Info member;
        
    //appendUsers(fptr,&members,&len,&capacity);

    //showbellowAverage(fptr,members,len);
    
    surchBin(members,len);
    
    
    fclose(fptr);
    return 0;
}
