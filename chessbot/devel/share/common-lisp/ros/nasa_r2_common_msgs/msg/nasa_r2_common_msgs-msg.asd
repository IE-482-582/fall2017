
(cl:in-package :asdf)

(defsystem "nasa_r2_common_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
               :trajectory_msgs-msg
)
  :components ((:file "_package")
    (:file "JointControlDataArray" :depends-on ("_package_JointControlDataArray"))
    (:file "_package_JointControlDataArray" :depends-on ("_package"))
    (:file "Gains" :depends-on ("_package_Gains"))
    (:file "_package_Gains" :depends-on ("_package"))
    (:file "TorsoStatus" :depends-on ("_package_TorsoStatus"))
    (:file "_package_TorsoStatus" :depends-on ("_package"))
    (:file "LabeledPoseTrajectory" :depends-on ("_package_LabeledPoseTrajectory"))
    (:file "_package_LabeledPoseTrajectory" :depends-on ("_package"))
    (:file "Modes" :depends-on ("_package_Modes"))
    (:file "_package_Modes" :depends-on ("_package"))
    (:file "JointControlData" :depends-on ("_package_JointControlData"))
    (:file "_package_JointControlData" :depends-on ("_package"))
    (:file "PriorityArray" :depends-on ("_package_PriorityArray"))
    (:file "_package_PriorityArray" :depends-on ("_package"))
    (:file "LabeledJointState" :depends-on ("_package_LabeledJointState"))
    (:file "_package_LabeledJointState" :depends-on ("_package"))
    (:file "JointStatusArray" :depends-on ("_package_JointStatusArray"))
    (:file "_package_JointStatusArray" :depends-on ("_package"))
    (:file "PoseTrajectoryPoint" :depends-on ("_package_PoseTrajectoryPoint"))
    (:file "_package_PoseTrajectoryPoint" :depends-on ("_package"))
    (:file "CommandStatus" :depends-on ("_package_CommandStatus"))
    (:file "_package_CommandStatus" :depends-on ("_package"))
    (:file "LabeledTrajectoryMonitorFactors" :depends-on ("_package_LabeledTrajectoryMonitorFactors"))
    (:file "_package_LabeledTrajectoryMonitorFactors" :depends-on ("_package"))
    (:file "VariantMap" :depends-on ("_package_VariantMap"))
    (:file "_package_VariantMap" :depends-on ("_package"))
    (:file "SystemStatus" :depends-on ("_package_SystemStatus"))
    (:file "_package_SystemStatus" :depends-on ("_package"))
    (:file "WrenchMonitorLimit" :depends-on ("_package_WrenchMonitorLimit"))
    (:file "_package_WrenchMonitorLimit" :depends-on ("_package"))
    (:file "ForceControlAxisArray" :depends-on ("_package_ForceControlAxisArray"))
    (:file "_package_ForceControlAxisArray" :depends-on ("_package"))
    (:file "LabeledGains" :depends-on ("_package_LabeledGains"))
    (:file "_package_LabeledGains" :depends-on ("_package"))
    (:file "LabeledJointTrajectory" :depends-on ("_package_LabeledJointTrajectory"))
    (:file "_package_LabeledJointTrajectory" :depends-on ("_package"))
    (:file "JointControlCoeffState" :depends-on ("_package_JointControlCoeffState"))
    (:file "_package_JointControlCoeffState" :depends-on ("_package"))
    (:file "PoseCommandStatus" :depends-on ("_package_PoseCommandStatus"))
    (:file "_package_PoseCommandStatus" :depends-on ("_package"))
    (:file "JointControlClearFaultMode" :depends-on ("_package_JointControlClearFaultMode"))
    (:file "_package_JointControlClearFaultMode" :depends-on ("_package"))
    (:file "JointControlCalibrationMode" :depends-on ("_package_JointControlCalibrationMode"))
    (:file "_package_JointControlCalibrationMode" :depends-on ("_package"))
    (:file "PoseCommandArray" :depends-on ("_package_PoseCommandArray"))
    (:file "_package_PoseCommandArray" :depends-on ("_package"))
    (:file "PowerState" :depends-on ("_package_PowerState"))
    (:file "_package_PowerState" :depends-on ("_package"))
    (:file "ValueType" :depends-on ("_package_ValueType"))
    (:file "_package_ValueType" :depends-on ("_package"))
    (:file "JointControlCommandMode" :depends-on ("_package_JointControlCommandMode"))
    (:file "_package_JointControlCommandMode" :depends-on ("_package"))
    (:file "PoseCommand" :depends-on ("_package_PoseCommand"))
    (:file "_package_PoseCommand" :depends-on ("_package"))
    (:file "ReplanType" :depends-on ("_package_ReplanType"))
    (:file "_package_ReplanType" :depends-on ("_package"))
    (:file "PoseTrajectoryReplan" :depends-on ("_package_PoseTrajectoryReplan"))
    (:file "_package_PoseTrajectoryReplan" :depends-on ("_package"))
    (:file "JointCapability" :depends-on ("_package_JointCapability"))
    (:file "_package_JointCapability" :depends-on ("_package"))
    (:file "ForceControlAxis" :depends-on ("_package_ForceControlAxis"))
    (:file "_package_ForceControlAxis" :depends-on ("_package"))
    (:file "LabeledJointControlDataArray" :depends-on ("_package_LabeledJointControlDataArray"))
    (:file "_package_LabeledJointControlDataArray" :depends-on ("_package"))
    (:file "VariantMapArray" :depends-on ("_package_VariantMapArray"))
    (:file "_package_VariantMapArray" :depends-on ("_package"))
    (:file "PoseState" :depends-on ("_package_PoseState"))
    (:file "_package_PoseState" :depends-on ("_package"))
    (:file "ControllerPoseSettings" :depends-on ("_package_ControllerPoseSettings"))
    (:file "_package_ControllerPoseSettings" :depends-on ("_package"))
    (:file "LabeledControllerJointSettings" :depends-on ("_package_LabeledControllerJointSettings"))
    (:file "_package_LabeledControllerJointSettings" :depends-on ("_package"))
    (:file "PoseTwistStamped" :depends-on ("_package_PoseTwistStamped"))
    (:file "_package_PoseTwistStamped" :depends-on ("_package"))
    (:file "TrajectoryMonitorFactors" :depends-on ("_package_TrajectoryMonitorFactors"))
    (:file "_package_TrajectoryMonitorFactors" :depends-on ("_package"))
    (:file "JointControlMode" :depends-on ("_package_JointControlMode"))
    (:file "_package_JointControlMode" :depends-on ("_package"))
    (:file "LabeledGripperPositionCommand" :depends-on ("_package_LabeledGripperPositionCommand"))
    (:file "_package_LabeledGripperPositionCommand" :depends-on ("_package"))
    (:file "JointControl" :depends-on ("_package_JointControl"))
    (:file "_package_JointControl" :depends-on ("_package"))
    (:file "ControllerJointSettings" :depends-on ("_package_ControllerJointSettings"))
    (:file "_package_ControllerJointSettings" :depends-on ("_package"))
    (:file "SetParameterResponse" :depends-on ("_package_SetParameterResponse"))
    (:file "_package_SetParameterResponse" :depends-on ("_package"))
    (:file "PoseCommandParams" :depends-on ("_package_PoseCommandParams"))
    (:file "_package_PoseCommandParams" :depends-on ("_package"))
    (:file "JointStatus" :depends-on ("_package_JointStatus"))
    (:file "_package_JointStatus" :depends-on ("_package"))
    (:file "StringArray" :depends-on ("_package_StringArray"))
    (:file "_package_StringArray" :depends-on ("_package"))
    (:file "MappedType" :depends-on ("_package_MappedType"))
    (:file "_package_MappedType" :depends-on ("_package"))
    (:file "PoseTrajectory" :depends-on ("_package_PoseTrajectory"))
    (:file "_package_PoseTrajectory" :depends-on ("_package"))
    (:file "JointTrajectoryReplan" :depends-on ("_package_JointTrajectoryReplan"))
    (:file "_package_JointTrajectoryReplan" :depends-on ("_package"))
    (:file "PDMCStatus" :depends-on ("_package_PDMCStatus"))
    (:file "_package_PDMCStatus" :depends-on ("_package"))
    (:file "SystemCore" :depends-on ("_package_SystemCore"))
    (:file "_package_SystemCore" :depends-on ("_package"))
    (:file "JointCommand" :depends-on ("_package_JointCommand"))
    (:file "_package_JointCommand" :depends-on ("_package"))
    (:file "Parameter" :depends-on ("_package_Parameter"))
    (:file "_package_Parameter" :depends-on ("_package"))
    (:file "WrenchState" :depends-on ("_package_WrenchState"))
    (:file "_package_WrenchState" :depends-on ("_package"))
    (:file "LabeledControllerPoseSettings" :depends-on ("_package_LabeledControllerPoseSettings"))
    (:file "_package_LabeledControllerPoseSettings" :depends-on ("_package"))
    (:file "SetParameterRequest" :depends-on ("_package_SetParameterRequest"))
    (:file "_package_SetParameterRequest" :depends-on ("_package"))
  ))