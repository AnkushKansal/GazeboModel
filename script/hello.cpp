#include <gazebo/gazebo.hh>

namespace gazebo
{
  class GeneralRoomPluginMyRobot : public WorldPlugin
  {
    public: GeneralRoomPluginMyRobot() : WorldPlugin()
            {
              printf("Welcome to General Room\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(GeneralRoomPluginMyRobot)
}
