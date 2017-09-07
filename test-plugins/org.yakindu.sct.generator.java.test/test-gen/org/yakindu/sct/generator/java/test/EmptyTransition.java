/* Generated by YAKINDU Statechart Tools code generator. */

package org.yakindu.sct.generator.java.test;

import org.junit.*;
import static org.junit.Assert.*;
import org.yakindu.scr.emptytransition.EmptyTransitionStatemachine;
import org.yakindu.scr.emptytransition.EmptyTransitionStatemachine.State;	
import org.yakindu.scr.VirtualTimer;
import org.yakindu.scr.VirtualTimer.VirtualTimeTask;
import org.yakindu.scr.VirtualTimer.CycleTimeEventTask;

/**
 * Unit TestCase for EmptyTransition
 */
@SuppressWarnings("all")
public class EmptyTransition {
	
	private EmptyTransitionStatemachine statemachine;	
	private VirtualTimer timer;
	
	
	@Before
	public void emptyTransition_setUp() {
		statemachine = new EmptyTransitionStatemachine();
		timer = new VirtualTimer(200);
		timer.schedulePeriodicalTask(new CycleTimeEventTask(statemachine), 200, 200);
		statemachine.init();
	}

	@After
	public void emptyTransition_tearDown() {
		statemachine = null;
		
		timer = null;
	}
	
	@Test
	public void emptyTransitionTest() {
		statemachine.enter();
		timer.cycleLeap(1);
		assertTrue(!statemachine.isStateActive(State.main_region_B));
		assertTrue(statemachine.isStateActive(State.main_region_A));
	}
}