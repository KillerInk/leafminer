#ifndef NETWORK_H
#define NETWORK_H
#include <cJSON.h>
#include <string>
short network_getJob();
void network_send(const std::string &job_id, const std::string &extranonce2, const std::string &ntime, const uint32_t &nonce);
void network_submit_all();
void difficulty();
#endif // NETWORK_H