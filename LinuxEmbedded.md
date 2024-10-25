Link full khóa training device driver của embedded Linux ở đây nhé các bạn. Đây là video mình record trong khóa trước, do bị mắc 1 số lỗi về quay phát nên mình sẽ record lại trong khóa hiện tại mình đang dạy.
Bài 1: Kernel module - simple character device.
https://bit.ly/2AzsxrB
Bài 2: Giới thiệu về cơ chế timer trong hệ điều hành.
https://bit.ly/2O2rDpy
Bài 3: Hướng dẫn lập trình điều khiển interrupt trong Linux
kernel. https://bit.ly/2vtenmk
Bài 4: Giới thiệu về cơ chế system call trên Linux.
https://bit.ly/2KkXm32
Bài 5: Giới thiệu về kỹ thuật IPC - Inter Process Communication.
https://bit.ly/2MbBjh7
Bài 6: Giới thiệu về device tree - Một phương pháp mô tả hardware dùng trong Linux kernel
https://bit.ly/2NZekGg
Bài 7: Giới thiệu về cơ chế bảo vệ và đồng bộ dữ liệu dưới kernel
https://bit.ly/2vFZPR1
Bài 8: Giới thiệu về virtual file system
https://bit.ly/2MBFWW5
Bài 9: Kernel module chuyên sâu
https://bit.ly/2OsjkUG



Session 2:

