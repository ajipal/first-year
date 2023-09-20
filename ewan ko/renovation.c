#include <stdio.h>

// struct combines the two variable that I need in calculating the cost in function item_cost
struct Item
{
    float cost;
    char name[100];
};

int room_size(int, int);

float item_cost(struct Item[], int);

int main() 
{
    
    int room, wid, len, sqr_meter, data;
    float total;
    
    printf("House Renovation\n");
    printf("=================\n");

    printf("How many room/s: ");
    scanf("%d", &room);
    
    printf("length: ");
    scanf("%d", &len);
    
    printf("width: ");
    scanf("%d", &wid);
    
    sqr_meter = room_size(len, wid);
    
    //I initialized items into 100 arrays
    struct Item items[100];
    
    printf("Enter number of items per room: ");
    scanf("%d", &data);

    //by using struct, the structure of for loop became clean since you only need to call the items[i].(variable)

    for (int i = 0; i < data; i++)
    {
        printf("item %d: ", i + 1);
        scanf("%s", &items[i].name);
        printf("cost: ");
        scanf("%f", &items[i].cost);
    }
    
    // you only put items in the actual parameter since it is the defined struct name
    total = item_cost(items, data);
    
    printf("=====================================\n");

    printf("The square meter of each room is %d\n", sqr_meter);
    printf("There are %d items in each room\n", data);
    printf("Total of House Renovation: $%.2f\n", total);
    
    return 0;
}


int room_size(int len, int wid)
{
    return len * wid;
}

float item_cost(struct Item items[], int data)
{
    // we initialized result to 0 so that it will not get an error
    float result = 0.0;
    
    for (int i = 0; i < data; i++)
    {
        result += items[i].cost;
    }
    
    return result;
}