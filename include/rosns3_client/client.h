#include "utils.h"
#include <vector>
#include "states_generated.h"

#define MAXLINE 2048

namespace utils = clientutils;

typedef std::vector<flatbuffers::Offset<Agent>> agents_t;

class Client
{
private:
    utils::params_t params;
    ros::NodeHandle n;
    utils::nodes_t nodes;
    int sockfd;
    bool client_busy;
    uint8_t* data;
    uint32_t data_size;
    std::vector<utils::neighborhood_t> neighborhoods;

    // plot info

    void iteration(const ros::TimerEvent &e);
    void send_recv_data();
    void set_nodes();
    void get_agent_states();
    void log_info();

public:
    Client(utils::params_t, ros::NodeHandle);
    void run();
    std::vector<utils::neighborhood_t> get_neighborhoods();
    
};
