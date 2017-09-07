/* Generated by YAKINDU Statechart Tools code generator. */

#include "gtest/gtest.h"
#include "GuardedEntry.h"

#include "sc_timer_service.h"



//! The timers are managed by a timer service. */
static sc_unit_timer_service_t timer_service;

static GuardedEntry statechart;

class GuardedEntryTest : public ::testing::Test{
	protected:
	virtual void SetUp() {
		guardedEntry_init(&statechart);
		sc_timer_service_init(
			&timer_service,
			0,
			(sc_run_cycle_fp) &guardedEntry_runCycle,
			false,
			200,
			&statechart
		);
	}
};

void initEntryInTransition(bool guardVar, bool doneVar){
	guardedEntry_enter(&statechart);
	EXPECT_TRUE(guardedEntry_isStateActive(&statechart, GuardedEntry_main_region_A));
	guardedEntryIface_raise_e(&statechart);
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(guardedEntry_isStateActive(&statechart, GuardedEntry_main_region_B));
	guardedEntryIface_set_guard(&statechart,guardVar);
	guardedEntryIface_set_done(&statechart,doneVar);
	guardedEntryIface_raise_e(&statechart);
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(guardedEntry_isStateActive(&statechart, GuardedEntry_main_region_A));
}

TEST_F(GuardedEntryTest, EntryNotTakenOnStatechartEnter) {
	EXPECT_TRUE(guardedEntryIface_get_guard(&statechart)== false);
	guardedEntry_enter(&statechart);
	EXPECT_TRUE(guardedEntry_isStateActive(&statechart, GuardedEntry_main_region_A));
	EXPECT_TRUE(guardedEntryIface_get_done(&statechart)== false);
}
TEST_F(GuardedEntryTest, EntryTakenOnStatechartEnter) {
	guardedEntryIface_set_guard(&statechart,true);
	guardedEntry_enter(&statechart);
	EXPECT_TRUE(guardedEntry_isStateActive(&statechart, GuardedEntry_main_region_A));
	EXPECT_TRUE(guardedEntryIface_get_done(&statechart)== true);
}
TEST_F(GuardedEntryTest, EntryTakenInTransition) {
	initEntryInTransition(true,false);
	EXPECT_TRUE(guardedEntryIface_get_done(&statechart));
}
TEST_F(GuardedEntryTest, EntryNotTakenInTransition) {
	initEntryInTransition(false,false);
	EXPECT_TRUE(!guardedEntryIface_get_done(&statechart));
}

