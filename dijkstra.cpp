#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // Thư viện cho exit()

using namespace std;

const int MAX_SIZE = 100;
const int oo = 32000;
const int SPACE = 10;

void readGraphFromFile(const string& filename, int G[][MAX_SIZE], int& n, int& m) {
    ifstream file(filename);
    if (!file) {
        cerr << "Khong the mo file." << endl;
        exit(0);
    }

    file >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            G[i][j] = 0;
        }
    }

    int u, v, w;
    for (int i = 1; i <= m; i++) {
        file >> u >> v >> w;
        G[u][v] = w;
        G[v][u] = w;
    }

    file.close();
}

int minDis(int d[], bool daXet[], int n) {
    int min = oo, iMin;
    for (int i = 1; i <= n; i++) {
        if (!daXet[i] && (d[i] <= min)) {
            min = d[i];
            iMin = i;
        }
    }
    return iMin;
}

void printPath(int p[], int s, int f) {
    if (f == s) {
        cout << s;
        return;
    }
    printPath(p, s, p[f]);
    cout << "-->" << f;
}

void dijkstra(int G[][MAX_SIZE], int d[], int p[], int n, int s, int f, bool daXet[]) {
    for (int i = 1; i <= n; i++) {
        d[i] = oo;
        p[i] = 0;
        daXet[i] = false;
    }
    d[s] = 0;

    // in bang

    for (int i = 0; i <= n; i++) printf("%15d", i);  // in tieu de
    printf("\n");
    printf("%15s", "Ktao");
    for (int i = 1; i <= n; i++) {
        string sDi = (d[i] == oo)? "oo" : string(to_string(d[i]));
        string sPi = string(to_string(p[i]));
        string s = "(" + sDi + ", " + sPi + ")";
        printf("%15s", s.c_str());  // in tieu de
    }
    printf("\n");

    for (int i = 1; i <= n - 1; i++) {
        int u = minDis(d, daXet, n);
        daXet[u] = true;
        for (int v = 1; v <= n; v++) {
            if (!daXet[v] && G[u][v] > 0 && d[u] != oo && d[u] + G[u][v] < d[v]) {
                d[v] = d[u] + G[u][v];
                p[v] = u;
            }
        }
        printf("%15d", i);
        for (int j = 1; j <= n; j++) {
            string sDj = (d[j] == oo)? "oo" : string(to_string(d[j]));
            string sPj = string(to_string(p[j]));
            string s = "(" + sDj + ", " + sPj + ")";
            printf("%15s", s.c_str());  
        }
    printf("\n");
        
    }

    printPath(p, s, f);
    cout <<"\nDo dai duong di: " << d[f] << endl;
}

int main() {
    int G[MAX_SIZE][MAX_SIZE] = {};  // khai bao va gan 0 cho cac phan tu
    int n, m;
    int s, f;

    string filename = ""; 
    cout << "Nhap ten file data cua do thi: ";
    cin >> filename;

    readGraphFromFile(filename, G, n, m);

    // In ma trận kề
    cout << "Ma tran ke:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << G[i][j] << "\t";
        }
        cout << endl;
    }

    int p[MAX_SIZE];
    bool daXet[MAX_SIZE];
    int d[MAX_SIZE];

    cout << "Nhap dinh bat dau: ";
    cin >> s;
    cout << "Nhap dinh ket thuc: ";
    cin >> f;

    dijkstra(G, d, p, n, s, f, daXet);

    return 0;
}