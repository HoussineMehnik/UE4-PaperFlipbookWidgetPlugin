// Copyright 2018 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//


#include "PaperFlipbookWidget.h"

#define LOCTEXT_NAMESPACE "PaperFlipbookWidgetModule"

void FPaperFlipbookWidgetModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FPaperFlipbookWidgetModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPaperFlipbookWidgetModule, PaperFlipbookWidget)