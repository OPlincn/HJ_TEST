把robot_status和armor_detection.cpp 摘了出来，可以单独检测图片或者视频

可以发现，在暗光条件下 转远了会有识别问题

视频

![Screen Shot 2023-04-16 at 7.46.59 PM](https://image.oplin.cn/photo/temp/tes1.png)

图片

![Screen Shot 2023-04-16 at 7.48.03 PM](https://image.oplin.cn/photo/temp/tes2.png)

有个小bug(先把作业交了等下来修)

虽然这里定义了enemy_color的enum

![Screen Shot 2023-04-16 at 7.49.30 PM](https://image.oplin.cn/photo/temp/tes3.png)

但是，在检测中不会生效，原因暂不明(等下继续看)，所以我临时改了一下![Screen Shot 2023-04-16 at 7.49.18 PM](https://image.oplin.cn/photo/temp/tes4.png)
