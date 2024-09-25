#ifndef BrazoRobotico_h
#define BrazoRobotico_h

class BrazoRobotico {
	private: 
		double x, y, z; 
		bool objeto; 
	public: 
		void BrazoRobotico(double x_ini=0, double y_ini=0, double z_ini=0); 
		double Consultar_X () const; 
		double COnsultar_Y () const; 
		double Consultar_Z () const; 
		bool Consultar_objeto () const; 

		void coger(); 
		void soltar(); 
		void mover(double x_fin, double y_fin, double z_fin); 
	};
#endif

