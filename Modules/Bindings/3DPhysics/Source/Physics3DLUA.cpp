#include "Physics3DLUA.h"
#include "Physics3DLUAWrappers.h"
#include "PolyCoreServices.h"

using namespace Polycode;

int luaopen_Physics3D(lua_State *L) {
CoreServices *inst = (CoreServices*)lua_topointer(L, 1);
CoreServices::setInstance(inst);
	static const struct luaL_reg physics3dLib [] = {		{"CollisionScene", Physics3D_CollisionScene},
		{"CollisionScene_initCollisionScene", Physics3D_CollisionScene_initCollisionScene},
		{"CollisionScene_Update", Physics3D_CollisionScene_Update},
		{"CollisionScene_getCollisionEntityByObject", Physics3D_CollisionScene_getCollisionEntityByObject},
		{"CollisionScene_getFirstEntityInRay", Physics3D_CollisionScene_getFirstEntityInRay},
		{"CollisionScene_enableCollision", Physics3D_CollisionScene_enableCollision},
		{"CollisionScene_getCollisionByScreenEntity", Physics3D_CollisionScene_getCollisionByScreenEntity},
		{"CollisionScene_testCollision", Physics3D_CollisionScene_testCollision},
		{"CollisionScene_testCollisionOnCollisionChild", Physics3D_CollisionScene_testCollisionOnCollisionChild},
		{"CollisionScene_testCollisionOnCollisionChild_Convex", Physics3D_CollisionScene_testCollisionOnCollisionChild_Convex},
		{"CollisionScene_stopTrackingCollision", Physics3D_CollisionScene_stopTrackingCollision},
		{"CollisionScene_addCollisionChild", Physics3D_CollisionScene_addCollisionChild},
		{"CollisionScene_trackCollision", Physics3D_CollisionScene_trackCollision},
		{"CollisionScene_removeCollision", Physics3D_CollisionScene_removeCollision},
		{"CollisionScene_adjustForCollision", Physics3D_CollisionScene_adjustForCollision},
		{"delete_CollisionScene", Physics3D_delete_CollisionScene},
		{"CollisionSceneEntity_get_lastPosition", Physics3D_CollisionSceneEntity_get_lastPosition},
		{"CollisionSceneEntity_get_enabled", Physics3D_CollisionSceneEntity_get_enabled},
		{"CollisionSceneEntity_set_enabled", Physics3D_CollisionSceneEntity_set_enabled},
		{"CollisionSceneEntity", Physics3D_CollisionSceneEntity},
		{"CollisionSceneEntity_getSceneEntity", Physics3D_CollisionSceneEntity_getSceneEntity},
		{"CollisionSceneEntity_getType", Physics3D_CollisionSceneEntity_getType},
		{"CollisionSceneEntity_Update", Physics3D_CollisionSceneEntity_Update},
		{"CollisionSceneEntity_getConvexShape", Physics3D_CollisionSceneEntity_getConvexShape},
		{"CollisionSceneEntity_createCollisionShape", Physics3D_CollisionSceneEntity_createCollisionShape},
		{"delete_CollisionSceneEntity", Physics3D_delete_CollisionSceneEntity},
		{"PhysicsScene", Physics3D_PhysicsScene},
		{"PhysicsScene_Update", Physics3D_PhysicsScene_Update},
		{"PhysicsScene_removePhysicsChild", Physics3D_PhysicsScene_removePhysicsChild},
		{"PhysicsScene_getPhysicsEntityBySceneEntity", Physics3D_PhysicsScene_getPhysicsEntityBySceneEntity},
		{"PhysicsScene_addPhysicsChild", Physics3D_PhysicsScene_addPhysicsChild},
		{"PhysicsScene_trackPhysicsChild", Physics3D_PhysicsScene_trackPhysicsChild},
		{"PhysicsScene_addCharacterChild", Physics3D_PhysicsScene_addCharacterChild},
		{"PhysicsScene_removeCharacterChild", Physics3D_PhysicsScene_removeCharacterChild},
		{"PhysicsScene_addVehicleChild", Physics3D_PhysicsScene_addVehicleChild},
		{"delete_PhysicsScene", Physics3D_delete_PhysicsScene},
		{"PhysicsSceneEntity_get_enabled", Physics3D_PhysicsSceneEntity_get_enabled},
		{"PhysicsSceneEntity_set_enabled", Physics3D_PhysicsSceneEntity_set_enabled},
		{"PhysicsSceneEntity", Physics3D_PhysicsSceneEntity},
		{"PhysicsSceneEntity_Update", Physics3D_PhysicsSceneEntity_Update},
		{"PhysicsSceneEntity_getSceneEntity", Physics3D_PhysicsSceneEntity_getSceneEntity},
		{"PhysicsSceneEntity_setFriction", Physics3D_PhysicsSceneEntity_setFriction},
		{"PhysicsSceneEntity_getType", Physics3D_PhysicsSceneEntity_getType},
		{"delete_PhysicsSceneEntity", Physics3D_delete_PhysicsSceneEntity},
		{"PhysicsVehicle_get_tuning", Physics3D_PhysicsVehicle_get_tuning},
		{"PhysicsVehicle", Physics3D_PhysicsVehicle},
		{"PhysicsVehicle_addWheel", Physics3D_PhysicsVehicle_addWheel},
		{"PhysicsVehicle_applyEngineForce", Physics3D_PhysicsVehicle_applyEngineForce},
		{"PhysicsVehicle_setSteeringValue", Physics3D_PhysicsVehicle_setSteeringValue},
		{"PhysicsVehicle_setBrake", Physics3D_PhysicsVehicle_setBrake},
		{"PhysicsVehicle_warpVehicle", Physics3D_PhysicsVehicle_warpVehicle},
		{"PhysicsVehicle_Update", Physics3D_PhysicsVehicle_Update},
		{"delete_PhysicsVehicle", Physics3D_delete_PhysicsVehicle},
		{"PhysicsCharacter", Physics3D_PhysicsCharacter},
		{"PhysicsCharacter_Update", Physics3D_PhysicsCharacter_Update},
		{"PhysicsCharacter_setWalkDirection", Physics3D_PhysicsCharacter_setWalkDirection},
		{"PhysicsCharacter_jump", Physics3D_PhysicsCharacter_jump},
		{"PhysicsCharacter_warpCharacter", Physics3D_PhysicsCharacter_warpCharacter},
		{"PhysicsCharacter_setJumpSpeed", Physics3D_PhysicsCharacter_setJumpSpeed},
		{"PhysicsCharacter_setFallSpeed", Physics3D_PhysicsCharacter_setFallSpeed},
		{"PhysicsCharacter_setMaxJumpHeight", Physics3D_PhysicsCharacter_setMaxJumpHeight},
		{"PhysicsCharacter_onGround", Physics3D_PhysicsCharacter_onGround},
		{"delete_PhysicsCharacter", Physics3D_delete_PhysicsCharacter},
		{NULL, NULL}
	};
	luaL_openlib(L, "Physics3D", physics3dLib, 0);
	return 1;
}