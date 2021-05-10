## Tổng kết tuần 1 ##
### Các tips trong CP:
* Tip 1 : Gõ code nhanh hơn </br>
    * Đây là 1 kỹ năng cơ bản nhưng lại khá là quan trọng , việc gõ code nhanh hơn có thể khiến thứ hạng trên bảng rank của team cao hơn và tiết kiệm thời gian để giải quyết 1 bài .
* Tip 2 : Xác định dạng bài và những kiến thức về dạng bài đấy </br>
    * Khi ta xác định được dạng bài sẽ dễ dàng hơn cho việc giải quyết vấn đề . Ta có thể dựa vào những bài thuộc dạng này mà ta đã làm trước vào việc giải quyết bài mới . 
    * Việc xác định được dạng bài cũng không phải là quá dễ . Cần phải làm nhiều bài tập mỗi dạng để có thể rèn luyện kĩ năng này .
    *  Team chia thành 11 dạng chủ yếu : </br>
          |Ad hoc | Đồ thị |
          |---| ---|
          |Duyệt   | Toán học| 
          |Chia để trị  |Xử lý chuỗi| 
          |Tham lam|  Hình học ( Geometry)|
          |Cáu trúc dữ liệu  | Quy hoạch động |
          
          * Special ( những bài thuộc nhiều dạng bài khác nhau ) 
          
* Tip 3 : Đánh giá độ phức tạp bài toán </br>
    * Dựa vào điều kiện ( input , ouput ) đề bài để từ đó có thể đưa ra thuật toán phù hợp với bài ( Tránh trường hợp bị TLE khi submit ).
* Tip 4 : Thành thạo 1 ngôn ngữ lập trình  ( Không cần phải quá xuất săc về nnlt đó ) </br>
   * Tiết kiệm thời gian để tra cứu về cách sử dụng 1 hàm , 1 câu lệnh , ... . 
   * Viết code ngắn hơn bằng cách sử dụng những hàm có sắn trong thư viện . 
   * Tiết kiệm thời gian debug những lỗi liên quan đến ngôn ngữ .
* Tip 5 : Thành thục kĩ năng test code </br>
   * Đây là kĩ năng quan trọng nhất để có thể AC đồng thời đây cũng là kĩ năng khó để thành thục 
   * Một số trường hợp còn test trước khi submit : Test case mẫu của đề bài ; test case có giá trị max theo đề ;  test case đặc biệt theo đề bài ; ... .
   * Có thể test code bằng cách tự tạo test case và 1 code chạy trâu để check ( có thể xem kỹ hơn ở [đây](https://vnoi.info/wiki/algo/skill/viet-trinh-cham.md] )) .
* Tip 6 : Luyện tập 
   * Luyện làm các contest để luyện kĩ năng làm bài .
   * Làm chắc những bài classic của từng dạng .
* Tip 7 : Team work trong ICPC
### Hình học ( Geometry) :
* Lưu ý : 
   - Tránh các phép toán có thể tạo ra số thực ( chia , lấy căn ,... ) 
   - Khi làm việc với số thực . Nếu muốn so sánh a == b ta sẽ dùng fabs ( a-b ) < EPS ( EPS là 1 số cực nhỏ 1e-9) . Khi mà chúng ta cần so sánh ( a >= 0.0 ) ta dùng (a > -EPS) và ngược lại (a <= 0.0) dùng (a < EPS)

* Điểm :
   - Tạo 1 kiểu dữ liệu trừu tượng dùng stuct ( hoặc class ) để thể hiện tọa độ (x,y) trong máy tính 
   ```
      struct point {
         double x , y ;// có thể dùng kiểu interger tùy vào yêu cầu bài 
         point(double _x, double _y) { x = _x, y = _y; }
         bool operator < (point other) {
            if (fabs(x - other.x) > EPS) // useful for sorting
                  return x < other.x; // first criteria , by x-axis
            return y < other.y; // second criteria, by y-axis
        }
      };
   ```   
  - Khoảng cách giữa 2 điểm 
  ```
  double dist(point p1, point p2) {
         // hypot(dx, dy) returns sqrt(dx * dx + dy * dy)
      return hypot(p1.x - p2.x, p1.y - p2.y); } 
  ```
  - Kiểm tra 2 điểm có trùng nhau hay không :
  ```
   bool areSame(point p1, point p2) { // floating point version
      // use EPS when testing equality of two floating points
   return fabs(p1.x - p2.x) < EPS && fabs(p1.y - p2.y) < EPS; 
   }

  ```
  - Quay 1 điểm theo 1 góc  α
  ```
  point rotate(point p, double alpha) {
      double rad = DEG_to_RAD(alpha); // multiply alpha with PI / 180.0
         return point(p.x * cos(rad) - p.y * sin(rad),
                p.x * sin(rad) + p.y * cos(rad)); 
  }
  ```
  
