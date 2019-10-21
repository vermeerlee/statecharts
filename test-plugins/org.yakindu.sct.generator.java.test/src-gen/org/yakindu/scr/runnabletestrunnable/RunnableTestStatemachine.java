/** Generated by YAKINDU Statechart Tools code generator. */
package org.yakindu.scr.runnabletestrunnable;

import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;
import org.yakindu.scr.ITimer;

public class RunnableTestStatemachine implements IRunnableTestStatemachine, Runnable {
	
	@Override
	public void run() {
		init();
		enter();
		boolean terminate = false;
		
		while (!(terminate || Thread.currentThread().isInterrupted())) {
			try {
				Runnable task = inEventQueue.take();
				task.run();
			} catch (InterruptedException e) {
				terminate = true;
			}
		}
	}
	
	protected class SCInterfaceImpl implements SCInterface {
	
		private List<SCInterfaceListener> listeners = new LinkedList<SCInterfaceListener>();
		
		public List<SCInterfaceListener> getListeners() {
			return listeners;
		}
		private SCInterfaceOperationCallback operationCallback;
		
		public synchronized void setSCInterfaceOperationCallback(
				SCInterfaceOperationCallback operationCallback) {
			this.operationCallback = operationCallback;
		}
		private boolean ev_out;
		
		private long ev_outValue;
		
		
		public synchronized boolean isRaisedEv_out() {
			return ev_out;
		}
		
		protected synchronized void raiseEv_out(long value) {
			ev_outValue = value;
			ev_out = true;
			for (SCInterfaceListener listener : listeners) {
				listener.onEv_outRaised(value);
			}
		}
		
		public synchronized long getEv_outValue() {
			if (! ev_out ) 
				throw new IllegalStateException("Illegal event value access. Event Ev_out is not raised!");
			return ev_outValue;
		}
		
		private boolean ev_in;
		
		private long ev_inValue;
		
		
		public synchronized void raiseEv_in(final long value) {
			inEventQueue.add(
				new Runnable() {
					@Override
					public void run() {
						ev_inValue = value;
						ev_in = true;
						runCycle();
					}
				}
			);
		}
		protected synchronized long getEv_inValue() {
			if (! ev_in ) 
				throw new IllegalStateException("Illegal event value access. Event Ev_in is not raised!");
			return ev_inValue;
		}
		
		private long myVar;
		
		public synchronized long getMyVar() {
			return myVar;
		}
		
		public synchronized void setMyVar(long value) {
			this.myVar = value;
		}
		
		private long afterCalls;
		
		public synchronized long getAfterCalls() {
			return afterCalls;
		}
		
		public synchronized void setAfterCalls(long value) {
			this.afterCalls = value;
		}
		
		private long cycles;
		
		public synchronized long getCycles() {
			return cycles;
		}
		
		public synchronized void setCycles(long value) {
			this.cycles = value;
		}
		
		private long s2_entered;
		
		public synchronized long getS2_entered() {
			return s2_entered;
		}
		
		public synchronized void setS2_entered(long value) {
			this.s2_entered = value;
		}
		
		protected void clearEvents() {
			ev_in = false;
		}
		protected void clearOutEvents() {
		
		ev_out = false;
		}
		
	}
	
	
	protected SCInterfaceImpl sCInterface;
	
	private boolean initialized = false;
	
	public enum State {
		runnableTest_main_region__final_,
		runnableTest_main_region_Composite_s1_s2,
		runnableTest_main_region_Composite_s1_s2_inner_region_s1,
		runnableTest_main_region_Composite_s1_s2_inner_region_s2,
		$NullState$
	};
	
	private final State[] stateVector = new State[1];
	
	private int nextStateIndex;
	
	private ITimer timer;
	
	private final boolean[] timeEvents = new boolean[3];
	
	private BlockingQueue<Runnable> inEventQueue = new LinkedBlockingQueue<Runnable>();
	private boolean isRunningCycle = false;
	public RunnableTestStatemachine() {
		sCInterface = new SCInterfaceImpl();
	}
	
