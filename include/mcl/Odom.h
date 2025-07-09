#ifndef MCL__ODOM_H_
#define MCL__ODOM_H_

#include <cmath>
#include "random"

namespace mcl
{
class Odom
{
    private:
        double fw_var_per_fw_;
        double fw_var_per_rot_;
        double rot_var_per_fw_;
        double rot_var_per_rot_;
        std::normal_distribution<>std_norm_dist_;  //乱数作成
    public:
        double DrawFwNoise(void){

        }
}
}