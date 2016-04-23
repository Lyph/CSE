#include <iostream>
#include <algorithm>

using namespace std;

struct AppRect {

	int x, y;
	int w, h;

	AppRect() {
		x = 0;
		y = 0;
		w = 0;
		h = 0;
	}

	AppRect(int a, int b, int c, int d) {
		x = a;
		y = b;
		w = c;
		h = d;
	}
};

struct AppWindow {

	AppRect* r;

	AppWindow() {}

	AppWindow(int x, int y, int w, int h) {
		r = new AppRect(x, y, w, h);
	}

	AppWindow(const AppRect& rec) {
		r = new AppRect(rec.x, rec.y, rec.w, rec.h);
	}

	const AppRect& rect() {
		return *r;
	}

	virtual void resize(int w, int h) {
		r->w = w;
		r->h = h;
	}
};

struct RectWin : public AppWindow {

	RectWin() {}

	RectWin(int x, int y, int w, int h) {
		r = new AppRect(x, y, w, h);
	}

	RectWin(const AppRect& rec) {
		r = new AppRect(rec.x, rec.y, rec.w, rec.h);
	}

	void resize(int w, int h) {
		r->w = w;
		r->h = h;
		cout << "area: " << (r->w * r->h) << endl;
	}
};

struct CircleWin : public AppWindow {

	CircleWin() {}

	CircleWin(int x, int y, int w, int h) {
		r = new AppRect(x, y, w, h);
	}

	CircleWin(const AppRect& cir) {
		r = new AppRect(cir.x, cir.y, cir.w, cir.h);
	}

	void resize(int w, int h) {
		r->w = w;
		r->h = h;
		cout << "radius: " << min(r->w, r->h) << endl;
	}
};

