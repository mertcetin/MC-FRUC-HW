************************************************************************** 
			Motion-Compensated Frame-Rate Up-Conversion for Hardware		
**************************************************************************
																			
 This software which contains modifications over original MC-FRUC			
 software to comply with the hardware design of ATME algorithm			
 additions include:														
  - 32 update vectors instead of 25										
  - inversion of MVs for ease at hardware									
  - MV ordering before calculation to comply with HW						
  - 15 bit LFSR for pseudo-random number generation						 
																			
Features:																	
Motion Estimation Methods:												
		3DRS																
		An Adaptive True Motion Estimation (ATME)							
		Bi-lateral Search (with initial vector selection)					
		Full-Search															
Up-Conversion Methods:													
	-Motion Compensated Field Averaging										
	-Motion Compensated Field Averaging for Bilateral Search				
	-Dynamic Median Filtering												
  -Static Median Filtering												
	-Two Mode Interpolation with Occlusion Detection using the Vector Field	
	-OBMC																	
	-Motion Compensation for Video Coding									
																			
Option to up-convert input video by a conversion factor of 2				
or re-generate and overwrite the even numbered frames for testing			
																			
	Coder: Mert CETIN (mertc at sabanciuniv dot edu)						
																			
	Sabanci University														
	Faculty of Engineering and Natural Sciences								
	System on Chip Design and Testing Group									
	http://fens.sabanciuniv.edu/soclab/										
																			