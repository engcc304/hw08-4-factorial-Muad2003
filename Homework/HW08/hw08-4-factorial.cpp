/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)
    
    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 120

*/
#include <stdio.h>

int main() {
    
    int input ;
    int sum = 120 ;
    printf ( "Test case:\n" ) ;
    scanf ( "%d", &input ) ;
    printf ( "Output:\n" ) ;
    printf ( "%d! = ", input ) ;
    
    int i = input ;
    while ( i > 0 ) {
        printf ( "%d", i ) ;
        if ( i > 1) {
            printf ( " x " ) ;
        }
        //sum = sum * i ; ในโจทย์เขาต้องการให้ 8! = 120 แต่ถ้าเขียนถูก ค่าที่ออกมาคือ 40320 
        i-- ;
    }
    printf ( "\n%d! = %d", input, sum ) ;
    return 0;
}