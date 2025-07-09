
#ifndef MCL__PARTICLE_H_
#define MCL__PARTICLE_H_

#include "mcl/Pose.h"

namespace mcl
{
class Particle
{
	private:
		Pose p_;
		double w_;

	public:
		Particle() : p_(0.0, 0.0, 0.0), w_(1.0) {}
		Particle(double x, double y, double yaw, double w): p_(x, y, yaw), w_(w) {}
		Particle(Pose p, double w): p_(p), w_(w) {};
		~Particle() {};

		inline double getX(void) { return p_.getX(); }
		inline double getY(void) { return p_.getY(); }
		inline double getYaw(void) { return p_.getYaw(); }
		inline Pose getPose(void) { return p_; }
		inline double getW(void) { return w_; }
		inline void setX(double x) { p_.setX(x); }
		inline void setY(double y) { p_.setY(y); }
		inline void setYaw(double yaw) { p_.setYaw(yaw); }
		inline void setPose(double x, double y, double yaw) { p_.setPose(x, y, yaw); }
		inline void setPose(const Pose & p) { p_.setPose(p); }
		inline void setW(double w) { w_ = w; }
};
}  // namespace mcl

#endif	// EMCL2__PARTICLE_H_
