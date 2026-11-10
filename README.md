# 🗑️ Hệ Thống Quản Lý Rác Thải Thông Minh IoT

## 1. Đặt bài toán
Trong môi trường sinh hoạt tập thể như ký túc xá sinh viên hay khuôn viên trường học, việc quản lý rác thải thường gặp tình trạng rác đầy tràn ra ngoài không ai dọn gây mất vệ sinh, mùi hôi ảnh hưởng đến không gian sống. Thêm vào đó, người dùng thường e ngại việc dùng tay mở nắp thùng rác chung vì sợ lây nhiễm vi khuẩn.

Từ nhu cầu thực tế đó, dự án này được phát triển nhằm xây dựng một hệ thống giám sát thùng rác IoT. Hệ thống không chỉ giải quyết bài toán vệ sinh qua việc **đóng/mở tự động không chạm (touchless)**, giám sát **định lượng chính xác mức độ đầy của rác**, mà còn mang tính đột phá với tính năng **Tương tác bằng giọng nói**, giúp nhắc nhở và nâng cao ý thức bảo vệ môi trường của người sử dụng.

## 2. Nội dung chính & Tính năng nổi bật
Hệ thống sử dụng vi điều khiển ESP32, kết hợp các cảm biến và giao tiếp qua giao thức MQTT tới bảng điều khiển Node-RED, bao gồm các tính năng:

- ✅ **Đóng/mở tự động không chạm:** Nhận diện tay người dùng qua cảm biến siêu âm mặt trước và dùng Servo mở nắp thùng.
- ✅ **Tương tác âm thanh thông minh:** Tích hợp IC âm thanh phần cứng (ISD4004-08MP) để phát câu chào *"Xin cảm ơn bạn đã vứt rác đúng nơi quy định"* khi vứt rác, và phát âm thanh cảnh báo *"Thùng rác đã đầy, vui lòng dọn dẹp"* khi rác đầy 100%.
- ✅ **Giám sát thời gian thực:** Cảm biến siêu âm gắn trên nắp thùng liên tục tính toán khoảng cách và quy đổi ra phần trăm (%) mức đầy của rác.
- ✅ **Giao tiếp IoT tiêu chuẩn:** Truyền tải dữ liệu qua giao thức MQTT (sử dụng Mosquitto Broker) tới máy chủ.
- ✅ **Giao diện trực quan & Điều khiển:** Dashboard Node-RED hiển thị biểu đồ phần trăm độ đầy (Gauge chart) và phát cảnh báo nhấp nháy đỏ từ xa khi thùng rác cần được thu gom.

## 3. Công nghệ & Phần cứng sử dụng
**Phần cứng dự kiến:**
- **Vi điều khiển:** ESP32 Dev Board (Xử lý dữ liệu trung tâm & kết nối WiFi).
- **Cảm biến:** 2x Cảm biến siêu âm HC-SR04 (1 cái nhận diện người vứt rác, 1 cái đo độ sâu của rác trong thùng).
- **Cơ cấu chấp hành:** Động cơ Servo SG90/MG996R (Đóng/mở nắp thùng).
- **Giao tiếp âm thanh:** IC thu phát âm thanh ISD4004-08MP kết hợp Loa mini.
- **Hiển thị tại chỗ:** Đèn LED trạng thái (Xanh: Thùng trống, Đỏ: Thùng đầy).

**Nền tảng & Phần mềm:**
- **Môi trường lập trình:** PlatformIO / VSCode.
- **Giao thức:** MQTT.
- **Giao diện giám sát:** Node-RED Dashboard.

## 4. Sơ đồ khối dự kiến (Block Diagram)

    [Cảm biến HC-SR04 (Tay)] -----> (Kích hoạt) -----> [ESP32] -----> [Servo mở nắp]
                                                          |
                                                          +---------> [IC ISD4004] ---> [Loa (Phát âm thanh)]

    [Cảm biến HC-SR04 (Đo rác)] --> (Tính toán %) ---> [ESP32] 
                                                          |
                                                          +---------> [Đèn LED báo trạng thái]
                                                          |
    [Node-RED Dashboard] <======= (Giao thức MQTT) =======+
     (Hiển thị biểu đồ %)
     (Báo động dọn rác)

## 5. Ảnh chụp phần cứng dự kiến


## 6. Tài liệu tham khảo
https://hackaday.com/2016/09/13/hackaday-prize-entry-the-internet-of-garbage/
