#include "src/game/envfx_snow.h"

const GeoLayout mario_jump_JumpRight_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_ALPHA, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(99, 255, 45),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, mario_jump_JumpRight_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};

const GeoLayout mario_jump_JumpLeft_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_ALPHA, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(99, 255, 45),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, mario_jump_JumpLeft_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};

const GeoLayout mario_jump_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(2, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, mario_jump_JumpRight_geo),
			GEO_BRANCH(1, mario_jump_JumpLeft_geo),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_ALPHA, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