	public synchronized void init() {
		this.initialized = true;
		if (timer == null) {
			throw new IllegalStateException("timer not set.");
		}
		if (this.sCInterface.operationCallback == null) {
			throw new IllegalStateException("Operation callback for interface sCInterface must be set.");
		}
		
		for (int i = 0; i < 1; i++) {
			stateVector[i] = State.$NullState$;
		}
		clearEvents();
		clearOutEvents();
		sCInterface.setMyVar(0);
		
		sCInterface.setAfterCalls(0);
		
		sCInterface.setCycles(0);
		
		sCInterface.setS2_entered(0);
	}
	
	public synchronized void enter() {
		if (!initialized) {
			throw new IllegalStateException(
				"The state machine needs to be initialized first by calling the init() function."
			);
		}
		if (timer == null) {
			throw new IllegalStateException("timer not set.");
		}
		timer.setTimer(this, 2, (1 * 1000), true);
		
		enterSequence_RunnableTest_main_region_default();
	}
	
	public synchronized void runCycle() {
		if (!initialized)
			throw new IllegalStateException(
					"The state machine needs to be initialized first by calling the init() function.");
		
		if (isRunningCycle) {
			return;
		}
		isRunningCycle = true;
		
		clearOutEvents();
	
		Runnable task = getNextEvent();
		if (task == null) {
			task = getDefaultEvent();
		}
		
		while (task != null) {
			task.run();
			clearEvents();
			task = getNextEvent();
		}
		
		isRunningCycle = false;
	}
	
	protected synchronized void singleCycle() {
		for (nextStateIndex = 0; nextStateIndex < stateVector.length; nextStateIndex++) {
			switch (stateVector[nextStateIndex]) {
				case runnableTest_main_region__final_:
					runnableTest_main_region__final__react(true);
					break;
				case runnableTest_main_region_Composite_s1_s2_inner_region_s1:
					runnableTest_main_region_Composite_s1_s2_inner_region_s1_react(true);
					break;
				case runnableTest_main_region_Composite_s1_s2_inner_region_s2:
					runnableTest_main_region_Composite_s1_s2_inner_region_s2_react(true);
					break;
			default:
				// $NullState$
			}
		}
	}
	
	protected Runnable getNextEvent() {
		if(!inEventQueue.isEmpty()) {
			return inEventQueue.poll();
		}
		return null;
	}
	
	protected Runnable getDefaultEvent() {
		return new Runnable() {
			@Override
			public void run() {
				singleCycle();
			}
		};
	}
	
	public synchronized void exit() {
		exitSequence_RunnableTest_main_region();
		timer.unsetTimer(this, 2);
	}
	
	/**
	 * @see IStatemachine#isActive()
	 */
	public synchronized boolean isActive() {
		return stateVector[0] != State.$NullState$;
	}
	
	/** 
	* @see IStatemachine#isFinal()
	*/
	public synchronized boolean isFinal() {
		return (stateVector[0] == State.runnableTest_main_region__final_);
	}
	/**
	* This method resets the incoming events (time events included).
	*/
	protected void clearEvents() {
		sCInterface.clearEvents();
		for (int i=0; i<timeEvents.length; i++) {
			timeEvents[i] = false;
		}
	}
	
	/**
	* This method resets the outgoing events.
	*/
	protected void clearOutEvents() {
		sCInterface.clearOutEvents();
	}
	
	/**
	* Returns true if the given state is currently active otherwise false.
	*/
	public synchronized boolean isStateActive(State state) {
	
		switch (state) {
		case runnableTest_main_region__final_:
			return stateVector[0] == State.runnableTest_main_region__final_;
		case runnableTest_main_region_Composite_s1_s2:
			return stateVector[0].ordinal() >= State.
					runnableTest_main_region_Composite_s1_s2.ordinal()&& stateVector[0].ordinal() <= State.runnableTest_main_region_Composite_s1_s2_inner_region_s2.ordinal();
		case runnableTest_main_region_Composite_s1_s2_inner_region_s1:
			return stateVector[0] == State.runnableTest_main_region_Composite_s1_s2_inner_region_s1;
		case runnableTest_main_region_Composite_s1_s2_inner_region_s2:
			return stateVector[0] == State.runnableTest_main_region_Composite_s1_s2_inner_region_s2;
		default:
			return false;
		}
	}
	
