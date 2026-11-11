# 🗑️ HỆ THỐNG QUẢN LÝ RÁC THẢI THÔNG MINH IOT
Dự án cuối kỳ của môn học: **Phát triển ứng dụng IoT PHY3640**

Trường: **Trường Đại học Khoa học Tự nhiên, ĐHQGHN (VNU-HUS)**

Giảng viên: **Nguyễn Anh Tuấn**

Sinh viên thực hiện: **Nguyễn Trọng Tùng - 23001638**

## 1. Đặt bài toán

### Bối cảnh và Nhu cầu thực tế
Trong bối cảnh đô thị hóa nhanh chóng, các khu vực sinh hoạt tập thể có mật độ dân số cao như trường học, ký túc xá sinh viên, bệnh viện hay các khu chung cư đang phải đối mặt với lượng rác thải sinh hoạt khổng lồ mỗi ngày. Phương thức quản lý rác thải truyền thống hiện nay chủ yếu dựa vào sức người và lịch trình thu gom cố định. Tuy nhiên, cách làm này bộc lộ nhiều điểm hạn chế:
- **Tình trạng quá tải cục bộ:** Rác thường xuyên bị vứt đầy tràn ra ngoài trước khi đến giờ thu gom, gây mất mỹ quan, phát sinh mùi hôi thối và thu hút côn trùng, ảnh hưởng trực tiếp đến chất lượng không gian sống.
- **Rủi ro lây nhiễm chéo:** Tại các không gian công cộng, nắp thùng rác chung là nơi tích tụ hàng triệu vi khuẩn. Đặc biệt sau những đại dịch lớn, người dùng ngày càng có tâm lý e ngại, sợ bẩn khi phải dùng tay mở nắp thùng rác. Điều này vô tình dẫn đến thói quen xấu là vứt rác ngay cạnh thùng thay vì bỏ vào bên trong.
- **Lãng phí nguồn lực:** Nhân viên vệ sinh thường đi thu gom theo một khung giờ cố định mà không biết trước thùng rác nào đã đầy, thùng nào còn trống, dẫn đến lãng phí thời gian và công sức di chuyển.
- **Nguy cơ hỏa hoạn tiềm ẩn:** Rác thải tập trung nhiều vật liệu dễ cháy, nếu vô tình có tàn thuốc hoặc nguồn nhiệt rơi vào sẽ rất dễ gây cháy nổ nếu không được phát hiện kịp thời.

Từ những "nỗi đau" (pain points) thực tế đó, dự án này được hình thành nhằm nghiên cứu và chế tạo một hệ thống quản lý rác thải thông minh, tích hợp các công nghệ IoT tiên tiến để giải quyết triệt để vấn đề với 3 mục tiêu cốt lõi:
1. **Tự động hóa không chạm (Touchless Automation):** Loại bỏ hoàn toàn sự tiếp xúc vật lý giữa người dùng và thùng rác, tạo ra trải nghiệm vứt rác an toàn, hợp vệ sinh, ngăn chặn nguy cơ lây truyền dịch bệnh.
2. **Tối ưu hóa nguồn lực qua Giám sát thời gian thực:** Thu thập và đo lường chính xác sức chứa của thùng rác mọi lúc, mọi nơi. Hệ thống sẽ tự động phân tích và chỉ đưa ra cảnh báo thu gom khi thực sự cần thiết, giúp tối ưu hóa quy trình làm việc của đội ngũ vệ sinh.
3. **Giáo dục và Nâng cao ý thức cộng đồng:** Vượt lên trên một thiết bị cơ điện tử thông thường, hệ thống sử dụng tương tác âm thanh trực quan để giao tiếp với người dùng. Những lời cảm ơn hay nhắc nhở trực tiếp sẽ đánh vào tâm lý, dần dần hình thành thói quen và ý thức bảo vệ môi trường cho cộng đồng.
4. **Bảo đảm an toàn phòng chống cháy nổ:** Theo dõi chất lượng không khí bên trong/xung quanh thùng rác để đưa ra báo động khẩn cấp ngay khi có dấu hiệu phát sinh khói hoặc cháy.

### Nguồn cảm hứng và Động lực của dự án
- **Thực trạng nhức nhối tại không gian công cộng:** Bất kỳ ai từng sống trong ký túc xá đều không xa lạ với hình ảnh những bãi rác tự phát mọc lên quanh các thùng rác chưa kịp dọn. Sự bất tiện và mất vệ sinh này là động lực lớn nhất thôi thúc nhóm phát triển tìm kiếm một giải pháp tự động hóa để thay đổi hiện trạng.
- **Lấp đầy khoảng trống công nghệ trên thị trường:** Hiện nay, trên thị trường đã xuất hiện các mẫu thùng rác thông minh tự mở nắp. Tuy nhiên, đa số là các sản phẩm gia dụng cao cấp, giá thành rất đắt đỏ, cấu tạo phức tạp và khó bảo trì, hoặc thiếu đi tính năng quản lý đồng bộ qua mạng (IoT) và tương tác bằng giọng nói tiếng Việt.
- **Mục tiêu xã hội hóa công nghệ:** Dự án hướng tới việc phát triển một mô hình IoT áp dụng vi điều khiển (ESP32) và các linh kiện phổ thông, dễ kiếm, tiết kiệm chi phí. Bằng việc tạo ra một hệ thống vừa rẻ, vừa dễ vận hành và nhân rộng, công nghệ thùng rác thông minh sẽ không còn là một "món đồ xa xỉ", mà có thể dễ dàng tiếp cận và triển khai đồng loạt tại các trường học, bệnh viện, hay cơ sở công cộng quy mô nhỏ và vừa tại Việt Nam.

---

