/* Generated by YAKINDU Statechart Tools code generator. */
package org.yakindu.sct.simulation.core.sexec.test;
import org.eclipse.xtext.junit4.InjectWith;
import org.eclipse.xtext.junit4.XtextRunner;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.yakindu.sct.model.sexec.ExecutionFlow;
import org.yakindu.sct.model.sexec.interpreter.test.util.AbstractExecutionFlowTest;
import org.yakindu.sct.model.sexec.interpreter.test.util.SExecInjectionProvider;
import org.yakindu.sct.test.models.SCTUnitTestModels;
import com.google.inject.Inject;
import static org.junit.Assert.assertTrue;
/**
 * Unit TestCase for TriggerGuardExpressions
 */
@SuppressWarnings("all")
@RunWith(XtextRunner.class)
@InjectWith(SExecInjectionProvider.class)
public class TriggerGuardExpressions extends AbstractExecutionFlowTest {
	@Before
	public void setup() throws Exception{
		ExecutionFlow flow = models.loadExecutionFlowFromResource("TriggerGuardExpressions.sct");
		initInterpreter(flow);
	}
	@Test
	public void trueGuard() throws Exception {
		interpreter.enter();
		assertTrue(isStateActive("A"));
		raiseEvent("e1");
		setBoolean("b", true);
		interpreter.runCycle();
		assertTrue(isStateActive("B"));
		interpreter.runCycle();
		assertTrue(isStateActive("A"));
		raiseEvent("e2");
		interpreter.runCycle();
		assertTrue(isStateActive("B"));
		interpreter.runCycle();
		assertTrue(isStateActive("A"));
		raiseEvent("e1");
		raiseEvent("e2");
		interpreter.runCycle();
		assertTrue(isStateActive("B"));
	}
	@Test
	public void falseGuard() throws Exception {
		interpreter.enter();
		assertTrue(isStateActive("A"));
		setBoolean("b", false);
		raiseEvent("e1");
		interpreter.runCycle();
		assertTrue(isStateActive("A"));
		raiseEvent("e2");
		interpreter.runCycle();
		assertTrue(isStateActive("A"));
		raiseEvent("e1");
		raiseEvent("e2");
		interpreter.runCycle();
		assertTrue(isStateActive("A"));
	}
}