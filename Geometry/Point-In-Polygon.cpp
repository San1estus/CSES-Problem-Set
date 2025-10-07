#include <bits/stdc++.h>
#include <cmath>
#define all(a) a.begin(), a.end()
#define sz(a)  (int)a.size()
#define MOD 1000000007
#define MAXN 1000001
#define ll long long
using namespace std;

enum orientacion{
    COLLINEAL = 0,
    LEFT = 1,
    RIGHT = 2
};

enum inOrOut{
    ON = 0,
    IN = 1,
    OUT = 2
};

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

double dot(point p, point q){
    return (double)p.x*q.x+ (double)p.y*q.y;
}

bool operator<(point p, point q){
    return (p.x < q.x || (p.x == q.x && p.y < q.y));
}

long long int sqnorm(point p){
    return dot(p,p);
}

bool inBounds(point p, point q, point r){
    return (r.x <= max(p.x, q.x) && r.x >= min(p.x, q.x) && r.y <= max(p.y, q.y) && r.y >= min(p.y, q.y));
}

int orientation(point p, point q, point r){ 
    long long int val = cross(p-r, q-r);
    if(val == 0) return COLLINEAL;
    return (val > 0 ? LEFT : RIGHT);
}


bool intersect(point p, point q, point r, point l){
    int pqr = orientation(p, q, r);
    int pql = orientation(p, q, l);
    int rlp = orientation(r, l, p);
    int rlq = orientation(r, l, q);

    if(pqr != pql && rlp != rlq) return true;

    if(pqr == COLLINEAL && inBounds(p, q, r)) return true;
    if(pql == COLLINEAL && inBounds(p, q, l)) return true;
    if(rlp == COLLINEAL && inBounds(r, l, p)) return true;
    if(rlq == COLLINEAL && inBounds(r, l, q)) return true;

    return false;
}

double angle(point p, point q, point r){
    point qp = q-p, rp = r-p;

    double cos_angle = dot(qp, rp) / ((double)sqrt(sqnorm(qp)) * (double)sqrt(sqnorm(rp)));

    if (cos_angle > 1.0) cos_angle = 1.0;
    if (cos_angle < -1.0) cos_angle = -1.0;
    return acos(cos_angle);
}


int insidePolygon(point p, const vector<point>& points){
    int n = sz(points);
    if (n < 3) return OUT;

    for(int i = 0; i < n; i++){
        point p1 = points[i];
        point p2 = points[(i + 1) % n];
        
        if(orientation(p1, p2, p) == COLLINEAL && inBounds(p1, p2, p)){
            return ON;
        }
    }

    double sum = 0.0;
    for(int i = 0; i < n; i++){
        point p1 = points[i];
        point p2 = points[(i + 1) % n];

        double ang = angle(p, p1, p2); 

        if(orientation(p, p1, p2) == LEFT){ 
            sum += ang; 
        } else {
            sum -= ang;
        }
    }

    double TWO_PI = 2.0 * acos(-1.0);
    double epsilon = 1e-9; 
    
    if (fabs(fabs(sum) - TWO_PI) < epsilon) {
        return IN;
    }
    
    return OUT; 
}
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<point> points(n);
    for(int i = 0; i < n; i++){
        cin >> points[i].x >> points[i].y;
    }

    while(m--){
        point p;
        cin >> p.x >> p.y;
        
        string ans;
        if(insidePolygon(p, points) == ON) cout << "BOUNDARY\n";
        else{
            cout << (insidePolygon(p, points) == IN ? "INSIDE\n" : "OUTSIDE\n");
        }
    }
    return 0;
}