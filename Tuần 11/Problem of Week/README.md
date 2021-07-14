### Khung nhỏ nhất , nhỏ nhì 
Cho đa đồ thị G gồm N đỉnh và M cạnh hai chiều . Các đỉnh được đánh số từ 1 đến N , các cạnh được đánh số từ 1 đến M . Một cây khung của dồ thị là một tập hợp N-1 Cạnh sao cho giữa 2 đỉnh bất kỳ đều có 1 đường đi tới nahu . Đọ lớn của một cây khung bằng tổng trọng số của N-1 cạnh thuộc cây khung . Bạn hãy tìm cây khung nhỏ nhất và cây khung nhỏ thứ nhì của đồ thị . Hai cây khung được côi là khác nhau nếu tồn tại một cạnh thuộc cây khung thứ 1 mà không thuộc cây khung thứ 2 .

#### INPUT
Dòng đầu tiên ghi số N và M . Tiếp theo là M dòng , dòng thứ i ghi thông tin về cạnh thứ i gồm 3 số u v w vơi ý nghĩa có cạnh nối từ đỉnh u đến v với đội dài w . Dữ liệu đảm bảo tồn tại ít nhất 2 cây khung .
#### OUTPUT
Dòng thứ nhất ghi độ dài của cây khung nhỏ nhất . Dòng thức hai ghi độ dài của cât khung nhỏ thứ nhì .
| Input | Output|
| --- | --- |
| 4 5 </br> 1 2 10 </br> 2 3 10 </br> 3 4 10 </br> 4 1 20 </br> 4 2 15 | 30 </br> 25 |

#### Giới hạn
 1 &le; 50000 , 1 &le; K  &le; 500000 ,  1 &le; w &le; 10<sup>9</sup>
