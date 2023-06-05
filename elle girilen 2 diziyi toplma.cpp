#include<stdio.h>
main()
{
	int i,j;
	int satir,sutun;//satýr ve sütun saysýný elimiz ile giriyoruz
	printf("Satir sayisini giriniz:  ");
	scanf("%d",&satir);
	printf("Sutun sayisiniz giriniz:  ");
	scanf("%d",&sutun);
	int matris[satir][sutun];
	for(i=0;i<satir;i++)//satir için döngü
	{
		for(j=0;j<sutun;j++)//sütun için döngü
		{
			printf("\n deger [%d][%d]-->",i+1,j+1);//
			scanf("%d",&matris[i][j]);
		}
	}
	int k,l;
	printf("\n***olusan matris***\n");//matrisi yazdýran döngü
	for(k=0;k<satir;k++)
	{
		for(l=0;l<sutun;l++)
		{
			printf("%4d",matris[k][l]);
		}
		printf("\n");
	}
	int matris1[satir][sutun];
	for(i=0;i<satir;i++)//satir sayisi icin 2. matriste
	{
		for(j=0;j<sutun;j++)//2. matriste sütun sayýsý için
		{
			printf("\n deger [%d][%d]-->",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
	}
	int m,n;
	
	printf("\n***olusan matris***\n");//2. matrisi yazdýrmak için 
	for(m=0;m<satir;m++)
	{
		for(n=0;n<sutun;n++)
		{
			printf("%4d",matris1[m][n]);
		}
		printf("\n");
}
	int tmatris[satir][sutun];
	for(i=0;i<satir;i++)//iki matrisi toplaman için gereken döngü
	{
		for(j=0;j<sutun;j++)
		{
			tmatris[i][j]=matris[i][j]+matris1[i][j];
		}
		printf("\n");
	}
	printf("****************************************************");
	printf("\n <---toplam matris--->\n\n");
		for(m=0;m<satir;m++)//toplam matrisinin satýrý
	{
		for(n=0;n<sutun;n++)//toplam matrisinin sütunu
		{
			printf("%4d",tmatris[m][n]);
		}
		printf("\n");
}

}
