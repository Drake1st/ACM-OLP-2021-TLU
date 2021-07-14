### Xâu Fiboncaci
  Dãy Fibonaci là một đề tài quen thuộc trong kì thi HSG Tin học và Toán học . Tuy nhiên , Xâu  Fibonaci ít gặp hơn , xâu này được định nghĩa như sau :
  * F[0] = '0'
  * F[1] = '1'
  * F[i] = F[i-2] + F[i-1] với i &gt; 2 ( dấu cộng là phép nối xâu ) </p>
  Bài toán rất đơn giản : Cho số N và K , hãy xác định kí tự thứ K của F[N] . </br>
  
  #### INPUT
    Dòng thứ nhất ghi số T là số bộ test . Tiếp theo T dòng , mỗi dòng ghi 2 số N và K . Dữ liệu đảm bảo luôn có kết quả . </p>
   
  #### Output
    Ứng với mỗi test trong input , in ra một dòng kết quả tìm được  
    
  
  | Input | Output| Giải thích |
  | --- | --- | --- |
  | 3 </br> 2 1 </br> 3 3 </br> 4 2 | 0 </br>  1 </br> 1 | F[2] = *0*1</br> F[3] = 10*1* </br> F[4] = 0*1*101  |
  
  #### Giới hạn 
   0 &le; N &le; 10<sup>5</sup> , 1 &le; K &le; 10 <sup>18</sup>
  

