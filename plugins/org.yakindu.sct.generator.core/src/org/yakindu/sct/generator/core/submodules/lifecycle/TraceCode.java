/**
 * Copyright (c) 2020 committers of YAKINDU and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 * Contributors:
 * 	committers of YAKINDU - initial API and implementation
 * 
 */
package org.yakindu.sct.generator.core.submodules.lifecycle;

import org.yakindu.sct.model.sexec.ExecutionFlow;

/**
 * 
 * @author aterfloth
 *
 */
public interface TraceCode {
	
	CharSequence traceEnterCode(ExecutionFlow flow);
	CharSequence traceExitCode(ExecutionFlow flow);
	
}