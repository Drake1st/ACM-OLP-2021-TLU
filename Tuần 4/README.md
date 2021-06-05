### Quy hoạch động ( Dynamic Programing ) :
* Dynamic Programing = Solving Recurrence + Memoization
* Dynamic Programing : xác định các bài toán con và giải quyết nó ; lưu những lời giải , kết quả của chúng để xử dụng lại trong việc giải quyết bài toán tổng quát hơn . 
    => Dynamic Programing là phương pháp dạng bảng .
* Trạng thái là một trường hợp, một bài toán con của bài toán lớn.
* Có 2 cách tiếp cận :
    * Top - Down (Đệ quy có nhớ ) : Chia bài toán lớn thành nhiều bài toán con và giải quyết từng bài toán con rồi từng bài toán con lại chia thành nhiều bài toán con khác . Thường phải dùng đệ quy .
    * Bottom - Up : Bắt đầu từ việc giải quyết tất cả các bài toán nhỏ (bài toán cơ sở) để từ đó từng bước giải quyết những bài toán lớn hơn cho tới khi giải quyết được bài toán lớn nhất (bài toán ban đầu)
 * Ưu nhược điểm của 2 cách tiếp cận : </br>

|     |Top - Down|Bottom - Up |
| --- | --- | --- |
| Ưu điểm | 1. Đệ quy bình thường nhưng dùng 1 "bảng" để lưu giá trị </br> 2. Chỉ tính những bài toán con cần thiết | 1. Nhanh hơn nếu những bài toán con đã được tính mà cần cong gọi đệ quy </br> 2. Có thể tiết kiệm bộ nhớ |
|Nhược điểm|1. Chậm hơn nếu có nhiều bài toán con cần đọi đệ quy để giải </br> 2. Nếu có nhiều trạng thái thì có thể bị MLE | 1.Nếu có M trạng thái , bottom - up sẽ phải giải quyết và lưu kết quả của M trạng thái |