	/**
	* Set the {@link ITimer} for the state machine. It must be set
	* externally on a timed state machine before a run cycle can be correctly
	* executed.
	* 
	* @param timer
	*/
	public synchronized void setTimer(ITimer timer) {
		this.timer = timer;
	}
	
	/**
	* Returns the currently used timer.
	* 
	* @return {@link ITimer}
	*/
	public ITimer getTimer() {
		return timer;
	}
	
	public synchronized void timeElapsed(int eventID) {
		inEventQueue.add(new Runnable() {
			@Override
			public void run() {
				timeEvents[eventID] = true;
				singleCycle();
			}
		});
		runCycle();
	}
	
	public SCInterface getSCInterface() {
		return sCInterface;
	}
	
	public synchronized boolean isRaisedEv_out() {
		return sCInterface.isRaisedEv_out();
	}
	
	public synchronized long getEv_outValue() {
		return sCInterface.getEv_outValue();
	}
	
	public synchronized void raiseEv_in(long value) {
		sCInterface.raiseEv_in(value);
	}
	
	public synchronized long getMyVar() {
		return sCInterface.getMyVar();
	}
	
	public synchronized void setMyVar(long value) {
		sCInterface.setMyVar(value);
	}
	
	public synchronized long getAfterCalls() {
		return sCInterface.getAfterCalls();
	}
	
	public synchronized void setAfterCalls(long value) {
		sCInterface.setAfterCalls(value);
	}
	
	public synchronized long getCycles() {
		return sCInterface.getCycles();
	}
	
	public synchronized void setCycles(long value) {
		sCInterface.setCycles(value);
	}
	
	public synchronized long getS2_entered() {
		return sCInterface.getS2_entered();
	}
	
	public synchronized void setS2_entered(long value) {
		sCInterface.setS2_entered(value);
	}
	
	/* Entry action for state 'Composite_s1_s2'. */
	private void entryAction_RunnableTest_main_region_Composite_s1_s2() {
		timer.setTimer(this, 0, (10 * 1000), false);
	}
	
	/* Entry action for state 's1'. */
	private void entryAction_RunnableTest_main_region_Composite_s1_s2_inner_region_s1() {
		timer.setTimer(this, 1, 500, false);
		
		sCInterface.raiseEv_out(2);
	}
	
	/* Entry action for state 's2'. */
	private void entryAction_RunnableTest_main_region_Composite_s1_s2_inner_region_s2() {
		sCInterface.setS2_entered(sCInterface.getS2_entered() + 1);
	}
	
	/* Exit action for state 'Composite_s1_s2'. */
	private void exitAction_RunnableTest_main_region_Composite_s1_s2() {
		timer.unsetTimer(this, 0);
	}
	
	/* Exit action for state 's1'. */
	private void exitAction_RunnableTest_main_region_Composite_s1_s2_inner_region_s1() {
		timer.unsetTimer(this, 1);
	}
	
	/* Default enter sequence for state null */
	private void enterSequence_RunnableTest_main_region__final__default() {
		nextStateIndex = 0;
		stateVector[0] = State.runnableTest_main_region__final_;
	}
	
	/* 'default' enter sequence for state Composite_s1_s2 */
	private void enterSequence_RunnableTest_main_region_Composite_s1_s2_default() {
		entryAction_RunnableTest_main_region_Composite_s1_s2();
		enterSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_default();
	}
	
	/* 'default' enter sequence for state s1 */
	private void enterSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1_default() {
		entryAction_RunnableTest_main_region_Composite_s1_s2_inner_region_s1();
		nextStateIndex = 0;
		stateVector[0] = State.runnableTest_main_region_Composite_s1_s2_inner_region_s1;
	}
	
	/* 'default' enter sequence for state s2 */
	private void enterSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s2_default() {
		entryAction_RunnableTest_main_region_Composite_s1_s2_inner_region_s2();
		nextStateIndex = 0;
		stateVector[0] = State.runnableTest_main_region_Composite_s1_s2_inner_region_s2;
	}
	
	/* 'default' enter sequence for region main region */
	private void enterSequence_RunnableTest_main_region_default() {
		react_RunnableTest_main_region__entry_Default();
	}
	
	/* 'default' enter sequence for region inner region */
	private void enterSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_default() {
		react_RunnableTest_main_region_Composite_s1_s2_inner_region__entry_Default();
	}
	
