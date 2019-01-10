
// The program reads file's data into a structure


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct WEAPONS
{
	char Title[30];
	int AmmoCapacity;
	int Range;
	float AtkPower;
	float RPM;
	float Weight;
}Arsenal;


Arsenal WeaponSlot[10];

int main()
{
	FILE* WeaponFile;
	if ((WeaponFile = fopen("C://WeaponsArsenal.txt", "r")) == NULL)
	{
		perror("Error occured while opening the file");
		system("Pause");
		return 1;
	}
	char i = 0; 
	while (fscanf(WeaponFile, "%s %d %d %f %f %f", WeaponSlot[i].Title, &(WeaponSlot[i].AmmoCapacity), &(WeaponSlot[i].Range),
		&(WeaponSlot[i].AtkPower), &(WeaponSlot[i].RPM), &(WeaponSlot[i].Weight)) != EOF)
	{
		printf(" Title: %s AmmoCapacity: %d Range: %d AtkPower: %.1f RPM: %.1f, Weight %.1f\n", WeaponSlot[i].Title,
			WeaponSlot[i].AmmoCapacity, WeaponSlot[i].Range, WeaponSlot[i].AtkPower, WeaponSlot[i].RPM, WeaponSlot[i].Weight);
		i++;
	}
	fclose(WeaponFile);
	system("Pause");


}
