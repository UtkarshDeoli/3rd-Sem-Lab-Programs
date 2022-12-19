//Q11.Write a C program to implement Kurskal’s algorithm
// Kruskal's algorithm in C

#include <stdio.h>

typedef struct edge {
  int u, v, w;
} edge;

typedef struct edge_list {
  edge data[100];
  int n;
} edge_list;

edge_list elist;

int Graph[100][100], n;
edge_list spanlist;

void kruskalAlgo();
int find(int belongs[], int vertexno);
void applyUnion(int belongs[], int c1, int c2);
void sort();
void print();

void kruskalAlgo() {
  int belongs[100], i, j, cno1, cno2;
  elist.n = 0;

  for (i = 1; i < n; i++)
    for (j = 0; j < i; j++) {
      if (Graph[i][j] != 0) {
        elist.data[elist.n].u = i;
        elist.data[elist.n].v = j;
        elist.data[elist.n].w = Graph[i][j];
        elist.n++;
      }
    }

  sort();

  for (i = 0; i < n; i++)
    belongs[i] = i;

  spanlist.n = 0;

  for (i = 0; i < elist.n; i++) {
    cno1 = find(belongs, elist.data[i].u);
    cno2 = find(belongs, elist.data[i].v);

    if (cno1 != cno2) {
      spanlist.data[spanlist.n] = elist.data[i];
      spanlist.n = spanlist.n + 1;
      applyUnion(belongs, cno1, cno2);
    }
  }
}

int find(int belongs[], int vertexno) {
  return (belongs[vertexno]);
}

void applyUnion(int belongs[], int c1, int c2) {
  int i;

  for (i = 0; i < n; i++)
    if (belongs[i] == c2)
      belongs[i] = c1;
}
void sort() {
  int i, j;
  edge temp;

  for (i = 1; i < elist.n; i++)
    for (j = 0; j < elist.n - 1; j++)
      if (elist.data[j].w > elist.data[j + 1].w) {
        temp = elist.data[j];
        elist.data[j] = elist.data[j + 1];
        elist.data[j + 1] = temp;
      }
}


int main() {
  int i, j, total_cost;

  n = 6;
    printf("Enter Graph :");
    for(int i =0 ; i<6 ; i++)
    {
        for(int j = 0; j<=6; j++)
        {
            scanf("%d",&Graph[i][j]);
        }
    }

  kruskalAlgo();
  int x, cost = 0;

  for (x = 0; x < spanlist.n; x++) {
    printf("\n%d - %d : %d", spanlist.data[x].u, spanlist.data[x].v, spanlist.data[x].w);
    cost = cost + spanlist.data[x].w;
  }

  printf("\nSpanning tree cost: %d", cost);
}