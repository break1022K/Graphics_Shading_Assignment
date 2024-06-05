// trackball.h: interface for the trackball class.
//
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

#ifndef TRACKBALL_INCLUDED
#define TRACKBALL_INCLUDED


typedef double vec3d[3];


#ifndef M_PI
#define M_PI 3.14159265
#endif


class TrackBall  
{

private:
	int width, height;
	vec3d lastPos;

	//quaternions
	double s;
	vec3d v;

public:
	double rMat[16];

public:
	TrackBall();
	virtual ~TrackBall();

	void initialize( void );
	void resize( const int &cx, const int &cy );
	void project( int &xi, int &yi, vec3d &v );
	void start( int xi, int yi );
	void end( int xi, int yi );

};

#endif // #ifndef TRACKBALL_INCLUDED

