/*
 *	server/zone/objects/mission/GeneralMissionObjective.h generated by engine3 IDL compiler 0.60
 */

#ifndef GENERALMISSIONOBJECTIVE_H_
#define GENERALMISSIONOBJECTIVE_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class Observer;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class Observable;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObserver;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace area {

class MissionSpawnActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace lair {

class LairObject;

} // namespace lair
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::lair;

#include "server/zone/templates/TemplateReference.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/mission/MissionObjective.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class GeneralMissionObjective : public MissionObjective {
public:
	GeneralMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void spawnLair();

	void destroyObjectFromDatabase();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setLairTemplateToSpawn(SharedObjectTemplate* sp);

protected:
	GeneralMissionObjective(DummyConstructorParameter* param);

	virtual ~GeneralMissionObjective();

	friend class GeneralMissionObjectiveHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class GeneralMissionObjectiveImplementation : public MissionObjectiveImplementation {
protected:
	TemplateReference<SharedObjectTemplate*> lairTemplateToSpawn;

	ManagedReference<MissionSpawnActiveArea* > spawnActiveArea;

	ManagedReference<LairObject* > lairObject;

public:
	GeneralMissionObjectiveImplementation(MissionObject* mission);

	GeneralMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void spawnLair();

	void destroyObjectFromDatabase();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setLairTemplateToSpawn(SharedObjectTemplate* sp);

	GeneralMissionObjective* _this;

	operator const GeneralMissionObjective*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~GeneralMissionObjectiveImplementation();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class GeneralMissionObjective;
};

class GeneralMissionObjectiveAdapter : public MissionObjectiveAdapter {
public:
	GeneralMissionObjectiveAdapter(GeneralMissionObjectiveImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	void spawnLair();

	void destroyObjectFromDatabase();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class GeneralMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<GeneralMissionObjectiveHelper> {
	static GeneralMissionObjectiveHelper* staticInitializer;

public:
	GeneralMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GeneralMissionObjectiveHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*GENERALMISSIONOBJECTIVE_H_*/
