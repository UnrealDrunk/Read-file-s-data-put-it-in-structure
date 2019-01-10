//There is a table containing data of rain fall in the city of Rostov for the last 5 years.
//It is necessary to print a table containing the total rain fall data for each year,
//as well as average data for months for all five years.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef struct Rostov
{
	int year;
	float january;
	float february;
	float march;
	float april;
	float may;
	float june;
	float july;
	float august;
	float september;
	float october;
	float november;
	float december;
}The_year;

float AnnualRainfall(The_year period)
{
	float sum;
	sum = period.january + period.february + period.march + period.april + period.may + period.june + period.july +
		period.august + period.september + period.october + period.november + period.december;
	return sum;
}

int main()
{
	The_year RFP[10];

	FILE* RainFallFile;
	if ((RainFallFile = fopen("C://Rainfall.txt", "r")) == NULL)
	{
		perror("Error occured while opening the file");
		system("Pause");
		return 1;
	}
	char i = 0;
	printf("The Rainfall stats for 2010 -2014 period\n");
	while (fscanf(RainFallFile, "%d %f %f %f %f %f %f %f %f %f %f %f %f", &(RFP[i].year), &(RFP[i].january), &(RFP[i].february),
		&(RFP[i].march), &(RFP[i].april), &(RFP[i].may), &(RFP[i].june), &(RFP[i].july), &(RFP[i].august), &(RFP[i].september),
		&(RFP[i].october), &(RFP[i].november), &(RFP[i].december)) != EOF)
	{
		printf(" The Year: %d: jan: %.1f feb: %.1f mar: %.1f apr: %.1f  may: %.1f jun: %.1f jul: %.1f aug: %.1f sep: %.1f oct: %.1f nov: %.1f dec: %.1f\n",
			RFP[i].year, RFP[i].january, RFP[i].february, RFP[i].march, RFP[i].april, RFP[i].may, RFP[i].june, RFP[i].july,
			RFP[i].august, RFP[i].september, RFP[i].october, RFP[i].november, RFP[i].december);
		i++;
	}

	fclose(RainFallFile);
	printf("\n");
	printf("Annual rain fall stats:\n");
	printf("The Annual Rainfall in the year 2010 is %.1f\n", AnnualRainfall(RFP[0]));
	printf("The Annual Rainfall in the year 2011 is %.1f\n", AnnualRainfall(RFP[1]));
	printf("The Annual Rainfall in the year 2012 is %.1f\n", AnnualRainfall(RFP[2]));
	printf("The Annual Rainfall in the year 2013 is %.1f\n", AnnualRainfall(RFP[3]));
	printf("The Annual Rainfall in the year 2014 is %.1f\n", AnnualRainfall(RFP[4]));

	printf("\n");
	printf("Monthly rain fall stats:\n");

	printf("Average  january rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].january + RFP[1].january + RFP[2].january + RFP[3].january + RFP[4].january) / 5);

	printf("Average  february rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].february + RFP[1].february + RFP[2].february + RFP[3].february + RFP[4].february) / 5);

	printf("Average  march rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].march + RFP[1].march + RFP[2].march + RFP[3].march + RFP[4].march) / 5);

	printf("Average  april rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].april + RFP[1].april + RFP[2].april + RFP[3].april + RFP[4].april) / 5);

	printf("Average  may rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].may + RFP[1].may + RFP[2].may + RFP[3].may + RFP[4].may) / 5);

	printf("Average  june rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].june + RFP[1].june + RFP[2].june + RFP[3].june + RFP[4].june) / 5);

	printf("Average  july rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].july + RFP[1].july + RFP[2].july + RFP[3].july + RFP[4].july) / 5);

	printf("Average  august rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].august + RFP[1].august + RFP[2].august + RFP[3].august + RFP[4].august) / 5);

	printf("Average  september rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].september + RFP[1].september + RFP[2].september + RFP[3].september + RFP[4].september) / 5);

	printf("Average  october rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].october + RFP[1].october + RFP[2].october + RFP[3].october + RFP[4].october) / 5);

	printf("Average  november rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].november + RFP[1].november + RFP[2].november + RFP[3].november + RFP[4].november) / 5);

	printf("Average  december rainfal stas for the period 2010 - 2014 is %.1f\n",
		(RFP[0].december + RFP[1].december + RFP[2].december + RFP[3].december + RFP[4].december) / 5);

	system("Pause");

}
