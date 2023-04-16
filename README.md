把robot_status和armor_detection.cpp 摘了出来，可以单独检测图片或者视频

可以发现，在暗光条件下 转远了会有识别问题

视频

<img width="1920" alt="Screen Shot 2023-04-16 at 7 47 23 PM" src="https://user-images.githubusercontent.com/49088507/232308382-30a7601e-f94d-4d82-9120-ba3cf0b6eea7.png">


图片

<img width="1728" alt="Screen Shot 2023-04-16 at 7 48 03 PM" src="https://user-images.githubusercontent.com/49088507/232308393-02924913-5388-4889-9a72-4a7c15ff6fb6.png">


有个小bug(先把作业交了等下来修)

虽然这里定义了enemy_color的enum
我在配置中也修改了enemycolor值
<img width="928" alt="Screen Shot 2023-04-16 at 7 49 30 PM" src="https://user-images.githubusercontent.com/49088507/232308494-c82353c3-044b-48fa-a31b-c03087ddc712.png">

![Screen Shot 2023-04-16 at 7.49.30 PM](https://image.oplin.cn/photo/temp/tes3.png)

但是，在检测中不会生效，原因暂不明(等下继续看)，所以我临时改了一下!
<img width="534" alt="Screen Shot 2023-04-16 at 7 49 18 PM" src="https://user-images.githubusercontent.com/49088507/232308398-58606c8c-9d3f-4498-9a7e-086441b2329f.png">
