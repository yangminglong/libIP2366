#include "AppConfigs.h"
#include "Preferences.h"

void AppConfigs::load()
{
  m_preferences.begin("AppConfigs", true);
  m_limit = m_preferences.getUInt("limit", 0);
  m_silent = m_preferences.getBool("silent", 0);

  m_preferences.end();
}

void AppConfigs::save()
{
  m_preferences.begin("AppConfigs", false);
  m_preferences.putUInt("limit", m_limit);
  m_preferences.putBool("silent", m_silent);
  m_preferences.end();
}

uint32_t AppConfigs::GetLimit()
{
  return m_limit;
}

void AppConfigs::SetLimit(uint32_t value)
{
  m_limit = value;
}

bool AppConfigs::GetSilent()
{
  return m_silent;
}

void AppConfigs::SetSilent(bool value)
{
  m_silent = value;
}
