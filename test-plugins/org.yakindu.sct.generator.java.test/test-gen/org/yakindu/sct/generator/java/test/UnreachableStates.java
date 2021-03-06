/** Generated by YAKINDU Statechart Tools code generator. */

package org.yakindu.sct.generator.java.test;

import org.junit.*;
import static org.junit.Assert.*;
import org.yakindu.scr.unreachablestates.UnreachableStatesStatemachine;
import org.yakindu.scr.unreachablestates.UnreachableStatesStatemachine.State;	
import org.yakindu.scr.VirtualTimer;
import org.yakindu.scr.VirtualTimer.VirtualTimeTask;
import org.yakindu.scr.VirtualTimer.CycleTimeEventTask;

/**
 * Unit TestCase for UnreachableStates
 */
@SuppressWarnings("all")
public class UnreachableStates {
	
	private UnreachableStatesStatemachine statemachine;	
	private VirtualTimer timer;
	
	
	@Before
	public void unreachableStates_setUp() {
		statemachine = new UnreachableStatesStatemachine();
		timer = new VirtualTimer(200);
		timer.schedulePeriodicalTask(new CycleTimeEventTask(statemachine), 200, 200);
		
		statemachine.init();
		
	}

	@After
	public void unreachableStates_tearDown() {
		statemachine = null;
		
		timer = null;
	}
	
	@Test
	public void test() {
		statemachine.enter();
		timer.cycleLeap(1l);
		assertTrue(statemachine.isStateActive(State.main_region_A));
		assertTrue(!statemachine.isStateActive(State.main_region_B));
		assertTrue(!statemachine.isStateActive(State.main_region_C));
		statemachine.exit();
	}
}