Từ giờ bài ghim của group sẽ là bộ video training mới của mình. Đây là version 2 của khóa device driver đợt trước. Trong khóa học này, mình sẽ giới thiệu các lý thuyết chung về hệ điều hành trước khi đi sâu về driver. Do đó khóa học có tên là Linux embedded.
Bài 1: Tổng quan về các hệ điều hành Unix.
Linux và rất nhiều các hệ điều hành khác như Window đều kế thừa từ Unix OS. Do đó chúng sẽ đều có những tính chất chung như quản lý file, multi user, multi threads... Trong bài này chúng ta sẽ cùng nhau tìm hiểu về những tính chất đó.
Link video: https://youtu.be/L-S6-iZd22I
Link slide: https://drive.google.com/open…
Link tài liệu: https://drive.google.com/open…
Bài 2: Đọc ghi file trong Linux.
Lập trình tương tác với file là một công việc rất phổ biến khi chúng ta làm việc với Linux. Do vậy trong bài này mình sẽ giới thiệu với các bạn những tính chất cơ bản của file, cách chúng ta lập trình để tương tác và đọc ghi với file.
Link: https://www.facebook.com/groups/259967441230713/permalink/361240844436705/
Bài 3: Môi trường xung quanh process.
Một chương trình khi chạy trong hệ điều hành sẽ bị tác động bởi môi trường xung quanh. Hiểu được các yếu tố môi trường này sẽ giúp mọi người lập trình tốt hơn trên Linux.
Trong bài này mình sẽ giới thiệu về các yếu tố môi trường tác động đến sự hoạt động của 1 process.
Chúng ta sẽ thực hành coding tương tác với những yếu tố môi trường đó.
Link: https://www.facebook.com/groups/259967441230713/permalink/363248894235900/
Bài 4: Quản lý process
Hằng ngày chúng ta làm việc rất nhiều với các process nhưng đã bao giờ mọi người tự hỏi 1 process được hệ điều hành tạo ra như thế nào chưa? Trong bài này chúng ta sẽ giải đáp điều đó. Chúng ta sẽ được học về cách hệ điều hành sinh ra, quản lý và kết thúc 1 process.
Trong phần thực hành chúng ta sẽ lập trình sử dụng các API của hệ điều hành cung cấp để tạo mới, quản lý và kết thúc các process.
Link: https://www.facebook.com/groups/259967441230713/permalink/366367160590740/
Bài 5: Lập trình với signal.
Signal là một phương pháp dùng để giao tiếp giữa các process khác nhau. Chúng ta có thể sử dụng nó để truyền thông tin hoặc điều khiển một process bất kỳ. Signal có rất nhiều ứng dụng trong lập trình. Trong bài này chúng ta sẽ cùng nhau tìm hiểu về nó.
Link: https://www.facebook.com/groups/259967441230713/permalink/371965390030917/
Bài 6: Lập trình multithread.
Đây là một kỹ thuật lập trình giúp chia chương trình ra thành nhiều luồng xử lý khác nhau. Từ đó có thể chia đều luồng xử lý cho các core của CPU, giúp tối ưu hiệu năng của phần cứng.
Trong bài này ngoài giới thiệu về các kỹ thuật lập trình multithread, mình còn trình bày về bản chất của multithread bên trong hệ điều hành.
Link video: https://youtu.be/94pkCJjDu0A
Link slide: https://drive.google.com/open…
Bài 7: Lập trình với socket
Ngày nay các thiết bị embedded đều được kết nối với mạng internet gắn với xu hướng IoT. Trong bài này mình sẽ giới thiệu với các bạn kỹ thuật lập trình tương tác với mạng internet cơ bản nhất đó là lập trình socket.
Link: https://www.facebook.com/groups/259967441230713/permalink/376746659552790/
Bài 8: Chia sẻ bộ nhớ giữa các process.
Trong thực tế công việc, nhiều khi chúng ta phải chia sẻ dữ liệu giữa các process với nhau. Do đó trong bài này, mình sẽ giới thiệu với mọi người kỹ thuật lập trình để chia sẻ bộ nhớ giữa nhiều process.
Link: https://www.facebook.com/groups/259967441230713/permalink/389880291572760/
Bài 9: Hello world kernel module
Đây là bài học đầu tiên về lập trình Linux driver cho người mới. Trong bài này, mình sẽ hướng dẫn các bạn cách setup môi trường, cách viết một driver đơn giản nhất. Ngoài ra, chúng ta sẽ thực hành tự chế phần cứng là đèn led và viết driver để bật tắt chiếc đèn led đó.
Link: https://www.facebook.com/groups/259967441230713/permalink/389881258239330/
Bài 10: Character device và cấu trúc chung cho source code của mọi driver trong Linux.
Trong bài này chúng ta sẽ học về cách viết driver cho loại device đơn giản nhất là character device. Sau đó chúng ta sẽ tìm hiểu về cấu trúc chung cho source code của mọi driver trong Linux.
Link: https://www.facebook.com/groups/259967441230713/permalink/390651281495661/
Bài 11: Xử lý sự kiện bằng interrupt hoặc polling.
Trong bài này chúng ta sẽ học cách xử lý các sự kiện xảy ra trong hệ thống. Ví dụ như việc người dùng bấm 1 nút bất kỳ,... Để xử lý sự kiện, có 2 phương pháp chính là dùng ngắt hoặc polling. Chúng ta sẽ cùng tìm hiểu 2 phương pháp đó.
Link: https://www.facebook.com/groups/259967441230713/permalink/393446327882823/
Bài 12: Device tree
Đây là một kỹ thuật dùng để mô tả phần cứng, được sử dụng khi lập trình device driver. Thay vì define các thông tin phần cứng trong source code, chúng ta sẽ sử dụng device tree để mô tả nó. Từ đó sẽ tiết kiệm thời gian khi bringup Linux lên board mới.
Link: https://www.facebook.com/groups/259967441230713/permalink/402931780267611/
Bài 13: Lập trình với system call
Việc sử dụng những hàm như read, write, open rất phổ biến. Đằng sau chúng sẽ gọi đến những system call của hệ điều hành để xử lý. System call là cơ chế một application gọi đến những service của hệ điều hành, bắt nó phải phục vụ người lập trình. Trong bài này, chúng ta sẽ cùng tìm hiểu cách sử dụng nó.
Link: https://www.facebook.com/groups/259967441230713/permalink/406053019955487/
Bài 14 Virtual memory
Virtual memory là một phương pháp quản lý bộ nhớ trên hệ điều hành Linux. Chúng ta sẽ cùng tìm hiểu xem nó là gì và cách hệ điều hành Linux quản lý bộ nhớ của hệ thống.
Link: https://www.facebook.com/groups/259967441230713/permalink/408896699671119/
Bài 15: Network driver
Các thiết bị đầu cuối trong mạng internet như wifi, modem đa số đều sử dụng Linux embedded. Do đó, kiến thức về network driver là một phần không thể thiếu đối với lập trình viên. Trong bài này chúng ta sẽ cùng tìm hiểu về network dưới Linux kernel và cùng nhau implement driver cho cổng ethernet.
Link: https://www.facebook.com/groups/259967441230713/permalink/415747248986064/
Bài 16: Virtual file system
Trong bài này, chúng ta sẽ tìm hiểu source code bên trong OS dùng để quản lý file. Các bạn sẽ nắm được toàn bộ flow từ khi application gọi hàm read() đến khi hàm read dưới driver được gọi ra.
Link: https://www.facebook.com/groups/259967441230713/permalink/419706921923430/
Bài 18: Watchdog driver
Watchdog là một module hardware phổ biến cho các thiết bị embedded. Do đặc thù đơn giản nên watchdog hay được dùng để giảng dạy cho người mới. Trong bài này, mình sẽ giới thiệu với mọi người các viết watchdog driver cho Linux.
Link: https://www.facebook.com/groups/259967441230713/permalink/429613104266145/
Bài 19: CAN driver
Trong ngành công nghiệp ô tô thì CAN là 1 thiết bị rất quan trọng. Nó cho phép các module trong ô tô có thể giao tiếp với nhau dễ dàng. Không giống như ethernet hoặc wifi, CAN có các đặc điểm riêng phù hợp với ô tô như hardware đơn giản, độ tin cậy cao, implement đơn giản.
Trong bài hôm nay, chúng ta sẽ cùng nhau tìm hiểu về giao thức CAN và cách implement driver cho nó.
Link: https://www.facebook.com/groups/259967441230713/permalink/432090044018451/
Bài 20 - final: Support new device for Android
Ngày hay hệ điều hành Android được sử dụng rất rộng rãi. Sẽ thật tiếc nếu chúng ta không học về Android sau khi đã nắm chắc kiến thức về Linux embedded. Trong bài này, mình sẽ hướng dẫn các bạn support một device mới cho Android bsp.
Link: https://www.facebook.com/groups/259967441230713/permalink/439013243326131/