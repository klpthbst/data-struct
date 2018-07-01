/*
1.	 Consider an array MARKS[20][5] which stores the
marks obtained by 20 students in 5 subjects. Now
write a program to

(a)	 find the average marks obtained in each
subject.

(b)	 find the average marks obtained by every
student.

(c)	 find the number of students who have scored
below 50 in their average.

(d)	 display the scores obtained by every student.
*/
#include "ft_int_array.c"

#define ROWS 20
#define COLS 5
#define PRIME 13907
#define MIN_SCORE 0
#define MAX_SCORE 100
#define AVERAGE_SCORE 50

int     main(void) {
    int marks[ROWS][COLS];
    int average;
    int more_than_average_count;
    int score;

    score = 0;
    more_than_average_count = 0;
    average = 0;

    /* fill array */
    for(int i = 0; i < ROWS; ++i) {
        init_array(marks[i], COLS, MIN_SCORE, MAX_SCORE, (long long) i * PRIME);
    }

    /* a */
    for(int i = 0; i < COLS; ++i) {
        average = 0;
        for(int j = 0; j < ROWS; ++j) {
            average += marks[j][i];
        }
        average /= ROWS;
        printf("average marks obtained at the %d-th subject is %4d\n", i + 1, average);
    }
    printf("***************\n");
    printf("***************\n");

    /* b, c */
    printf("average marks obtained by student\n");
    for(int i = 0; i < ROWS; i ++) {
        average = 0;
        for (int j = 0; j < COLS; j++) {
            average += marks[i][j];
        }
        average /= COLS;
        printf("student %4d : obtained %4d\n", i, average);
        if (average > AVERAGE_SCORE)
            more_than_average_count++;
    }
    printf("***************\n");
    printf("***************\n");
    char *stud = more_than_average_count == 1 ? "student" : "students";
    printf("%d %s got more then %d average score\n", more_than_average_count, stud, AVERAGE_SCORE);
    printf("***************\n");
    printf("***************\n");

    /* d */
    for (int i = 0; i < ROWS; ++i) {
        printf("%4d student obtained: ", i + 1);
        score = 0;
        for(int j = 0; j < COLS; ++j) {
            score += marks[i][j];
        }
        printf("%d points\n", score);
    }


    return 0;
}