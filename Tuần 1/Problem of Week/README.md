
## Đề bài : </br>
An có một mảng k phần tử 0 . Tại mỗi bước , An cộng vào mỗi phần tử trong mảng một lượng nguyên dương ( 2 phần tử khác nhau có thể cộng 2 lượng khác nhau ) . Sau một số bước , tổng giá trị phần tử trong mảng bằng n . Hãy đếm số lượng quá trình như vậy .

- Input : </br>
Gồm 1 dòng duy nhất chứa 2 số nguyên dương n và k . (   1 &le; n &le; 4239 ; i &le; k &le; 1000000000 )
- Ouput : </br>
Ghi ra đáp số  theo modulo nguyên tố 7340033 = 7 x 2<sup>20</sup> + 1


|Sample Input|Sample Output|Giải thích |
| --- | --- | --- |
|5 2| 8 | (0,0) &#8594; (1,1) &#8594; (2,3) </p> (0,0) &#8594; (1,1) &#8594; (3,2) </p> (0,0) &#8594; (1,2) &#8594; (2,3) </p> (0,0) &#8594; (1,4)  </p> (0,0) &#8594; (2,1) &#8594; (3,2) </p>    (0,0)  &#8594; (2,3) </p>    (0,0) &#8594; (3,2) </p> (0,0) &#8594; (4,1)  </p>     |


## Hướng dẫn :
Bọn mình sử dụng liệt kê lần lượt các trường hợp đơn giản và suy ra công thức chung . Việc đưa ra công thức dựa khá nhiều vào tam giác Pascal vì khi liệt kê ra có thể thấy với k >= n/2 thì sẽ la những số thuộc tam giác pascal với vị trí tương ứng .
Sau đây là những kết quả bọn mình đã tính :))

![image](https://user-images.githubusercontent.com/61226996/118970580-991e4f00-b998-11eb-81d0-b3d287803a6f.png)

