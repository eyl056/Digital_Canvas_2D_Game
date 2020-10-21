#include "DigitalCanvas2D.h"
#include "RGBColors.h"
#include <iostream>

using namespace std;
using namespace glm;
DigitalCanvas2D my_canvas("shooting game!", 1024, 768);
namespace Colors
{
	const vec3 red = vec3(255.0, 0.0, 0.0) / 255.0f;
	const vec3 green = vec3(0.0, 204.0, 0.0) / 255.0f;
	const vec3 blue = vec3(0.0, 0.0, 255.0) / 255.0f;
	const vec3 gray(vec3(128, 128, 128) / 255.0f);
	const vec3 yellow(vec3(255, 255, 0) / 255.0f);
	const vec3 olive(vec3(128, 128, 0) / 255.0f);
	const vec3 black(vec3(0, 0, 0) / 255.0f);
	const vec3 purple(vec3(153, 0, 153) / 255.0f);
	const vec3 white(vec3(255, 255, 255) / 255.0f);
	const vec3 darkgreen(vec3(0, 102, 0) / 255.0f);
	const vec3 redbrown(vec3(153, 0, 0) / 255.0f);
	const vec3 darkbrown(vec3(102, 0, 0) / 255.0f);
	const vec3 darkblue(vec3(0, 0, 102) / 255.0f);
	const vec3 orange(vec3(255, 153, 51) / 255.0f);
}
class MyTank
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.drawFilledBox(Colors::green, 0.5, 0.2);
		my_canvas.translate(-0.02, 0.2);
		my_canvas.drawFilledBox(Colors::olive, 0.3, 0.18);
		my_canvas.translate(0.28, 0.0);
		my_canvas.drawFilledBox(Colors::darkgreen, 0.26, 0.08);
		my_canvas.endTransformation();
	}
};
class MyCharacter1
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.06, -0.2);
		my_canvas.drawFilledCircle(Colors::gray, 0.05, 100); //character's left leg
		my_canvas.translate(0.12, 0.0);
		my_canvas.drawFilledCircle(Colors::gray, 0.05, 100); //character's right leg
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //character's left arm
		my_canvas.translate(center_.x, center_.y);
		my_canvas.rotate(-30);
		my_canvas.translate(-0.07, -0.14);
		my_canvas.drawFilledBox(Colors::gray, 0.16, 0.16);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //character's right arm
		my_canvas.translate(center_.x, center_.y);
		my_canvas.rotate(30);
		my_canvas.translate(0.07, -0.14);
		my_canvas.drawFilledBox(Colors::gray, 0.16, 0.16);
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.0, 0.03);
		my_canvas.drawFilledCircle(RGBColors::gray, 0.16, 100); //character's head
		my_canvas.translate(0.0, -0.11);
		my_canvas.drawFilledBox(Colors::purple, 0.32, 0.22); //character's body
		my_canvas.translate(0.0, -0.005);
		my_canvas.drawFilledBox(Colors::yellow, 0.2, 0.1); //character's body2
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.06, 0.09);
		my_canvas.drawFilledCircle(Colors::white, 0.04, 100); //character's left eye
		my_canvas.drawFilledCircle(Colors::black, 0.02, 100);
		my_canvas.translate(0.12, 0.0);
		my_canvas.drawFilledCircle(Colors::white, 0.04, 1000); //character's right eye
		my_canvas.drawFilledCircle(Colors::black, 0.02, 100);
		my_canvas.endTransformation();

		return;
	}
};
class MyCharacter2
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.06, -0.2);
		my_canvas.drawFilledCircle(Colors::orange, 0.05, 100); //character's left leg
		my_canvas.translate(0.12, 0.0);
		my_canvas.drawFilledCircle(Colors::orange, 0.05, 100); //character's right leg
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //character's left arm
		my_canvas.translate(center_.x, center_.y);
		my_canvas.rotate(-30);
		my_canvas.translate(-0.07, -0.14);
		my_canvas.drawFilledBox(Colors::orange, 0.16, 0.16);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //character's right arm
		my_canvas.translate(center_.x, center_.y);
		my_canvas.rotate(30);
		my_canvas.translate(0.07, -0.14);
		my_canvas.drawFilledBox(Colors::orange, 0.16, 0.16);
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.0, 0.03);
		my_canvas.drawFilledCircle(Colors::orange, 0.16, 100); //character's head
		my_canvas.translate(0.0, -0.11);
		my_canvas.drawFilledBox(Colors::red, 0.32, 0.22); //character's body
		my_canvas.translate(0.0, -0.005);
		my_canvas.drawFilledBox(Colors::blue, 0.2, 0.1); //character's body2
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.06, 0.09);
		my_canvas.drawFilledCircle(Colors::white, 0.04, 100); //character's left eye
		my_canvas.drawFilledCircle(Colors::black, 0.02, 100);
		my_canvas.translate(0.12, 0.0);
		my_canvas.drawFilledCircle(Colors::white, 0.04, 1000); //character's right eye
		my_canvas.drawFilledCircle(Colors::black, 0.02, 100);
		my_canvas.endTransformation();

		return;
	}
};
class MyCharacter3
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.06, -0.2);
		my_canvas.drawFilledCircle(Colors::green, 0.05, 100); //character's left leg
		my_canvas.translate(0.12, 0.0);
		my_canvas.drawFilledCircle(Colors::green, 0.05, 100); //character's right leg
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //character's left arm
		my_canvas.translate(center_.x, center_.y);
		my_canvas.rotate(-30);
		my_canvas.translate(-0.07, -0.14);
		my_canvas.drawFilledBox(Colors::green, 0.16, 0.16);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //character's right arm
		my_canvas.translate(center_.x, center_.y);
		my_canvas.rotate(30);
		my_canvas.translate(0.07, -0.14);
		my_canvas.drawFilledBox(Colors::green, 0.16, 0.16);
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.0, 0.03);
		my_canvas.drawFilledCircle(Colors::green, 0.16, 100); //character's head
		my_canvas.translate(0.0, -0.11);
		my_canvas.drawFilledBox(Colors::redbrown, 0.32, 0.22); //character's body
		my_canvas.translate(0.0, -0.005);
		my_canvas.drawFilledBox(Colors::white, 0.2, 0.1); //character's body2
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.06, 0.09);
		my_canvas.drawFilledCircle(Colors::white, 0.04, 100); //character's left eye
		my_canvas.drawFilledCircle(Colors::black, 0.02, 100);
		my_canvas.translate(0.12, 0.0);
		my_canvas.drawFilledCircle(Colors::white, 0.04, 1000); //character's right eye
		my_canvas.drawFilledCircle(Colors::black, 0.02, 100);
		my_canvas.endTransformation();

		return;
	}
};
class MyBrick1
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.drawFilledBox(Colors::redbrown, 0.3, 0.4);
		my_canvas.translate(0.0, 0.08);
		my_canvas.drawFilledCircle(Colors::darkbrown, 0.06, 100);
		my_canvas.translate(0.0, -0.16);
		my_canvas.drawFilledCircle(Colors::darkbrown, 0.06, 100);
		my_canvas.endTransformation();
	}
};
class MyBrick2
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.drawFilledBox(Colors::redbrown, 0.3, 0.4);
		my_canvas.translate(0.0, 0.08);
		my_canvas.drawFilledCircle(Colors::darkbrown, 0.06, 100);
		my_canvas.translate(0.0, -0.16);
		my_canvas.drawFilledCircle(Colors::darkbrown, 0.06, 100);
		my_canvas.endTransformation();
	}
};
class MyBullet
{
public:
	vec3 center_;
	vec3 velocity_;

