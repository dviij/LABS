#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100
typedef struct {
    int num_vertices;
    int adj_matrix[MAX_VERTICES][MAX_VERTICES];
} Graph;

void dfs(Graph* graph, int vertex, int* visited, int* push_order, int* pop_order, int* push_index, int* pop_index) {
    visited[vertex] = 1;
    push_order[(*push_index)++] = vertex;
    int i;
    for (i = 0; i < graph->num_vertices; i++) {
        if (graph->adj_matrix[vertex][i] && !visited[i]) {
            dfs(graph, i, visited, push_order, pop_order, push_index, pop_index);
        }
    }
    pop_order[(*pop_index)++] = vertex;
}
int main() {
    Graph graph;
    graph.num_vertices = 5;
    int adj_matrix[5][5] = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 0},
        {0, 1, 0, 1, 1},
        {1, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };
    int i, j;
    for (i = 0; i < graph.num_vertices; i++) {
        for (j = 0; j < graph.num_vertices; j++) {
            graph.adj_matrix[i][j] = adj_matrix[i][j];
        }
    }
    int visited[MAX_VERTICES] = {0};
    int push_order[MAX_VERTICES];
    int pop_order[MAX_VERTICES];
    int push_index = 0;
    int pop_index = 0;
    for (i = 0; i < graph.num_vertices; i++) {
        if (!visited[i]) {
            dfs(&graph, i, visited, push_order, pop_order, &push_index, &pop_index);
        }
    }
    printf("Push order: ");
    for (i = 0; i < graph.num_vertices; i++) {
        printf("%d ", push_order[i]);
    }
    printf("\nPop order: ");
    for (i = 0; i < graph.num_vertices; i++) {
        printf("%d ", pop_order[i]);
    }
    printf("\n");

    return 0;
}
