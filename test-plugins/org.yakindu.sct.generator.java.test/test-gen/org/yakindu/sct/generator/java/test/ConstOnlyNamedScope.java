
package org.yakindu.sct.generator.java.test;

import org.junit.*;
import static org.junit.Assert.*;
import org.yakindu.scr.constonlynamedscope.ConstOnlyNamedScopeStatemachine;
import org.yakindu.scr.constonlynamedscope.ConstOnlyNamedScopeStatemachine.State;	
import org.yakindu.scr.VirtualTimer;
import org.yakindu.scr.VirtualTimer.VirtualTimeTask;
import org.yakindu.scr.VirtualTimer.CycleTimeEventTask;

/**
 * Unit TestCase for ConstOnlyNamedScope
 */
@SuppressWarnings("all")
public class ConstOnlyNamedScope {
	
	private ConstOnlyNamedScopeStatemachine statemachine;	
	private VirtualTimer timer;
	
	
	@Before
	public void constOnlyNamedScope_setUp() {
		statemachine = new ConstOnlyNamedScopeStatemachine();
		timer = new VirtualTimer(200);
		timer.schedulePeriodicalTask(new CycleTimeEventTask(statemachine), 200, 200);
		
		statemachine.init();
		
	}

	@After
	public void constOnlyNamedScope_tearDown() {
		statemachine = null;
		
		timer = null;
	}
	
	@Test
	public void statechartEntry() {
		statemachine.enter();
		assertTrue(statemachine.isStateActive(State.constOnlyNamedScope_main_region_A));
	}
	
	@Test
	public void stateTransition() {
		statemachine.enter();
		statemachine.getSCInterface().raiseE(1l);
		timer.cycleLeap(1);
		assertTrue(statemachine.isStateActive(State.constOnlyNamedScope_main_region_B));
	}
}
