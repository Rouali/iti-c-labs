#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};
struct Volume {
    struct Distance length;
    struct Distance width;
    struct Distance height;
};

int main() {
    struct Volume room = {{10, 6} , {12, 0} , {8, 3}};
    float length_feet = room.length.feet + (room.length.inches / 12.0);
    float width_feet = room.width.feet + (room.width.inches / 12.0);
    float height_feet = room.height.feet + (room.height.inches / 12.0);
    float volume = length_feet * width_feet * height_feet;
    printf("The volume of the room is: %.2f cubic feet\n", volume);

    return 0;
}
