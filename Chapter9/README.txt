while processing /opt/ros/indigo/share/turtlebot_navigation/launch/includes/amcl.launch.xml:
Invalid roslaunch XML syntax: [Errno 2] No such file or directory: u'/opt/ros/indigo/share/turtlebot_navigation/launch/includes/amcl.launch.xml'
The traceback for the exception was written to the log file


Fix:
	roscd turtlebot_stage
	cd launch
	sudo pico turtlebot_in_stage.launch

	[Find amcl.launch.xml.  The path should be 
	/opt/ros/indigo/share/turtlebot_navigation/launch/includes/amcl/amcl.launch.xml
