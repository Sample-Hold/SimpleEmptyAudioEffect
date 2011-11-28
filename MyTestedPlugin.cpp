//
//  MyTestedPlugin.cpp
//  MyTestedPlugin
//
//  Created by Fred G on 24/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include "MyTestedPlugin.h"

MyTestedPluginKernel::MyTestedPluginKernel(AUEffectBase * inAudioUnit ) : AUKernelBase(inAudioUnit)
{
    
}

void MyTestedPluginKernel::Process(Float32 const* inSourceP,
                                   Float32 * inDestP,
                                   UInt32 inFramesToProcess,
                                   UInt32 inNumChannels,
                                   bool & ioSilence)
{
	//This code will pass-thru the audio data.
	//This is usually where you want to process data to produce an effect.
}

MyTestedPlugin::MyTestedPlugin(AudioUnit component) : AUEffectBase(component)
{

}

OSStatus MyTestedPlugin::Initialize() 
{
	OSStatus result = AUEffectBase::Initialize();
	
	if(result == noErr ) {

	}
	
	return result;
}