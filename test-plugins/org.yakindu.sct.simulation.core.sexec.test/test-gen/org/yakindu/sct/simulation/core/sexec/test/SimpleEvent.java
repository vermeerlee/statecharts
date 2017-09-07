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
 * Unit TestCase for SimpleEvent
 */
@SuppressWarnings("all")
@RunWith(XtextRunner.class)
@InjectWith(SExecInjectionProvider.class)
public class SimpleEvent extends AbstractExecutionFlowTest {
	@Before
	public void setup() throws Exception{
		ExecutionFlow flow = models.loadExecutionFlowFromResource("SimpleEvent.sct");
		initInterpreter(flow);
	}
	@Test
	public void simpleEventTest() throws Exception {
		interpreter.enter();
		assertTrue("Expected A to be active",isStateActive("A"));
		assertTrue(5l == 5l);
		raiseEvent("Event1");
		interpreter.runCycle();
		assertTrue("Expected B to be active",isStateActive("B"));
		interpreter.runCycle();
		assertTrue(!isStateActive("B"));
	}
}