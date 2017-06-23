# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---
## Result

The result of this project is not very satisfactory. If you want to see lane keeping via Model Predictive Control(MPC), please move to [`MPC Lane Keeping Project`](https://github.com/Hayoung-Kim/MPC-LaneKeeping-Project).

Click [`youtube link`](https://youtu.be/WthybjvOGJo) if you want to see full version video of this PID project. 
<p align="center">
  <img src="./img/pid_8mb.gif">
</p>

## Reflections

### The effect each of the P, I, D components
* `P gain`: The bigger p gain, the larger control input. If p gain is too large, it cause overshoot or oscilation.
* `I gain`: It reduce error remained. It helps the vehicle to travel more accurately along the center of the lane.
* `D gain`: When the change of the control value is large, it generate counter steer so that the vehicle can travel more stably along the lane.

### How the final hyperparameters were chosen?
*Handmade hyperparameters*. 
1. Tune `P gain` and `D gain` simultaneously. 
2. To reduce residual error, tune `I gain`.

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)


