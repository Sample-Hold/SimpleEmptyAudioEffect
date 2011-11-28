//
//  MyTestedPlugin.h
//  MyTestedPlugin
//
//  Created by Fred G on 24/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#ifndef MyTestedPlugin_MyTestedPlugin_h
#define MyTestedPlugin_MyTestedPlugin_h

class MyTestedPluginKernel : public AUKernelBase
{
public:
	MyTestedPluginKernel(AUEffectBase * inAudioUnit);
    
    // processes one channel of non-interleaved samples
	virtual void Process(Float32 const* inSourceP,
                         Float32 * inDestP,
                         UInt32 inFramesToProcess,
                         UInt32 inNumChannels,
                         bool & ioSilence);
};

class MyTestedPlugin : public AUEffectBase
{ 
public:
	MyTestedPlugin(AudioUnit component);
    
	virtual OSStatus Version() { return 0xFFFFFFFF; }
	virtual OSStatus Initialize();
    
	virtual AUKernelBase * NewKernel() { return new MyTestedPluginKernel(this); }
};

AUDIOCOMPONENT_ENTRY(AUBaseFactory, MyTestedPlugin)

#endif
