#ifndef  __xrole__
#define __xrole__

#include "XActor.hpp"


namespace Entitas
{

	class XRole : public XActor {

	public:

		void Reset(unsigned int uid, int confid, float hp, float sp, float attack, float hit, Path* path)
		{
			XActor::Reset(uid, confid, hp, sp, attack, hit, path);
		}

	};

}


#endif
