<h1>puNES</h1>

How to Compile
-----------

* [Windows](#windows)
## Windows
#### Dependencies
* [Qt5](https://www.qt.io) with OpenGL support (5.6.3 is the last if you want the support for Windows XP)
#### Development Environment installation
1. install [MSYS2](https://www.msys2.org/)
2. open "MSYS2 MinGW 64-bit" shell (or 32 bit if you want compile the 32 bit version of puNES)
```bash
pacman -Syu
```
3. close the MSYS2 window and run it again from Start menu
```bash
pacman -Su
pacman -S base-devel git wget p7zip unzip
pacman -S perl ruby python2 mingw-w64-i686-toolchain mingw-w64-x86_64-toolchain
exit
```
4. open a new MSYS2 shell and build the necessary libraries
#### Compilation of the Qt5 libraries
5. download and unzip the sources
```bash
wget http://download.qt.io/archive/qt/5.15/5.15.0/submodules/qtbase-everywhere-src-5.15.0.zip
unzip qtbase-everywhere-src-5.15.0.zip
mv qtbase-everywhere-src-5.15.0 qt5
```
the renaming of the directory is necessary to not generate a compile-time error caused by the 255 characters maximum path length limitation on Windows, This is the typical error message you might encounter:
```code
"../../../../include/QtEventDispatcherSupport/5.15.0/QtEventDispatcherSupport/private/qwindowsguieventdispatcher_p.h:1:10: fatal error: ../../../../../src/platformsupport/eventdispatchers/qwindowsguieventdispatcher_p.h: No such file or directory"
```
6. compile the libraries
```bash
cd qt5
echo -e "QMAKE_LFLAGS += -static -static-libgcc\nDEFINES += QT_STATIC_BUILD\n" >> mkspecs/win32-g++/qmake.conf
./configure.bat -prefix $MINGW_PREFIX -extprefix $MINGW_PREFIX -bindir $MINGW_PREFIX/lib/qt5/bin -headerdir $MINGW_PREFIX/include/qt5 -libdir $MINGW_PREFIX/lib/qt5 -archdatadir $MINGW_PREFIX/lib/qt5 -plugindir $MINGW_PREFIX/lib/qt5/plugins -libexecdir $MINGW_PREFIX/lib/qt5/bin -datadir $MINGW_PREFIX/share/qt5 -docdir $MINGW_PREFIX/share/doc/qt5 -translationdir $MINGW_PREFIX/share/qt5/translations -sysconfdir $MINGW_PREFIX/etc/xdg -examplesdir $MINGW_PREFIX/share/qt5/examples -testsdir $MINGW_PREFIX/share/qt5/tests -platform win32-g++ -nomake examples -nomake tests -nomake tools -no-compile-examples -release -opensource -confirm-license -static -c++std c++11 -sse2 -static-runtime -make libs -no-ltcg -no-dbus -no-accessibility -no-inotify -no-iconv -no-icu -no-openssl -no-system-proxies -no-cups -no-fontconfig -opengl desktop -no-angle -gif -ico -qt-libpng -qt-libjpeg -qt-pcre -qt-zlib -qt-freetype
make
```
7. and finally install them
```bash
make install
sed -i -e s,Qt5OpenGLd,Qt5OpenGL,g -e s,Qt5OpenGLExtensionsd,Qt5OpenGLExtensions,g -e s,Qt5Concurrentd,Qt5Concurrent,g -e s,Qt5Cored,Qt5Core,g -e s,Qt5Guid,Qt5Gui,g -e s,Qt5Networkd,Qt5Network,g -e s,Qt5PrintSupportd,Qt5PrintSupport,g -e s,Qt5Sqld,Qt5Sql,g -e s,Qt5Testd,Qt5Test,g -e s,Qt5Widgetsd,Qt5Widgets,g -e s,Qt5Xmld,Qt5Xml,g -e s,libqtpcre2d,libqtpcre2,g -e s,libqtlibpngd,libqtlibpng,g -e s,libqtharfbuzzd,libqtharfbuzz,g $MINGW_PREFIX/lib/qt5/pkgconfig/*
cp -v $MINGW_PREFIX/lib/qt5/pkgconfig/* $MINGW_PREFIX/lib/pkgconfig/.
cd ..
```
8. now it's time for the SVG module...
```bash
wget http://download.qt.io/archive/qt/5.15/5.15.0/submodules/qtsvg-everywhere-src-5.15.0.zip
unzip qtsvg-everywhere-src-5.15.0.zip
mv qtsvg-everywhere-src-5.15.0 qt5svg
cd qt5svg
$MINGW_PREFIX/lib/qt5/bin/qmake
make
make install
sed -i -e s,Qt5Svgd,Qt5Svg,g -e s,Qt5Cored,Qt5Core,g -e s,Qt5Guid,Qt5Gui,g -e s,Qt5Widgetsd,Qt5Widgets,g $MINGW_PREFIX/lib/qt5/pkgconfig/*
cp -v $MINGW_PREFIX/lib/qt5/pkgconfig/* $MINGW_PREFIX/lib/pkgconfig/.
cd ..
```
9. ...and for the tools
```bash
wget http://download.qt.io/archive/qt/5.15/5.15.0/submodules/qttools-everywhere-src-5.15.0.zip
unzip qttools-everywhere-src-5.15.0.zip
mv qttools-everywhere-src-5.15.0 qt5tools
cd qt5tools
$MINGW_PREFIX/lib/qt5/bin/qmake
make
make install
cd ..
```
#### Compilation of puNES
10. Now you have everything you need to compile correctly puNES
```bash
git clone https://github.com/Vanyogin/V0000001
cd punes
./autogen.sh
```
if you want D3D9 version :
```bash
./configure --with-d3d9
make
```
otherwise :
```bash
./configure --with-opengl
make
```
The executable `punes.exe` is in the `src` directory but in order to run it you need the following dlls:
* 7z.dl
* avcodec-58.dll
* avformat-58.dll
* avutil-56.dll
* cg.dll
* cgD3D9.dll (only for D3D9 version)
* cgGL.dll (only for OpenGL version)
* libmp3lame-0.dll
* libogg-0.dll
* libspeex-1.dll
* libvorbis-0.dll
* libvorbisenc-2.dll
* libwinpthread-1.dll
* libx264-161.dll
* libx265.dll
* swresample-3.dll
* swscale-5.dll

that you can download here : [`64bit`](https://www.dropbox.com/s/bm17s1al2fywmop/puNES_x86_64_dlls.zip?dl=1) version or [`32bit`](https://www.dropbox.com/s/256gcdryvah5wo9/puNES_i686_dlls.zip?dl=1) version.
#### Windows Debug version
If you need the debug version then you need to replace the `./configure` command of the previous examples with the following:
```bash
CFLAGS="-g -DDEBUG" CXXFLAGS="-g -DDEBUG" ./configure --disable-release [...]
```
where `[...]` are the other necessary options.

-----------

#### FFmpeg
It is always possible to disable audio/video recording support by specifying the `configure` parameter `--without-ffmpeg`.
If the installed version is lower than 4.0 the support will be disabled automatically.

Supported audio recording formats:
* WAV Audio
* MP3 Audio ([lame](https://xiph.org/vorbis/)) (*)
* AAC Audio
* Flac Audio
* Ogg Audio ([vorbis](https://xiph.org/vorbis/)) (*)

Supported video recording formats:
* MPEG 1 Video
* MPEG 2 Video
* MPEG 4 Video
* MPEG H264 Video ([libx264](https://www.videolan.org/developers/x264.html)) (*)
* High Efficiency Video Codec ([libx265](https://www.videolan.org/developers/x265.html)) (*)
* WebM Video ([libvpx](https://www.webmproject.org/code)) (*)
* Windows Media Video
* AVI FF Video
* AVI Video

(*) if compiled in FFmpeg.
