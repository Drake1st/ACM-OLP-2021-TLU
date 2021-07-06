## LIGHT
  Vào 3/11/2011, bạn Tôm sẽ tròn 17 tuổi . Thật tiếc rằng người đặc biệt nhất với Tôm sẽ không thể ở cạnh Tôm vào ngày sinh nhật . Anh ta quyết định làm tặng Tôm một hệ thống đèn trờ chơi </br>
  Đó là 1 hệ thống  gồm n công tắc được đánh dấu từ 1 đến N và M bóng đèn , đánh số từ 1 đến M . Một công tắc có thể chuyển sang trạng thái từ bật sang tắt và từ tắt sang bật đồng thời một nhóm bóng đèn nào đó . Khởi đầu tất cả đều là tắt . Trò chơi yêu cầu trả lời cần dùng tối thiểu bao nhiêu lần bật tắt các công tắc sao cho tất cả bóng đèn đều bật .</br>
  Tôm sẽ rất vui nếu nhìn thấy tất cả các đèn được bật sáng, bạn hãy giúp Tôm với số lần bật tắt ít nhất nhé !  </br>
- INPUT : </br>
    * Dòng đầu tiên là 2 số N , M . ( N , M &le; 20 )
    * Tiếp theo là N dòng , mỗi dòng mô tả 1 công tắc . Sô đầu tiên trong dòng là số lượng bóng đèn mà công tắc ảnh hưởng . Sau đó là danh sách các bóng đèn bị ảnh hưởng
- OUTPUT : </br>
    * Một số duy nhất ghi số lần bật tắt tối thiểu . Nếu không tồn tại đáp án thì in ra "-1" . 
 
 |Sample Input|Sample Output|
| --- | --- | 
|4 4 </br> 2 1 3 </br> 2 1 2 </br> 3 1 2 3 </br> 1 4 </br>|2|

* Ý tưởng : Vì mỗi công tắc chỉ được dùng 1 lần  và với số lượng  tối đa của N là 20 ta có thể nghĩ tới dãy nhị phân . Đưa thành bài toán liệt kê dãy nhị phân độ dài N . Nếu 1 ta sẽ bật bóng đèn thứ i và ngược lại . Kiểm tra xem các bóng đèn có xuất hiện lẻ lần và mỗi bóng đèn đều xuất hiện ít nhất 1 lần . 
