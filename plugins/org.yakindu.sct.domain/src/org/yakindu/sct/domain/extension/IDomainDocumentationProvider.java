/**
 * Copyright (c) 2018 committers of YAKINDU and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 * Contributors:
 * 	committers of YAKINDU - initial API and implementation
 * 
 */
package org.yakindu.sct.domain.extension;

import java.net.URL;

/**
 * @author andreas muelder - Initial contribution and API
 * 
 */
public interface IDomainDocumentationProvider {

	public URL getDocumentationURL();

	class NullImpl implements IDomainDocumentationProvider {

		@Override
		public URL getDocumentationURL() {
			return null;
		}

	}
}
