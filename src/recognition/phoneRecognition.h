#pragma once

#include "AudioClip.h"
#include "Phone.h"
#include "ProgressBar.h"
#include "BoundedTimeline.h"

BoundedTimeline<Phone> recognizePhones(
	const AudioClip& audioClip,
	boost::optional<std::string> dialog,
	int maxThreadCount,
	ProgressSink& progressSink);
