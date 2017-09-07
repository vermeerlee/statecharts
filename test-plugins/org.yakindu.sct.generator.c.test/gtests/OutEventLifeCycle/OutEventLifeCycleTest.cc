/* Generated by YAKINDU Statechart Tools code generator. */

#include "gtest/gtest.h"
#include "OutEventLifeCycle.h"

#include "sc_timer_service.h"



//! The timers are managed by a timer service. */
static sc_unit_timer_service_t timer_service;

static OutEventLifeCycle statechart;

class OutEventLifeCycleTest : public ::testing::Test{
	protected:
	virtual void SetUp() {
		outEventLifeCycle_init(&statechart);
		sc_timer_service_init(
			&timer_service,
			0,
			(sc_run_cycle_fp) &outEventLifeCycle_runCycle,
			false,
			200,
			&statechart
		);
	}
};

void init(bool sndCycle){
	outEventLifeCycle_enter(&statechart);
	outEventLifeCycleIface_raise_e(&statechart);
	sc_timer_service_proceed_cycles(&timer_service, 1);
	if (sndCycle) {
		sc_timer_service_proceed_cycles(&timer_service, 1);
	}
}

TEST_F(OutEventLifeCycleTest, availableAfterCycle) {
	outEventLifeCycle_enter(&statechart);
	outEventLifeCycleIface_raise_e(&statechart);
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(outEventLifeCycleIface_israised_f(&statechart));
}
TEST_F(OutEventLifeCycleTest, availableWithinCycle) {
	init(false);
	EXPECT_TRUE(outEventLifeCycleIface_get_f_available_in_cycle(&statechart));
}
TEST_F(OutEventLifeCycleTest, unvailableWithin2ndCycle) {
	init(true);
	EXPECT_TRUE(!outEventLifeCycleIface_get_f_available_in_next_cycle(&statechart));
}
TEST_F(OutEventLifeCycleTest, unvailableAfter2ndCycle) {
	init(true);
	EXPECT_TRUE(!outEventLifeCycleIface_israised_f(&statechart));
}

