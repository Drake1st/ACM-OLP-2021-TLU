## Đồ Thị 1

Trong đồ thị thường có 2 cách tìm kiếm là DFS và BFS .

#### DFS ( Tìm kiếm theo chiều sâu ) 
  * Thuật Toán : 
    * Thăm đỉnh xuất phát, đỉnh u, đánh dấu đỉnh u.
    * Xét các đỉnh v kề với đỉnh hiện đang thăm
        * Nếu đỉnh v chưa được đánh dấu (chưa thăm), thăm đỉnh v.
        * Nếu đỉnh v đã được đánh đấu, bỏ qua. 
  * Ứng dụng :
    * Tìm đường đi từ đỉnh nguồn đến tất cả các đỉnh .
    * Tìm LCA của 2 đỉnh .
    * Sắp xếp Topo .
    * Tìm các thành phần liên thông mạnh trong một đồ thị có hướng .
    * Tìm cầu trong đồ thị có hướng . 
    * ... 
#### BFS ( Tìm kiếm theo chiều rộng ) 
  * Thuật toán :
      * Thêm đỉnh gốc vào queue và đánh dấu đỉnh gốc.
      * Nếu queue chưa rỗng, lấy ra đỉnh u đầu tiên khỏi queue. Xét các đỉnh v kề với đỉnh u
          * Nếu đỉnh v đã được đánh dấu thì bỏ qua.
          * Nếu v chưa được đánh dấu thì thêm đỉnh v vào queue và đánh dấu đỉnh v.
      * Nếu queue rỗng, dừng quá dình tìm kiếm.
   * Ứng dụng :
      * Tìm đường đi ngắn nhất trong đồ thị không trọng số .
      * Tìm thành phần liên thông trong đồ thị vô hướng .
      * Tìm chu trình ngắn nhất trong đồ thị không trọng số có hướng .
      * ... 


|| DFS | BFS| 
| --- | --- | --- |
| Ưu điểm | Dễ dàng để có thể code </br> Tiết kiệm bộ nhớ | Có thể dùng để tìm đường đi ngắn nhất trên đồ thị không trọng số |
| Nhược điểm | Không thể tìm được đường đi ngắn nhất trong đồ thị không trọng số | Khó code hơn DFS </br> Dùng nhiều bộ nhớ để | 
| Big O | O(V + E) : Danh sách kề </br> O(V<sup>2</sup> ) : Ma trận kề |  O(V + E) : Danh sách kề </br> O(V<sup>2</sup> ) : Ma trận kề |
