#include "Canvas.h"
#include <string.h>
#include <stdio.h>

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	matrix = (char**)(malloc(width * sizeof(char*)));
	for (int i = 0; i < width; i++)
		matrix[i] = (char*)(malloc(height * sizeof(char)));
		
}
void Canvas::Printt()
{
	for (int i = 0; i < this->width; i++)
	{
		for (int j = 0; j < this->height; j++)
			printf("%c ",this->matrix[i][j]);
		printf("\n");
	}
}
void Canvas::Clear()
{
	for (int i = 0; i < this->width; i++)
	{
		for (int j = 0; j < this->height; j++)
			this->matrix[i][j]=' ';
	}
}
void Canvas::DrawCircle(int x, int y, int r, char ch)
{
	Clear();
	for(int i=0;i<this->width;i++)
		for (int j = 0; j < this->height; j++)
		{ 
			
		if(!((i - x) * (i - x) + (j - y) * (j - y) >= r * (r - 1)) && !((i - x) * (i - x) + (j - y) * (j - y) < (r - 1) * (r - 1)))
				this->matrix[i][j] = ch;
				/*
				if (((i - x)*(i - x) + (j - y)*(j - y) >= r*(r-1)))
				this->matrix[i][j] = ch;
		     	if((i - x) * (i - x) + (j - y) * (j - y) < (r-1) * (r - 1))
				this->matrix[i][j] = ch;
				*/

		}
	
}
void Canvas::FillCircle(int x, int y, int r, char ch)
{
	Clear();
	for (int i = 0; i < this->width; i++)
		for (int j = 0; j < this->height; j++)
		{
			if ((i - x) * (i - x) + (j - y) * (j - y) <= r * (r - 1))
				this->matrix[i][j] = ch;
		}
	
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	Clear();
	for (int i = left; i <= right; i++)
		this->matrix[top][i] = this->matrix[bottom][i] = ch;
	for (int i = top; i <= bottom; i++)
	{
		this->matrix[i][left] = this->matrix[i][right] = ch;
	}
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	Clear();
	for (int j = top; j <= bottom; j++)
	for (int i = left; i <= right; i++)	
	    {
		this->matrix[j][i] = ch;
    	}
}
void Canvas::SetPoint(int x, int y, char ch)
{
	Clear();
	this->matrix[x][y] = ch;
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	Clear();
	int dx = x2 - x1;
	int dy = y2 - y1;
	int d = 2 * dy - dx;
	int y = y1;

	for (int i = x1; i <= x2; i++)
	{
		this->matrix[i][y] = ch;
		if (d > 0)
		{
			y = y + 1;
			d = d - 2 * dx;
		}
		d = d + 2 * dy;
	}
}