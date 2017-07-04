/**
* Copyright (c) 2017 committers of YAKINDU and others.
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
#include "STextKeywordsInStatesAndRegions.h"
#include "sc_types.h"
static STextKeywordsInStatesAndRegions* statechart;

class StatemachineTest : public ::testing::Test{
	protected:
	virtual void SetUp() {
		statechart = new STextKeywordsInStatesAndRegions();
		statechart->init();
	}
	virtual void TearDown() {
		delete statechart;
	}
};


TEST_F(StatemachineTest, activeCheckWithSTextNamedStates) {
	
	
	statechart->enter();
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_raise));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_active));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_interface));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_event));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_in));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_var));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_external));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_default));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_entry));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_always));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_raise));
	
	statechart->getDefaultSCI()->raise_e1();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_valueof));
	
	statechart->getDefaultSCI()->raise_e2();
	
	statechart->runCycle();;
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::default_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::operation_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::namespace_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::local_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::interface_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::internal_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::event_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::in_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::out_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::var_valueof));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::readonly_namespace));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::external_internal));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::else_local));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::entry_out));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::exit_readonly));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::always_operation));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::oncycle_else));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::raise_exit));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::valueof_oncycle));
	
	EXPECT_TRUE(statechart->isStateActive(STextKeywordsInStatesAndRegions::active_valueof));
	
}