	void draw()
	{
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.drawFilledCircle(RGBColors::red, 0.05, 100);
		my_canvas.endTransformation();
	}

	void update(const float& dt)
	{
		center_ += velocity_*dt;
	}

};
class MyWall
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-1.3, 0.0);
		my_canvas.drawFilledBox(Colors::gray, 0.02, 2);
		my_canvas.endTransformation();
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(1.3, 0.0);
		my_canvas.drawFilledBox(Colors::gray, 0.02, 2);
		my_canvas.endTransformation();
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.0, -1.0);
		my_canvas.drawFilledBox(Colors::gray, 2.6, 0.02);
		my_canvas.endTransformation();
		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.0, 1.0);
		my_canvas.drawFilledBox(Colors::gray, 2.6, 0.02);
		my_canvas.endTransformation();
	}
};
class StartScreen
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation(); //background
		my_canvas.translate(center_.x, center_.y);
		my_canvas.drawFilledBox(Colors::black, 2.6, 2.0);
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.drawFilledCircle(Colors::yellow, 0.3, 100);
		my_canvas.translate(-0.15, -0.4);
		my_canvas.drawFilledCircle(Colors::yellow, 0.1, 100);
		my_canvas.translate(0.3, 0.0);
		my_canvas.drawFilledCircle(Colors::yellow, 0.1, 100);
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.rotate(-30);
		my_canvas.translate(-0.12, -0.3);
		my_canvas.drawFilledBox(Colors::yellow, 0.25, 0.25);
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.rotate(30);
		my_canvas.translate(0.12, -0.3);
		my_canvas.drawFilledBox(Colors::yellow, 0.25, 0.25);
		my_canvas.endTransformation();

		my_canvas.beginTransformation();
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.0, -0.2);
		my_canvas.drawFilledBox(Colors::red, 0.6, 0.4);
		my_canvas.drawFilledBox(Colors::blue, 0.4, 0.2);
		my_canvas.translate(-0.14, 0.3);
		my_canvas.drawFilledCircle(Colors::black, 0.06, 100);
		my_canvas.drawFilledCircle(Colors::white, 0.056, 100);
		my_canvas.drawFilledCircle(Colors::black, 0.04, 100);
		my_canvas.translate(0.28, 0.0);
		my_canvas.drawFilledCircle(Colors::black, 0.06, 100);
		my_canvas.drawFilledCircle(Colors::white, 0.056, 100);
		my_canvas.drawFilledCircle(Colors::black, 0.04, 100);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //H
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.8, 0.6);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.translate(0.1, 0.0);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.translate(0.1, 0.0);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //E
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.5, 0.6);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.translate(0.1, 0.0);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.translate(0.0, 0.135);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.translate(0.0, -0.27);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //LL
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.2, 0.6);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.translate(0.084, -0.14);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.translate(0.2, 0.14);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.translate(0.085, -0.14);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //0
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.45, 0.59);
		my_canvas.scale(0.8, 1.1);
		my_canvas.drawFilledCircle(Colors::orange, 0.15, 100);
		my_canvas.drawFilledCircle(Colors::black, 0.12, 100);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //!
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.7, 0.63);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.25);
		my_canvas.translate(0.0, -0.17);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.03);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //!
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.85, 0.63);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.25);
		my_canvas.translate(0.0, -0.17);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.03);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //stars
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-1.1, 0.4);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.translate(0.3, -0.6);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.translate(-0.2, -0.6);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.translate(0.6, 0.3);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.translate(0.8, -0.2);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.translate(0.4, 0.3);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.translate(-0.2, 0.5);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.translate(0.5, 0.1);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.translate(0.1, -1.0);
		my_canvas.drawFilledCircle(Colors::white, 0.05, 7);
		my_canvas.endTransformation();
	}
};
class EndScreen
{
public:
	vec3 center_;
	vec3 direction_;

