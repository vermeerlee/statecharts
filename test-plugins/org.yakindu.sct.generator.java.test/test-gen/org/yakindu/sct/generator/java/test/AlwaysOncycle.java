/* Generated by YAKINDU Statechart Tools code generator. */

package org.yakindu.sct.generator.java.test;

import org.junit.*;
import static org.junit.Assert.*;
import org.yakindu.scr.alwaysoncycle.AlwaysOncycleStatemachine;
import org.yakindu.scr.alwaysoncycle.AlwaysOncycleStatemachine.State;	
import org.yakindu.scr.VirtualTimer;
import org.yakindu.scr.VirtualTimer.VirtualTimeTask;
import org.yakindu.scr.VirtualTimer.CycleTimeEventTask;

/**
 * Unit TestCase for AlwaysOncycle
 */
@SuppressWarnings("all")
public class AlwaysOncycle {
	
	private AlwaysOncycleStatemachine statemachine;	
	private VirtualTimer timer;
	
	
	@Before
	public void alwaysOncycle_setUp() {
		statemachine = new AlwaysOncycleStatemachine();
		timer = new VirtualTimer(200);
		timer.schedulePeriodicalTask(new CycleTimeEventTask(statemachine), 200, 200);
		statemachine.init();
	}

	@After
	public void alwaysOncycle_tearDown() {
		statemachine = null;
		
		timer = null;
	}
	
	@Test
	public void alwaysOnCycleTest() {
		statemachine.enter();
		assertTrue(statemachine.isStateActive(State.main_region_StateA));
		while (statemachine.getValue() < 5l) {
			timer.cycleLeap(1);
			assertTrue(statemachine.isStateActive(State.main_region_StateA));
		}
		timer.cycleLeap(1);
		assertTrue(statemachine.isStateActive(State.main_region_StateB));
		while (statemachine.getValue() < 5l) {
			timer.cycleLeap(1);
			assertTrue(statemachine.isStateActive(State.main_region_StateB));
		}
		timer.cycleLeap(1);
		assertTrue(statemachine.isStateActive(State.main_region_StateA));
	}
}