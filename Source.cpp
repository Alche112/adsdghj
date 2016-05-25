#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
	typedef struct note
	{
		int x;
		note *urm;
	};
	typedef struct nume
	{
		char *elev;
		nume *next;
		nume *prec;
		note *primul;
	};
	nume *first, *last;
	void crearenota(int val,nume *k)
	{
		note *p;
		p = (note*)malloc(sizeof(note));
		p->x = val;
		if (k->primul = NULL)
		{

			k->primul = p;
			

		}
		else
		{
			
		}
	}
