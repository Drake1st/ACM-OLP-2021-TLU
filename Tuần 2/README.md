### Cấu trúc dữ liệu :
Mình sẽ ôn lại những cấu trúc dữ liệu được xây dựng sẵn trên thư viện của C++ và tìm hiểu về Fenwick tree 
* Những cấu trúc dữ liệu với độ phức tạp tuyến tính trong thư viện C++: 
  * Mảng tĩnh ( int a[100] ) : Thường được sử dụng trong những contest và có những hàm có sẵn khá tiện lợi như ( sort , binarysearch  , *max_element , find , count , next_permutation ,... )
  * Mảng động ( vector ) : Cũng giống với mảng tĩnh , không cần khai báo số lượng phần tử tối đa nên phù hợp với những bài mà bạn không biết sẽ phải nhập tối  bao nhiêu phần tử . vector  cũng được xây dựng nhiều hàm giống vs mảng tĩnh ở trên 
  * Bitset : là một cấu trúc dữ liệu tương tự với mảng những chỉ lưu chỉ 2 giá trị là 1/true và 0/false . Với việc mỗi phần tử chỉ lưu trữ trong 1 bit vì vậy bitset có thể tiết kiệm bộ nhớ ( Có thể sử dụng trong DP để tối ưu ) .
  * Linked List ( list trong C++ ) : Là cấu trúc dữ liệu mà mỗi node lưu trữ 2 giá trị gồm giá trị và địa chỉ của node đằng sau , có thể thêm tiếp tục phần tử vào list giống với vector . Việc truy xuất phần tử lại là O(n) nên trong những contest , chúng ta thường sử dụng vector  (vì dễ sử dụng hơn ) . 
  * Stack ( C++ stack ) cũng là 1 dạng danh sách liên kết những chỉ có thể push ( thêm cuối ) và pop( xóa cuối )  cả 2 thao tác đều chủ tốn O(1) . 
    * stack giống với 1 hộp dựng cầu lông , thêm quả cầu lông vào hộp đựng (push) và bỏ quả cầu lông ở trên ra (pop) . Quả cầu lông thêm vào cuối cùng sẽ được lấy ra đầu tiên . 
      => LIFO ( Last in first out ) .
  * Queue : là 1 danh sách nhưng chỉ có thêm vào cuối và xóa thì chỉ xóa ở đầu . 
    * queue giống 1 hàng đợi khi mua hàng , người mua đầu tiên sẽ ra đầu tiên và cứ thế tiếp diễn . => FIFO ( First in first out ) .
  
* Những cấu trúc dữ liệu với độ phức tạp tuyến tính trong thư viện C++: 
  * set : có thể lưu trữ nhiều giá trị khác nhau và mỗi giá trị phải là duy nhất và . Khi duyệt các phần tử trong set sẽ luôn được những phần tử đã được săp xếp ( tăng dần hoặc giảm dần ) . Các thao tác với set như lower_bound/upper_bound , find , insert thường là log(n) .
  * map : lưu trữ dạng key -> value , giống với mảng nhưng thay vì dùng index để  truy xuất phần tử thì ở đây ta dùng key ( có thể là int , string , char ) để truy xuất đến phần tử .
    * map và set trong C++ thường được xây dựng bằng Red-Black Tree 
  * Heap ( trong C++ priority_queue) : Là 1 cách thể hiện khác của queue .  Mọi phần tử đều được gắn liền với một độ ưu tiên . Một phần tử có độ ưu tiên cao sẽ được dequeued (xóa khỏi Priority Queue) trước một phần tử có độ ưu tiên thấp . Nếu hai phần tử có cùng độ ưu tiên, lúc này việc phần tử nào được xử lý trước sẽ phụ thuộc vào thứ tự của chúng ở trong Priority Queue.
* Fenwick Tree ( Binaray Indexed Tree ) :
* Segment Tree
* DSU :
