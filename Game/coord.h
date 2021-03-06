#ifndef COORD_H 
#define COORD_H 

#include <windows.h>

typedef struct rect {
    short Left;
    short Top;
    short Right;
    short Bottom;
} rect;

typedef struct point {
    short X;
    short Y; 
} point;

static inline point AddPoints(point A, point B)  {
    return (point) {
        .X = A.X + B.X,
        .Y = A.Y + B.Y
    };
}

static inline point SubPoints(point A, point B)  {
    return (point) {
        .X = A.X - B.X,
        .Y = A.Y - B.Y
    };
}

static inline point MulPoint(point A, short B) {
    return (point) {
        .X = A.X * B,
        .Y = A.Y * B 
    };
}

static inline point DivPoint(point A, short B) {
    return (point) {
        .X = A.X / B,
        .Y = A.Y / B
    };
}

static inline int EqualPoints(point A, point B) {
    return A.X == B.X && A.Y == B.Y;
}

#endif
