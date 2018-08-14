# iOS版网易云音乐破解版 无需越狱~

iOS网易云音乐 免VIP下载、去广告、去更新 无需越狱...

## 使用

#### 1、安装MonkeyDev(如已安装，跳过)

- 安装最新的theos

```
sudo git clone --recursive https://github.com/theos/theos.git /opt/theos
```

- 安装ldid(如安装theos过程安装了ldid，跳过)

```
brew install ldid
```

- 指定的Xcode

```
sudo xcode-select -s /Applications/Xcode.app
```

- 执行安装命令

```
sudo /bin/sh -c "$(curl -fsSL https://raw.githubusercontent.com/AloneMonkey/MonkeyDev/master/bin/md-install)"
```

#### 2、运行工程

- 由于包名冲突，需先删除测试机网易云。
- 打开工程 WYMusic/WYMusic.xcodeproj 
- 选择证书：Targets-General-Signing
- 选择设备(不可选择模拟器，且仅支持64位设备)运行。
- 下载收费歌曲，必须在播放页面先听再下载，如果之前有下载失败的歌曲，需要先删除听一首其它的歌曲。[wiki](https://github.com/sunweiliang/NeteaseMusicCrack/wiki)里面有讲原因。
- 效果见截图。


## 版权及免责声明

- iOS逆向实践，不可使用于商业和个人其他意图。一切问题均由个人承担，与本人无关。
- 感谢MonkeyDev的作者庆总。
- 如内容对您的权利造成了影响，请[issues](https://github.com/sunweiliang/NeteaseMusicCrack/issues), 我会在第一时间进行删除。
- 最后，希望大家可以多多支持网易云。


## 思路分析

- 见[wiki](https://github.com/sunweiliang/NeteaseMusicCrack/wiki)。


## 截图



![img02](./resources/img02.gif)







## 华丽的分割线

点右上角的 Star 可以领红包，不信你试试︿(￣︶￣)︿。





