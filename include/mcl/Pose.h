#ifndef MCL__POSE_H_
#define MCL__POSE_H_

#include <cmath>

namespace mcl
{
class Pose
{
    public:
        Pose(): x_(0.0), y_(0.0), yaw_(0.0) {};
        Pose(double x, double y, double yaw)
            : x_(x), y_(y), yaw_(yaw) {};
        Pose(const Pose & other) 
            : x_(other.x_), y_(other.y_), yaw_(other.yaw_) {};
        ~Pose() {}; 

        void setX(double x) {x_ = x;};
        void setY(double y) {y_ = y;};
        void setYaw(double yaw) {yaw_ = yaw,normalizeAngle();};

        void setPose(double x, double y, double yaw){
            x_ = x;
            y_ = y;
            yaw_ = yaw;
            normalizeAngle();
        };
        void setPose(const Pose & other){
            x_ = other.x_;
            y_ = other.y_;
            yaw_ = other.yaw_;
            normalizeAngle();
        };
        
        double getX(void) const {return x_;};
        double getY(void) const {return y_;};
        double getYaw(void) const {return yaw_;};
        void getPose(double & x, double & y, double & yaw) const {
            x = x_;
            y = y_;
            yaw = yaw_;
        };

    private:
        double x_, y_, yaw_;

        void Pose::normalizeAngle(void)
        {
            while (yaw_ < -M_PI)
                yaw_ += 2.0 * M_PI;
            while (yaw_ > M_PI)
                yaw_ -= 2.0 * M_PI;
        }
};
}  // namespace emcl
#endif	// MCL__POSE_H_
