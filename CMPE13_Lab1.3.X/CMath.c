#include "CMath.h"

float absolute(float x);

float absolute(float x)
{
    if (x < 0) {
        x = -x;
    }
    return x;
}

float arctangent2(float y, float x)
{
    float r, theta;
    float yabs = absolute(y);
    if (x > 0) {
        r = (x - yabs) / (x + yabs);
        theta = (float) 0.1963 * (r * r * r) - .9817 * r + (3.14159265358979323846 / 4.0);
    } else {
        r = (x + yabs) / (x - yabs);
        theta = (float) 0.1963 * (r * r * r) - .9817 * r + (3 * 3.14159265358979323846 / 4.0);
    }
    if (y < 0) {
        theta = -1.0 * theta;
    }
    return theta;
}

float enorm(float px, float py, float qx, float qy)
{
    float e, g, t, r, s;
    float dx = absolute(qx - px);
    float dy = absolute(qy - py);
    if (dx > dy) {
        g = dx;
        e = dy;
    } else {
        g = dy;
        e = dx;
    }
    float a;
    for (a = 0; a < 2.0; a++) {
        t = e / g;
        r = t*t;
        s = r / (4.0 + r);
        g = g + 2 * s*g;
        e = e * s;
    }
    return g;
}