#pragma once

class Heart {
private:
    int bpm_;

public:
    explicit Heart(int initial_bpm = 70) : bpm_(initial_bpm) {}

    void setBpm(int bpm) { bpm_ = bpm; }
    int getBpm() const { return bpm_;}
};