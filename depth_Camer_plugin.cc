<!-- Taken from http://gazebosim.org/tutorials/?tut=ros_depth_camera#CreateaGazeboModelwithaDepthCameraPlugin-->

<plugin name="camera_plugin" filename="libgazebo_ros_openni_kinect.so">
          <baseline>0.2</baseline>
          <alwaysOn>true</alwaysOn>
          <updateRate>0.0</updateRate>
          <cameraName>camera_ir</cameraName>
          <imageTopicName>/camera/color/image_raw</imageTopicName>
          <cameraInfoTopicName>/camera/color/camera_info</cameraInfoTopicName>
          <depthImageTopicName>/camera/depth/image_raw</depthImageTopicName>
          <depthImageCameraInfoTopicName>/camera/depth/camera_info</depthImageCameraInfoTopicName>
          <pointCloudTopicName>/camera/depth/points</pointCloudTopicName>
          <frameName>camera_link</frameName>
          <pointCloudCutoff>0.5</pointCloudCutoff>
          <pointCloudCutoffMax>3.0</pointCloudCutoffMax>
          <distortionK1>0</distortionK1>
          <distortionK2>0</distortionK2>
          <distortionK3>0</distortionK3>
          <distortionT1>0</distortionT1>
          <distortionT2>0</distortionT2>
          <CxPrime>0</CxPrime>
          <Cx>0</Cx>
          <Cy>0</Cy>
          <focalLength>0</focalLength>
          <hackBaseline>0</hackBaseline>
        </plugin>
