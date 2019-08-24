#include <stdio.h>
int main(void)
{
        float ss, bs, h, r, area;
	char pn;

	printf("Enter Choise : ");
	scanf(" %c", &pn);

        switch (pn)
        {
                case 'S':
		{
			printf("Enter Side : ");
        		scanf("%f", &ss);
        		area=(ss*2);
			printf("area is %.2f\n" ,area);
                        break;
		}
		case 'T':
                {
                        printf("Enter Trangle Base : ");
                        scanf("%f", &bs);
			printf("Enter Trangle Height : ");
                        scanf("%f", &h);
                        area=(bs*h/2);
			printf("area is %.2f\n" ,area);
                        break;
                }
		case 'C':
                {
                        printf("Enter Radius : ");
                        scanf("%f", &r);
                        area=((22/7)*r*r);
			printf("area is %.2f\n" ,area);
                        break;
                }
		
        }	
        return 0;
}
