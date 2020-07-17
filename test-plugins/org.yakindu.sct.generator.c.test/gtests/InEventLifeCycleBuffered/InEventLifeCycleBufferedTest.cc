/** Generated by YAKINDU Statechart Tools code generator. */

#include "gtest/gtest.h"
#include "InEventLifeCycleBuffered.h"

#include "sc_timer_service.h"

#define SC_UNUSED(P) (void)P

static InEventLifeCycleBuffered statechart;


class InEventLifeCycleBufferedTest : public ::testing::Test
{
public:
	/* All operations from the SCTUnit test class. */
	void inEventLifeCycleBufferedTest();
	void setTimer(InEventLifeCycleBuffered* statechart, const sc_eventid evid, const sc_integer time_ms, const sc_boolean periodic);
	void unsetTimer(InEventLifeCycleBuffered* handle, const sc_eventid evid);
protected:
	sc_unit_timer_service_t timer_service;
	virtual void SetUp();
};

static InEventLifeCycleBufferedTest * tc;


void InEventLifeCycleBufferedTest::SetUp()
{
	inEventLifeCycleBuffered_init(&statechart);
	sc_timer_service_init(
		&timer_service,
		0,
		(sc_run_cycle_fp) &inEventLifeCycleBuffered_runCycle,
		false,
		200,
		&statechart
	);
	
	
	tc = this;
}
void InEventLifeCycleBufferedTest::inEventLifeCycleBufferedTest()
{
	inEventLifeCycleBuffered_enter(&statechart);
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r1_A));
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r2_C));
	inEventLifeCycleBufferedIface_raise_e(&statechart);
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r1_A));
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r2_C));
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r1_A));
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r2_D));
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r1_A));
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r2_D));
	inEventLifeCycleBufferedIface_raise_f(&statechart);
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r1_A));
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r2_C));
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r1_B));
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r2_C));
	sc_timer_service_proceed_cycles(&timer_service, 1);
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r1_B));
	EXPECT_TRUE(inEventLifeCycleBuffered_isStateActive(&statechart, InEventLifeCycleBuffered_r2_C));
}

void InEventLifeCycleBufferedTest::setTimer(InEventLifeCycleBuffered* statechart, const sc_eventid evid, const sc_integer time_ms, const sc_boolean periodic){
	sc_timer_t timer;
	sc_timer_init(&timer, time_ms, periodic, evid, statechart);
	insert_timer(&(tc->timer_service), timer);
}

void InEventLifeCycleBufferedTest::unsetTimer(InEventLifeCycleBuffered* handle, const sc_eventid evid){
	SC_UNUSED(handle);
	delete_task(&(tc->timer_service), find_time_event(&timer_service, evid));
}

TEST_F(InEventLifeCycleBufferedTest, InEventLifeCycleBufferedTest) {
	inEventLifeCycleBufferedTest();
}

