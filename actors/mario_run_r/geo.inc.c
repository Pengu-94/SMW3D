#include "src/game/envfx_snow.h"

const GeoLayout mario_run_r_RunningA_R_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_ALPHA, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(99, 255, 45),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, mario_run_r_RunningA_R_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout mario_run_r_RunningB_R_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_ALPHA, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(99, 255, 45),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, mario_run_r_RunningB_R_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout mario_run_r_RunningC_R_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_ALPHA, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_SHADOW(99, 255, 45),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, mario_run_r_RunningC_R_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout mario_run_r_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(3, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, mario_run_r_RunningA_R_geo),
			GEO_BRANCH(1, mario_run_r_RunningB_R_geo),
			GEO_BRANCH(1, mario_run_r_RunningC_R_geo),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_ALPHA, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
