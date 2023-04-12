#include "main.h"


/**
 * **alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: a pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **twodimensional, x, y;

	twodimensional = malloc(sizeof(*twodimensional) * height);

	if (width <= 0 || height <= 0 || twodimensional == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			twodimensional[x] = malloc(sizeof(**twodimensional) * width);
			if (twodimensional[x] == 0)
			{

				while (x--)
					free(twodimensional[x]);

				free(twodimensional);
				return (NULL);
			}

			for (y = 0; y < width; y++)
				twodimensional[x][y] = 0;
		}
	}

	return (twodimensional);


}
