//
//  MIKMIDI.h
//  MIKMIDI
//
//  Created by Andrew Madsen on 6/2/13.
//  Copyright (c) 2013 Mixed In Key. All rights reserved.
//

/** Umbrella header for MIKMIDI public interface. */

#import "MIKMIDICommand.h"
#import "MIKMIDIChannelVoiceCommand.h"
#import "MIKMIDIControlChangeCommand.h"
#import "MIKMIDINoteOnCommand.h"
#import "MIKMIDINoteOffCommand.h"
#import "MIKMIDIDestinationEndpoint.h"
#import "MIKMIDIDevice.h"
#import "MIKMIDIDeviceManager.h"
#import "MIKMIDIEndpoint.h"
#import "MIKMIDIEntity.h"
#import "MIKMIDIInputPort.h"
#import "MIKMIDIObject.h"
#import "MIKMIDIOutputPort.h"
#import "MIKMIDIPort.h"
#import "MIKMIDIResponder.h"
#import "MIKMIDISourceEndpoint.h"
#import "MIKMIDISystemExclusiveCommand.h"
#import "MIKMIDISystemMessageCommand.h"
#import "MIKMIDIMapping.h"
#import "MIKMIDIMappingManager.h"
#import "MIKMIDIMappingGenerator.h"
#import "MIKMIDIUtilities.h"
#import "NSUIApplication+MIKMIDI.h"
#import "MIKMIDIErrors.h"
#import "MIKMIDICommandThrottler.h"
#import "MIKMIDIEndpointSynthesizer.h"
#import "MIKMIDIEvent.h"
#import "MIKMIDIMetaCopyrightEvent.h"
#import "MIKMIDIMetaCuePointEvent.h"
#import "MIKMIDIMetaEvent.h"
#import "MIKMIDIMetaInstrumentNameEvent.h"
#import "MIKMIDIMetaKeySignatureEvent.h"
#import "MIKMIDIMetaLyricEvent.h"
#import "MIKMIDIMetaMarkerTextEvent.h"
#import "MIKMIDIMetaSequenceEvent.h"
#import "MIKMIDIMetaTextEvent.h"
#import "MIKMIDIMetaTimeSignatureEvent.h"
#import "MIKMIDIMetaTrackSequenceNameEvent.h"
#import "MIKMIDINoteEvent.h"
#import "MIKMIDIPlayer.h"
#import "MIKMIDISequence.h"
#import "MIKMIDITempoEvent.h"
#import "MIKMIDITrack.h"
#import "MIKMIDIClientDestinationEndpoint.h"
