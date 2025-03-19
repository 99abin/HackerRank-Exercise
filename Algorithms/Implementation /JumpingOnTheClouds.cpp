#include <iostream>
#include <vector>

using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int energy = 100, counter = 0;
    do {
        if (c[counter] == 0) {
            energy -= 1; 
        } else {
            energy -= 3; 
        }
        counter = (counter + k) % c.size(); 
    } while (counter != 0);
    
    return energy;
}

int main() {
    int list, dist, temp;
    cin >> list >> dist;
    vector<int> clouds;
    for (int i = 0; i < list; i++) {
        cin >> temp;
        clouds.push_back(temp);
    }
    
    cout << jumpingOnClouds(clouds, dist);
}
