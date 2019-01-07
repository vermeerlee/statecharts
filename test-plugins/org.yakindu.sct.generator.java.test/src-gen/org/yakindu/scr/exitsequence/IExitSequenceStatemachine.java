package org.yakindu.scr.exitsequence;

import org.yakindu.scr.IStatemachine;

public interface IExitSequenceStatemachine extends IStatemachine {
	public interface SCInterface {
	
		public void raiseE();
		
		public void raiseF();
		
		public long getA_exit();
		
		public void setA_exit(long value);
		
		public long getAa_exit();
		
		public void setAa_exit(long value);
		
		public long getAb_exit();
		
		public void setAb_exit(long value);
		
		public long getAba_exit();
		
		public void setAba_exit(long value);
		
		public long getAbb_exit();
		
		public void setAbb_exit(long value);
		
		public long getAc_exit();
		
		public void setAc_exit(long value);
		
		public long getAca_exit();
		
		public void setAca_exit(long value);
		
		public long getAcaa_exit();
		
		public void setAcaa_exit(long value);
		
		public long getAd_exit();
		
		public void setAd_exit(long value);
		
		public long getAda_exit();
		
		public void setAda_exit(long value);
		
		public long getAdb_exit();
		
		public void setAdb_exit(long value);
		
		public long getAdc_exit();
		
		public void setAdc_exit(long value);
		
		public long getC();
		
		public void setC(long value);
		
	}
	
	public SCInterface getSCInterface();
	
}
