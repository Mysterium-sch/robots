using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor Mellen4;
extern motor Mellen6;
extern motor Mellen5;
extern motor_group leftDrive;
extern motor_group rightDrive;

extern controller Controller1;
extern drivetrain Drivetrain;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );
