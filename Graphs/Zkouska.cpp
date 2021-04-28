#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Header.h"

using namespace std;

int main()
{


	int graph[9][9] = {
	{0,1,1,1,0,0,0,0,0},
	{1,0,1,0,0,0,0,0,0},
	{1,1,0,0,0,0,0,0,0},
	{1,0,0,0,1,1,0,0,0},
	{0,0,0,1,0,0,0,0,0},
	{0,0,0,1,0,0,1,1,0},
	{0,0,0,0,0,1,0,0,0},
	{0,0,0,0,0,1,0,0,1},
	{0,0,0,0,0,0,0,1,0} };
	// constant - number of vertexes
	int n = 9;
	// constant - entrance to the maze
	int entrance = 1;
	// constant - exit from the maze
	int ex = 8;
	DeepFirstSearchMaze(graph, n, entrance, ex);
	cout << endl;
	BreadthFirstSearchMaze(graph, n, entrance, ex);
	cout << endl;
    CestaZMazeDeep(graph, n, entrance, ex);
	cout << endl;
	CestaZMazeBreadth(graph, n,entrance,ex);
	cout << endl;
	Konektivita(graph, n);
	cout << endl;
	Komponenty(graph, n);
	cout << endl;
	srand(time(NULL));
	int mojePole[10];
	for (int a = 0; a < 10; a++)
	{
		mojePole[a] = rand() % 10 + 1;
		cout << mojePole[a] << " ";
	}
	//bubbleSort(mojePole, 10);
	//shakerSort(mojePole, 10); 
	//selectSort(mojePole, 10); 
	//quicksort(mojePole, 0, 10); 
	insertionSort(mojePole, 10);
	//radixsort(mojePole, 10); 
	cout << endl;
	for (int a = 0; a < 10; a++)
	{
		cout << mojePole[a] << " ";
	}

	return 0;
}
