#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using std::vector;
using namespace std;
struct Segment {
  int start, end;
};

bool mycompare(Segment a,Segment b){
  return a.end<b.end;
}

vector<int> optimal_points(vector<Segment> &segments) {
  vector<int> points;
  int point;
  sort(segments.begin(),segments.end(),mycompare);
  point=segments[0].end;
  for(int i=0;i<segments.size();i++){
    if(point<=segments[i].end && point >=segments[i].start){
      continue;
    }
    else{
      points.push_back(point);
      point=segments[i].end;
    }
  }
  points.push_back(point);

  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}