	/* Default exit sequence for final state. */
	private void exitSequence_RunnableTest_main_region__final_() {
		nextStateIndex = 0;
		stateVector[0] = State.$NullState$;
	}
	
	/* Default exit sequence for state Composite_s1_s2 */
	private void exitSequence_RunnableTest_main_region_Composite_s1_s2() {
		exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region();
		exitAction_RunnableTest_main_region_Composite_s1_s2();
	}
	
	/* Default exit sequence for state s1 */
	private void exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1() {
		nextStateIndex = 0;
		stateVector[0] = State.$NullState$;
		
		exitAction_RunnableTest_main_region_Composite_s1_s2_inner_region_s1();
	}
	
	/* Default exit sequence for state s2 */
	private void exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s2() {
		nextStateIndex = 0;
		stateVector[0] = State.$NullState$;
	}
	
	/* Default exit sequence for region main region */
	private void exitSequence_RunnableTest_main_region() {
		switch (stateVector[0]) {
		case runnableTest_main_region__final_:
			exitSequence_RunnableTest_main_region__final_();
			break;
		case runnableTest_main_region_Composite_s1_s2_inner_region_s1:
			exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1();
			exitAction_RunnableTest_main_region_Composite_s1_s2();
			break;
		case runnableTest_main_region_Composite_s1_s2_inner_region_s2:
			exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s2();
			exitAction_RunnableTest_main_region_Composite_s1_s2();
			break;
		default:
			break;
		}
	}
	
	/* Default exit sequence for region inner region */
	private void exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region() {
		switch (stateVector[0]) {
		case runnableTest_main_region_Composite_s1_s2_inner_region_s1:
			exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1();
			break;
		case runnableTest_main_region_Composite_s1_s2_inner_region_s2:
			exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s2();
			break;
		default:
			break;
		}
	}
	
	/* Default react sequence for initial entry  */
	private void react_RunnableTest_main_region__entry_Default() {
		enterSequence_RunnableTest_main_region_Composite_s1_s2_default();
	}
	
	/* Default react sequence for initial entry  */
	private void react_RunnableTest_main_region_Composite_s1_s2_inner_region__entry_Default() {
		enterSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1_default();
	}
	
	private boolean react() {
		if (timeEvents[2]) {
			sCInterface.operationCallback.displayTime();
		}
		sCInterface.setCycles(sCInterface.getCycles() + 1);
		
		return false;
	}
	
	private boolean runnableTest_main_region__final__react(boolean try_transition) {
		boolean did_transition = try_transition;
		
		if (try_transition) {
			if (react()==false) {
				did_transition = false;
			}
		}
		return did_transition;
	}
	
	private boolean runnableTest_main_region_Composite_s1_s2_react(boolean try_transition) {
		boolean did_transition = try_transition;
		
		if (try_transition) {
			if (react()==false) {
				if (timeEvents[0]) {
					exitSequence_RunnableTest_main_region_Composite_s1_s2();
					enterSequence_RunnableTest_main_region__final__default();
				} else {
					did_transition = false;
				}
			}
		}
		return did_transition;
	}
	
	private boolean runnableTest_main_region_Composite_s1_s2_inner_region_s1_react(boolean try_transition) {
		boolean did_transition = try_transition;
		
		if (try_transition) {
			if (runnableTest_main_region_Composite_s1_s2_react(try_transition)==false) {
				if (sCInterface.ev_in) {
					exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1();
					enterSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s2_default();
				} else {
					if (timeEvents[1]) {
						exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1();
						sCInterface.setAfterCalls(sCInterface.getAfterCalls() + 1);
						
						enterSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1_default();
					} else {
						did_transition = false;
					}
				}
			}
		}
		return did_transition;
	}
	
	private boolean runnableTest_main_region_Composite_s1_s2_inner_region_s2_react(boolean try_transition) {
		boolean did_transition = try_transition;
		
		if (try_transition) {
			if (runnableTest_main_region_Composite_s1_s2_react(try_transition)==false) {
				if (sCInterface.ev_in) {
					exitSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s2();
					enterSequence_RunnableTest_main_region_Composite_s1_s2_inner_region_s1_default();
				} else {
					did_transition = false;
				}
			}
		}
		return did_transition;
	}
	
}