	void draw()
	{
		my_canvas.beginTransformation(); //background
		my_canvas.translate(center_.x, center_.y);
		my_canvas.drawFilledBox(Colors::black, 2.6, 2.0);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //T
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.8, 0.73);
		my_canvas.drawFilledBox(Colors::orange, 0.25, 0.03);
		my_canvas.translate(0.0, -0.15);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //H
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.6, 0.6);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.translate(0.1, 0.0);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.translate(0.1, 0.0);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //E
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.3, 0.6);
		my_canvas.drawFilledBox(Colors::orange, 0.03, 0.3);
		my_canvas.translate(0.1, 0.0);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.translate(0.0, 0.135);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.translate(0.0, -0.27);
		my_canvas.drawFilledBox(Colors::orange, 0.2, 0.03);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //E
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.6, -0.25);
		my_canvas.drawFilledBox(Colors::white, 0.03, 0.56);
		my_canvas.translate(0.19, 0.0);
		my_canvas.drawFilledBox(Colors::white, 0.4, 0.03);
		my_canvas.translate(0.0, 0.27);
		my_canvas.drawFilledBox(Colors::white, 0.4, 0.03);
		my_canvas.translate(0.0, -0.54);
		my_canvas.drawFilledBox(Colors::white, 0.4, 0.03);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //N
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(-0.1, -0.25);
		my_canvas.drawFilledBox(Colors::white, 0.03, 0.56);
		my_canvas.translate(0.19, 0.0);
		my_canvas.rotate(35);
		my_canvas.drawFilledBox(Colors::white, 0.03, 0.65);
		my_canvas.rotate(-35);
		my_canvas.translate(0.19, 0.0);
		my_canvas.drawFilledBox(Colors::white, 0.03, 0.56);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //D
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.4, -0.25);
		my_canvas.drawFilledBox(Colors::white, 0.03, 0.56);
		my_canvas.translate(0.2, 0.11);
		my_canvas.rotate(50);
		my_canvas.drawFilledBox(Colors::white, 0.03, 0.5);
		my_canvas.rotate(-110);
		my_canvas.translate(0.23, -0.14);
		my_canvas.drawFilledBox(Colors::white, 0.03, 0.46);
		my_canvas.endTransformation();

		my_canvas.beginTransformation(); //flower
		my_canvas.translate(center_.x, center_.y);
		my_canvas.translate(0.6, 0.55);
		my_canvas.rotate(90);
		my_canvas.drawFilledBox(Colors::yellow, 0.4, 0.4);
		my_canvas.rotate(45);
		my_canvas.drawFilledBox(Colors::yellow, 0.4, 0.4);
		my_canvas.drawFilledCircle(Colors::red, 0.22, 100);
		my_canvas.drawFilledCircle(Colors::green, 0.16, 100);
		my_canvas.rotate(90);
		my_canvas.drawFilledBox(Colors::orange, 0.3, 0.32);
		my_canvas.rotate(45);
		my_canvas.drawFilledBox(Colors::orange, 0.3, 0.32);
		my_canvas.drawFilledCircle(Colors::purple, 0.17, 100);
		my_canvas.rotate(90);
		my_canvas.drawFilledBox(Colors::yellow, 0.22, 0.22);
		my_canvas.rotate(45);
		my_canvas.drawFilledBox(Colors::yellow, 0.22, 0.22);
		my_canvas.drawFilledCircle(Colors::red, 0.11, 100);
		my_canvas.rotate(90);
		my_canvas.drawFilledBox(Colors::green, 0.1, 0.1);
		my_canvas.rotate(45);
		my_canvas.drawFilledBox(Colors::green, 0.1, 0.1);
		my_canvas.endTransformation();
	}
};
class GameBackground {
public:
	vec3 center_;
	vec3 direction_;

