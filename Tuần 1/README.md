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
          |Cấu trúc dữ liệu  | Quy hoạch động |
          
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

* Hình tròn :
   - Phương trình đường tròn tâm (a,b) bán kính r : ( x - a )  <sup>2</sup> + ( y - b )  <sup>2</sup> = r  <sup>2</sup>
   - Chu vi = 2 * 𝝅 * r và diện tích 𝝅 × r  <sup>2</sup>
   - Độ dài cung tròn: ![image](https://user-images.githubusercontent.com/61226996/117777337-b3ed1700-b266-11eb-8854-70bc8b58e3f2.png)

   - Diện tích cung tròn nếu số đo góc đo bằng độ : ![image](https://user-images.githubusercontent.com/61226996/117777443-cc5d3180-b266-11eb-9b01-38f604456d1a.png)
   - Diện tích hình viên phấn ( R là bán kính ) : ![image](https://user-images.githubusercontent.com/61226996/117777739-19d99e80-b267-11eb-9f6c-fb670c11f764.png)
* Tam giác :
  - Diện tích tam giác :
      - ![image](https://user-images.githubusercontent.com/61226996/117778335-b734d280-b267-11eb-9288-deda2ce14493.png)
      - ![image](https://user-images.githubusercontent.com/61226996/117778383-c1ef6780-b267-11eb-8ecd-96807fdf4e93.png)
      ( p là nửa chu vi )
  - Tâm đường tròn ngoại tiếp tam giác là giao điểm của ba đường trung trực của tam giác đó . Đặc biệt tâm đường tròn ngoại tiếp tam giác vuông là trung điểm của cạnh huyền
  - ![image](https://user-images.githubusercontent.com/61226996/118131461-c020d200-b428-11eb-9bf1-c6b3e2fa6670.png)

  - Tâm đường tròn nội tiếp tam giác là giao điểm của ba đường phân giác
  - ![image](https://user-images.githubusercontent.com/61226996/118131495-c7e07680-b428-11eb-8595-9fa2df93820f.png)

  - Định lý sin : ![image](https://user-images.githubusercontent.com/61226996/117779054-7ee1c400-b268-11eb-8bbc-24688a66b4b5.png)
  - Định lý cosin : ![image](https://user-images.githubusercontent.com/61226996/117779153-98830b80-b268-11eb-8228-c5d737690e52.png)
* Tứ giác : ( Do teamates mình hay quên :)) )
  - Hình chữ nhật : chiều dài h , chiều rộng w -> chu vi = 2 *( w+h ) && diện tích = w*h 
  - Hình thang : diện tích = 0.5 * (w<sub>1</sub>+w<sub>2</sub>) * h ( h là chiều cao , w <sub>1</sub> và w<sub>2</sub> là chiều dài của 2 cạnh đáy .
  - Hình thoi: diện tích ![image](https://user-images.githubusercontent.com/61226996/117823077-486f6d80-b297-11eb-9852-0a622f5f2409.png)
  - Hình diều :
         ![image](https://user-images.githubusercontent.com/61226996/117828461-05fc5f80-b29c-11eb-8f37-4294bb889691.png) </br>
         - Diện tích : a * b * 0.5 ( a,b là độ dài 2 cạnh chéo ) 
* Đa giác :
   -  Đa giác đều có n cảnh :
         - Tổng các góc = (n-2) * 180 
         - Mỗi góc = ![image](https://user-images.githubusercontent.com/61226996/117826036-08f65080-b29a-11eb-9d05-d384d39bfb9b.png)
         - Với n >= 2 thì có ![image](https://user-images.githubusercontent.com/61226996/117826180-29bea600-b29a-11eb-9717-b6b42d31a3b9.png) cạnh chéo
         - Diện tích : ![image](https://user-images.githubusercontent.com/61226996/117826403-5672bd80-b29a-11eb-85c3-1b3178265f6e.png)
                     ( Với t là chiều dài cạnh )
   -  Đa giác được biểu diễn bằng 1 mảng các điểm theo được sắp xếp theo hướng ngược chiều kim đồng hồ và phần tử cuối của mảng = với giá trị của phần tử đầu tiên .
   -  Diện tích  = |Σ(xᵢ * yᵢ₊₁) - (yᵢ * xᵢ₊₁)| / 2
   
* Tìm bao lồi 
      

  
