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

* Điểm : Team sẽ nói qua 1 số điều cơ bản về điểm trong CP và 1 số hàm cũng như phép tính liên quan đến điểm trong tọa độ Oxy .
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
  - Khoảng cách giữa 2 điểm = sqrt (   (x<sub>1</sub> -  x<sub>2</sub>) <sup>2</sup> +  (y<sub>1</sub> -  y<sub>2</sub>) <sup>2</sup> )
  - Quay 1 điểm theo 1 góc  α
 
  
  * Đường thẳng : ax + by + c = 0 
  - Biểu diễn đường thẳng :
  ```
  struct line { double a, b, c; };
  ```
  - Tạo 1 đường thẳng từ 2 điểm p<sub>1</sub> ( x<sub>1</sub>,y<sub>1</sub> ) và p<sub>2</sub> ( x<sub>2</sub>,y<sub>2</sub>) 
      
   ( y<sub>1</sub> - y<sub>2</sub> ) * ( x - x<sub>1</sub> ) + (x<sub>2</sub>-x<sub>1</sub>) ( y - y<sub>1</sub> ) = 0

  - Khoảng cách từ 1 điểm đến 1 đường thẳng :
  ![alt text](https://vietjack.com/toan-lop-10/images/cac-cong-thuc-ve-phuong-trinh-duong-thang-a03.PNG)
   
   - Kiểm tra song song : a<sub>1</sub> = a<sub>2</sub> && b<sub>1</sub> = b<sub>2</sub> && c<sub>1</sub> != c<sub>2</sub>
  
   - Kiểm tra trùng nhau : a<sub>1</sub> = a<sub>2</sub> && b<sub>1</sub> = b<sub>2</sub> && c<sub>1</sub> = c<sub>2</sub>
    
    - Giao nhau 2 đường thẳng :
    ```
    bool areIntersect(line l1, line l2, point &p) {
    if (areParallel(l1, l2)) return false; // no intersection
         p.x = (l2.b * l1.c - l1.b * l2.c) / (l2.a * l1.b - l1.a * l2.b);

     if (fabs(l1.b) > EPS) p.y = -(l1.a * p.x + l1.c);
         else p.y = -(l2.a * p.x + l2.c);
      return true; 
      }
   ```
   - Góc giữa 2 đường thẳng  ta dựa vào công thức : ( x, y ) là VTPT của đường thẳng 1 và ( x' , y' ) là VTPT của đường thẳng 2  
    cosα = ![alt text](https://vietjack.com/toan-lop-10/images/cach-xac-dinh-goc-giua-hai-duong-thang-1.PNG)

* Vòng tròn :
- Phương trình đường tròn tâm (a,b) bán kính r : ( x - a )  <sup>2</sup> + ( y - b )  <sup>2</sup> = r  <sup>2</sup>
  
   
  