	void draw() {
		//game background
		my_canvas.beginTransformation();
		my_canvas.drawFilledBox(Colors::black, 2.6, 2.0);
		my_canvas.endTransformation();
	}
};
class Collision1 {
public:
	vec3 center_;
	vec3 direction_;

	void draw(int i) {
		if (i == 1) {
			my_canvas.beginTransformation();
			my_canvas.translate(center_.x, center_.y);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::orange, 0.3, 0.32);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::orange, 0.3, 0.32);
			my_canvas.drawFilledCircle(Colors::purple, 0.17, 100);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::yellow, 0.22, 0.22);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::yellow, 0.22, 0.22);
			my_canvas.drawFilledCircle(Colors::red, 0.11, 100);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::green, 0.1, 0.1);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::green, 0.1, 0.1);
			my_canvas.endTransformation();
		}
	}
};
class Collision2 {
public:
	vec3 center_;
	vec3 direction_;

	void draw(int i) {
		if (i == 1) {
			my_canvas.beginTransformation();
			my_canvas.translate(center_.x, center_.y);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::white, 0.3, 0.32);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::white, 0.3, 0.32);
			my_canvas.drawFilledCircle(Colors::blue, 0.17, 100);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::green, 0.22, 0.22);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::green, 0.22, 0.22);
			my_canvas.drawFilledCircle(Colors::purple, 0.11, 100);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::red, 0.1, 0.1);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::red, 0.1, 0.1);
			my_canvas.endTransformation();
		}
	}
};
class Collision3 {
public:
	vec3 center_;
	vec3 direction_;

