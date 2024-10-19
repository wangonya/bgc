#include <stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};

void discount_price(struct car *c, float discount_percentage)
{
    c->price -= (*c).price * (discount_percentage / 100);
}

int main(void)
{
    struct car saturn;
    saturn.name = "Saturn SL/2";
    saturn.price = 16000.99;
    saturn.speed = 175;

    // or struct car saturn = {"Saturn SL/2", 16000.99, 175};
    // or struct car saturn = {.speed=175, .name="Saturn SL/2"};

    printf("Name: %s\n", saturn.name);
    printf("Price: %f\n", saturn.price);
    printf("Speed: %d\n", saturn.speed);

    discount_price(&saturn, 10);
    printf("Price discounted to %f!", saturn.price);
}