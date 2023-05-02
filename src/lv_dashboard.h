#ifndef __LV_DASHBOARD_H
#define __LV_DASHBOARD_H

#include <stdio.h>

#include "core/LvDisplay.h"
#include "core/LvIndev.h"
#include "core/LvScr.h"
#include "core/lvglpp.h"
#include "misc/LvAnim.h"
#include "misc/LvAnimTimeline.h"
#include "misc/LvStyle.h"
#include "misc/LvTimer.h"
#include "widgets/LvBtn.h"
#include "widgets/LvLabel.h"
#include "widgets/LvLed.h"
#include "widgets/LvSlider.h"
#include "widgets/LvSwitch.h"

namespace HelloEx {

/* Milliseconds for application loop */
const unsigned int ms = 5;

/* Init the application */
void Create();

}  // namespace HelloEx

#endif