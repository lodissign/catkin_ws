
#ROS
#gazebo 
- Testing Gazebo with ROS Integration
https://classic.gazebosim.org/tutorials?tut=ros_installing&cat=connect_ros

- turtlebot3 시뮬레이션
https://durian9s-coding-tree.tistory.com/257

- ros teleop keyboard python(7장 관련)
https://github.com/ros-teleop/teleop_twist_keyboard#readme

- gazebo ros control
https://classic.gazebosim.org/tutorials?tut=ros_control&cat=connect_ros
코드
https://github.com/ros-simulation/gazebo_ros_demos

- gazebo components
https://classic.gazebosim.org/tutorials?tut=components&cat=get_started

- gazebo model down for analysis in GAZEBO_MODEL_PATH
https://github.com/osrf/gazebo_models

- (additional) Build world tutorials
https://classic.gazebosim.org/tutorials?cat=build_world

- gazebo model editor
https://classic.gazebosim.org/tutorials?tut=model_editor&cat=model_editor_top

- gazebo api reference
https://osrf-distributions.s3.amazonaws.com/gazebo/api/dev/classgazebo_1_1physics_1_1World.html

- ros 파이썬 버전 변경 2.* -> 3.*
$ sudo apt-get install python3-pip python3-yaml
$ sudo pip3 install rospkg catkin_pkg
https://bigdata-analyst.tistory.com/232

/home/lodissign/catkin_ws/src/ch8/scripts/key_publisher.py
scripts에는 .py
src에는 .cpp 파일 넣음.



**************팁**************

- 우분투창내리기
gsettings set org.gnome.shell.extensions.dash-to-dock click-action 'minimize'

- VS Code에서 git clone
https://doing7.tistory.com/5

- VS Code에서 git commit & push
https://doing7.tistory.com/6

- ctrl + shift + t : 터미널 창 여러개 생김.

- 그래프 시각화 (그래프비즈)
https://gitlab.com/graphviz/graphviz/
http://www.webgraphviz.com/
	웹버전
  
- Ubuntu에서 imwheel로 마우스 휠 스크롤 속도 변경
https://codechacha.com/ko/linux-imwheel/

- find 커맨드로 파일 검색하기
https://macinjune.com/all-posts/mac/terminal/%EB%A7%A5-%ED%84%B0%EB%AF%B8%EB%84%90-unix-find-command%EB%A1%9C-%ED%8C%8C%EC%9D%BC-%EA%B2%80%EC%83%89%ED%95%98%EA%B8%B0/

- Ubuntu Linux 속도를 높이는 방법
https://ciksiti.com/ko/chapters/6284-how-to-speed-up-ubuntu-linux-12-must-follow-tips
	소프트웨어 & 업데이트-> 추가 드라이버-> 사용 NVIDIA driver metapackage 출처 nvidia-driver-390(독점)

- vscode 파일 찾기: ctrl + p

- visual Studio Code / 자동 줄바꿈 설정하는 방법
https://www.codingfactory.net/12959



**************에러 해결법**************

Gazebo [Err] [REST.cc:205] Error in REST request
https://ropiens.tistory.com/30

RLException: Invalid <arg> tag: environment variable 'TURTLEBOT3_MODEL' is not set.
https://answers.ros.org/question/329022/error-during-launching-turtlebot3_worldlaunch/

Unable to contact my own server
https://answers.ros.org/question/10238/unable-to-contact-my-own-server/

[Err] [REST.cc:205] Error in REST request
https://ropiens.tistory.com/30

[gazebo-2] process has died [pid 6443, exit code 255, cmd /opt/ros/melodic/lib/gazebo_ros/gzserver
killall gzserver 
killall gzclient

Failed to load joint1_position_controller
https://answers.ros.org/question/154166/ros-gazebo-failed-to-load-joint_state_controller/

RLException: [rrbot_world.launch] is neither a launch file in package [rrbot_gazebo] nor is [rrbot_gazebo] a launch file name
The traceback for the exception was written to the log file
https://answers.ros.org/question/143496/roslaunch-is-neither-a-launch-file-in-package-nor-is-a-launch-file-name/
source /home/somin/catkin_ws/devel/setup.bash

SyntaxError: Non-ASCII character '\xec' in file /home/somin/catkin_ws/src/ch8/scripts/key_publisher.py on line 8, but no encoding declared; see http://python.org/dev/peps/pep-0263/ for details

