#pragma once
#include "core.h"

const float pi = 3.1415927f;
const double pi_d = 3.14159265358979323846;

void drawCircle(vec<2> center, float radius, unsigned sides = 32);
void drawCircleFilled(vec<2> center, float radius, unsigned sides = 32);
void drawDisc(vec<2> center, float r, float R, vec<4> color1, vec<4> color2, unsigned sides = 32, float rotation = 0.f);
void drawArrow(vec<2> begin, vec<2> end, float size);