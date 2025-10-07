#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;

struct point{
    long long int x;
    long long int y;

    point(): x(0), y(0) {}
    point(long long int x0, long long int y0): x(x0), y(y0) {}
    point& operator+=(point o){
        x += o.x;
        y += o.y;
        return *this;
    }
    point& operator-=(point o){
        x -= o.x;
        y -= o.y;
        return *this;
    }
    point& operator*=(double o){
        x *= o;
        y *= o;
        return *this;
    }

    bool operator==(point o){
        return (x == o.x && y == o.y);
    }
};

point operator-(point p, point q){
    return point(p.x-q.x, p.y-q.y);
}
point operator+(point p, point q){
    return point(p.x+q.x, p.y+q.y);
}
point operator-(point p){
    return point(-p.x, -p.y);
}
point operator*(point p, long long int esc){
    return point(esc*p.x, esc*p.y);
}
point operator*(long long int esc, point p){
    return point(esc*p.x, esc*p.y);
}

long long int cross(point p, point q){
    return p.x*q.y - q.x*p.y;
}

long long int dot(point p, point q){
    return p.x*q.x+p.y*q.y;
}

long long int sqnorm(point p){
    return dot(p,p);
}

bool collinear(point p, point q, point r){
    return (cross(p-q, p-r) == 0);
}

bool ccw(point p, point q, point r){
    return cross(p-q, p-r) > 0;
}


int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        point p, q, r;
        cin >> p.x >> p.y;
        cin >> q.x >> q.y;
        cin >> r.x >> r.y;

        if(collinear(p, q, r)){
            cout << "TOUCH" << '\n';
        }

        else if(ccw(p, q, r)){
            cout << "LEFT" << '\n';
        }

        else{
            cout << "RIGHT" << '\n';
        }
        
    }
    return 0;
}