**1) Install ROS Packages**
```
    cd ~

    sudo apt-get install ros-indigo-ros-control ros-indigo-gazebo-ros-control ros-indigo-joint-state-controller ros-indigo-effort-controllers ros-indigo-joint-trajectory-controller ros-indigo-moveit* ros-indigo-octomap* ros-indigo-object-recognition*

    mkdir -p ~/Projects/chessbot/src

    cd ~/Projects/chessbot/src
```

*Note:  Since the textbook was written, the r2 simulator has been deprecated.  The paths below have been updated.*

```
    git clone -b indigo https://bitbucket.org/nasa_ros_pkg/deprecated_nasa_r2_simulator.git

    git clone -b indigo https://bitbucket.org/nasa_ros_pkg/deprecated_nasa_r2_common.git

```

We really need the original directory names:
```    
    cd ~/Projects/chessbot/src
    mv deprecated_nasa_r2_simulator nasa_r2_simulator
    mv deprecated_nasa_r2_common nasa_r2_common
```

Now compile the code:
```
    cd ..
    catkin_make
```

More Installation:
```
    sudo apt-get install python-pip
    sudo pip install pgnparser
```


**GET CODE FROM SLACK**

* Download "`chessbot_scripts.zip`" from Slack.
* Transfer this archive to your VM.
* Extract the contents into `~/Projects/chessbot/src/`.
    * Make sure that ~/Projects/chessbot/src/scripts exists.
    
    

**2) [Terminal 1]  Start the R2 in Gazebo:**

```
    cd ~/Projects/chessbot
    source devel/setup.bash
    roslaunch r2_gazebo r2_gazebo.launch
```

**3) [Terminal 2]  Compute Forward Kinematics:**
```
    rosrun robot_state_publisher robot_state_publisher
```

**4) [Terminal 3]  Start Moveit:**
```
    cd ~/Projects/chessbot
    source devel/setup.bash
    roslaunch r2_moveit_config move_group.launch
```

**5) [Terminal 4]  Run the Mime:**

Random:
```
    cd ~/Projects/chessbot/src/scripts
    chmod +x r2_mime.py
    ./r2_mime.py
```

Or command line interface (CLI):

```
    cd ~/Projects/chessbot/src/scripts
    chmod +x r2_cli.py
    ./r2_cli.py left 0.5 -0.5 1.3 3.14 -1.5 -1.57
    ./r2_cli.py right -0.4 -0.6 1.4 3.14 -1.5 -1.57
    ./r2_cli.py left 0.4 -0.4 1.2 3.14 -1.5 -1.57
```

Or, shortcuts to the CLI using a .bash script:
```
    cd ~/Projects/chessbot/src/scripts
    source ./r2.bash
    r2lhome
    r2rhome
    r2home    
```


---
**MOVING R2's HAND**

**1) [Terminal 4]  Move the hand to a location on the chessboard:**
```
    cd ~/Projects/chessbot/src/scripts
    chmod +x r2_chessboard_cli.py
    ./r2_chessboard_cli.py a2 0.04
```

**2) [Terminal 4]  Hand pinch:**
```
    cd ~/Projects/chessbot/scripts
    chmod +x r2_hand.py
    ./r2_hand.py pre-pinch
    ./r2_hand.py pinch
```

---
**PLAYING CHESS**

**1) [Terminal 1]  Start the R2 in Gazebo:**

```
    cd ~/Projects/chessbot
    source devel/setup.bash
    roslaunch r2_gazebo r2_gazebo.launch
```

**2) [Terminal 2]  Compute Forward Kinematics:**
```
    rosrun robot_state_publisher robot_state_publisher
```

**3) [Terminal 3]  Start Moveit:**
```
    cd ~/Projects/chessbot
    source devel/setup.bash
    roslaunch r2_moveit_config move_group.launch
```

**4) [Terminal 4]  Spawn (and reset) the chessboard:**
```
    cd ~/Projects/chessbot/scripts
    chmod +x spawn_chessboard.py
    ./spawn_chessboard.py

```

**5)  [Terminal 5]  Playback a chess match:**
```
    cd ~/Projects/chessbot/scripts
    chmod +x r2_chess_pgn.py
    
    source ~/Projects/chessbot/devel/setup.bash
    ./r2_chess_pgn.py morgan_defeated.pgn
    ./r2_chess_pgn.py morgan_defeated_lan.pgn    
```



   


