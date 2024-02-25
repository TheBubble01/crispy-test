#include<stdio.h>

int main(int argc, char *argv[])
{
	int p = atoi(argv[1]);
	int l, i;
        float al[p], a, b, m;
	if(p < 1)
	{
		goto error;
	}
	else
	{
		goto calculation;
	}
calculation:
        printf("The perimeter is %d\n", p);

	for (l=0; l<p; l++)
	{
		b = (p - l)/2;
                a = l * b;                                        al[l] = a;


		/*if(l == 0)
		{
			if(al[l] == 0)
			{
				printf("\nArea list = {");
			}
			else
			{
				printf("\nArea list = {%.0f, ", al[l]);
			}
		}
		else if(l == p-1)
		{
			printf("%.0f}", al[l-2]);
		}
		else
		{
			printf("%.0f, ", al[l]);
		}*/
	}

	printf("\n\n••••••••♣♣♣••••••••••••\n");
	
	for(i=0; i<p; ++i)
	{
		//m = al[i-1];
		
		if(m < al[i])
		{
			m = al[i];
		}
		else                                              {
			m = m;
		}
	}
	
	printf("\n%.0f\n", m);
	printf("•••••••••••••••••√√√√√√√√√•••••\n");


error:
	
	printf("Invalid perimeter");

	return (0);
}
