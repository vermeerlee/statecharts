/**
* Copyright (c) 2013 committers of YAKINDU and others.
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Eclipse Public License v1.0
* which accompanies this distribution, and is available at
* http://www.eclipse.org/legal/epl-v10.html
*
* Contributors:
*     committers of YAKINDU - initial API and implementation
*/
#include <string>
#include "gtest/gtest.h"
#include "ValuedEvents.hpp"

TEST(StatemachineTest, valuedEventsTest) {
	ValuedEvents* statechart = new ValuedEvents();
	statechart->init();
	statechart->enter();
	statechart->runCycle();
	EXPECT_TRUE(statechart->isActive(ValuedEvents_main_region_A));
	EXPECT_TRUE(statechart->isActive(ValuedEvents__region1_C));
	EXPECT_TRUE(statechart->getSCInterface().get_myVar()== 42);
	delete statechart;
}