## 2. Nội dung chính

### Phần cứng
- **Vi điều khiển:** ESP32 Dev Board
- **Nhận diện & Đo lường:**
  - `1 x Cảm biến siêu âm HC-SR04`: Nhận diện tay người dùng để mở nắp.
  - `1 x Cảm biến siêu âm HC-SR04`: Đo độ sâu/mức độ đầy của rác trong thùng.
  - `1 x Cảm biến khí gas/khói MQ135`: Theo dõi nồng độ khói/khí độc để cảnh báo cháy.
- **Cơ cấu chấp hành:**
  - `1 x Động cơ Servo SG90/MG996R`: Điều khiển đóng/mở nắp thùng.
- **Giao tiếp âm thanh:**
  - `1 x IC thu phát âm thanh ISD4004-08MP` kèm loa mini: Cung cấp âm thanh tương tác và cảnh báo.
- **Hiển thị tại chỗ:**
  - `2 x Đèn LED`: Báo trạng thái thùng rác (Xanh: Thùng trống/Sẵn sàng, Đỏ: Thùng đầy).

### Phần mềm
- **Node-RED:**
  - **Hiển thị:** Biểu đồ Gauge hiển thị phần trăm (%) mức độ đầy của thùng rác.
  - **Quản lý:** Cảnh báo nhấp nháy đỏ, gửi thông báo từ xa khi cần dọn rác và khi phát hiện hỏa hoạn.
- **MQTT Broker:** Mosquitto / HiveMQ / EMQX
- **Môi trường lập trình:** PlatformIO / VSCode / Arduino IDE

---

## 3. Nguyên lý hoạt động

1. **Kiểm soát nắp không chạm:** Cảm biến siêu âm mặt trước nhận diện tay người dùng tiến lại gần, kích hoạt ESP32 mở nắp thông qua động cơ servo.
2. **Tương tác âm thanh thông minh:** Tích hợp IC ISD4004 để phát lời chào lịch sự (*"Xin cảm ơn bạn đã vứt rác đúng nơi quy định"*) khi vứt rác, và âm thanh cảnh báo (*"Thùng rác đã đầy, vui lòng dọn dẹp"*) khi rác chạm mốc 100%.
3. **Giám sát thời gian thực:** Cảm biến siêu âm gắn trên nắp liên tục tính toán khoảng cách đến bề mặt rác và quy đổi thành tỷ lệ phần trăm (%) sức chứa của thùng. Đèn LED trạng thái cung cấp phản hồi trực quan ngay tại chỗ.
4. Cảnh báo khói/cháy nổ: Cảm biến MQ135 liên tục đọc nồng độ khói/khí gas. Nếu thông số vượt quá ngưỡng an toàn định trước, hệ thống lập tức phát còi báo động qua loa và gửi tín hiệu cảnh báo cháy lên màn hình quản lý.
4. **Tích hợp Dashboard:** Toàn bộ dữ liệu về mức rác và trạng thái hệ thống được truyền liên tục qua giao thức MQTT tới bảng điều khiển Node-RED để quản lý từ xa và tạo cảnh báo.

---

## 4. Sơ đồ khối (Block Diagram)

![Sơ đồ khối hệ thống](https://drive.google.com/uc?export=view&id=1dphqL6e7rh2Jz6hJsQA7Fu9SsodArX4J)

### Lưu đồ thuật toán
- **Phần tiệm cận:** Nhận diện khoảng cách -> Mở nắp bằng Servo -> Phát âm thanh chào -> Đóng nắp.
- **Phần đo lường:** Đo khoảng cách thùng -> Tính % rác -> Cập nhật LED -> Gửi MQTT -> Phát âm cảnh báo nếu >90%.

---

## 5. Sơ đồ chân kết nối (Pin Diagram)

Sơ đồ chân được thiết kế và mô phỏng bằng phần mềm Fritzing. Bảng kết nối với các chân của ESP32:

---

## 6. Kết quả thực hiện

### Mô hình phần cứng
### Ảnh chụp phần cứng dự kiến
![Ảnh phần cứng dự kiến](https://drive.google.com/uc?export=view&id=1khJDKJ7UnELADVJ36V2Vxj608eLFGVdD)

### Node-RED Dashboard 2.0
- Bảng điều khiển Node-RED bao gồm 3 nhóm chính: **Home**, **Bin Status** và **Waste Level**.
- Giao diện **Home** hiển thị thời gian hiện tại, thông tin tác giả và trạng thái kết nối MQTT.
- Giao diện **Waste Level** nổi bật với biểu đồ Gauge, hiển thị trực quan tỷ lệ phần trăm rác đầy (0-100%) theo thời gian thực.
- Giao diện **Bin Status** được sử dụng để hiển thị các cảnh báo từ xa, kích hoạt đèn báo đỏ nhấp nháy trên màn hình khi thùng đã đầy hoàn toàn và cần được thu dọn ngay lập tức.

---

## 7. Kết luận

- Đã phát triển thành công một hệ thống quản lý rác thải thông minh với các tính năng:
  - Giám sát mức rác theo thời gian thực, tính toán chính xác theo tỷ lệ phần trăm.
  - Tự động đóng/mở nắp không chạm thông qua cảm biến và động cơ servo.
  - Tương tác bằng giọng nói giúp khuyến khích người dùng và cảnh báo thùng đầy thông qua IC thu phát âm thanh.
  - Tích hợp bảng điều khiển qua Node-RED để giám sát và quản lý cảnh báo từ xa.
- Đã triển khai thành công giao thức MQTT để truyền và nhận dữ liệu một cách ổn định, liên tục giữa hệ thống ESP32 và bảng điều khiển Node-RED.

🎥 **Video demo:** 