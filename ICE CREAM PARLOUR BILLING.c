#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
    int vr=45,bsr=60,kul=30,cas=65,quan,v=0,bs=0,ca=0,ku=0,fav;
    int ch=5;
    printf("WelCome to Ice Cream Parlour");
    printf("\n\n\nOur Flavours:Venila[1],ButterStoch[2],Cassata[3],Kulfi[4]");
    while(ch==5){
        printf("\n\n\nEnter the required flavour:");
        scanf("%d",&fav);
        printf("Enter the required quantity:");
        scanf("%d",&quan);
        if(fav==1){
         v=v+quan;
        }
        else if(fav==2){
         bs=bs+quan;
        }
        else if(fav==3){
        ca=ca+quan;
        }
        else if(fav==4){
        ku=ku+quan; 
        }
        else{
        printf("INVALIDE DIGIT");
        }
        quan=0;
        printf("\n\n\nWant another flavour:");
        scanf("%d",&ch);
    }
    printf("\n\n\n");
    printf("CREAMY ICECREAM PARLOUR HYDRABAD\n");
    printf("--------------------------------");
    printf("\n\n");
    printf("flovour quantity price amount");
    printf("\n\nVenila      %d     %d     %d",v,vr,v*vr);
    printf("\n\nButterstoch %d     %d     %d",bs,bsr,bs*bsr);
    printf("\n\nCassata     %d     %d     %d",ca,cas,ca*cas);
    printf("\n\nKulfi       %d     %d     %d",ku,kul,ku*kul);
    printf("\n\nAmount payable Rs. %d",(v*vr)+(bs*bsr)+(ca*cas)+(ku*kul));
    printf("\n\n------------------------------");
    getch();
}