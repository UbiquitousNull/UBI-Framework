#include <math.h>
#include "math/utilmath.h"
#include "math/vector/vec3.h"

/* Vector arithmetic */
vector3 vecAdd(vector3 v1, vector3 v2) {
	v1.x += v2.x;
	v1.y += v2.y;
	v1.z += v2.z;
	return v1;
}

vector3 vecSub(vector3 v1, vector3 v2) {
	v1.x -= v2.x;
	v1.y -= v2.y;
	v1.z -= v2.z;
	return v1;
}

/* Scalar Multiplication & Division */
vector3 vecMuilt(vector3 v1, double k1) {
	v1.x *= k1;
	v1.y *= k1;
	v1.z *= k1;
	return v1;
}

vector3 vecDiv(vector3 v1, double k1) {
	if (k1 == 0) { return v1; }
	v1.x /= k1;
	v1.y /= k1;
	v1.z /= k1;
	return v1;
}

/* Magnitude & Normalization */
double vecMag(vector3 v1) {
	return sqrt(v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
}

vector3 Normalise(vector3 v1) {
	double mag = vecMag(v1);
	if (mag == 0) { return v1; }
	v1.x /= mag;
	v1.y /= mag;
	v1.z /= mag;
	return v1;
}

/* Dot Product */
double vecDot(vector3 v1, vector3 v2) {
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

double vecAngle(vector3 v1, vector3 v2) {
	return acos((v1.x*v2.x+v1.y*v2.y+v1.z*v2.z)/(sqrt(v1.x*v1.x+v1.y*v1.y+v1.z*v1.z)*sqrt(v2.x*v2.x+v2.y*v2.y+v2.z*v2.z)))*(180 / M_PI);
}

double vecSimilarity(vector3 v1, vector3 v2) {
    double mag1 = vecMag(v1);
    double mag2 = vecMag(v2);
    if (mag1 == 0 || mag2 == 0) { return 0; }
    return vecDot(v1, v2) / (mag1 * mag2);
}
