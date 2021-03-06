﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Partial Classes

This file is generated by: Vczh GacUI Resource Code Generator
************************************************************************
DO NOT MODIFY
***********************************************************************/

#include "Demo.h"

namespace demo
{
	// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)

	void MainWindow::OnCreate()
	{
	}

	void MainWindow::OnDestroy()
	{
	}

	// #endregion CLASS_MEMBER_GUIEVENT_HANDLER

	MainWindow::MainWindow()
	{
		InitializeComponents();
		OnCreate();
	}

	MainWindow::~MainWindow()
	{
		OnDestroy();
		ClearSubscriptions();
	}
}


namespace vl
{
	namespace reflection
	{
		namespace description
		{
			#define _ ,
			IMPL_CPP_TYPE_INFO(demo::MainWindow)

			BEGIN_CLASS_MEMBER(demo::MainWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_CONSTRUCTOR(demo::MainWindow*(), NO_PARAMETER)
			END_CLASS_MEMBER(demo::MainWindow)

			#undef _

			class DemoResourceLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(demo::MainWindow)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};

			class DemoResourcePlugin : public Object, public vl::presentation::controls::IGuiPlugin
			{
			public:
				void Load()override
				{
					GetGlobalTypeManager()->AddTypeLoader(new DemoResourceLoader);
				}

				void AfterLoad()override
				{
				}

				void Unload()override
				{
				}
			};
			GUI_REGISTER_PLUGIN(DemoResourcePlugin)
		}
	}
}

