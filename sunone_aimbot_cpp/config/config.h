#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <vector>

class Config
{
public:
    // Capture
    std::string capture_method;
    int detection_resolution;
    int capture_fps;
    int monitor_idx;
    bool circle_mask;
    bool capture_borders;
    bool capture_cursor;
    std::string virtual_camera_name;

    // Target
    bool disable_headshot;
    float body_y_offset;
    bool ignore_third_person;
    bool shooting_range_targets;
    bool auto_aim;

    // Mouse
    int dpi;
    float sensitivity;
    int fovX;
    int fovY;
    float minSpeedMultiplier;
    float maxSpeedMultiplier;
    float predictionInterval;
    std::string input_method;
    bool no_recoil;
    float no_recoil_strength;

    // Arduino
    int arduino_baudrate;
    std::string arduino_port;
    bool arduino_16_bit_mouse;
    bool arduino_enable_keys;

    // Mouse shooting
    bool auto_shoot;
    float bScope_multiplier;

    // AI
    std::string ai_model;
    float confidence_threshold;
    float nms_threshold;
    int max_detections;
    std::string postprocess;

    // Optical Flow
    bool enable_optical_flow;
    bool draw_optical_flow;
    int draw_optical_flow_steps;
    float optical_flow_alpha_cpu;
    double optical_flow_magnitudeThreshold;
    float staticFrameThreshold;

    // Buttons
    std::vector<std::string> button_targeting;
    std::vector<std::string> button_exit;
    std::vector<std::string> button_pause;
    std::vector<std::string> button_reload_config;
    std::vector<std::string> button_open_overlay;
    std::vector<std::string> button_shoot;

    // Overlay
    int overlay_opacity;
    bool overlay_snow_theme;

    // Custom Classes
    int class_player;
    int class_bot;
    int class_weapon;
    int class_outline;
    int class_dead_body;
    int class_hideout_target_human;
    int class_hideout_target_balls;
    int class_head;
    int class_smoke;
    int class_fire;
    int class_third_person;

    // Debug
    bool show_window;
    bool show_fps;
    std::string window_name;
    int window_size;
    std::vector<std::string> screenshot_button;
    int screenshot_delay;
    bool always_on_top;
    bool verbose;

    bool loadConfig(const std::string& filename = "config.ini");
    bool saveConfig(const std::string& filename = "config.ini");
    std::string joinStrings(const std::vector<std::string>& vec, const std::string& delimiter = ",");
private:
    std::vector<std::string> splitString(const std::string& str, char delimiter = ',');
};

#endif // CONFIG_H