	void draw(int i) {
		if (i == 1) {
			my_canvas.beginTransformation();
			my_canvas.translate(center_.x, center_.y);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::yellow, 0.3, 0.32);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::yellow, 0.3, 0.32);
			my_canvas.drawFilledCircle(Colors::purple, 0.17, 100);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::red, 0.22, 0.22);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::red, 0.22, 0.22);
			my_canvas.drawFilledCircle(Colors::green, 0.11, 100);
			my_canvas.rotate(90);
			my_canvas.drawFilledBox(Colors::purple, 0.1, 0.1);
			my_canvas.rotate(45);
			my_canvas.drawFilledBox(Colors::purple, 0.1, 0.1);
			my_canvas.endTransformation();
		}
	}
};
int main(void)
{
	//콘솔창 시작화면
	cout << "\n\n=======================쏴라 스트레스 팡팡==========================\n\n\n";
	cout << "                                                    made by 이은영\n";
	cout << "        ■■■■  \n      ■■    ■■ \n    ■■        ■■\n    ■  ■    ■  ■\n    ■";
	cout << "■■■■■■■\n    ■            ■\n    ■  ■■■■  ■\n    ■            ■\n";
	cout << "    ■■■■■■■■\n      ■  ■■  ■  \n        ■    ■\n\n";
	cout << "\n\n*****************게임을 시작하려면 C, 종료하려면 E를 누르세요********************\n";
	cout << "\n\n*****************BE HAPPY********************\n";

	MyTank tank;
	GameBackground background;
	MyCharacter1 character1;
	MyCharacter2 character2;
	MyCharacter3 character3;
	MyBrick1 brick1;
	MyBrick2 brick2;
	MyWall wall;
	StartScreen start;
	EndScreen end;
	Collision1 boom1;
	Collision2 boom2;
	Collision3 boom3;
	MyBullet bullet;


	my_canvas.show([&]
	{
		srand((unsigned int)time(NULL));
		rand() % 100;
		float time = 0.0;

		// update
		int a = 0;

		if (a == 0)
		{
			start.draw();
			if (my_canvas.isKeyPressed(GLFW_KEY_C)) { a++; } //gameplaying
															 //start
		}

		if (a == 1)
		{

			background.draw();

			// move tank
			if (my_canvas.isKeyPressed(GLFW_KEY_LEFT))	tank.center_.x -= 0.003;
			if (my_canvas.isKeyPressed(GLFW_KEY_RIGHT))	tank.center_.x += 0.003;
			if (my_canvas.isKeyPressed(GLFW_KEY_UP))	tank.center_.y += 0.003;
			if (my_canvas.isKeyPressed(GLFW_KEY_DOWN))	tank.center_.y -= 0.003;

			// shoot a cannon ball
			if (my_canvas.isKeyPressed(GLFW_KEY_SPACE))
			{
				bullet.center_ = tank.center_;
				bullet.center_.x += 0.4;
				bullet.center_.y += 0.2;
				bullet.velocity_ = vec3(0.3, 0.0, 0.0);
			}
			bullet.update(1 / 60.0f);
			bullet.draw();

			int collision = 0;
			//rendering
			tank.draw();
			wall.draw();


			character1.draw();
			character1.center_.x = 1.0;
			boom1.center_.x = 1.0;
			const int dice1 = rand() % 5;
			switch (dice1)
			{
			case 0:
				character1.center_.x -= 0.1;
				boom1.center_.x -= 0.1;
			case 1:
				character1.center_.x -= 0.2;
				boom1.center_.x -= 0.2;
			case 2:
				character1.center_.x -= 0.3;
				boom1.center_.x -= 0.3;
			case 3:
				character1.center_.x -= 0.4;
				boom1.center_.x -= 0.4;
			case 4:
				character1.center_.x -= 0.15;
				boom1.center_.x -= 0.15;
			}
			character1.center_.y = 0.7;
			boom1.center_.y = 0.7;
			int p = 0;
			if (bullet.center_.x > character1.center_.x&&bullet.center_.y<1.05&&bullet.center_.y>0.35) p = 1;
			boom1.draw(p);



			character2.draw();
			character2.center_.x = 1.0;
			boom2.center_.x = 1.0;
			const int dice2 = rand() % 5;
			switch (dice2)
			{
			case 0:
				character2.center_.x -= 0.1;
				boom2.center_.x -= 0.1;
			case 1:
				character2.center_.x -= 0.2;
				boom2.center_.x -= 0.2;
			case 2:
				character2.center_.x -= 0.3;
				boom2.center_.x -= 0.3;
			case 3:
				character2.center_.x -= 0.4;
				boom2.center_.x -= 0.4;
			case 4:
				character2.center_.x -= 0.15;
				boom2.center_.x -= 0.15;
			}
			character2.center_.y = 0.0;
			boom2.center_.y = 0.0;
			int a = 0;
			if (bullet.center_.x > character2.center_.x&&bullet.center_.y<0.35&&bullet.center_.y>-0.35) a = 1;
			boom2.draw(a);



			character3.draw();
			character3.center_.x = 1.0;
			boom3.center_.x = 1.0;
			const int dice3 = rand() % 5;
			switch (dice3)
			{
			case 0:
				character3.center_.x -= 0.1;
				boom3.center_.x -= 0.1;
			case 1:
				character3.center_.x -= 0.2;
				boom3.center_.x -= 0.2;
			case 2:
				character3.center_.x -= 0.3;
				boom3.center_.x -= 0.3;
			case 3:
				character3.center_.x -= 0.4;
				boom3.center_.x -= 0.4;
			case 4:
				character3.center_.x -= 0.15;
				boom3.center_.x -= 0.15;
			}
			character3.center_.y = -0.7;
			boom3.center_.y = -0.7;
			int q = 0;
			if (bullet.center_.x > character3.center_.x&&bullet.center_.y>-1.05&&bullet.center_.y<-0.35) q = 1;
			boom3.draw(q);



			brick1.draw();
			brick1.center_.x = 0.4;
			brick1.center_.y = 0.4;
			brick2.draw();
			brick2.center_.x = 0.4;
			brick2.center_.y = -0.4;

			if (my_canvas.isKeyPressed(GLFW_KEY_E))
			{
				a++;//end
			}
			if (a == 2)
			{
				end.draw();
			}
			time += 0.8 / 60.0;
		}
		

	});

	return 0;
}



