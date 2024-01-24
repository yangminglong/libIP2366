#pragma once
#include <Arduino.h>
#include "Preferences.h"

class AppConfigs
{
public:
  uint32_t GetLimit();
  void SetLimit(uint32_t value);

  bool GetSilent();
  void SetSilent(bool value);

  void load();
  void save();
private:
  Preferences m_preferences;
  uint32_t m_limit;
  bool m_silent;

};