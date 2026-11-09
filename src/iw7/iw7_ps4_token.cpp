// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "iw7_ps4.hpp"
namespace xsk::gsc::iw7_ps4
{
    extern std::array<std::pair<u32, char const*>, token_count> const token_list
    {{
        { 0x0001, "pl#" },
{ 0x0002, "-" },
{ 0x0003, "radius`" },
{ 0x0004, "note:" },
{ 0x0005, "scripts/code/delete" },
{ 0x0006, "scripts/code/struct" },
{ 0x0007, "scripts/mp/callbacksetup" },
{ 0x0008, "scripts/mp/agents/agent_common" },
{ 0x0009, "scripts/mp/agents/agents" },
{ 0x000A, "scripts/anim/notetracks_mp" },
{ 0x000B, "scripts/mp/bots/bots" },
{ 0x000C, "scripts/mp/agents/alien/agents_MAYBE" },
{ 0x000D, "_" },
{ 0x000E, "_custom" },
{ 0x000F, "_process_native_script" },
{ 0x0010, "accuracy" },
{ 0x0011, "actionslot1" },
{ 0x0012, "actionslot2" },
{ 0x0013, "actionslot3" },
{ 0x0014, "actionslot4" },
{ 0x0015, "actionslot5" },
{ 0x0016, "actionslot6" },
{ 0x0017, "actionslot7" },
{ 0x0018, "activator" },
{ 0x0019, "active" },
{ 0x001A, "activevisionset" },
{ 0x001B, "activevisionsetduration" },
{ 0x001C, "adrenaline" },
{ 0x001D, "agent" },
{ 0x001E, "agenthealth" },
{ 0x001F, "agentname" },
{ 0x0020, "agentteam" },
{ 0x0027, "alert" },
{ 0x0028, "alertlevel" },
{ 0x0029, "alertlevelint" },
{ 0x002A, "alien" },
{ 0x002B, "alignx" },
{ 0x002C, "aligny" },
{ 0x002D, "all" },
{ 0x002E, "allies" },
{ 0x002F, "allowcrouch" },
{ 0x0030, "allowdeath" },
{ 0x0031, "allowjump" },
{ 0x0032, "allowladders" },
{ 0x0033, "allowpain" },
{ 0x0034, "allowpain_internal" },
{ 0x0035, "allowprone" },
{ 0x0036, "alpha" },
{ 0x003C, "amount" },
{ 0x003D, "angle_deltas" },
{ 0x003E, "angledelta" },
{ 0x003F, "angleindex" },
{ 0x0040, "anglelerprate" },
{ 0x0041, "angles" },
{ 0x0042, "angles_offset" },
{ 0x0043, "anim_angle_delta" },
{ 0x0044, "anim_deltas" },
{ 0x0045, "anim_pose" },
{ 0x0046, "anim_will_finish" },
{ 0x0047, "anims" },
{ 0x0048, "animscript" },
{ 0x0049, "archived" },
{ 0x004A, "archivetime" },
{ 0x004B, "asleep" },
{ 0x004C, "aspectratio" },
{ 0x004D, "assists" },
{ 0x004F, "attacker" },
{ 0x0050, "attackeraccuracy" },
{ 0x0051, "attackercount" },
{ 0x0052, "auto_ai" }, // AUTOADDED
{ 0x0053, "auto_change" }, // AUTOADDED
{ 0x0054, "auto_nonai" }, // AUTOADDED
{ 0x0055, "axis" },
{ 0x005E, "badplaceawareness" },
{ 0x005F, "begin" }, // AUTOADDED
{ 0x0060, "begin_custom_anim" }, // AUTOADDED
{ 0x0061, "begin_firing" }, // AUTOADDED
{ 0x0062, "begin_firing_left" }, // AUTOADDED
{ 0x0063, "bipods" }, // AUTOADDED
{ 0x0064, "birthtime" },
{ 0x0065, "blade_hide" }, // AUTOADDED
{ 0x0066, "blade_show" }, // AUTOADDED
{ 0x0067, "blockfriendlies" }, // AUTOADDED
{ 0x0068, "blurradius" },
{ 0x0069, "body_animate_jnt" }, // AUTOADDED
{ 0x006A, "bodyindex" },
{ 0x006C, "btgoalheight" },
{ 0x006D, "btgoalradius" },
{ 0x0071, "bt_eventlistener" },
{ 0x0072, "bt_finalizebehavior" }, // AUTOADDED
{ 0x0073, "bt_finalizeregistrar" }, // AUTOADDED
{ 0x0074, "bt_getchildtaskid" }, // AUTOADDED
{ 0x0075, "bt_getdemeanor" },
{ 0x0077, "bt_init" },
{ 0x0078, "bt_initactions" }, // AUTOADDED
{ 0x0079, "bt_initnodetypes" }, // AUTOADDED
{ 0x007A, "bt_initroot" }, // AUTOADDED
{ 0x007B, "bt_istreeregistered" }, // AUTOADDED
{ 0x007C, "bt_nativecopyaction" }, // AUTOADDED
{ 0x007D, "bt_nativecopybehavior" }, // AUTOADDED
{ 0x007E, "bt_nativeexecaction" }, // AUTOADDED
{ 0x007F, "bt_nativefinalizeregistrar" }, // AUTOADDED
{ 0x0080, "bt_nativeistreeregistered" }, // AUTOADDED
{ 0x0081, "bt_nativeregisteraction" }, // AUTOADDED
{ 0x0082, "bt_nativeregisterbehavior" }, // AUTOADDED
{ 0x0083, "bt_nativeregisterbehaviortotree" }, // AUTOADDED
{ 0x0084, "bt_nativeregistertree" }, // AUTOADDED
{ 0x0085, "bt_nativesetregistrar" }, // AUTOADDED
{ 0x0086, "bt_nativetick" }, // AUTOADDED
{ 0x0087, "bt_negateresult" }, // AUTOADDED
{ 0x0088, "bt_registeraction" }, // AUTOADDED
{ 0x0089, "bt_registerbehavior" }, // AUTOADDED
{ 0x008A, "bt_registerbehaviortotree" }, // AUTOADDED
{ 0x008B, "bt_registerprefabtaskids" }, // AUTOADDED
{ 0x008C, "bt_registertaskargs" }, // AUTOADDED
{ 0x008D, "bt_registertree" }, // AUTOADDED
{ 0x008E, "bt_setregistrar" }, // AUTOADDED
{ 0x008F, "bt_terminateprevrunningaction" }, // AUTOADDED
{ 0x0090, "bt_tick" }, // AUTOADDED
{ 0x0096, "canclimbladders" },
{ 0x009C, "clantag" },
{ 0x009D, "classname" },
{ 0x009E, "clipdistance" },
{ 0x009F, "code_classname" },
{ 0x00A0, "code_damageradius" }, // AUTOADDED
{ 0x00A1, "code_move" }, // AUTOADDED
{ 0x00A2, "code_move_slide" }, // AUTOADDED
{ 0x00A3, "codecallback_agentadded" },
{ 0x00A4, "codecallback_agentdamaged" },
{ 0x00A5, "codecallback_agentimpaled" }, // AUTOADDED
{ 0x00A6, "codecallback_agentkilled" },
{ 0x00AA, "codecallback_getprojectilespeedscale" }, // AUTOADDED
{ 0x00AB, "codecallback_hostmigration" },
{ 0x00AC, "codecallback_leaderdialog" }, // AUTOADDED
{ 0x00AD, "codecallback_playerconnect" },
{ 0x00AE, "codecallback_playerdamage" }, // AUTOADDED
{ 0x00AF, "codecallback_playerdisconnect" },
{ 0x00B0, "codecallback_playerimpaled" },
{ 0x00B1, "codecallback_playerkilled" },
{ 0x00B2, "codecallback_playerlaststand" },
{ 0x00B3, "codecallback_playermigrated" },
{ 0x00B7, "codecallback_startgametype" },
{ 0x00B8, "codecallback_vehicledamage" }, // AUTOADDED
{ 0x00B9, "color" },
{ 0x00BA, "color_blind_toggled" }, // AUTOADDED
{ 0x00BB, "combat" }, // AUTOADDED
{ 0x00BC, "combatmode" },
{ 0x00BD, "confirm_location" }, // AUTOADDED
{ 0x00BE, "constrained" }, // AUTOADDED
{ 0x00BF, "contact" }, // AUTOADDED
{ 0x00C0, "contextleanenabled" }, // AUTOADDED
{ 0x00C1, "count" },
{ 0x00C2, "cover" }, // AUTOADDED
{ 0x00C3, "cover_approach" }, // AUTOADDED
{ 0x00C4, "coversearchinterval" },
{ 0x00C5, "createstruct" },
{ 0x00C6, "criticalbulletdamagedist" },
{ 0x00DA, "damage" },
{ 0x00DB, "damage_notdone" }, // AUTOADDED
{ 0x00DC, "damagedir" },
{ 0x00DD, "damagelocation" },
{ 0x00DE, "damagemod" },
{ 0x00DF, "damagemultiplier" },
{ 0x00E0, "damageshield" },
{ 0x00E1, "damagetaken" },
{ 0x00E2, "damageweapon" },
{ 0x00E3, "damageyaw" },
{ 0x00E4, "dangerreactduration" },
{ 0x00E5, "dead" }, // AUTOADDED
{ 0x00E6, "death" },
{ 0x00E7, "deathinvulnerabletime" },
{ 0x00E8, "deathplant" }, // AUTOADDED
{ 0x00E9, "deaths" },
{ 0x00EA, "deathshield" },
{ 0x00EB, "delayeddeath" },
{ 0x00EC, "desiredangle" },
{ 0x00EF, "diequietly" },
{ 0x00F3, "disableplayeradsloscheck" },
{ 0x00F4, "dlight" },
{ 0x00F5, "dmg" },
{ 0x00F6, "dodamagetoall" },
{ 0x00F7, "dodangerreact" },
{ 0x00F8, "doffar" },
{ 0x00F9, "dofnear" },
{ 0x00FA, "dog" },
{ 0x00FB, "doghandler" },
{ 0x00FC, "doingambush" },
{ 0x00FD, "done" },
{ 0x00FE, "dontavoidplayer" },
{ 0x00FF, "down" },
{ 0x0100, "downaimlimit" },
{ 0x0101, "drawoncompass" },
{ 0x0102, "dropweapon" },
{ 0x0103, "eftarc" }, // AUTOADDED
{ 0x0104, "empty" }, // AUTOADDED
{ 0x0105, "empty_offhand" }, // AUTOADDED
{ 0x0106, "enable" },
{ 0x0107, "enablehudlighting" },
{ 0x0108, "enableshadows" },
{ 0x0109, "end_firing" }, // AUTOADDED
{ 0x010A, "end_firing_left" }, // AUTOADDED
{ 0x010B, "end_script" }, // AUTOADDED
{ 0x010C, "enemy" },
{ 0x010D, "enemy_sighted" }, // AUTOADDED
{ 0x010E, "enemy_sighted_lost" }, // AUTOADDED
{ 0x010F, "enemy_visible" }, // AUTOADDED
{ 0x0110, "engagemaxdist" },
{ 0x0111, "engagemaxfalloffdist" },
{ 0x0112, "engagemindist" },
{ 0x0113, "engageminfalloffdist" },
{ 0x0114, "entity" },
{ 0x0119, "exposedduration" },
{ 0x011A, "extrascore0" },
{ 0x011B, "extrascore1" },
{ 0x0125, "face_enemy" },
{ 0x0126, "face_enemy_or_motion" }, // AUTOADDED
{ 0x0127, "face_goal" }, // AUTOADDED
{ 0x0128, "face_motion" }, // AUTOADDED
{ 0x0129, "face_point" }, // AUTOADDED
{ 0x012A, "facemotion" },
{ 0x012B, "failed" }, // AUTOADDED
{ 0x012C, "falling" }, // AUTOADDED
{ 0x012D, "fast_radar" }, // AUTOADDED
{ 0x012E, "favoriteenemy" },
{ 0x012F, "finalaccuracy" },
{ 0x0132, "fixednode" },
{ 0x0133, "fixednodesaferadius" },
{ 0x0134, "flags" }, // AUTOADDED
{ 0x0135, "flash" }, // AUTOADDED
{ 0x0136, "flashbang" }, // AUTOADDED
{ 0x0137, "follow" }, // AUTOADDED
{ 0x0138, "followmax" }, // AUTOADDED
{ 0x0139, "followmin" }, // AUTOADDED
{ 0x013A, "font" },
{ 0x013B, "fontscale" },
{ 0x013C, "footstepdetectdist" },
{ 0x013D, "footstepdetectdistsprint" },
{ 0x013E, "footstepdetectdistwalk" },
{ 0x013F, "forceragdollimmediate" },
{ 0x0140, "forcespectatorclient" },
{ 0x0141, "foregrip_off" }, // AUTOADDED
{ 0x0142, "foreground" },
{ 0x0143, "forward" }, // AUTOADDED
{ 0x0144, "fov" },
{ 0x0145, "fovcosine" },
{ 0x0146, "fovcosinebusy" },
{ 0x0147, "fovcosinez" },
{ 0x014A, "free" }, // AUTOADDED
{ 0x014B, "freecamera" },
{ 0x014C, "freelook" }, // AUTOADDED
{ 0x014D, "front_left" }, // AUTOADDED
{ 0x014E, "front_right" }, // AUTOADDED
{ 0x014F, "frontshieldanglecos" },
{ 0x0150, "game_extrainfo" },
{ 0x0151, "generatenavmesh" }, // AUTOADDED
{ 0x0152, "glass_destroyed" }, // AUTOADDED
{ 0x0153, "glowalpha" },
{ 0x0154, "glowcolor" },
{ 0x0155, "goal" }, // AUTOADDED
{ 0x0156, "goalnode" },
{ 0x0159, "goal_yaw" },
{ 0x015A, "goalheight" },
{ 0x015B, "goalpos" },
{ 0x015C, "goalradius" },
{ 0x015D, "goingtoruntopos" },
{ 0x015E, "gravity" },
{ 0x015F, "grenade" },
{ 0x0160, "grenade_fire" }, // AUTOADDED
{ 0x0161, "grenade_pullback" }, // AUTOADDED
{ 0x0162, "grenadeammo" },
{ 0x0163, "grenadeawareness" },
{ 0x0164, "grenadedanger" }, // AUTOADDED
{ 0x0165, "grenadereturnthrowchance" },
{ 0x0166, "grenadeweapon" },
{ 0x0167, "groundEntChanged" }, // AUTOADDED
{ 0x0168, "groundtype" },
{ 0x0169, "gun_ads" }, // AUTOADDED
{ 0x016A, "gun_silencer" }, // AUTOADDED
{ 0x016B, "gunblockedbywall" },
{ 0x016C, "gunshot" },
{ 0x016D, "gunshot_teammate" },
{ 0x016E, "hasradar" },
{ 0x016F, "headicon" },
{ 0x0170, "headiconteam" },
{ 0x0171, "headindex" },
{ 0x0172, "health" },
{ 0x0173, "height" },
{ 0x0174, "hidein3rdperson" },
{ 0x0175, "hidewhendead" },
{ 0x0176, "hidewhenindemo" }, // AUTOADDED
{ 0x0177, "hidewheninmenu" },
{ 0x0178, "high_priority" }, // AUTOADDED
{ 0x0179, "highlyawareradius" },
{ 0x017A, "hindlegstraceoffset" },
{ 0x017B, "hintstring" }, // AUTOADDED
{ 0x017C, "hit_by_missile" }, // AUTOADDED
{ 0x017D, "horzalign" },
{ 0x017E, "host_sucks_end_game" }, // AUTOADDED
{ 0x017F, "human" }, // AUTOADDED
{ 0x0180, "ignoreall" },
{ 0x0181, "ignoreclosefoliage" },
{ 0x0182, "ignoreexplosionevents" },
{ 0x0183, "ignoreforfixednodesafecheck" },
{ 0x0184, "ignoreme" },
{ 0x0185, "ignorerandombulletdamage" },
{ 0x0186, "ignoresuppression" },
{ 0x0187, "ignoretriggers" },
{ 0x0188, "index" },
{ 0x0189, "infinite_energy" }, // AUTOADDED
{ 0x018A, "info_notnull" }, // AUTOADDED
{ 0x018B, "info_player_start" }, // AUTOADDED
{ 0x018C, "init" },
{ 0x018D, "initstructs" },
{ 0x018E, "insolid" },
{ 0x018F, "intermission" },
{ 0x0190, "interval" },
{ 0x0191, "invisible" }, // AUTOADDED
{ 0x0192, "ironsight_off" }, // AUTOADDED
{ 0x0193, "ironsight_on" }, // AUTOADDED
{ 0x0194, "isradarblocked" },
{ 0x0195, "item" },
{ 0x01A1, "jumpcost" },
{ 0x01A2, "jumping" },
{ 0x01A3, "keepclaimednode" },
{ 0x01A4, "keepclaimednodeifvalid" },
{ 0x01A5, "keepnodeduringscriptedanim" },
{ 0x01A6, "key1" }, // AUTOADDED
{ 0x01A7, "key2" }, // AUTOADDED
{ 0x01A8, "killanimscript" }, // AUTOADDED
{ 0x01A9, "killcamentity" },
{ 0x01AA, "killcamentitylookat" },
{ 0x01AB, "kills" },
{ 0x01AC, "known_event" }, // AUTOADDED
{ 0x01AD, "label" },
{ 0x01AE, "ladder_down" }, // AUTOADDED
{ 0x01AF, "ladder_up" }, // AUTOADDED
{ 0x01B0, "land" }, // AUTOADDED
{ 0x01B1, "lastattacker" },
{ 0x01B2, "lastenemysightpos" },
{ 0x01B3, "laststand" },
{ 0x01B4, "leanamount" },
{ 0x01B5, "ledge" }, // AUTOADDED
{ 0x01B6, "left" }, // AUTOADDED
{ 0x01B7, "leftaimlimit" },
{ 0x01B9, "light" },
{ 0x01BA, "lockorientation" },
{ 0x01BB, "lod" },
{ 0x01BC, "look" },
{ 0x01BD, "lookahead" },
{ 0x01BE, "lookaheaddir" },
{ 0x01BF, "lookaheaddist" },
{ 0x01C0, "lookaheadhitsstairs" },
{ 0x01C1, "lookforward" },
{ 0x01C2, "lookposition" },
{ 0x01C3, "lookright" },
{ 0x01C4, "looktarget" },
{ 0x01C5, "lookup" },
{ 0x01C6, "low_priority" }, // AUTOADDED
{ 0x01C7, "lowresbackground" },
{ 0x01CB, "main" },
{ 0x01D0, "maxfaceenemydist" },
{ 0x01D1, "maxhealth" },
{ 0x01D3, "maxsightdistsqrd" },
{ 0x01D4, "maxvisibledist" },
{ 0x01D5, "meleeattackdist" },
{ 0x01D6, "menuresponse" }, // AUTOADDED
{ 0x01D7, "middle_left" }, // AUTOADDED
{ 0x01D8, "middle_right" }, // AUTOADDED
{ 0x01D9, "min_energy" }, // AUTOADDED
{ 0x01DA, "min_time" }, // AUTOADDED
{ 0x01DB, "minpaindamage" },
{ 0x01DC, "minusedistsq" },
{ 0x01F1, "model" },
{ 0x01F2, "modelname" },
{ 0x01F5, "movemode" },
{ 0x01F6, "name" },
{ 0x01F7, "navvolume_ignoreglass" }, // AUTOADDED
{ 0x01F8, "navvolume_worldonly" }, // AUTOADDED
{ 0x01F9, "near_goal" }, // AUTOADDED
{ 0x01FA, "nearz" },
{ 0x01FB, "neutral" }, // AUTOADDED
{ 0x01FC, "never" }, // AUTOADDED
{ 0x01FD, "newenemyreactiondistsq" },
{ 0x01FE, "night_vision_off" }, // AUTOADDED
{ 0x01FF, "night_vision_on" }, // AUTOADDED
{ 0x0200, "no_cover" }, // AUTOADDED
{ 0x0201, "no_gravity" }, // AUTOADDED
{ 0x0202, "noattackeraccuracymod" },
{ 0x0204, "notarget" },
{ 0x0205, "node" },
{ 0x0206, "node_not_safe" }, // AUTOADDED
{ 0x0207, "node_out_of_range" }, // AUTOADDED
{ 0x0208, "node_relinquished" }, // AUTOADDED
{ 0x0209, "node_taken" }, // AUTOADDED
{ 0x020A, "nodeoffsetpos" },
{ 0x020B, "nododgemove" },
{ 0x020C, "nogravity" }, // AUTOADDED
{ 0x020D, "nogrenadereturnthrow" },
{ 0x021B, "onlygoodnearestnodes" },
{ 0x021C, "onlytakedamagefromplayer" },
{ 0x021D, "oriented" },
{ 0x021E, "orientto_complete" }, // AUTOADDED
{ 0x021F, "origin" },
{ 0x0220, "other" }, // AUTOADDED
{ 0x0221, "over" }, // AUTOADDED
{ 0x0222, "owner" },
{ 0x0223, "pacifist" },
{ 0x0224, "pacifistwait" },
{ 0x0225, "pain" }, // AUTOADDED
{ 0x0226, "parentangles" }, // AUTOADDED
{ 0x0227, "parentindex" }, // AUTOADDED
{ 0x0228, "parentname" },
{ 0x0229, "parentpos" }, // AUTOADDED
{ 0x022A, "partname" }, // AUTOADDED
{ 0x022B, "path_blocked" }, // AUTOADDED
{ 0x022C, "path_changed" }, // AUTOADDED
{ 0x022D, "path_dir_change" }, // AUTOADDED
{ 0x022E, "path_enemy" }, // AUTOADDED
{ 0x022F, "path_need_dodge" }, // AUTOADDED
{ 0x0230, "path_set" }, // AUTOADDED
{ 0x0231, "pathenemyfightdist" },
{ 0x0232, "pathenemylookahead" },
{ 0x0233, "pathgoalpos" },
{ 0x0234, "pathrandompercent" },
{ 0x0235, "pelvis" }, // AUTOADDED
{ 0x0236, "pers" },
{ 0x0237, "physics_finished" }, // AUTOADDED
{ 0x0238, "pickup" }, // AUTOADDED
{ 0x0239, "pistol" }, // AUTOADDED
{ 0x023A, "pitchamount" },
{ 0x023D, "player" },
{ 0x023F, "playercardbackground" }, // AUTOADDED
{ 0x0240, "playercardpatch" }, // AUTOADDED
{ 0x0241, "playercardpatchbacking" }, // AUTOADDED
{ 0x0242, "playercontrol" }, // AUTOADDED
{ 0x0243, "playing" }, // AUTOADDED
{ 0x0244, "point" }, // AUTOADDED
{ 0x0245, "position" }, // AUTOADDED
{ 0x0246, "postsharpturnlookaheaddist" },
{ 0x0247, "precache" },
{ 0x0249, "prevanimdelta" },
{ 0x024A, "prevnode" },
{ 0x024B, "prevscript" },
{ 0x024C, "primary" }, // AUTOADDED
{ 0x024D, "primaryoffhand" }, // AUTOADDED
{ 0x024E, "projectile_impact" }, // AUTOADDED
{ 0x024F, "prone" }, // AUTOADDED
{ 0x0250, "proneok" },
{ 0x0251, "providecoveringfire" },
{ 0x0252, "psoffsettime" },
{ 0x0253, "pushable" },
{ 0x0254, "radarmode" },
{ 0x0255, "radarshowenemydirection" },
{ 0x0256, "radarstrength" },
{ 0x0257, "radius" },
{ 0x0258, "ragdoll_early_result" }, // AUTOADDED
{ 0x0259, "reached_end_node" }, // AUTOADDED
{ 0x025A, "reached_wait_node" }, // AUTOADDED
{ 0x025B, "reached_wait_speed" }, // AUTOADDED
{ 0x025C, "reactiontargetpos" },
{ 0x025F, "relativedir" },
{ 0x0260, "reload" }, // AUTOADDED
{ 0x0261, "reload_start" }, // AUTOADDED
{ 0x0262, "rendertotexture" },
{ 0x0263, "requestarrivalnotify" },
{ 0x0264, "result" },
{ 0x0265, "return_pitch" }, // AUTOADDED
{ 0x0266, "reverse" }, // AUTOADDED
{ 0x0267, "right" },
{ 0x0268, "rightaimlimit" },
{ 0x0269, "rightarc" }, // AUTOADDED
{ 0x026A, "rigindex" }, // AUTOADDED
{ 0x026B, "riotshield_damaged" }, // AUTOADDED
{ 0x026C, "rocket" }, // AUTOADDED
{ 0x026E, "rotation" },
{ 0x026F, "run" }, // AUTOADDED
{ 0x0270, "runcost" },
{ 0x0271, "runto_arrived" }, // AUTOADDED
{ 0x0272, "safetochangescript" },
{ 0x0278, "score" },
{ 0x0279, "script" },
{ 0x027B, "script_delay" },
{ 0x027C, "script_linkname" },
{ 0x027D, "script_model" }, // AUTOADDED
{ 0x027E, "script_noteworthy" },
{ 0x027F, "script_origin" }, // AUTOADDED
{ 0x0280, "script_parent" }, // AUTOADDED
{ 0x0281, "script_parentname" }, // AUTOADDED
{ 0x0282, "script_pushable" },
{ 0x0289, "scriptable" }, // AUTOADDED
{ 0x028B, "scriptedarrivalent" },
{ 0x0290, "sessionstate" },
{ 0x0291, "sessionteam" },
{ 0x0292, "sharpturnlookaheaddist" },
{ 0x0293, "sharpturnnotifydist" },
{ 0x0294, "sharpturntooclosetodestdist" },
{ 0x0295, "showinkillcam" },
{ 0x0296, "fovforward" },
{ 0x0297, "fovground" },
{ 0x0299, "sightlatency" },
{ 0x029A, "silenced_shot" }, // AUTOADDED
{ 0x029B, "slidevelocity" },
{ 0x02A4, "sort" },
{ 0x02A5, "sound_blend" }, // AUTOADDED
{ 0x02A6, "space" },
{ 0x02A7, "spaceship_accel" },
{ 0x02A8, "spaceship_boosting" },
{ 0x02A9, "spaceship_mode" },
{ 0x02AA, "spaceship_rotaccel" },
{ 0x02AB, "spaceship_rotvel" },
{ 0x02AC, "spaceship_vel" },
{ 0x02AD, "spawned" }, // AUTOADDED
{ 0x02AE, "spawner" }, // AUTOADDED
{ 0x02AF, "spawnflags" },
{ 0x02B0, "spectatekillcam" },
{ 0x02B1, "spectating_cycle" }, // AUTOADDED
{ 0x02B2, "spectator" }, // AUTOADDED
{ 0x02B3, "speed" },
{ 0x02C0, "stairsstate" },
{ 0x02C5, "startpos" },
{ 0x02C6, "statelocked" },
{ 0x02C7, "statusicon" },
{ 0x02CB, "stopanimdistsq" },
{ 0x02CC, "stopsoonnotifydist" },
{ 0x02CD, "subpartname" },
{ 0x02CE, "subpartstate" },
{ 0x02CF, "suncolor" },
{ 0x02D0, "sundirection" },
{ 0x02D1, "sunlight" },
{ 0x02D4, "suppressionduration" },
{ 0x02D5, "suppressionmeter" },
{ 0x02D6, "suppressionstarttime" },
{ 0x02D8, "suppressionwait" },
{ 0x02D9, "surfacetype" },
{ 0x02DA, "surprisedbymedistsq" },
{ 0x02DB, "swimmer" }, // AUTOADDED
{ 0x02DC, "syncedmeleetarget" },
{ 0x02DD, "tag" },
{ 0x02DE, "tag_aim" }, // AUTOADDED
{ 0x02DF, "tag_aim_animated" }, // AUTOADDED
{ 0x02E0, "tag_aim_pivot" }, // AUTOADDED
{ 0x02E1, "tag_barrel" }, // AUTOADDED
{ 0x02E2, "tag_blade_off" }, // AUTOADDED
{ 0x02E3, "tag_body" }, // AUTOADDED
{ 0x02E4, "tag_brass" }, // AUTOADDED
{ 0x02E5, "tag_butt" }, // AUTOADDED
{ 0x02E6, "tag_cambone" }, // AUTOADDED
{ 0x02E7, "tag_camera" }, // AUTOADDED
{ 0x02E8, "tag_charge_fx01" }, // AUTOADDED
{ 0x02E9, "tag_charge_fx02" }, // AUTOADDED
{ 0x02EA, "tag_charge_fx03" }, // AUTOADDED
{ 0x02EB, "tag_charge_fx04" }, // AUTOADDED
{ 0x02EC, "tag_charge_fx05" }, // AUTOADDED
{ 0x02ED, "tag_charge_fx06" }, // AUTOADDED
{ 0x02EE, "tag_charge_fx07" }, // AUTOADDED
{ 0x02EF, "tag_charge_fx08" }, // AUTOADDED
{ 0x02F0, "tag_charge_fx09" }, // AUTOADDED
{ 0x02F1, "tag_charge_fx10" }, // AUTOADDED
{ 0x02F2, "tag_charge_fx11" }, // AUTOADDED
{ 0x02F3, "tag_charge_fx12" }, // AUTOADDED
{ 0x02F4, "tag_charge_fx13" }, // AUTOADDED
{ 0x02F5, "tag_charge_fx14" }, // AUTOADDED
{ 0x02F6, "tag_charge_fx15" }, // AUTOADDED
{ 0x02F7, "tag_charge_fx16" }, // AUTOADDED
{ 0x02F8, "tag_clip" }, // AUTOADDED
{ 0x02F9, "tag_detach" }, // AUTOADDED
{ 0x02FA, "tag_engine_left" }, // AUTOADDED
{ 0x02FB, "tag_engine_right" }, // AUTOADDED
{ 0x02FC, "tag_eotech_reticle" }, // AUTOADDED
{ 0x02FD, "tag_eye" }, // AUTOADDED
{ 0x02FE, "tag_flash" }, // AUTOADDED
{ 0x02FF, "tag_flash_2" }, // AUTOADDED
{ 0x0300, "tag_flash_silenced" }, // AUTOADDED
{ 0x0301, "tag_fx" }, // AUTOADDED
{ 0x0302, "tag_gasmask" }, // AUTOADDED
{ 0x0303, "tag_gasmask2" }, // AUTOADDED
{ 0x0304, "tag_glass_ads" }, // AUTOADDED
{ 0x0305, "tag_glass_ads2" }, // AUTOADDED
{ 0x0306, "tag_glass_hip" }, // AUTOADDED
{ 0x0307, "tag_glass_hip2" }, // AUTOADDED
{ 0x0308, "tag_ik_loc_le" }, // AUTOADDED
{ 0x0309, "tag_ik_loc_le_foregrip" }, // AUTOADDED
{ 0x030A, "tag_ik_loc_le_launcher" }, // AUTOADDED
{ 0x030B, "tag_ik_loc_le_shotgun" }, // AUTOADDED
{ 0x030C, "tag_inhand" }, // AUTOADDED
{ 0x030D, "tag_knife_fx" }, // AUTOADDED
{ 0x030E, "tag_laser" }, // AUTOADDED
{ 0x030F, "tag_launcher" }, // AUTOADDED
{ 0x0310, "tag_magnifier_eotech_reticle" }, // AUTOADDED
{ 0x0311, "tag_motion_tracker_bl" }, // AUTOADDED
{ 0x0312, "tag_motion_tracker_br" }, // AUTOADDED
{ 0x0313, "tag_motion_tracker_fx" }, // AUTOADDED
{ 0x0314, "tag_motion_tracker_tl" }, // AUTOADDED
{ 0x0315, "tag_origin" }, // AUTOADDED
{ 0x0316, "tag_player" }, // AUTOADDED
{ 0x0317, "tag_popout" }, // AUTOADDED
{ 0x0318, "tag_reticle_acog" }, // AUTOADDED
{ 0x0319, "tag_reticle_hamr" }, // AUTOADDED
{ 0x031A, "tag_reticle_on" }, // AUTOADDED
{ 0x031B, "tag_reticle_red_dot" }, // AUTOADDED
{ 0x031C, "tag_reticle_reflex" }, // AUTOADDED
{ 0x031D, "tag_reticle_tavor_scope" }, // AUTOADDED
{ 0x031E, "tag_reticle_thermal_scope" }, // AUTOADDED
{ 0x031F, "tag_shield_back" }, // AUTOADDED
{ 0x0320, "tag_shotgun" }, // AUTOADDED
{ 0x0321, "tag_show_alt" }, // AUTOADDED
{ 0x0322, "tag_stowed_back" }, // AUTOADDED
{ 0x0334, "target" },
{ 0x0335, "target_script_trigger" }, // AUTOADDED
{ 0x0336, "targetname" },
{ 0x0337, "team" },
{ 0x0338, "team3" }, // AUTOADDED
{ 0x0339, "teammode_axisallies" }, // AUTOADDED
{ 0x033A, "teammode_ffa" }, // AUTOADDED
{ 0x033B, "teammovewaittime" },
{ 0x033C, "thermal" }, // AUTOADDED
{ 0x033D, "thermalbodymaterial" },
{ 0x033E, "third_person" }, // AUTOADDED
{ 0x033F, "threatbias" },
{ 0x0340, "threatbiasgroup" },
{ 0x0341, "threatsight" },
{ 0x0342, "threatsightdistmax" },
{ 0x0343, "threatsightdistmin" },
{ 0x0344, "threatsightratemax" },
{ 0x0345, "threatsightratemin" },
{ 0x034C, "trackmoverup" },
{ 0x0350, "traversecost" },
{ 0x0351, "traversesoonnotifydist" },
{ 0x0352, "trigger" },
{ 0x0358, "turnrate" },
{ 0x0362, "turretinvulnerability" },
{ 0x0363, "turretownerchange" }, // AUTOADDED
{ 0x0364, "turretstatechange" }, // AUTOADDED
{ 0x0365, "type" },
{ 0x0366, "unresolved_collision" }, // AUTOADDED
{ 0x0367, "up" },
{ 0x0368, "upaimlimit" },
{ 0x0369, "useable" },
{ 0x036A, "useanimgoalweight" },
{ 0x036B, "usechokepoints" },
{ 0x036C, "usecombatscriptatcover" },
{ 0x036F, "usingnavmesh" },
{ 0x0371, "veh_brake" },
{ 0x0372, "veh_collision" }, // AUTOADDED
{ 0x0373, "veh_jolt" }, // AUTOADDED
{ 0x0374, "veh_landed" }, // AUTOADDED
{ 0x0375, "veh_leftground" }, // AUTOADDED
{ 0x0376, "veh_pathdir" },
{ 0x0377, "veh_pathspeed" },
{ 0x0378, "veh_pathtype" },
{ 0x0379, "veh_predictedcollision" }, // AUTOADDED
{ 0x037A, "veh_speed" },
{ 0x037B, "veh_throttle" },
{ 0x037C, "veh_topspeed" },
{ 0x037D, "veh_transmission" },
{ 0x037E, "vehicle_dismount" }, // AUTOADDED
{ 0x037F, "vehicle_mount" }, // AUTOADDED
{ 0x0380, "vehicletype" }, // AUTOADDED
{ 0x0381, "velocity" },
{ 0x0382, "vertalign" },
{ 0x0383, "view_jostle" }, // AUTOADDED
{ 0x0384, "visionsetmissilecam" },
{ 0x0385, "visionsetmissilecamduration" },
{ 0x0386, "visionsetnaked" },
{ 0x0387, "visionsetnakedduration" },
{ 0x0388, "visionsetnight" },
{ 0x0389, "visionsetnightduration" },
{ 0x038A, "visionsetpain" },
{ 0x038B, "visionsetpainduration" },
{ 0x038C, "visionsetthermal" },
{ 0x038D, "visionsetthermalduration" },
{ 0x0391, "walkdist" },
{ 0x0392, "walkdistfacingmotion" },
{ 0x0393, "waypoint_reached" }, // AUTOADDED
{ 0x0394, "weapon" },
{ 0x0395, "weapon_change" }, // AUTOADDED
{ 0x0396, "weapon_dropped" }, // AUTOADDED
{ 0x0397, "weapon_fired" }, // AUTOADDED
{ 0x0398, "weapon_switch_started" }, // AUTOADDED
{ 0x0399, "weapon_taken" }, // AUTOADDED
{ 0x039A, "weaponchange" }, // AUTOADDED
{ 0x039B, "weaponinfo" }, // AUTOADDED
{ 0x039C, "weaponname" },
{ 0x039F, "width" },
{ 0x03A0, "world" }, // AUTOADDED
{ 0x03A1, "worldspawn" }, // AUTOADDED
{ 0x03A2, "x" },
{ 0x03A3, "xuid" },
{ 0x03A4, "y" },
{ 0x03A5, "yawconvergencetime" }, // AUTOADDED
{ 0x03A6, "z" },
{ 0x03AD, "aiasm/civilian_sp_MAYBE" },
{ 0x0A02, "scripts/aitypes/bt_util" },
{ 0x0A06, "scripts/aitypes/combat" },
{ 0x0A0E, "scripts/aitypes/melee" },
{ 0x0A1A, "scripts/asm/asm" },
{ 0x0A1B, "scripts/asm/asm_bb" },
{ 0x0A1D, "scripts/asm/asm_mp" },
{ 0x0A2E, "scripts/code/character" },
{ 0x0A31, "scripts/common/bcs_location_trigs" },
{ 0x0A32, "scripts/common/createfx" },
{ 0x0A33, "scripts/common/createfxmenu" },
{ 0x0A35, "scripts/common/debug_graycard" },
{ 0x0A36, "scripts/common/debug_reflection" },
{ 0x0A39, "scripts/common/elevator" },
{ 0x0A3A, "scripts/common/exploder" },
{ 0x0A3B, "scripts/common/flags" },
{ 0x0A3C, "scripts/common/fx" },
{ 0x0A3F, "scripts/common/trace" },
{ 0x0A40, "scripts/engine/pipes" },
{ 0x0A41, "scripts/engine/scriptable" },
{ 0x0A42, "scripts/engine/utility" },
{ 0x0A4A, "scripts/cp/cp_agent_utils" },
{ 0x0A4B, "scripts/cp/cp_analytics" },
{ 0x0A4C, "scripts/cp/cp_blackholegun" },
{ 0x0A4D, "scripts/cp/cp_challenge" },
{ 0x0A4E, "scripts/cp/cp_createfx" },
{ 0x0A4F, "scripts/cp/cp_damage" },
{ 0x0A50, "scripts/cp/" }, // unused
{ 0x0A51, "scripts/cp/cp_gamelogic" },
{ 0x0A52, "scripts/cp/" }, // unused
{ 0x0A53, "scripts/cp/_id_0A53" },
{ 0x0A54, "scripts/cp/cp_gamescore" },
{ 0x0A55, "scripts/cp/cp_globallogic" },
{ 0x0A56, "scripts/cp/cp_hostmigration" },
{ 0x0A57, "scripts/cp/cp_hud_message" },
{ 0x0A58, "scripts/cp/cp_hud_util" },
{ 0x0A59, "scripts/cp/cp_interaction" },
{ 0x0A5A, "scripts/cp/_id_0A5A" },
{ 0x0A5B, "scripts/cp/cp_laststand" },
{ 0x0A5C, "scripts/cp/" }, // unused
{ 0x0A5D, "scripts/cp/" }, // unused
{ 0x0A5E, "scripts/cp/cp_merits" },
{ 0x0A5F, "scripts/cp/" }, // unused
{ 0x0A60, "scripts/cp/cp_movers" },
{ 0x0A61, "scripts/cp/cp_music_and_dialog" },
{ 0x0A62, "scripts/cp/cp_outline" },
{ 0x0A63, "scripts/cp/cp_persistence" },
{ 0x0A64, "scripts/cp/_id_0A64" },
{ 0x0A65, "scripts/cp/cp_reward" },
{ 0x0A66, "scripts/cp/cp_splash_grenade" },
{ 0x0A67, "scripts/cp/" }, // unused
{ 0x0A68, "scripts/cp/" }, // unused
{ 0x0A69, "scripts/cp/" }, // unused
{ 0x0A6A, "scripts/cp/cp_vo" },
{ 0x0A6B, "scripts/cp/cp_weapon" },
{ 0x0A6C, "scripts/cp/cp_weapon_autosentry" },
{ 0x0A6D, "scripts/cp/" }, // unused
{ 0x0A6E, "scripts/cp/cp_weapon_medusa" },
{ 0x0A6F, "scripts/cp/cp_weaponpassives" },
{ 0x0A70, "scripts/cp/cp_weaponrank" },
{ 0x0A71, "scripts/cp/crafted_trap_boombox" },
{ 0x0A72, "scripts/cp/crafted_trap_electric" },
{ 0x0A73, "scripts/cp/crafted_trap_fireworks" },
{ 0x0A74, "scripts/cp/crafted_trap_gascan" },
{ 0x0A75, "scripts/cp/crafted_trap_revocator" },
{ 0x0A76, "scripts/cp/loot" },
{ 0x0A77, "scripts/cp/utility" },
{ 0x0A78, "scripts/cp_mp/frontendutils" },
{ 0x0A79, "scripts/cp_mp/powershud" },
{ 0x0A83, "scripts/mp/_id_0A83" },
{ 0x0A84, "scripts/mp/adrenaline" },
{ 0x0A85, "scripts/mp/analyticslog" },
{ 0x0A86, "scripts/mp/animatedmodels" },
{ 0x0A87, "scripts/mp/animation_suite" },
{ 0x0A88, "scripts/mp/areas" },
{ 0x0A89, "scripts/mp/art" },
{ 0x0A8A, "scripts/mp/audio" },
{ 0x0A8B, "scripts/mp/awards" },
{ 0x0A8C, "scripts/mp/battlebuddy" },
{ 0x0A8D, "scripts/mp/battlechatter_mp" },
{ 0x0A8E, "scripts/mp/blackhole_grenade" },
{ 0x0A8F, "scripts/mp/broshot" },
{ 0x0A90, "scripts/mp/bulletstorm" },
{ 0x0A91, "scripts/mp/callouts" },
{ 0x0A92, "scripts/mp/class" },
{ 0x0A93, "scripts/mp/_id_0A93" },
{ 0x0A94, "scripts/mp/clientmatchdata" },
{ 0x0A95, "scripts/mp/codcasterclientmatchdata" },
{ 0x0A96, "scripts/mp/compass" },
{ 0x0A97, "scripts/mp/concussion" },
{ 0x0A98, "scripts/mp/createfx" },
{ 0x0A99, "scripts/mp/crib" },
{ 0x0A9A, "scripts/mp/damage" },
{ 0x0A9B, "scripts/mp/damagefeedback" },
{ 0x0A9C, "scripts/mp/deathicons" },
{ 0x0A9D, "scripts/mp/defcon" },
{ 0x0A9E, "scripts/mp/destructables" },
{ 0x0A9F, "scripts/mp/dev" },
{ 0x0AA1, "scripts/mp/domeshield" },
{ 0x0AA2, "scripts/mp/door" },
{ 0x0AA3, "scripts/mp/drone" },
{ 0x0AA4, "scripts/mp/emp_debuff_mp" },
{ 0x0AA6, "scripts/mp/entityheadicons" },
{ 0x0AA7, "scripts/mp/events" },
{ 0x0AA8, "scripts/mp/finalkillcam" },
{ 0x0AA9, "scripts/mp/flashgrenades" },
{ 0x0AAD, "scripts/mp/friendicons" },
{ 0x0AAE, "scripts/mp/fx" },
{ 0x0AAF, "scripts/mp/gamelogic" },
{ 0x0AB0, "scripts/mp/gameobjects" },
{ 0x0AB1, "scripts/mp/gamescore" },
{ 0x0AB2, "scripts/mp/gestures" },
{ 0x0AB3, "scripts/mp/global_fx" },
{ 0x0AB4, "scripts/mp/global_fx_code" },
{ 0x0AB5, "scripts/mp/globalentities" }, // AUTOADDED
{ 0x0AB6, "scripts/mp/globallogic" },
{ 0x0AB7, "scripts/mp/_id_0AB7" },
{ 0x0AB8, "scripts/mp/healthoverlay" },
{ 0x0AB9, "scripts/mp/heavyarmor" },
{ 0x0ABE, "scripts/mp/hostmigration" },
{ 0x0ABF, "scripts/mp/hud" },
{ 0x0AC0, "scripts/mp/hud_message" },
{ 0x0AC1, "scripts/mp/hud_util" },
{ 0x0AC3, "scripts/mp/intel" },
{ 0x0AC4, "scripts/mp/intelchallenges" },
{ 0x0AC5, "scripts/mp/javelin" },
{ 0x0AC6, "scripts/mp/killcam" },
{ 0x0AC7, "scripts/mp/killstreak_loot" },
{ 0x0AC8, "scripts/mp/laserguidedlauncher" },
{ 0x0ACA, "scripts/mp/lightarmor" },
{ 0x0ACB, "scripts/mp/lightbar" },
{ 0x0ACC, "scripts/mp/load" },
{ 0x0ACD, "scripts/mp/loot" },
{ 0x0ACE, "scripts/mp/matchdata" },
{ 0x0ACF, "scripts/mp/matchevents" },
{ 0x0AD0, "scripts/mp/matchrecording" },
{ 0x0AD1, "scripts/mp/menus" },
{ 0x0AD2, "scripts/mp/minefields" },
{ 0x0AD3, "scripts/mp/missions" },
{ 0x0AD4, "scripts/mp/movers" },
{ 0x0AD5, "scripts/mp/mp_agent" },
{ 0x0AD7, "scripts/mp/music_and_dialog" },
{ 0x0AD8, "scripts/mp/objpoints" },
{ 0x0AD9, "scripts/mp/outline" },
{ 0x0ADA, "scripts/mp/passives" },
{ 0x0ADB, "scripts/mp/persistence" },
{ 0x0ADC, "scripts/mp/phaseshift" },
{ 0x0ADD, "scripts/mp/playercards" },
{ 0x0ADE, "scripts/mp/playerlogic" },
{ 0x0ADF, "scripts/mp/playertrophysystem" },
{ 0x0AE0, "scripts/mp/portalgenerator" },
{ 0x0AE1, "scripts/mp/powerloot" },
{ 0x0AE2, "scripts/mp/powers" },
{ 0x0AE3, "scripts/mp/radiation" },
{ 0x0AE4, "scripts/mp/rank" },
{ 0x0AE5, "scripts/mp/protoricochet" },
{ 0x0AE7, "scripts/mp/scoreboard" },
{ 0x0AE8, "scripts/mp/screenshotcity" },
{ 0x0AE9, "scripts/mp/serversettings" },
{ 0x0AEA, "scripts/mp/shardball" },
{ 0x0AEB, "scripts/mp/shellshock" },
{ 0x0AEC, "scripts/mp/shutter" },
{ 0x0AED, "scripts/mp/spawnfactor" },
{ 0x0AEE, "scripts/mp/spawnlogic" },
{ 0x0AEF, "scripts/mp/spawnscoring" },
{ 0x0AF0, "scripts/mp/spectating" },
{ 0x0AF1, "scripts/mp/speedstrip" },
{ 0x0AF2, "scripts/mp/splashgrenade" },
{ 0x0AF3, "scripts/mp/missilelauncher" },
{ 0x0AF4, "scripts/mp/supers" },
{ 0x0AF5, "scripts/mp/teams" },
{ 0x0AF6, "scripts/mp/teleport" },
{ 0x0AF7, "scripts/mp/trophy_system" },
{ 0x0AF8, "scripts/mp/tweakables" },
{ 0x0AF9, "scripts/mp/utility" },
{ 0x0AFA, "scripts/mp/validation" },
{ 0x0AFB, "scripts/mp/weaponrank" },
{ 0x0AFC, "scripts/mp/weapons" },
{ 0x0AFD, "scripts/mp/whizby" },
{ 0x0AFE, "scripts/mp/zipline" },
{ 0x0B05, "scripts/sp/analytics" },
{ 0x0B06, "scripts/sp/anim" },
{ 0x0B07, "scripts/sp/anim_notetrack" },
{ 0x0B0E, "scripts/sp/autosave" },
{ 0x0B13, "scripts/sp/colors" },
{ 0x0B15, "scripts/sp/compass" },
{ 0x0B16, "scripts/sp/coverwall" },
{ 0x0B17, "scripts/sp/createfx" },
{ 0x0B1B, "scripts/sp/damagefeedback" },
{ 0x0B1C, "scripts/sp/debug" },
{ 0x0B28, "scripts/sp/endmission" },
{ 0x0B2B, "scripts/sp/fakeactor" },
{ 0x0B2D, "scripts/sp/fakeactor_node_MAYBE" },
{ 0x0B31, "scripts/sp/footsteps" },
{ 0x0B32, "scripts/sp/friendlyfire" },
{ 0x0B35, "scripts/sp/gameskill" },
{ 0x0B36, "scripts/sp/geo_mover" },
{ 0x0B37, "scripts/sp/gibbing" }, // AUTOADDED
{ 0x0B38, "scripts/sp/glass" }, // AUTOADDED
{ 0x0B39, "scripts/sp/global_fx" },
{ 0x0B3A, "scripts/sp/global_fx_code" },
{ 0x0B3E, "scripts/sp/hud" },
{ 0x0B3F, "scripts/sp/hud_util" },
{ 0x0B40, "scripts/sp/idles" },
{ 0x0B41, "scripts/sp/intelligence" },
{ 0x0B43, "scripts/sp/interaction" },
{ 0x0B44, "scripts/sp/interaction_manager" },
{ 0x0B45, "scripts/sp/introscreen" },
{ 0x0B47, "scripts/sp/lights" },
{ 0x0B48, "scripts/sp/load" },
{ 0x0B49, "scripts/sp/load_code" },
{ 0x0B4A, "scripts/sp/loadout" },
{ 0x0B4B, "scripts/sp/loadout_code" },
{ 0x0B4D, "scripts/sp/math" },
{ 0x0B4E, "scripts/sp/mg_penetration" },
{ 0x0B4F, "scripts/sp/mgturret" },
{ 0x0B54, "scripts/sp/mortar" },
{ 0x0B55, "scripts/sp/names" },
{ 0x0B56, "scripts/sp/narrative" },
{ 0x0B58, "scripts/sp/outline" },
{ 0x0B59, "scripts/sp/patrol" },
{ 0x0B5D, "scripts/sp/pausemenu" },
{ 0x0B5E, "scripts/sp/pip_util" },
{ 0x0B62, "scripts/sp/player_rig" },
{ 0x0B63, "scripts/sp/player_stats" },
{ 0x0B6D, "scripts/sp/shellshock" },
{ 0x0B70, "scripts/sp/slowmo_init" },
{ 0x0B78, "scripts/sp/specialist_MAYBE" },
{ 0x0B79, "scripts/sp/starts" },
{ 0x0B8D, "scripts/sp/stinger" },
{ 0x0B8E, "scripts/sp/thermal" },
{ 0x0B8F, "scripts/sp/treadfx" },
{ 0x0B90, "scripts/sp/trigger" },
{ 0x0B91, "scripts/sp/utility" },
{ 0x0B92, "scripts/sp/utility_code" },
{ 0x0B93, "scripts/sp/vehicle" },
{ 0x0B94, "scripts/sp/vehicle_aianim" },
{ 0x0B95, "scripts/sp/vehicle_build" },
{ 0x0B96, "scripts/sp/vehicle_code" },
{ 0x0B97, "scripts/sp/vehicle_lights" },
{ 0x0B98, "scripts/sp/vehicle_paths" },
{ 0x0B99, "scripts/sp/vehicle_treads" },
{ 0x0B9B, "scripts/sp/vision" },
{ 0x0BA3, "scripts/vehicle/apache" },
{ 0x0C2C, "scripts/aitypes/zombie_brute/behaviors" },
{ 0x0C2D, "scripts/aitypes/zombie_ghost/behaviors" },
{ 0x0C2E, "scripts/aitypes/zombie_grey/behaviors" },
{ 0x0C33, "scripts/asm/asm_bb" },
{ 0x0C55, "scripts/asm/shared/utility" },
{ 0x0C73, "scripts/asm/zombie/melee" },
{ 0x0C75, "scripts/asm/zombie/zombie" },
{ 0x0C76, "scripts/asm/zombie_brute/zombie_brute_asm" },
{ 0x0C77, "scripts/asm/zombie_ghost/zombie_ghost_asm" },
{ 0x0C78, "scripts/asm/zombie_grey/zombie_grey_asm" },
{ 0x0CB9, "scripts/cp/agents/gametype_escape" },
{ 0x0CBA, "scripts/cp/agents/gametype_none" },
{ 0x0CBC, "scripts/cp/agents/gametype_zombie" },
{ 0x0CEC, "scripts/cp/_id_0CEC" },
{ 0x0CED, "scripts/cp/_id_0CED" },
{ 0x0CEF, "scripts/cp/_id_0CEF" },
{ 0x0CFC, "scripts/cp/perks/perk_utility" },
{ 0x0CFD, "scripts/cp/perks/perkfunctions" },
{ 0x0CFE, "scripts/cp/perks/perkmachines" },
{ 0x0CFF, "scripts/cp/perks/prestige" },
{ 0x0D01, "scripts/cp/powers/coop_armageddon" },
{ 0x0D04, "scripts/cp/powers/coop_blackholegrenade" },
{ 0x0D07, "scripts/cp/powers/coop_c4" },
{ 0x0D0D, "scripts/cp/powers/coop_groundpound" },
{ 0x0D0E, "scripts/cp/powers/coop_kinetic_pulse" },
{ 0x0D0F, "scripts/cp/powers/coop_microturret" },
{ 0x0D12, "scripts/cp/powers/coop_phaseshift" },
{ 0x0D14, "scripts/cp/powers/coop_portal_generator" },
{ 0x0D15, "scripts/cp/powers/coop_powers" },
{ 0x0D17, "scripts/cp/powers/coop_repulsor" },
{ 0x0D18, "scripts/cp/powers/coop_rewind" },
{ 0x0D1E, "scripts/cp/powers/coop_transponder" },
{ 0x0D1F, "scripts/cp/powers/coop_trip_mine" },
{ 0x0D2A, "scripts/cp/zombies/achievement" },
{ 0x0D2B, "scripts/cp/zombies/arcade_game_utility" },
{ 0x0D2C, "scripts/cp/zombies/coop_wall_buys" },
{ 0x0D2D, "scripts/cp/zombies/escape_multiplier_combos" },
{ 0x0D2E, "scripts/cp/zombies/interaction_basketball" },
{ 0x0D2F, "scripts/cp/zombies/interaction_beamtrap" },
{ 0x0D30, "scripts/cp/zombies/interaction_blackhole_trap" },
{ 0x0D31, "scripts/cp/zombies/interaction_bowling_for_planets" },
{ 0x0D33, "scripts/cp/zombies/interaction_clowntooth" },
{ 0x0D34, "scripts/cp/zombies/interaction_discoballtrap" },
{ 0x0D35, "scripts/cp/zombies/interaction_knife_throw" },
{ 0x0D36, "scripts/cp/zombies/interaction_laughingclown" },
{ 0x0D37, "scripts/cp/zombies/interaction_magicwheel" },
{ 0x0D38, "scripts/cp/zombies/interaction_neil" },
{ 0x0D39, "scripts/cp/zombies/interaction_openareas" },
{ 0x0D3A, "scripts/cp/zombies/interaction_racing" },
{ 0x0D3B, "scripts/cp/zombies/interaction_rockettrap" },
{ 0x0D3C, "scripts/cp/zombies/interaction_scrambler" },
{ 0x0D3D, "scripts/cp/zombies/interaction_shooting_gallery" },
{ 0x0D3F, "scripts/cp/zombies/interaction_small_ticket_counter" },
{ 0x0D41, "scripts/cp/zombies/interaction_weapon_upgrade" },
{ 0x0D42, "scripts/cp/zombies/interaction_windowrepair" },
{ 0x0D43, "scripts/cp/zombies/interaction_windowtraps" },
{ 0x0D44, "scripts/cp/zombies/zombie_afterlife_arcade" },
{ 0x0D45, "scripts/cp/zombies/zombie_analytics" },
{ 0x0D46, "scripts/cp/zombies/zombie_arcade_games" },
{ 0x0D47, "scripts/cp/zombies/zombie_ark_quest" },
{ 0x0D48, "scripts/cp/zombies/zombie_armor" },
{ 0x0D4A, "scripts/cp/zombies/zombie_damage" },
{ 0x0D4B, "scripts/cp/zombies/zombie_dev" },
{ 0x0D4C, "scripts/cp/zombies/zombie_doors" },
{ 0x0D4D, "scripts/cp/zombies/zombie_entrances" },
{ 0x0D4E, "scripts/cp/zombies/zombie_fast_travel" },
{ 0x0D4F, "scripts/cp/zombies/zombie_jukebox" },
{ 0x0D50, "scripts/cp/zombies/zombie_lost_and_found" },
{ 0x0D51, "scripts/cp/zombies/zombie_power" },
{ 0x0D52, "scripts/cp/zombies/zombie_quest" },
{ 0x0D53, "scripts/cp/zombies/zombie_scriptable_states" },
{ 0x0D55, "scripts/cp/zombies/zombie_zipline" },
{ 0x0D56, "scripts/cp/zombies/zombies_clientmatchdata" },
{ 0x0D57, "scripts/cp/zombies/zombies_atm" },
{ 0x0D58, "scripts/cp/zombies/zombies_consumable_replenishment" },
{ 0x0D59, "scripts/cp/zombies/zombies_consumables" },
{ 0x0D5A, "scripts/cp/zombies/zombies_gamescore" },
{ 0x0D5B, "scripts/cp/zombies/zombies_loadout" },
{ 0x0D5C, "scripts/cp/zombies/zombies_mini_ufo_quest" },
{ 0x0D5D, "scripts/cp/zombies/zombies_perk_machines" },
{ 0x0D5E, "scripts/cp/zombies/zombies_pillage" },
{ 0x0D5F, "scripts/cp/zombies/_id_0D5F" },
{ 0x0D60, "scripts/cp/zombies/_id_0D60" },
{ 0x0D61, "scripts/cp/zombies/zombies_spawning" },
{ 0x0D62, "scripts/cp/zombies/zombies_vo" },
{ 0x0D63, "scripts/cp/zombies/zombies_weapons" },
{ 0x0D64, "scripts/cp/zombies/zombies_wor" },
{ 0x0D65, "scripts/mp/agents/agent_utility" },
{ 0x0D67, "scripts/mp/archetypes/archassassin" },
{ 0x0D68, "scripts/mp/archetypes/archassault" },
{ 0x0D69, "scripts/mp/archetypes/archcommon" },
{ 0x0D6B, "scripts/mp/archetypes/archengineer" },
{ 0x0D6C, "scripts/mp/archetypes/archheavy" },
{ 0x0D6E, "scripts/mp/archetypes/archreaper" },
{ 0x0D6F, "scripts/mp/archetypes/archscout" },
{ 0x0D70, "scripts/mp/archetypes/archsniper" },
{ 0x0D71, "scripts/mp/bots/bots_fireteam" },
{ 0x0D72, "scripts/mp/bots/bots_fireteam_commander" },
{ 0x0D73, "scripts/mp/bots/bots_killstreaks" },
{ 0x0D74, "scripts/mp/bots/bots_killstreaks_remote_vehicle" },
{ 0x0D75, "scripts/mp/bots/bots_loadout" },
{ 0x0D76, "scripts/mp/bots/bots_personality" },
{ 0x0D77, "scripts/mp/bots/bots_power_reaper" },
{ 0x0D78, "scripts/mp/bots/bots_power_rewind" },
{ 0x0D79, "scripts/mp/bots/bots_powers" },
{ 0x0D7A, "scripts/mp/bots/bots_sentry" },
{ 0x0D7B, "scripts/mp/bots/bots_strategy" },
{ 0x0D7C, "scripts/mp/bots/bots_supers" },
{ 0x0D7D, "scripts/mp/bots/bots_util" },
{ 0x0D7E, "scripts/mp/killstreaks/a10" },
{ 0x0D7F, "scripts/mp/killstreaks/aalauncher" },
{ 0x0D80, "scripts/mp/killstreaks/aamissile" },
{ 0x0D81, "scripts/mp/killstreaks/aastrike" },
{ 0x0D82, "scripts/mp/killstreaks/ac130" },
{ 0x0D83, "scripts/mp/killstreaks/agent_killstreak" },
{ 0x0D84, "scripts/mp/killstreaks/airdrone" },
{ 0x0D85, "scripts/mp/killstreaks/airdrop" },
{ 0x0D86, "scripts/mp/killstreaks/airstrike" },
{ 0x0D88, "scripts/mp/killstreaks/autosentry" },
{ 0x0D8A, "scripts/mp/killstreaks/ball_drone" },
{ 0x0D8B, "scripts/mp/killstreaks/bombardment" },
{ 0x0D8C, "scripts/mp/killstreaks/chill_common" },
{ 0x0D8D, "scripts/mp/killstreaks/deployable_adrenaline_mist" },
{ 0x0D8E, "scripts/mp/killstreaks/deployable_speed_strip" },
{ 0x0D8F, "scripts/mp/killstreaks/deployablebox" },
{ 0x0D90, "scripts/mp/killstreaks/deployablebox_ammo" },
{ 0x0D91, "scripts/mp/killstreaks/deployablebox_grenades" },
{ 0x0D92, "scripts/mp/killstreaks/deployablebox_gun" },
{ 0x0D93, "scripts/mp/killstreaks/deployablebox_juicebox" },
{ 0x0D94, "scripts/mp/killstreaks/deployablebox_vest" },
{ 0x0D95, "scripts/mp/killstreaks/designator_grenade" },
{ 0x0D97, "scripts/mp/killstreaks/dronehive" },
{ 0x0D98, "scripts/mp/killstreaks/emp" },
{ 0x0D99, "scripts/mp/killstreaks/emp_common" },
{ 0x0D9A, "scripts/mp/killstreaks/escort_airdrop" },
{ 0x0D9B, "scripts/mp/killstreaks/flares" },
{ 0x0D9D, "scripts/mp/killstreaks/gas_airstrike" },
{ 0x0D9E, "scripts/mp/killstreaks/harrier" },
{ 0x0D9F, "scripts/mp/killstreaks/helicopter" },
{ 0x0DA0, "scripts/mp/killstreaks/helicopter_flock" },
{ 0x0DA1, "scripts/mp/killstreaks/helicopter_guard" },
{ 0x0DA2, "scripts/mp/killstreaks/helicopter_pilot" },
{ 0x0DA3, "scripts/mp/killstreaks/heli_sniper" },
{ 0x0DA4, "scripts/mp/killstreaks/highvaluetarget" },
{ 0x0DA5, "scripts/mp/killstreaks/ims" },
{ 0x0DA6, "scripts/mp/killstreaks/init" },
{ 0x0DA7, "scripts/mp/killstreaks/jackal" },
{ 0x0DA8, "scripts/mp/killstreaks/jammer" },
{ 0x0DA9, "scripts/mp/killstreaks/juggernaut" },
{ 0x0DAA, "scripts/mp/killstreaks/killstreaks" },
{ 0x0DAC, "scripts/mp/killstreaks/mapselect" },
{ 0x0DAD, "scripts/mp/killstreaks/minijackal" },
{ 0x0DAE, "scripts/mp/killstreaks/mobilemortar" },
{ 0x0DAF, "scripts/mp/killstreaks/mrsiartillery" },
{ 0x0DB0, "scripts/mp/killstreaks/nuke" },
{ 0x0DB1, "scripts/mp/killstreaks/odin" },
{ 0x0DB2, "scripts/mp/killstreaks/orbital_deployment" },
{ 0x0DB3, "scripts/mp/killstreaks/perkstreaks" },
{ 0x0DB4, "scripts/mp/killstreaks/placeable" },
{ 0x0DB6, "scripts/mp/killstreaks/plane" },
{ 0x0DB7, "scripts/mp/killstreaks/portableaoegenerator" },
{ 0x0DB8, "scripts/mp/killstreaks/proxyagent" },
{ 0x0DB9, "scripts/mp/killstreaks/remotec8" },
{ 0x0DBA, "scripts/mp/killstreaks/remotemissile" },
{ 0x0DBB, "scripts/mp/killstreaks/remotemortar" },
{ 0x0DBC, "scripts/mp/killstreaks/remotetank" },
{ 0x0DBD, "scripts/mp/killstreaks/remoteturret" },
{ 0x0DBE, "scripts/mp/killstreaks/remoteuav" },
{ 0x0DC0, "scripts/mp/killstreaks/spaceship" },
{ 0x0DC1, "scripts/mp/killstreaks/spiderbot" },
{ 0x0DC2, "scripts/mp/killstreaks/tank" },
{ 0x0DC3, "scripts/mp/killstreaks/target_marker" },
{ 0x0DC4, "scripts/mp/killstreaks/teamammorefill" },
{ 0x0DC5, "scripts/mp/killstreaks/teamstreak" },
{ 0x0DC6, "scripts/mp/killstreaks/thor" },
{ 0x0DC7, "scripts/mp/killstreaks/uav" },
{ 0x0DC8, "scripts/mp/killstreaks/uplink" },
{ 0x0DC9, "scripts/mp/killstreaks/utility" },
{ 0x0DCA, "scripts/mp/killstreaks/vanguard" },
{ 0x0DCB, "scripts/mp/killstreaks/venom" },
{ 0x0DCD, "scripts/mp/perks/perk_activereload" },
{ 0x0DCE, "scripts/mp/perks/perk_dodgedefense" },
{ 0x0DCF, "scripts/mp/perks/perk_equipmentping" },
{ 0x0DD0, "scripts/mp/perks/perk_mark_targets" },
{ 0x0DD1, "scripts/mp/perks/perk_rearguard" },
{ 0x0DD2, "scripts/mp/perks/perkfunctions" },
{ 0x0DD3, "scripts/mp/perks" },
{ 0x0DD4, "scripts/mp/perks/weaponpassives" },
{ 0x0DD5, "scripts/mp/equipment/adrenaline" },
{ 0x0DD7, "scripts/mp/equipment/barrier" },
{ 0x0DD8, "scripts/mp/equipment/battery" },
{ 0x0DD9, "scripts/mp/equipment/battle_slide" },
{ 0x0DDA, "scripts/mp/equipment/blackhat" },
{ 0x0DDB, "scripts/mp/equipment/blackout_grenade" },
{ 0x0DDD, "scripts/mp/equipment/c4" },
{ 0x0DDE, "scripts/mp/equipment/charge_mode" },
{ 0x0DDF, "scripts/mp/equipment/cloak" },
{ 0x0DE0, "scripts/mp/equipment/commlink" },
{ 0x0DE1, "scripts/mp/equipment/cone_flash" },
{ 0x0DE3, "scripts/mp/equipment/cryo_mine" },
{ 0x0DE4, "scripts/mp/equipment/dash" },
{ 0x0DE5, "scripts/mp/equipment/deployable_cover" },
{ 0x0DE6, "scripts/mp/equipment/exploding_drone" },
{ 0x0DE7, "scripts/mp/equipment/fear_grenade" },
{ 0x0DE8, "scripts/mp/equipment/force_push" },
{ 0x0DE9, "scripts/mp/equipment/ground_pound" },
{ 0x0DEA, "scripts/mp/equipment/ghost_prism" },
{ 0x0DEB, "scripts/mp/equipment/headgear" },
{ 0x0DED, "scripts/mp/equipment/kinetic_pulse" },
{ 0x0DF0, "scripts/mp/equipment/micro_turret" },
{ 0x0DF1, "scripts/mp/equipment/mortar_mount" },
{ 0x0DF2, "scripts/mp/equipment/multi_visor" },
{ 0x0DF3, "scripts/mp/equipment/niagara" },
{ 0x0DF5, "scripts/mp/equipment/optic_wave" },
{ 0x0DF6, "scripts/mp/equipment/overcharge" },
{ 0x0DF7, "scripts/mp/equipment/peripheral_vision" },
{ 0x0DF8, "scripts/mp/equipment/phase_shift" },
{ 0x0DF9, "scripts/mp/equipment/phase_split" },
{ 0x0DFA, "scripts/mp/equipment/plasma_spear" },
{ 0x0DFB, "scripts/mp/equipment/portal_grenade" },
{ 0x0DFC, "scripts/mp/equipment/pulse_grenade" },
{ 0x0DFE, "scripts/mp/equipment/rewind" },
{ 0x0E00, "scripts/mp/equipment/shinguard" },
{ 0x0E01, "scripts/mp/equipment/siphon_knife" },
{ 0x0E02, "scripts/mp/equipment/smoke_wall" },
{ 0x0E05, "scripts/mp/equipment/spider_grenade" },
{ 0x0E06, "scripts/mp/equipment/split_grenade" },
{ 0x0E07, "scripts/mp/equipment/telereap" },
{ 0x0E08, "scripts/mp/equipment/transponder" },
{ 0x0E09, "scripts/mp/equipment/trip_mine" },
{ 0x0E0A, "scripts/mp/equipment/virus_grenade" },
{ 0x0E0B, "scripts/mp/equipment/wrist_rocket" },
{ 0x0E0C, "scripts/mp/supers/super_antiair" },
{ 0x0E0D, "scripts/mp/supers/super_amplify" },
{ 0x0E0E, "scripts/mp/supers/super_armorup" },
{ 0x0E0F, "scripts/mp/supers/super_blackholegun" },
{ 0x0E12, "scripts/mp/supers/super_gravwave" },
{ 0x0E14, "scripts/mp/supers/super_megaboost" },
{ 0x0E16, "scripts/mp/supers/super_overdrive" },
{ 0x0E17, "scripts/mp/supers/super_reaper" },
{ 0x0E19, "scripts/mp/supers/super_supertrophy" },
{ 0x0E1B, "scripts/mp/supers/super_visionpulse" },
{ 0x0F4A, "scripts/cp/maps/cp_frontend/cp_frontend_fx" },
{ 0x0F4B, "scripts/cp/maps/cp_frontend/cp_frontend_precache" },
{ 0x0F4E, "scripts/cp/maps/cp_rave/cp_rave_fx" },
{ 0x0F4F, "scripts/cp/maps/cp_rave/cp_rave_precache" },
{ 0x0F50, "scripts/cp/maps/cp_zmb/cp_zmb_fx" },
{ 0x0F51, "scripts/cp/maps/cp_zmb/cp_zmb_precache" },
{ 0x0F62, "scripts/mp/agents/c6/c6_agent" },
{ 0x0F6F, "scripts/mp/agents/the_hoff/the_hoff_agent" },
{ 0x0F72, "scripts/mp/agents/zombie/zombie_agent" },
{ 0x0F74, "scripts/mp/agents/zombie/zombie_util" },
{ 0x0F76, "scripts/mp/agents/zombie_brute/zombie_brute_agent" },
{ 0x0F77, "scripts/mp/agents/zombie_clown/zombie_clown" },
{ 0x0F78, "scripts/mp/agents/zombie_cop/zombie_cop" },
{ 0x0F79, "scripts/mp/agents/zombie_ghost/zombie_ghost_agent" },
{ 0x0F7A, "scripts/mp/agents/zombie_grey/zombie_grey_agent" },
{ 0x0F7B, "scripts/mp/maps/mp_afghan/mp_afghan_fx" },
{ 0x0F7C, "scripts/mp/maps/mp_afghan/mp_afghan_precache" },
{ 0x0F87, "scripts/mp/maps/mp_breakneck/mp_breakneck_fx" },
{ 0x0F88, "scripts/mp/maps/mp_breakneck/mp_breakneck_precache" },
{ 0x0F91, "scripts/mp/maps/mp_desert/mp_desert_fx" },
{ 0x0F92, "scripts/mp/maps/mp_desert/mp_desert_precache" },
{ 0x0F93, "scripts/mp/maps/mp_divide/mp_divide_fx" },
{ 0x0F94, "scripts/mp/maps/mp_divide/mp_divide_precache" },
{ 0x0F95, "scripts/mp/maps/mp_dome_iw/mp_dome_iw_fx" },
{ 0x0F96, "scripts/mp/maps/mp_dome_iw/mp_dome_iw_precache" },
{ 0x0F9D, "scripts/mp/maps/mp_fallen/mp_fallen_fx" },
{ 0x0F9E, "scripts/mp/maps/mp_fallen/mp_fallen_precache" },
{ 0x0FA9, "scripts/mp/maps/mp_frontend/mp_frontend_fx" },
{ 0x0FAA, "scripts/mp/maps/mp_frontend/mp_frontend_precache" },
{ 0x0FAB, "scripts/mp/maps/mp_frontend/mp_frontend_precache_cp" },
{ 0x0FAC, "scripts/mp/maps/mp_frontier/mp_frontier_fx" },
{ 0x0FAD, "scripts/mp/maps/mp_frontier/mp_frontier_precache" },
{ 0x0FB0, "scripts/mp/maps/mp_geneva/mp_geneva_fx" },
{ 0x0FB1, "scripts/mp/maps/mp_geneva/mp_geneva_precache" },
{ 0x0FCC, "scripts/mp/maps/mp_metropolis/mp_metropolis_fx" },
{ 0x0FCD, "scripts/mp/maps/mp_metropolis/mp_metropolis_precache" },
{ 0x0FD2, "scripts/mp/maps/mp_parkour/mp_parkour_fx" },
{ 0x0FD3, "scripts/mp/maps/mp_parkour/mp_parkour_precache" },
{ 0x0FD8, "scripts/mp/maps/mp_prime/mp_prime_fx" },
{ 0x0FD9, "scripts/mp/maps/mp_prime/mp_prime_precache" },
{ 0x0FDA, "scripts/mp/maps/mp_proto/mp_proto_fx" },
{ 0x0FDB, "scripts/mp/maps/mp_proto/mp_proto_precache" },
{ 0x0FE0, "scripts/mp/maps/mp_quarry/mp_quarry_fx" },
{ 0x0FE1, "scripts/mp/maps/mp_quarry/mp_quarry_precache" },
{ 0x0FE8, "scripts/mp/maps/mp_riot/mp_riot_fx" },
{ 0x0FE9, "scripts/mp/maps/mp_riot/mp_riot_precache" },
{ 0x0FEA, "scripts/mp/maps/mp_rivet/mp_rivet_fx" },
{ 0x0FEB, "scripts/mp/maps/mp_rivet/mp_rivet_precache" },
{ 0x0FFA, "scripts/mp/maps/mp_skyway/mp_skyway_fx" },
{ 0x0FFB, "scripts/mp/maps/mp_skyway/mp_skyway_precache" },
{ 0x102A, "scripts/sp/maps/europa/europa_fx" },
{ 0x102B, "scripts/sp/maps/europa/europa_precache" },
{ 0x1033, "scripts/sp/maps/heist/heist_fx" },
{ 0x1034, "scripts/sp/maps/heist/heist_precache" },
{ 0x1035, "scripts/sp/maps/heistspace/heistspace_fx" },
{ 0x1036, "scripts/sp/maps/heistspace/heistspace_precache" },
{ 0x1037, "scripts/sp/maps/ja_asteroid/ja_asteroid_fx" },
{ 0x1038, "scripts/sp/maps/ja_asteroid/ja_asteroid_precache" },
{ 0x1039, "scripts/sp/maps/ja_mining/ja_mining_fx" },
{ 0x103A, "scripts/sp/maps/ja_mining/ja_mining_precache" },
{ 0x103B, "scripts/sp/maps/ja_spacestation/ja_spacestation_fx" },
{ 0x103C, "scripts/sp/maps/ja_spacestation/ja_spacestation_precache" },
{ 0x103D, "scripts/sp/maps/ja_titan/ja_titan_fx" },
{ 0x103E, "scripts/sp/maps/ja_titan/ja_titan_precache" },
{ 0x103F, "scripts/sp/maps/ja_wreckage/ja_wreckage_fx" },
{ 0x1040, "scripts/sp/maps/ja_wreckage/ja_wreckage_precache" },
{ 0x1048, "scripts/sp/maps/marsbase/marsbase_fx" },
{ 0x1049, "scripts/sp/maps/marsbase/marsbase_precache" },
{ 0x104A, "scripts/sp/maps/marscrash/marscrash_fx" },
{ 0x104B, "scripts/sp/maps/marscrash/marscrash_precache" },
{ 0x104C, "scripts/sp/maps/marscrib/marscrib_fx" },
{ 0x104D, "scripts/sp/maps/marscrib/marscrib_precache" },
{ 0x104E, "scripts/sp/maps/moon_port/moon_port_fx" },
{ 0x104F, "scripts/sp/maps/moon_port/moon_port_precache" },
{ 0x1050, "scripts/sp/maps/moonjackal/moonjackal_fx" },
{ 0x1051, "scripts/sp/maps/moonjackal/moonjackale_precache" },
{ 0x1052, "scripts/sp/maps/phparade/phparade_fx" },
{ 0x1053, "scripts/sp/maps/phparade/phparade_precache" },
{ 0x1054, "scripts/sp/maps/phspace/phspace_fx" },
{ 0x1055, "scripts/sp/maps/phspace/phspace_precache" },
{ 0x1056, "scripts/sp/maps/phstreets/phstreets_fx" },
{ 0x1057, "scripts/sp/maps/phstreets/phstreets_precache" },
{ 0x1058, "scripts/sp/maps/prisoner/prisoner_fx" },
{ 0x1059, "scripts/sp/maps/prisoner/prisoner_precache" },
{ 0x1062, "scripts/sp/maps/rogue/rogue_fx" },
{ 0x1063, "scripts/sp/maps/rogue/rogue_precache" },
{ 0x1070, "scripts/sp/maps/sa_assassination/sa_assassination_fx" },
{ 0x1071, "scripts/sp/maps/sa_assassination/sa_assassination_precache" },
{ 0x1072, "scripts/sp/maps/sa_empambush/sa_empambush_fx" },
{ 0x1073, "scripts/sp/maps/sa_empambush/sa_empambush_precache" },
{ 0x107A, "scripts/sp/maps/sa_moon/sa_moon_fx" },
{ 0x107B, "scripts/sp/maps/sa_moon/sa_moon_precache" },
{ 0x1080, "scripts/sp/maps/sa_vips/sa_vips_fx" },
{ 0x1081, "scripts/sp/maps/sa_vips/sa_vips_precache" },
{ 0x1082, "scripts/sp/maps/sa_wounded/sa_wounded_fx" },
{ 0x1083, "scripts/sp/maps/sa_wounded/sa_wounded_precache" },
{ 0x1088, "scripts/sp/maps/shipcrib_epilogue/shipcrib_epilogue_fx" },
{ 0x1089, "scripts/sp/maps/shipcrib_epilogue/shipcrib_epilogue_precache" },
{ 0x108A, "scripts/sp/maps/shipcrib_europa/shipcrib_europa_fx" },
{ 0x108B, "scripts/sp/maps/shipcrib_europa/shipcrib_europa_precache" },
{ 0x108E, "scripts/sp/maps/shipcrib_moon/shipcrib_moon_fx" },
{ 0x108F, "scripts/sp/maps/shipcrib_moon/shipcrib_moon_precache" },
{ 0x1090, "scripts/sp/maps/shipcrib_prisoner/shipcrib_prisoner_fx" },
{ 0x1091, "scripts/sp/maps/shipcrib_prisoner/shipcrib_prisoner_precache" },
{ 0x1092, "scripts/sp/maps/shipcrib_rogue/shipcrib_rogue_fx" },
{ 0x1093, "scripts/sp/maps/shipcrib_rogue/shipcrib_rogue_precache" },
{ 0x1094, "scripts/sp/maps/shipcrib_titan/shipcrib_titan_fx" },
{ 0x1095, "scripts/sp/maps/shipcrib_titan/shipcrib_titan_precache" },
{ 0x1098, "scripts/sp/maps/titanjackal/titanjackal_fx" },
{ 0x1099, "scripts/sp/maps/titanjackal/titanjackal_precache" },
{ 0x109A, "scripts/sp/maps/titan/titan_fx" },
{ 0x109B, "scripts/sp/maps/titan/titan_precache" },
{ 0x10A0, "scripts/sp/maps/yard/yard_fx" },
{ 0x10A1, "scripts/sp/maps/yard/yard_precache" },
{ 0x10B2, "scripts/cp/maps/cp_frontend/gen/cp_frontend_fx" },
{ 0x10B4, "scripts/cp/maps/cp_rave/gen/cp_rave_fx" },
{ 0x10B5, "scripts/cp/maps/cp_zmb/gen/cp_zmb_fx" },
{ 0x10BC, "scripts/mp/maps/mp_afghan/gen/mp_afghan_fx" },
{ 0x10C2, "scripts/mp/maps/mp_breakneck/gen/mp_breakneck_fx" },
{ 0x10C7, "scripts/mp/maps/mp_desert/gen/mp_desert_fx" },
{ 0x10C8, "scripts/mp/maps/mp_divide/gen/mp_divide_fx" },
{ 0x10C9, "scripts/mp/maps/mp_dome_iw/gen/mp_dome_iw_fx" },
{ 0x10CD, "scripts/mp/maps/mp_fallen/gen/mp_fallen_fx" },
{ 0x10D3, "scripts/mp/maps/mp_frontend/gen/mp_frontend_fx" },
{ 0x10D4, "scripts/mp/maps/mp_frontier/gen/mp_frontier_fx" },
{ 0x10D6, "scripts/mp/maps/mp_geneva/gen/mp_geneva_fx" },
{ 0x10E4, "scripts/mp/maps/mp_metropolis/gen/mp_metropolis_fx" },
{ 0x10E7, "scripts/mp/maps/mp_parkour/gen/mp_parkour_fx" },
{ 0x10EA, "scripts/mp/maps/mp_prime/gen/mp_prime_fx" },
{ 0x10EB, "scripts/mp/maps/mp_proto/gen/mp_proto_fx" },
{ 0x10EE, "scripts/mp/maps/mp_quarry/gen/mp_quarry_fx" },
{ 0x10F2, "scripts/mp/maps/mp_riot/gen/mp_riot_fx" },
{ 0x10F3, "scripts/mp/maps/mp_rivet/gen/mp_rivet_fx" },
{ 0x10FB, "scripts/mp/maps/mp_skyway/gen/mp_skyway_fx" },
{ 0x1113, "scripts/sp/maps/europa/gen/europa_fx" },
{ 0x1117, "scripts/sp/maps/heist/gen/heist_fx" },
{ 0x1118, "scripts/sp/maps/heistspace/gen/heistspace_fx" },
{ 0x1119, "scripts/sp/maps/ja_asteroid/gen/ja_asteroid_fx" },
{ 0x111A, "scripts/sp/maps/ja_mining/gen/ja_mining_fx" },
{ 0x111B, "scripts/sp/maps/ja_spacestation/gen/ja_spacestation_fx" },
{ 0x111C, "scripts/sp/maps/ja_titan/gen/ja_titan_fx" },
{ 0x111D, "scripts/sp/maps/ja_wreckage/gen/ja_wreckage_fx" },
{ 0x1121, "scripts/sp/maps/marsbase/gen/marsbase_fx" },
{ 0x1122, "scripts/sp/maps/marscrash/gen/marscrash_fx" },
{ 0x1123, "scripts/sp/maps/marscrib/gen/marscrib_fx" },
{ 0x1124, "scripts/sp/maps/moon_port/gen/moon_port_fx" },
{ 0x1125, "scripts/sp/maps/moonjackal/gen/moonjackal_fx" },
{ 0x1126, "scripts/sp/maps/phparade/gen/phparade_fx" },
{ 0x1127, "scripts/sp/maps/phspace/gen/phspace_fx" },
{ 0x1128, "scripts/sp/maps/phstreets/gen/phstreets_fx" },
{ 0x1129, "scripts/sp/maps/prisoner/gen/prisoner_fx" },
{ 0x112E, "scripts/sp/maps/rogue/gen/rogue_fx" },
{ 0x1135, "scripts/sp/maps/sa_assassination/gen/sa_assassination_fx" },
{ 0x1136, "scripts/sp/maps/sa_empambush/gen/sa_empambush_fx" },
{ 0x113A, "scripts/sp/maps/sa_moon/gen/sa_moon_fx" },
{ 0x113D, "scripts/sp/maps/sa_vips/gen/sa_vips_fx" },
{ 0x113E, "scripts/sp/maps/sa_wounded/gen/sa_wounded_fx" },
{ 0x1141, "scripts/sp/maps/shipcrib_epilogue/gen/shipcrib_epilogue_fx" },
{ 0x1142, "scripts/sp/maps/shipcrib_europa/gen/shipcrib_europa_fx" },
{ 0x1144, "scripts/sp/maps/shipcrib_moon/gen/shipcrib_moon_fx" },
{ 0x1145, "scripts/sp/maps/shipcrib_prisoner/gen/shipcrib_prisoner_fx" },
{ 0x1146, "scripts/sp/maps/shipcrib_rogue/gen/shipcrib_rogue_fx" },
{ 0x1147, "scripts/sp/maps/shipcrib_titan/gen/shipcrib_titan_fx" },
{ 0x1149, "scripts/sp/maps/titan/gen/titan_fx" },
{ 0x114A, "scripts/sp/maps/titanjackal/gen/titanjackal_fx" },
{ 0x114D, "scripts/sp/maps/yard/gen/yard_fx" },
{ 0x116E, "_allowbattleslide" }, // AUTOADDED
{ 0x1194, "_baseeffect" }, // AUTOADDED
{ 0x1195, "_baseeffectenemy" }, // AUTOADDED
{ 0x1196, "_baseeffectfriendly" }, // AUTOADDED
{ 0x1197, "_beginlocationselection" }, // AUTOADDED
{ 0x1198, "_blackboard" },
{ 0x119B, "_box_setactivehelper" }, // AUTOADDED
{ 0x119F, "_btactions" },
{ 0x11AA, "_clearperks" },
{ 0x11AC, "_color" },
{ 0x11B7, "_createfx" },
{ 0x11D7, "_detachall" },
{ 0x11E4, "_dmg" },
{ 0x11E8, "_domflageffect" }, // AUTOADDED
{ 0x11E9, "_domflagpulseeffect" }, // AUTOADDED
{ 0x1245, "_earthquake" },
{ 0x1246, "_effect" },
{ 0x1247, "_effect_keys" },
{ 0x1253, "_enablecollisionnotifies" },
{ 0x1281, "_findunobstructedfiringpointhelper" }, // AUTOADDED
{ 0x1282, "_fire" }, // AUTOADDED
{ 0x1288, "_flageffect" }, // AUTOADDED
{ 0x1289, "_flagradiuseffect" }, // AUTOADDED
{ 0x128A, "_freeze_until_phototaken" }, // AUTOADDED
{ 0x128B, "_freezecontrols" }, // AUTOADDED
{ 0x128C, "_freezelookcontrols" }, // AUTOADDED
{ 0x128D, "_fx" },
{ 0x12B4, "_getplayerscore" }, // AUTOADDED
{ 0x12B5, "_getradarstrength" }, // AUTOADDED
{ 0x12B6, "_getteamscore" }, // AUTOADDED
{ 0x12C6, "_giveweapon" },
{ 0x12D5, "_hardpointeffect" }, // AUTOADDED
{ 0x12D6, "_hasperk" },
{ 0x12D9, "_hidefromplayer" }, // AUTOADDED
{ 0x12E4, "_hudoutlineviewmodeldisable" }, // AUTOADDED
{ 0x12E5, "_hudoutlineviewmodelenable" },
{ 0x1302, "_launchgrenade" },
{ 0x1309, "_magicbullet" },
{ 0x134E, "_missing_fx" },
{ 0x1359, "_notetrackfx" },
{ 0x135A, "_objective_delete" },
{ 0x1365, "_pipe_fx_time" },
{ 0x1366, "_pipe_methods" },
{ 0x1367, "_pipes" },
{ 0x1397, "_playerlerpangles" },
{ 0x13B9, "_playrumbleonposition" },
{ 0x13BE, "_screenshakeonposition" }, // AUTOADDED
{ 0x13CB, "_setactionslot" },
{ 0x13CC, "_setextraperks" },
{ 0x13CE, "_setnameplatematerial" },
{ 0x13D1, "_setperk" },
{ 0x13D4, "_setplayerscore" },
{ 0x13E0, "_setvehgoalpos" }, // AUTOADDED
{ 0x13E1, "_setvehgoalpos_wrap" }, // AUTOADDED
{ 0x13E2, "_setvehgoalposadheretomesh" }, // AUTOADDED
{ 0x1408, "_sound" },
{ 0x1412, "_stealth" },
{ 0x1417, "_suicide" }, // AUTOADDED
{ 0x141A, "_switchtoweapon" },
{ 0x141B, "_switchtoweaponimmediate" },
{ 0x141E, "_takeweapon" },
{ 0x1420, "_takeweaponsexceptlist" },
{ 0x1428, "_timeout" },
{ 0x1430, "_unsetperk" },
{ 0x1439, "_useperkenabled" }, // AUTOADDED
{ 0x143A, "_validateattacker" },
{ 0x144F, "_visionsetnaked" },
{ 0x1480, "a10_cockpit_breathing" },
{ 0x1481, "a10_explode" },
{ 0x1483, "a10_freezebuffer" },
{ 0x1485, "a10_handledamage" },
{ 0x1486, "a10_missile_cleanup" },
{ 0x1488, "a10_missile_set_target" },
{ 0x148E, "a10splinesin" },
{ 0x148F, "a10splinesout" },
{ 0x1490, "a10strafeactive" },
{ 0x1491, "a" },
{ 0x14EE, "aa_missile_fire" },
{ 0x1500, "aamissilelaunchhorz" },
{ 0x1501, "aamissilelaunchtargetdist" },
{ 0x1502, "aamissilelaunchvert" },
{ 0x1503, "aammissilelaunchtargetdist" },
{ 0x1506, "aasoundmanager" },
{ 0x1514, "abh_used" },
{ 0x1516, "ability_invulnerable" },
{ 0x151D, "abort" },
{ 0x1527, "aborted" },
{ 0x1528, "abortlevel" },
{ 0x152C, "about_to_dance" },
{ 0x152E, "above_pain_breathing_sfx_threshold" },
{ 0x152F, "absangleclamp180" },
{ 0x1533, "absyawtoangles" },
{ 0x1534, "absyawtoenemy2d" },
{ 0x1535, "absyawtoenemy" },
{ 0x1536, "absyawtoorigin" },
{ 0x1537, "ac130" },
{ 0x1538, "ac130_altscene" },
{ 0x1539, "ac130_control_bot_aiming" },
{ 0x153C, "ac130_spawn" },
{ 0x153D, "ac130_speed" },
{ 0x153E, "ac130_use_duration" },
{ 0x1540, "ac130inuse" },
{ 0x1541, "ac130player" },
{ 0x1542, "ac130queue" },
{ 0x1543, "ac130shellshock" },
{ 0x1548, "acceptablemeleefraction" },
{ 0x154B, "accuracy_shots_on_target" },
{ 0x1565, "achievement_completed" },
{ 0x1566, "achievement_list" },
{ 0x1567, "achievement_registration_func" },
{ 0x1568, "achievement_watcher" },
{ 0x156F, "acquirecannontarget" }, // AUTOADDED
{ 0x1573, "acquireturrettarget" }, // AUTOADDED
{ 0x157C, "action_thread" },
{ 0x158B, "activate_area_kills" },
{ 0x1594, "activate_bumper_car" },
{ 0x1596, "activate_clientside_exploder" },
{ 0x1597, "activate_close_shot" },
{ 0x15A4, "activate_death_grid_lines_and_trigger" },
{ 0x15A6, "activate_dismember_arm" },
{ 0x15A7, "activate_dismember_leg" },
{ 0x15AC, "activate_exploder" },
{ 0x15AF, "activate_freeze_volume" },
{ 0x15B1, "activate_gator_mouth" },
{ 0x15B5, "activate_health_regen_threshold" },
{ 0x15B8, "activate_individual_exploder" },
{ 0x15B9, "activate_individual_exploder_proc" },
{ 0x15BB, "activate_instakill" },
{ 0x15C7, "activate_kill_marked" },
{ 0x15C8, "activate_kill_nodamage" },
{ 0x15CB, "activate_kill_zombiewhodamagedme" },
{ 0x15CC, "activate_long_shot" },
{ 0x15D1, "activate_mobile_shield_designated_for" },
{ 0x15D2, "activate_mobile_shields" },
{ 0x15D5, "activate_moving_targets" },
{ 0x15D6, "activate_nerf" },
{ 0x15D7, "activate_new_challenge" },
{ 0x15D9, "activate_no_bleedout" },
{ 0x15DA, "activate_no_laststand" },
{ 0x15DE, "activate_perk_machine" },
{ 0x15E1, "activate_protect_a_player" },
{ 0x15E6, "activate_spaceland_powernode" },
{ 0x15F7, "activate_ufo_beam" },
{ 0x15F9, "activate_ufo_turret" },
{ 0x15FC, "activate_volume_by_name" },
{ 0x15FE, "activate_window_boards" },
{ 0x1600, "activate_zero_g_on_character" },
{ 0x1601, "activateagent" }, // AUTOADDED
{ 0x1602, "activateallmiddleplacementstructs" },
{ 0x1604, "activated" },
{ 0x1605, "activated_color_trigger" }, // AUTOADDED
{ 0x1606, "activated_nerfs" },
{ 0x160B, "activatelifepackboost" }, // AUTOADDED
{ 0x160C, "activatemiddleplacementstructs" },
{ 0x160E, "activatepower" },
{ 0x1615, "activatetime" },
{ 0x1619, "activatezone" },
{ 0x161A, "activation_func" },
{ 0x161E, "activationeffects" },
{ 0x1623, "active_camera" },
{ 0x1627, "active_dj_door" },
{ 0x1628, "active_dj_spot" },
{ 0x1636, "active_mini_ufo_trap" },
{ 0x1637, "active_moving_target_available" },
{ 0x163D, "active_player" },
{ 0x163E, "active_player_respawn_locs" },
{ 0x163F, "active_power_ups" },
{ 0x1642, "active_section" },
{ 0x1646, "active_spawn_volumes" },
{ 0x1647, "active_spawners" },
{ 0x1648, "active_speaker_attacker" },
{ 0x1649, "active_time" },
{ 0x164B, "active_volume_check" },
{ 0x1679, "activeuavs" },
{ 0x167E, "actor_is3d" },
{ 0x167F, "actor_isspace" },
{ 0x1691, "add_agents_to_game" },
{ 0x1694, "add_and_select_entity" },
{ 0x169D, "add_attachment_to_weapon" },
{ 0x169E, "add_bcs_location_mapping" },
{ 0x169F, "add_beacon_effect" },
{ 0x16A8, "add_button" },
{ 0x16B1, "add_context_sensative_dialog" },
{ 0x16B2, "add_context_sensative_timeout" },
{ 0x16B4, "add_cortex_charge_func" },
{ 0x16DA, "add_frame_event" },
{ 0x16DC, "add_func_ref_MAYBE" },
{ 0x16DE, "add_fx" },
{ 0x16F2, "add_humanoid_agent" }, // AUTOADDED
{ 0x16F3, "add_init_script" },
{ 0x1704, "add_kb_button" },
{ 0x1711, "add_missing_nodes" },
{ 0x1725, "add_option_to_selected_entities" },
{ 0x1728, "add_part_to_neil" },
{ 0x1734, "add_reactive_fx" },
{ 0x1736, "add_reverb" }, // AUTOADDED
{ 0x1752, "add_to_ambient_sound_queue" },
{ 0x1755, "add_to_armageddon_time" },
{ 0x1756, "add_to_array" },
{ 0x175C, "add_to_current_interaction_list" },
{ 0x175D, "add_to_current_interaction_list_for_player" },
{ 0x1761, "add_to_dj_quest_part_list" },
{ 0x1766, "add_to_icons_to_hide_in_afterlife" },
{ 0x1769, "add_to_nag_vo" },
{ 0x1774, "add_to_player_revive_icon_list" },
{ 0x1775, "add_to_players_being_revived" },
{ 0x1779, "add_to_recent_player_vo" },
{ 0x177A, "add_to_recent_vo" },
{ 0x177C, "add_to_revive_icon_ent_icon_list" },
{ 0x177D, "add_to_revive_icon_entity_list" },
{ 0x1785, "add_to_weapons_status" },
{ 0x1790, "add_weapon" },
{ 0x1792, "add_white_ark_attachment_pickup" },
{ 0x1793, "add_white_ark_to_weapon" },
{ 0x1794, "add_white_screen" },
{ 0x179D, "addairexplosion" }, // AUTOADDED
{ 0x17AC, "addattacker" },
{ 0x17AD, "addattackerkillstreak" }, // AUTOADDED
{ 0x17AF, "addboxtolevelarray" }, // AUTOADDED
{ 0x17BC, "addchild" }, // AUTOADDED
{ 0x17BD, "addconcatdirectionalias" }, // AUTOADDED
{ 0x17BE, "addconcattargetalias" }, // AUTOADDED
{ 0x17BF, "addcratetype" },
{ 0x17C0, "adddamagemodifier" },
{ 0x17CA, "addglobalrankxpmultiplier" }, // AUTOADDED
{ 0x17CB, "addglobalweaponrankxpmultiplier" }, // AUTOADDED
{ 0x17CE, "addheavyarmor" }, // AUTOADDED
{ 0x17D4, "additional_ability_hint" },
{ 0x17D5, "additional_ability_hint_display" },
{ 0x17D7, "additional_laststand_weapon_exclusion" },
{ 0x17D9, "additional_tactical_logic_func" },
{ 0x17DF, "additivedamagemodifiers" },
{ 0x17EA, "addlevelstoexperience" }, // AUTOADDED
{ 0x17EE, "addlowermessage" },
{ 0x1807, "addoption" },
{ 0x180E, "addplanetolist" },
{ 0x1817, "addrankxpmultiplier" }, // AUTOADDED
{ 0x181D, "addrecentdamage" }, // AUTOADDED
{ 0x1829, "addspawnpoints" },
{ 0x182A, "addspawnviewer" }, // AUTOADDED
{ 0x182B, "addspeaker" }, // AUTOADDED
{ 0x182C, "addstackcount" }, // AUTOADDED
{ 0x182D, "addstartspawnpoints" },
{ 0x1835, "addteamrankxpmultiplier" }, // AUTOADDED
{ 0x1842, "addtime" },
{ 0x1845, "addtoalivecount" },
{ 0x184B, "addtocharactersarray" },
{ 0x1852, "addtolittlebirdlist" },
{ 0x1853, "addtolivescount" },
{ 0x1854, "addtoopenlist" }, // AUTOADDED
{ 0x1855, "addtoparticipantsarray" },
{ 0x185F, "addtoteam" }, // AUTOADDED
{ 0x1860, "addtoteamcount" },
{ 0x1861, "addtotraplist" },
{ 0x1864, "addtougvlist" }, // AUTOADDED
{ 0x1866, "addturret" }, // AUTOADDED
{ 0x186A, "addweaponrankxpmultiplier" }, // AUTOADDED
{ 0x1878, "adjust_for_stance" },
{ 0x187B, "adjust_last_stand_type" },
{ 0x1886, "adjusted" },
{ 0x1887, "adjustmovespeed" },
{ 0x18C1, "adstime" },
{ 0x18CB, "advance_death_grid_lines_and_trigger" },
{ 0x18CF, "advancebombcase" }, // AUTOADDED
{ 0x18DB, "aerial_vehicle_allowed" }, // AUTOADDED
{ 0x18DF, "afk" },
{ 0x18E4, "afterlife_disable_player_outline" },
{ 0x18E5, "afterlife_enable_player_interaction" },
{ 0x18E7, "afterlife_release_player_interaction_trigger" },
{ 0x18E9, "afterlife_vo_handler" },
{ 0x18EB, "agent_available_to_spawn_time" }, // AUTOADDED
{ 0x18EC, "agent_damage_finished" },
{ 0x18EE, "agent_definition" }, // AUTOADDED
{ 0x18EF, "agent_definition_override" },
{ 0x18F0, "agent_float_in_air" },
{ 0x18F1, "agent_funcs" },
{ 0x18F2, "agent_gameparticipant" }, // AUTOADDED
{ 0x18F3, "agent_go_to_pos" }, // AUTOADDED
{ 0x18F5, "agent_player_conf_think" }, // AUTOADDED
{ 0x18F6, "agent_player_dom_think" }, // AUTOADDED
{ 0x18F7, "agent_player_mugger_think" }, // AUTOADDED
{ 0x18F8, "agent_player_sd_think" }, // AUTOADDED
{ 0x18FB, "agent_squadmember_conf_think" }, // AUTOADDED
{ 0x18FC, "agent_squadmember_dom_think" }, // AUTOADDED
{ 0x18FD, "agent_squadmember_mugger_think" }, // AUTOADDED
{ 0x18FE, "agent_teamparticipant" },
{ 0x18FF, "agent_type" },
{ 0x1900, "agentarray" },
{ 0x1908, "agentfunc" },
{ 0x190A, "agentvalidateattacker" },
{ 0x190B, "aggregateweaponkills" },
{ 0x1913, "ai_3d_sighting_model" },
{ 0x196D, "ai_get_closest_point" },
{ 0x19DF, "isfirstarmageddonmeteorhit" },
{ 0x19F2, "ai_trace" },
{ 0x19F3, "ai_trace_get_all_results" },
{ 0x19F4, "ai_trace_passed" },
{ 0x1A69, "air_raid_active" }, // AUTOADDED
{ 0x1A6A, "air_raid_team_called" }, // AUTOADDED
{ 0x1A6B, "air_start_nodes" }, // AUTOADDED
{ 0x1A94, "airdeniedplayer" },
{ 0x1A97, "airdrop_max_linear_velocity" },
{ 0x1A98, "airdrop_override_death_moving_platform" },
{ 0x1A99, "airdrop_override_invalid_moving_platform" },
{ 0x1A9B, "airdropcratecollision" },
{ 0x1A9C, "airdropdetonateonstuck" },
{ 0x1A9D, "airdropmarkeractivate" },
{ 0x1A9E, "airdropmarkerfired" },
{ 0x1AF0, "airstrike_earthquake" }, // AUTOADDED
{ 0x1AF2, "airstrikedamagedents" },
{ 0x1AF3, "airstrikedamagedentscount" },
{ 0x1AF4, "airstrikedamagedentsindex" },
{ 0x1AF5, "airstrikedamageentsthread" },
{ 0x1AF7, "airstrikefx" },
{ 0x1AF8, "airstrikeheightscale" },
{ 0x1AFB, "airstrikemadeselectionvo" },
{ 0x1AFD, "airstrikessfx" },
{ 0x1B03, "aistate" },
{ 0x1B05, "aisuppressai" },
{ 0x1B11, "aiweapon" },
{ 0x1B14, "ala_portal_org" },
{ 0x1B15, "ala_revive_door" },
{ 0x1B46, "alias" },
{ 0x1B47, "alias_2d_version_exists" },
{ 0x1B5C, "alien_combat_resources_table" },
{ 0x1B69, "alien_fire_off" },
{ 0x1B6A, "alien_fire_on" },
{ 0x1B6C, "alien_fuse_exposed" },
{ 0x1B6F, "alien_grey_fight" },
{ 0x1B70, "alien_health_per_player_init" },
{ 0x1B71, "alien_health_per_player_scalar" },
{ 0x1B77, "alien_loadout" },
{ 0x1B86, "alien_mode_feature" },
{ 0x1B87, "alien_mode_feature_strings" }, // AUTOADDED
{ 0x1B88, "alien_mode_has" },
{ 0x1B8E, "alien_perks" },
{ 0x1B97, "alien_scripted" },
{ 0x1BE5, "alive_players" },
{ 0x1BE6, "alivecount" },
{ 0x1BEA, "all_dom_flags" },
{ 0x1BEC, "all_interaction_structs" },
{ 0x1BED, "all_magic_weapons" },
{ 0x1BF2, "all_power_nodes_are_activated" },
{ 0x1BF3, "all_power_vo" },
{ 0x1BFD, "alldjcenterstructs" },
{ 0x1C28, "alliescapturing" },
{ 0x1C29, "allieschopper" },
{ 0x1C2C, "alliesprevflagcount" },
{ 0x1C2D, "alliesspawnareas" }, // AUTOADDED
{ 0x1C2E, "alliessquadleader" }, // AUTOADDED
{ 0x1C2F, "alliesstartspawn" }, // AUTOADDED
{ 0x1C30, "allieszone" }, // AUTOADDED
{ 0x1C35, "allow_ads" },
{ 0x1C3A, "allow_autoreload" },
{ 0x1C3B, "allow_backstabbers" },
{ 0x1C40, "allow_crouch" },
{ 0x1C42, "allow_doublejump" },
{ 0x1C46, "allow_fire" },
{ 0x1C47, "allow_gesture" },
{ 0x1C4E, "allow_jump" },
{ 0x1C4F, "allow_lean" },
{ 0x1C52, "allow_mantle" },
{ 0x1C53, "allow_melee" },
{ 0x1C55, "allow_offhand_primary_weapons" },
{ 0x1C56, "allow_offhand_secondary_weapons" },
{ 0x1C57, "allow_offhand_shield_weapons" },
{ 0x1C58, "allow_offhand_weapons" },
{ 0x1C5A, "allow_pipe_damage" },
{ 0x1C5C, "allow_player_ignore_me" },
{ 0x1C5D, "allow_player_interactions" },
{ 0x1C5E, "allow_player_teleport" },
{ 0x1C60, "allow_prone" },
{ 0x1C61, "allow_random_killers" },
{ 0x1C62, "allow_reload" },
{ 0x1C63, "allow_secondary_offhand_weapons" },
{ 0x1C64, "allow_slide" },
{ 0x1C67, "allow_sprint" },
{ 0x1C68, "allow_stances" },
{ 0x1C6A, "allow_to_attack" },
{ 0x1C6E, "allow_usability" },
{ 0x1C70, "allow_wallrun" },
{ 0x1C71, "allow_weapon" },
{ 0x1C73, "allow_weapon_func" },
{ 0x1C76, "allow_weapon_switch" },
{ 0x1C77, "allowable_double_attachments" },
{ 0x1C7C, "allowcarry" },
{ 0x1C7D, "allowclasschoice" },
{ 0x1C7E, "allowdamageflash" }, // AUTOADDED
{ 0x1C86, "allowed_powerups" },
{ 0x1C8E, "allowedwhileplanting" },
{ 0x1C90, "allowenemyspectate" },
{ 0x1C92, "allowfauxdeath" }, // AUTOADDED
{ 0x1C93, "allowfreespectate" }, // AUTOADDED
{ 0x1C94, "allowgrenadedamage" }, // AUTOADDED
{ 0x1C95, "allowhide" }, // AUTOADDED
{ 0x1C96, "allowhvtspawn" }, // AUTOADDED
{ 0x1C97, "allowinteractivecombat" }, // AUTOADDED
{ 0x1C98, "allowkillstreaks" },
{ 0x1C9A, "allowlatecomers" },
{ 0x1C9D, "allowmeleedamage" },
{ 0x1C9F, "allowmonitoreddamage" },
{ 0x1CA1, "allowperks" }, // AUTOADDED
{ 0x1CA2, "allowprematchlook" },
{ 0x1CA5, "allowridekillstreakplayerexit" }, // AUTOADDED
{ 0x1CA7, "allowshellshockondamage" },
{ 0x1CAA, "allowsupers" },
{ 0x1CAB, "allowsuperweaponstow" }, // AUTOADDED
{ 0x1CAD, "allowteamassignment" },
{ 0x1CAF, "allowuse" },
{ 0x1CB0, "allowvehicledamage" }, // AUTOADDED
{ 0x1CB2, "allowweaponcache" }, // AUTOADDED
{ 0x1CB3, "allowweapons" }, // AUTOADDED
{ 0x1CB4, "allowweaponsforsentry" }, // AUTOADDED
{ 0x1CB6, "allplayershaveassetsloaded" }, // AUTOADDED
{ 0x1D30, "allyaveragedist" }, // AUTOADDED
{ 0x1D32, "allyonuse" },
{ 0x1D3A, "alphabetize" },
{ 0x1D3F, "already_used" }, // AUTOADDED
{ 0x1D40, "alreadyaddedtoalivecount" },
{ 0x1D43, "alreadyhit" }, // AUTOADDED
{ 0x1D45, "alt" },
{ 0x1D48, "alt_mode_weapons_allowed" },
{ 0x1D53, "alternates" },
{ 0x1D57, "altwarning" },
{ 0x1D5C, "always_sprint" },
{ 0x1D5D, "alwaysdrawfriendlynames" },
{ 0x1D5F, "alwaysgamemodeclass" }, // AUTOADDED
{ 0x1D64, "alwaysrunforward" },
{ 0x1DF4, "ambient_sound_queue" },
{ 0x1E12, "ambush_duration" },
{ 0x1E14, "ambush_end" },
{ 0x1E15, "ambush_enemies" }, // AUTOADDED
{ 0x1E16, "ambush_entrances" }, // AUTOADDED
{ 0x1E27, "ambush_trap_ent" },
{ 0x1E2A, "ambush_yaw" },
{ 0x1E39, "ammo_round_up" },
{ 0x1E3E, "ammocheatinterval" },
{ 0x1E3F, "ammocheattime" },
{ 0x1E41, "ammocount" },
{ 0x1E43, "ammoincompatibleweaponslist" },
{ 0x1E5B, "analytics" }, // AUTOADDED
{ 0x1E5C, "analytics_event" },
{ 0x1E5D, "analytics_getmaxspawneventsforcurrentmode" },
{ 0x1E5E, "analyticsdoesspawndataexist" }, // AUTOADDED
{ 0x1E5F, "analyticsendgame" }, // AUTOADDED
{ 0x1E60, "analyticsinitspawndata" }, // AUTOADDED
{ 0x1E61, "analyticslog" }, // AUTOADDED
{ 0x1E62, "analyticslogenabled" }, // AUTOADDED
{ 0x1E63, "analyticslogid" }, // AUTOADDED
{ 0x1E64, "analyticslogtype" }, // AUTOADDED
{ 0x1E65, "analyticssend_shouldsenddata" }, // AUTOADDED
{ 0x1E66, "analyticssend_spawnfactors" }, // AUTOADDED
{ 0x1E67, "analyticssend_spawnplayerdetails" }, // AUTOADDED
{ 0x1E68, "analyticssend_spawntype" },
{ 0x1E6A, "analyticsspawnlogenabled" },
{ 0x1E6B, "analyticsstorespawndata" }, // AUTOADDED
{ 0x1E6E, "anchor" },
{ 0x1E72, "angel_flare" },
{ 0x1E73, "angelflareprecache" },
{ 0x1E7C, "anglebetweenvectors" },
{ 0x1E7D, "anglebetweenvectorssigned" },
{ 0x1E7E, "anglebetweenvectorsunit" },
{ 0x1E81, "angleoffset" },
{ 0x1E84, "angles_to_face_when_activated" },
{ 0x1E8B, "anglesclamp180" }, // AUTOADDED
{ 0x1E90, "angry_mike_trap_kills" },
{ 0x1ED5, "anim_gunhand" },
{ 0x1ED6, "anim_guninhand" },
{ 0x1F04, "anim_prop_models" },
{ 0x1F53, "anim_stopanimscripted" },
{ 0x1F9C, "animatemodel" }, // AUTOADDED
{ 0x1FA2, "animation" },
{ 0x1FAA, "animationsuite" },
{ 0x1FB7, "animhasfacialoverride" }, // AUTOADDED
{ 0x1FC5, "animoverrides" }, // AUTOADDED
{ 0x1FC6, "animplaybackrate" },
{ 0x1FCD, "animscriptedactive" },
{ 0x1FE2, "animsuite_getparentobject" }, // AUTOADDED
{ 0x1FE3, "animsuite_linkchildrentoparentobject" }, // AUTOADDED
{ 0x1FE4, "animsuite_playthreadedsound" }, // AUTOADDED
{ 0x1FE5, "animsuite_rotation" }, // AUTOADDED
{ 0x1FE6, "animsuite_rotation_continuous" }, // AUTOADDED
{ 0x1FE7, "animsuite_rotation_pingpong" }, // AUTOADDED
{ 0x1FE8, "animsuite_translation" }, // AUTOADDED
{ 0x1FE9, "animsuite_translation_once" },
{ 0x1FEA, "animsuite_translation_pingpong" },
{ 0x2000, "announcer_vo" },
{ 0x2001, "announcer_vo_playing" },
{ 0x202C, "antithreat" }, // AUTOADDED
{ 0x203D, "any_player_nearby" },
{ 0x2041, "anyplayersinkillcam" },
{ 0x204B, "aonrules" },
{ 0x209F, "aplanted" },
{ 0x20A3, "apply_double_money_effects" },
{ 0x20A5, "apply_fire_sale_effects" },
{ 0x20AA, "apply_infinite_ammo_effects" },
{ 0x20AB, "apply_infinite_grenade_effects" },
{ 0x20AC, "apply_instakill_effects" },
{ 0x20AF, "apply_option_to_selected_fx" },
{ 0x20B1, "apply_reverb" }, // AUTOADDED
{ 0x20B7, "apply_weapons_status" },
{ 0x20BB, "applyarchetype" }, // AUTOADDED
{ 0x20BE, "applybombcarrierclass" },
{ 0x20C9, "applyflagcarrierclass" },
{ 0x20CC, "applygaseffect" },
{ 0x20DC, "applyspawnprotection" },
{ 0x20E0, "applystunresistence" },
{ 0x20E6, "applyzombiescriptablestate" },
{ 0x210B, "arcade" },
{ 0x210C, "arcade_back" },
{ 0x210E, "arcade_game_award_type" },
{ 0x2110, "arcade_game_hint_func" },
{ 0x2111, "arcade_game_player_disconnect_or_death" },
{ 0x2112, "arcade_game_player_gets_too_far_away" },
{ 0x2114, "arcade_games_performance_monitor" },
{ 0x2115, "arcade_games_progress" },
{ 0x2117, "arcade_last_stand_power_func" },
{ 0x211E, "arcane_attachment_watcher" },
{ 0x2123, "archetype" },
{ 0x2127, "archetypeids" },
{ 0x2128, "archetypes" },
{ 0x2129, "archive" },
{ 0x212D, "are_any_consumables_active" },
{ 0x2131, "area_has_enemies" },
{ 0x2132, "area_kill_fx" },
{ 0x2134, "area_kills" },
{ 0x2135, "area_name" },
{ 0x2138, "areaidmap" },
{ 0x213C, "areatriggers" },
{ 0x213D, "areentitiesinphase" },
{ 0x213E, "areinteractionsenabled" },
{ 0x2154, "ark_quest_activation" },
{ 0x2157, "ark_quest_hint_func" },
{ 0x2158, "ark_quest_kills" },
{ 0x2159, "ark_quest_pieces" },
{ 0x215B, "arkqueststation" },
{ 0x2173, "armageddon_areas" },
{ 0x2174, "armageddon_duration" },
{ 0x2175, "armageddon_earthquake_scale" },
{ 0x2177, "armageddon_time_remaining" },
{ 0x2178, "armageddon_timer" },
{ 0x2179, "armageddon_use" },
{ 0x217C, "armingdelay" },
{ 0x218A, "armormod" },
{ 0x218B, "armorpiercingmod" },
{ 0x226E, "armtime" },
{ 0x2279, "array_add" },
{ 0x227D, "array_call" },
{ 0x227E, "array_check_for_dupes" }, // AUTOADDED
{ 0x227F, "array_combine" },
{ 0x2282, "array_combine_multiple" },
{ 0x2283, "array_combine_non_integer_indices" },
{ 0x2284, "array_combine_unique" },
{ 0x2285, "array_compare" }, // AUTOADDED
{ 0x2286, "array_contains" },
{ 0x2291, "array_find" },
{ 0x229C, "array_insert" },
{ 0x22A0, "array_levelcall" },
{ 0x22A1, "array_levelthread" },
{ 0x22A7, "array_randomize" },
{ 0x22A8, "array_randomize_objects" },
{ 0x22A9, "array_remove" },
{ 0x22AC, "array_remove_array" },
{ 0x22AF, "array_remove_duplicates" },
{ 0x22B0, "array_remove_index" },
{ 0x22B5, "array_remove_nokeys" },
{ 0x22B7, "array_remove_single" },
{ 0x22BB, "array_removedeadvehicles" }, // AUTOADDED
{ 0x22BC, "array_removeundefined" },
{ 0x22BD, "array_reverse" },
{ 0x22C3, "array_sort_with_func" },
{ 0x22D2, "array_thread" },
{ 0x22D3, "array_thread_safe" },
{ 0x2300, "artillerydangercenters" },
{ 0x2301, "artilleryshellshock" },
{ 0x2303, "asm" },
{ 0x2304, "asm_addephemeraleventtowatchlist" }, // AUTOADDED
{ 0x2316, "asm_cleardemeanoranimoverride" }, // AUTOADDED
{ 0x2317, "asm_clearevents" }, // AUTOADDED
{ 0x2328, "asm_ephemeral_event_watchlist" }, // AUTOADDED
{ 0x232A, "asm_ephemeraleventfired" },
{ 0x232D, "asm_events" }, // AUTOADDED
{ 0x232F, "asm_fireephemeralevent" },
{ 0x2330, "asm_fireevent" }, // AUTOADDED
{ 0x2331, "asm_fireevent_internal" }, // AUTOADDED
{ 0x2332, "asm_generichandler" }, // AUTOADDED
{ 0x2333, "asm_getaimlimitset" }, // AUTOADDED
{ 0x2334, "asm_getallanimindicesforalias" }, // AUTOADDED
{ 0x2335, "asm_getallanimsforalias" }, // AUTOADDED
{ 0x2336, "asm_getallanimsforstate" }, // AUTOADDED
{ 0x2337, "asm_getanim" }, // AUTOADDED
{ 0x2338, "asm_getanimindex" }, // AUTOADDED
{ 0x2339, "asm_getbodyknob" }, // AUTOADDED
{ 0x233A, "asm_getcurrentstate" }, // AUTOADDED
{ 0x233B, "asm_getcurrentstatename" }, // AUTOADDED
{ 0x233C, "asm_getdemeanor" }, // AUTOADDED
{ 0x233D, "asm_getdemeanoranimoverride" }, // AUTOADDED
{ 0x2340, "asm_getmoveplaybackrate" }, // AUTOADDED
{ 0x2343, "asm_globalinit" }, // AUTOADDED
{ 0x2346, "asm_hasalias" }, // AUTOADDED
{ 0x234A, "asm_hasdemeanoranimoverride" }, // AUTOADDED
{ 0x2352, "asm_iscrawlmelee" }, // AUTOADDED
{ 0x2353, "asm_getdemeanor" }, // AUTOADDED
{ 0x2354, "asm_isinstate" },
{ 0x2358, "asm_lookupanimfromalias" }, // AUTOADDED
{ 0x2379, "asm_setcrawlmelee" }, // AUTOADDED
{ 0x237A, "asm_setdemeanoranimoverride" }, // AUTOADDED
{ 0x237C, "asm_setstate" },
{ 0x2383, "asm_shouldpowerdown" }, // AUTOADDED
{ 0x238C, "asm_updatefrantic" }, // AUTOADDED
{ 0x238F, "asmname" },
{ 0x23AA, "assaultspawns" }, // AUTOADDED
{ 0x23B2, "assign_agent_func" }, // AUTOADDED
{ 0x23BB, "assign_ark_attachment_properties" },
{ 0x23D9, "assign_unique_id" },
{ 0x23DB, "assign_zombie_attacker_logic" },
{ 0x23E3, "assignteamspawns" }, // AUTOADDED
{ 0x23E4, "assigntimervisibleteam" }, // AUTOADDED
{ 0x23E5, "assignvehicleminimumsforvolume" }, // AUTOADDED
{ 0x23E6, "assist_onbeginuse" }, // AUTOADDED
{ 0x23E7, "assist_onenduse" }, // AUTOADDED
{ 0x23E8, "assistedsuicide" },
{ 0x23E9, "assists_disabled" },
{ 0x240A, "at_end_loc" },
{ 0x240B, "at_least_goal" },
{ 0x2413, "atk_bomber" },
{ 0x2414, "atk_bomber_no_path_to_bomb_count" },
{ 0x2415, "atk_bomber_update" },
{ 0x2416, "atm_amount_deposited" },
{ 0x2417, "atm_transaction_amount" },
{ 0x2418, "atm_withdrawal_hint_logic" },
{ 0x2456, "attach_alien_fuse" },
{ 0x246B, "attach_points" },
{ 0x2476, "attachdefaults" },
{ 0x247F, "attachedusemodel" }, // AUTOADDED
{ 0x2480, "attachflag" },
{ 0x2482, "attachhat" },
{ 0x2483, "attachhead" },
{ 0x2487, "attachment_model" },
{ 0x248A, "attachmentcheck" }, // AUTOADDED
{ 0x248B, "attachmentextralist" },
{ 0x2491, "attachmentmap_attachtoperk" },
{ 0x2492, "attachmentmap_basetounique" },
{ 0x2493, "attachmentmap_conflicts" },
{ 0x2494, "attachmentmap_tobase" },
{ 0x2495, "attachmentmap_toextra" },
{ 0x2496, "attachmentmap_tounique" },
{ 0x2497, "attachmentmap_uniquetobase" }, // AUTOADDED
{ 0x2498, "attachmentmap_uniquetoextra" }, // AUTOADDED
{ 0x2499, "attachmentperkmap" }, // AUTOADDED
{ 0x249A, "attachmentref" }, // AUTOADDED
{ 0x249B, "attachmentroll" }, // AUTOADDED
{ 0x249C, "attachmentrollcount" }, // AUTOADDED
{ 0x249D, "attachmentscompatible" },
{ 0x24A3, "attachobjecttocarrier" }, // AUTOADDED
{ 0x24A4, "attachplayer" },
{ 0x24AD, "attachtoughenuparmor" }, // AUTOADDED
{ 0x24AE, "attachturret" },
{ 0x24B0, "attack" },
{ 0x24B1, "attack_behavior" },
{ 0x24B2, "attack_bolt" },
{ 0x24B3, "attack_damage_trigger" },
{ 0x24BC, "attack_monitor" },
{ 0x24BD, "attack_nearby_player" },
{ 0x24C6, "attack_position" },
{ 0x24C9, "attack_speaker" },
{ 0x24CA, "attack_spot" },
{ 0x24D1, "attackarrow" }, // AUTOADDED
{ 0x24DA, "attacker_damage" },
{ 0x24E5, "attackerdata" },
{ 0x24E6, "attackerendzone" }, // AUTOADDED
{ 0x24E7, "attackerent" },
{ 0x24F0, "attackerishittingteam" },
{ 0x2502, "attackerposition" }, // AUTOADDED
{ 0x2507, "attackers" },
{ 0x250E, "attackertable" }, // AUTOADDED
{ 0x250F, "attackerteam" },
{ 0x2513, "attackgroundtarget" }, // AUTOADDED
{ 0x2526, "attacklasedtarget" }, // AUTOADDED
{ 0x254B, "attract_positions" },
{ 0x254C, "attract_range" },
{ 0x254D, "attract_strength" },
{ 0x2550, "attractor" },
{ 0x2578, "audio" }, // AUTOADDED
{ 0x2615, "auraquickswap_bestowaura" },
{ 0x2616, "auraquickswap_run" },
{ 0x2642, "autoassign" },
{ 0x2691, "autoshootanimrate" },
{ 0x2694, "autospotadswatcher" }, // AUTOADDED
{ 0x2695, "autospotdeathwatcher" }, // AUTOADDED
{ 0x269B, "available_formations" },
{ 0x269C, "available_fuse" },
{ 0x269F, "available_ingredient_slots" },
{ 0x26A0, "available_player_characters" },
{ 0x26A6, "averagealliesz" }, // AUTOADDED
{ 0x26AC, "avoidance_radius" },
{ 0x26AD, "avoidcarepackages" }, // AUTOADDED
{ 0x26B9, "avoidkillstreakonspawntimer" },
{ 0x26BA, "avoidlastattackerlocation" }, // AUTOADDED
{ 0x26BB, "avoidlastdeathlocation" }, // AUTOADDED
{ 0x26BE, "avoidrecentlyusedbyanyone" }, // AUTOADDED
{ 0x26BF, "avoidrecentlyusedbyenemies" }, // AUTOADDED
{ 0x26C0, "avoidrugbyoffsides" }, // AUTOADDED
{ 0x26C1, "avoidsamespawn" }, // AUTOADDED
{ 0x26CD, "awardbuffdebuffassists" },
{ 0x26CE, "awardcapturepoints" }, // AUTOADDED
{ 0x26D4, "awardkillstreak" }, // AUTOADDED
{ 0x26D7, "awardqueue" }, // AUTOADDED
{ 0x26D8, "awards" }, // AUTOADDED
{ 0x26D9, "awardsthislife" },
{ 0x26DF, "axe_damage" },
{ 0x26E0, "axe_damage_cone" },
{ 0x26E1, "axe_hint_display" },
{ 0x26F4, "axiscapturing" },
{ 0x26F5, "axischopper" },
{ 0x26F8, "axismode" },
{ 0x26F9, "axisnoise" }, // AUTOADDED
{ 0x26FA, "axisprevflagcount" },
{ 0x26FE, "axiszone" }, // AUTOADDED
{ 0x26FF, "b" },
{ 0x272A, "backawayenemydist" },
{ 0x2734, "backstabber_stage" },
{ 0x2735, "backstabber_update" },
{ 0x2748, "badpath" },
{ 0x274F, "badplace_cylinder_func" },
{ 0x2750, "badplace_delete_func" },
{ 0x2757, "badplacename" },
{ 0x275D, "badspawnreason" },
{ 0x2765, "balanceteams" }, // AUTOADDED
{ 0x276E, "ball" }, // AUTOADDED
{ 0x276F, "ball_add_start" },
{ 0x2772, "ball_assign_start" }, // AUTOADDED
{ 0x2774, "ball_bot_attacker_limit_for_team" },
{ 0x2775, "ball_bot_defender_limit_for_team" },
{ 0x2776, "ball_can_pickup" },
{ 0x2777, "ball_carried" }, // AUTOADDED
{ 0x2778, "ball_carrier_cleanup" }, // AUTOADDED
{ 0x2779, "ball_carrier_touched_goal" }, // AUTOADDED
{ 0x277A, "ball_check_assist" }, // AUTOADDED
{ 0x277B, "ball_check_pass_kill_pickup" }, // AUTOADDED
{ 0x277C, "ball_clear_contents" }, // AUTOADDED
{ 0x277D, "ball_connect_watch" }, // AUTOADDED
{ 0x277F, "ball_create_ball_starts" }, // AUTOADDED
{ 0x2780, "ball_create_killcam_ent" }, // AUTOADDED
{ 0x2781, "ball_create_team_goal" }, // AUTOADDED
{ 0x2782, "ball_default_origins" }, // AUTOADDED
{ 0x2783, "ball_dont_interpolate" }, // AUTOADDED
{ 0x2784, "ball_download_fx" }, // AUTOADDED
{ 0x2785, "ball_download_wait" },
{ 0x2787, "ball_drone_faster_rocket_func" },
{ 0x278A, "ball_find_ground" }, // AUTOADDED
{ 0x278C, "ball_fx_active" }, // AUTOADDED
{ 0x278D, "ball_fx_start" }, // AUTOADDED
{ 0x278E, "ball_fx_start_player" }, // AUTOADDED
{ 0x278F, "ball_fx_stop" }, // AUTOADDED
{ 0x2790, "ball_get_num_players_on_team" }, // AUTOADDED
{ 0x2791, "ball_get_path_dist" }, // AUTOADDED
{ 0x2792, "ball_get_view_team" }, // AUTOADDED
{ 0x2793, "ball_give_score" }, // AUTOADDED
{ 0x2794, "ball_goal_can_use" }, // AUTOADDED
{ 0x2795, "ball_goal_fx" }, // AUTOADDED
{ 0x2796, "ball_goal_fx_for_player" }, // AUTOADDED
{ 0x2797, "ball_goal_useobject" },
{ 0x2798, "ball_goals" }, // AUTOADDED
{ 0x279A, "ball_impact_sounds" }, // AUTOADDED
{ 0x279B, "ball_in_goal" }, // AUTOADDED
{ 0x279C, "ball_init_map_min_max" }, // AUTOADDED
{ 0x279E, "ball_location_hud" },
{ 0x279F, "ball_maxs" }, // AUTOADDED
{ 0x27A0, "ball_mins" }, // AUTOADDED
{ 0x27A2, "ball_on_connect" }, // AUTOADDED
{ 0x27A3, "ball_on_host_migration" }, // AUTOADDED
{ 0x27A4, "ball_on_pickup" }, // AUTOADDED
{ 0x27A5, "ball_on_projectile_death" }, // AUTOADDED
{ 0x27A6, "ball_on_projectile_hit_client" }, // AUTOADDED
{ 0x27A7, "ball_on_reset" }, // AUTOADDED
{ 0x27A8, "ball_overridemovingplatformdeath" }, // AUTOADDED
{ 0x27A9, "ball_pass_or_shoot" }, // AUTOADDED
{ 0x27AA, "ball_pass_or_throw_active" }, // AUTOADDED
{ 0x27AB, "ball_pass_projectile" }, // AUTOADDED
{ 0x27AC, "ball_pass_touch_goal" }, // AUTOADDED
{ 0x27AD, "ball_pass_watch" }, // AUTOADDED
{ 0x27AE, "ball_physics_bad_trigger_at_rest" }, // AUTOADDED
{ 0x27AF, "ball_physics_bad_trigger_watch" }, // AUTOADDED
{ 0x27B0, "ball_physics_fake_bounce" }, // AUTOADDED
{ 0x27B1, "ball_physics_launch" }, // AUTOADDED
{ 0x27B2, "ball_physics_launch_drop" }, // AUTOADDED
{ 0x27B3, "ball_physics_out_of_level" }, // AUTOADDED
{ 0x27B4, "ball_physics_timeout" }, // AUTOADDED
{ 0x27B5, "ball_physics_touch_cant_pickup_player" }, // AUTOADDED
{ 0x27B6, "ball_physics_touch_goal" }, // AUTOADDED
{ 0x27B7, "ball_play_fx_joined_team" }, // AUTOADDED
{ 0x27B8, "ball_play_local_team_sound" }, // AUTOADDED
{ 0x27B9, "ball_play_score_fx" }, // AUTOADDED
{ 0x27BA, "ball_player_on_connect" },
{ 0x27BC, "ball_restore_contents" },
{ 0x27BD, "ball_return_home" },
{ 0x27BF, "ball_score_event" },
{ 0x27C0, "ball_score_sound" }, // AUTOADDED
{ 0x27C1, "ball_set_dropped" },
{ 0x27C2, "ball_set_role" }, // AUTOADDED
{ 0x27C3, "ball_shoot_watch" },
{ 0x27C4, "ball_spawn" },
{ 0x27C6, "ball_starts" }, // AUTOADDED
{ 0x27C7, "ball_touch_goal_watch" },
{ 0x27C8, "ball_touched_goal" },
{ 0x27CA, "ball_triggers" }, // AUTOADDED
{ 0x27CB, "ball_waypoint_contest" }, // AUTOADDED
{ 0x27CC, "ball_waypoint_download" },
{ 0x27CD, "ball_waypoint_held" },
{ 0x27CE, "ball_waypoint_neutral" },
{ 0x27CF, "ball_waypoint_upload" },
{ 0x27D0, "ball_weapon_change_watch" },
{ 0x27D1, "ballactivationdelay" }, // AUTOADDED
{ 0x27D2, "ballbases" },
{ 0x27D3, "balldrone" },
{ 0x27D4, "balldrone_attacktargets" },
{ 0x27D5, "balldrone_backup_handledamage" },
{ 0x27D6, "balldrone_backup_turret_handledamage" },
{ 0x27D7, "balldrone_burstfirestart" },
{ 0x27D9, "balldrone_enemy_lightfx" },
{ 0x27DA, "balldrone_followplayer" },
{ 0x27DB, "balldrone_friendly_lightfx" },
{ 0x27DC, "balldrone_movetoplayer" },
{ 0x27DD, "balldrone_handledamage" },
{ 0x27DE, "balldrone_leave" },
{ 0x27E0, "balldrone_moving_platform_death" },
{ 0x27E2, "balldrone_stunned" },
{ 0x27E3, "balldrone_watchdeath" },
{ 0x27E4, "balldrone_watchforgoal" },
{ 0x27E5, "balldrone_watchownerdeath" },
{ 0x27E6, "balldrone_watchownerloss" },
{ 0x27E9, "balldrone_watchroundend" },
{ 0x27EB, "balldrone_watchtimeout" },
{ 0x27ED, "balldronedestroyed" },
{ 0x27EE, "balldroneexplode" },
{ 0x27EF, "balldrones" },
{ 0x27F0, "balldronesettings" },
{ 0x27F1, "balldronetype" },
{ 0x27F3, "balldropdelay" },
{ 0x27F4, "ballindex" },
{ 0x27F6, "balloon_pop_monitor" },
{ 0x27F8, "ballpassdist" },
{ 0x27F9, "ballpickupscorefrozen" },
{ 0x27FC, "ballreset" },
{ 0x27FD, "ballruntimer" },
{ 0x2800, "balls" }, // AUTOADDED
{ 0x2803, "balltime" }, // AUTOADDED
{ 0x2804, "balltimerpaused" }, // AUTOADDED
{ 0x2805, "balltimerstopped" }, // AUTOADDED
{ 0x2806, "balltimerwait" }, // AUTOADDED
{ 0x2809, "ballweapon" },
{ 0x280F, "bankcapturetime" },
{ 0x2810, "bankrate" },
{ 0x2811, "banktime" },
{ 0x2812, "bar" }, // AUTOADDED
{ 0x284D, "barrier" },
{ 0x2892, "base_setupvfx" }, // AUTOADDED
{ 0x2897, "basealpha" }, // AUTOADDED
{ 0x2898, "baseangle" }, // AUTOADDED
{ 0x2899, "baseangles" }, // AUTOADDED
{ 0x289A, "basecam" },
{ 0x289C, "baseeffectforward" }, // AUTOADDED
{ 0x289D, "baseeffectpos" }, // AUTOADDED
{ 0x289F, "basefontscale" }, // AUTOADDED
{ 0x28A0, "basefxid" }, // AUTOADDED
{ 0x28A2, "baseheight" }, // AUTOADDED
{ 0x28AB, "basename" },
{ 0x28AC, "baseorigin" }, // AUTOADDED
{ 0x28B0, "basewidth" }, // AUTOADDED
{ 0x28BB, "basketball_game_music" },
{ 0x28BC, "basketball_game_timer" },
{ 0x28BD, "basketball_impact_sounds" },
{ 0x28BE, "basketball_reset_player_omnvar" },
{ 0x28C3, "battery_in_geyser" },
{ 0x28C4, "battery_launched" },
{ 0x28C5, "battery_model" },
{ 0x28CC, "battlebuddy" },
{ 0x28D2, "battlechatter_canprint" },
{ 0x28D3, "battlechatter_canprintdump" },
{ 0x28D4, "battlechatter_debugprint" },
{ 0x28DA, "battlechatter_print" },
{ 0x28DB, "battlechatter_printdump" },
{ 0x28DC, "battlechatter_printdumpline" },
{ 0x28E0, "battleslid" },
{ 0x28F8, "battleslideshield" }, // AUTOADDED
{ 0x28F9, "battleslideshield_break" }, // AUTOADDED
{ 0x28FA, "battleslideshield_breakfx" }, // AUTOADDED
{ 0x28FB, "battleslideshield_damagedfx" }, // AUTOADDED
{ 0x28FC, "battleslideshield_killondeathdisconnectunset" }, // AUTOADDED
{ 0x28FD, "battleslideshield_killonjumpfall" }, // AUTOADDED
{ 0x28FE, "battleslideshield_killonsprint" }, // AUTOADDED
{ 0x28FF, "battleslideshield_killontime" }, // AUTOADDED
{ 0x2900, "battleslideshield_lower" }, // AUTOADDED
{ 0x2901, "battleslideshield_lowerfx" }, // AUTOADDED
{ 0x2902, "battleslideshield_loweronleavearea" }, // AUTOADDED
{ 0x2903, "battleslideshield_lowerontime" }, // AUTOADDED
{ 0x2904, "battleslideshield_monitor" }, // AUTOADDED
{ 0x2905, "battleslideshield_monitorhealth" }, // AUTOADDED
{ 0x2906, "battleslideshield_raise" }, // AUTOADDED
{ 0x2907, "battleslideshield_raisefx" }, // AUTOADDED
{ 0x2908, "battleslideshield_unlink" }, // AUTOADDED
{ 0x2909, "battleslideshield_unlinkonstop" }, // AUTOADDED
{ 0x2910, "bb_canrodeo" },
{ 0x2911, "bb_clearanimscripted" },
{ 0x2913, "bb_clearmeleechargerequest" },
{ 0x2914, "bb_clearmeleerequest" },
{ 0x2915, "bb_clearmeleerequestcomplete" },
{ 0x2916, "bb_clearmeleetarget" },
{ 0x2917, "bb_clearmoverequest" },
{ 0x2918, "bb_clearrodeorequest" },
{ 0x2919, "bb_clearweaponrequest" },
{ 0x291B, "bb_dismemberedpart" },
{ 0x2920, "bb_getcovernode" },
{ 0x2925, "bb_getmeleetarget" },
{ 0x2926, "bb_getmissingleg" },
{ 0x292B, "bb_getrequestedcoverstate" }, // AUTOADDED
{ 0x292D, "bb_getrequestedturret" }, // AUTOADDED
{ 0x292E, "bb_getrequestedweapon" },
{ 0x292F, "bb_getrequestedwhizby" },
{ 0x2930, "bb_getthrowgrenadetarget" },
{ 0x2934, "bb_hasshufflenode" }, // AUTOADDED
{ 0x2938, "bb_isanimscripted" },
{ 0x2939, "bb_iscovermultiswitchrequested" }, // AUTOADDED
{ 0x293A, "bb_iscrawlmelee" }, // AUTOADDED
{ 0x293B, "bb_isfrantic" },
{ 0x293F, "bb_isheadless" },
{ 0x2940, "bb_isinbadcrouchspot" }, // AUTOADDED
{ 0x2941, "bb_isincombat" }, // AUTOADDED
{ 0x2942, "bb_ismissingaleg" }, // AUTOADDED
{ 0x2945, "bb_ispartdismembered" },
{ 0x294A, "bb_isrodeorequested" },
{ 0x294B, "bb_isselfdestruct" },
{ 0x294C, "bb_isshort" }, // AUTOADDED
{ 0x294D, "bb_isweaponclass" },
{ 0x294E, "bb_iswhizbyrequested" },
{ 0x294F, "bb_meleechargeaborted" }, // AUTOADDED
{ 0x2950, "bb_meleechargerequested" }, // AUTOADDED
{ 0x2951, "bb_meleecomplete" }, // AUTOADDED
{ 0x2952, "bb_meleeinprogress" }, // AUTOADDED
{ 0x2953, "bb_meleerequested" }, // AUTOADDED
{ 0x2954, "bb_meleerequestinvalid" }, // AUTOADDED
{ 0x2955, "bb_moverequested" },
{ 0x2956, "bb_movetyperequested" },
{ 0x2959, "bb_reloadrequested" },
{ 0x295A, "bb_requestcombatmovetype_facemotion" },
{ 0x295C, "bb_requestcombatmovetype_strafe" },
{ 0x2962, "bb_requestfire" },
{ 0x2965, "bb_requestmelee" },
{ 0x2966, "bb_requestmeleecharge" }, // AUTOADDED
{ 0x2967, "bb_requestmove" },
{ 0x2968, "bb_requestmovetype" },
{ 0x2969, "bb_requestreload" },
{ 0x296A, "bb_requestsmartobject" }, // AUTOADDED
{ 0x296B, "bb_requeststance" }, // AUTOADDED
{ 0x296C, "bb_requestthrowgrenade" },
{ 0x296D, "bb_requestfire" },
{ 0x2970, "bb_requestweapon" },
{ 0x2971, "bb_requestwhizby" },
{ 0x2973, "bb_setanimscripted" },
{ 0x2974, "bb_setcanrodeo" },
{ 0x2975, "bb_setcivilianstate" },
{ 0x2976, "bb_setcovernode" }, // AUTOADDED
{ 0x297C, "bb_setheadless" },
{ 0x297D, "bb_setisinbadcrouchspot" }, // AUTOADDED
{ 0x297E, "bb_setisincombat" }, // AUTOADDED
{ 0x297F, "bb_setmeleetarget" },
{ 0x2981, "bb_setrodeorequest" },
{ 0x2982, "bb_setselfdestruct" },
{ 0x2983, "bb_setshootparams" },
{ 0x2986, "bb_shoulddroprocketlauncher" },
{ 0x2988, "bb_selfdestructnow" },
{ 0x298A, "bb_throwgrenaderequested" },
{ 0x298E, "bb_wantstostrafe" }, // AUTOADDED
{ 0x2991, "bb_werepartsdismemberedinorder" },
{ 0x2993, "bball_game_hiscore" },
{ 0x2994, "bball_game_score" },
{ 0x2997, "bblockedbyfrozenzombies" },
{ 0x29A4, "bcdisabled" }, // AUTOADDED
{ 0x29A7, "bcharge" },
{ 0x29AA, "bcsounds" },
{ 0x29B9, "bcs_location_mappings" },
{ 0x29BA, "bcs_location_trigger_mapping" },
{ 0x29BB, "bcs_location_trigs_init" },
{ 0x29BC, "bcs_locations" },
{ 0x29C7, "bcs_trigs_assign_aliases" },
{ 0x29CB, "bcsounds" },
{ 0x29CC, "bdisabledefaultfacialanims" },
{ 0x29D1, "bdoingrangeattack" },
{ 0x2A1D, "beam_end" },
{ 0x2A38, "beam_trap_vfx" },
{ 0x2A40, "beamtrapuses" },
{ 0x2A60, "beginc4tracking" },
{ 0x2A61, "beginclasschoice" }, // AUTOADDED
{ 0x2A63, "begindeployableviamarker" },
{ 0x2A65, "beginevasivemaneuvers" }, // AUTOADDED
{ 0x2A69, "begingrenadetracking" },
{ 0x2A7A, "beginteamchoice" }, // AUTOADDED
{ 0x2A7B, "beginuse" }, // AUTOADDED
{ 0x2A7C, "beginusefunc" }, // AUTOADDED
{ 0x2A7D, "beginusegas" }, // AUTOADDED
{ 0x2A7E, "beginusesupplypack" }, // AUTOADDED
{ 0x2A7F, "behavior" }, // AUTOADDED
{ 0x2A80, "behaviortreeasset" },
{ 0x2A85, "being_revived" },
{ 0x2A87, "beingartilleryshellshocked" },
{ 0x2A89, "beingpickedup" },
{ 0x2A98, "bestscorestats" }, // AUTOADDED
{ 0x2A99, "bestspawnflag" },
{ 0x2A9A, "besttarget" },
{ 0x2AB3, "bhascovernode" }, // AUTOADDED
{ 0x2ABE, "bhgunphysicsvolumes" },
{ 0x2B0D, "bisbrute" },
{ 0x2B0F, "bisghost" },
{ 0x2B1D, "black_screen_fades_in" },
{ 0x2B23, "blackbox_data_type" },
{ 0x2B3C, "blackholegrenadeinit" },
{ 0x2B3D, "blackholegrenadeused" },
{ 0x2B40, "blackholemineexplode" },
{ 0x2B41, "blackholeminetrigger" },
{ 0x2B42, "blackholephysicsvolumeactivate" },
{ 0x2B45, "blackholetrapuses" },
{ 0x2B53, "blank" },
{ 0x2B55, "blank_photo" },
{ 0x2B56, "blank_score_component_init" },
{ 0x2B5A, "blaserattack" },
{ 0x2B5B, "blaserattackstarted" },
{ 0x2B69, "blastshieldusetracker" },
{ 0x2B6A, "bleedoutspawnentityoverride" },
{ 0x2B85, "blenddelete" }, // AUTOADDED
{ 0x2B97, "blinddurations" }, // AUTOADDED
{ 0x2B98, "blindeyerecipients" }, // AUTOADDED
{ 0x2B9C, "blindparts" }, // AUTOADDED
{ 0x2B9D, "blindstates" }, // AUTOADDED
{ 0x2BA2, "blinkinglightfx" },
{ 0x2BA3, "blinkinglighttag" },
{ 0x2BAB, "blockarea" }, // AUTOADDED
{ 0x2BB8, "blocking" },
{ 0x2BBA, "blockkillstreakforbots" }, // AUTOADDED
{ 0x2BBB, "blockperkfunction" },
{ 0x2BBE, "blockweapondrops" },
{ 0x2BC2, "bloodeffect" }, // AUTOADDED
{ 0x2BE4, "bmoving" },
{ 0x2BE7, "bneedtoenterplayspace" },
{ 0x2BEF, "boat_area_kill_trigger" },
{ 0x2BF1, "boat_countdown_started" },
{ 0x2BF3, "boat_last_stand_monitor" },
{ 0x2BF6, "boat_ride" },
{ 0x2BFA, "boat_start_node" },
{ 0x2BFB, "boat_vehicle" },
{ 0x2BFD, "boat_water_spawners" },
{ 0x2C09, "body" }, // AUTOADDED
{ 0x2C11, "bodyarmorhp" },
{ 0x2C12, "bodyguard_radius" },
{ 0x2C43, "bomb" },
{ 0x2C44, "bomb_defuser" },
{ 0x2C45, "bomb_defuser_update" },
{ 0x2C47, "bomb_zone_assaulting" },
{ 0x2C4A, "bombdefused" }, // AUTOADDED
{ 0x2C4B, "bombdefusetrig" },
{ 0x2C52, "bomber_monitor_no_path" },
{ 0x2C54, "bomber_wait_for_bomb_reset" },
{ 0x2C55, "bomber_wait_for_death" },
{ 0x2C58, "bombexploded" }, // AUTOADDED
{ 0x2C5B, "bombowner" },
{ 0x2C5C, "bombplanted" }, // AUTOADDED
{ 0x2C5D, "bombplantedtime" },
{ 0x2C5E, "bombplantweapon" },
{ 0x2C5F, "bombresettimer" }, // AUTOADDED
{ 0x2C60, "bombrespawnangles" }, // AUTOADDED
{ 0x2C61, "bombrespawnpoint" }, // AUTOADDED
{ 0x2C62, "bombs" },
{ 0x2C63, "bombsitewatcher" },
{ 0x2C64, "bombsplanted" },
{ 0x2C68, "bombsquadmodel" }, // AUTOADDED
{ 0x2C69, "bombsquadvisibilityupdater" }, // AUTOADDED
{ 0x2C6A, "bombsquadwaiter_missilefire" }, // AUTOADDED
{ 0x2C6B, "bombstrike" }, // AUTOADDED
{ 0x2C6C, "bombtimer" },
{ 0x2C6D, "bombtimerwait" }, // AUTOADDED
{ 0x2C6E, "bombvest_character" }, // AUTOADDED
{ 0x2C6F, "bombzone_awardgenericbombzonemedals" },
{ 0x2C70, "bombzone_num_picked" },
{ 0x2C71, "bombzone_onbeginuse" },
{ 0x2C72, "bombzone_onbombplanted" },
{ 0x2C73, "bombzone_oncantuse" },
{ 0x2C74, "bombzone_onenduse" },
{ 0x2C75, "bombzone_onusedefuseobject" },
{ 0x2C76, "bombzone_onuseplantobject" },
{ 0x2C77, "bombzone_setupbombcase" },
{ 0x2C78, "bombzone_setupobjective" },
{ 0x2C79, "bombzonegoal" },
{ 0x2C7A, "bombzones" },
{ 0x2C84, "bonusscorefunc" },
{ 0x2C9C, "boombox_delayed_death" },
{ 0x2C9D, "boombox_explode" },
{ 0x2C9E, "boombox_handledeath" },
{ 0x2CA0, "boombox_initboombox" },
{ 0x2CA1, "boombox_setactive" },
{ 0x2CA2, "boombox_setcancelled" },
{ 0x2CA3, "boombox_setcarried" },
{ 0x2CA4, "boombox_setinactive" },
{ 0x2CA5, "boombox_setplaced" },
{ 0x2CA6, "boombox_trap_enemies" },
{ 0x2CA8, "boomtrackplayerdeath" }, // AUTOADDED
{ 0x2CA9, "boomtrackplayers" },
{ 0x2CFF, "bot" },
{ 0x2D00, "bot_3d_sighting_model" },
{ 0x2D01, "bot_3d_sighting_model_thread" },
{ 0x2D02, "bot_abort_tactical_goal" }, // AUTOADDED
{ 0x2D03, "bot_add_ambush_time_delayed" },
{ 0x2D04, "bot_add_scavenger_bag" }, // AUTOADDED
{ 0x2D05, "bot_add_to_bot_damage_targets" }, // AUTOADDED
{ 0x2D06, "bot_add_to_bot_level_targets" }, // AUTOADDED
{ 0x2D07, "bot_add_to_bot_use_targets" }, // AUTOADDED
{ 0x2D08, "bot_allow_to_capture_flag" },
{ 0x2D09, "bot_allowed_to_3_cap" },
{ 0x2D0A, "bot_allowed_to_use_killstreaks" },
{ 0x2D0B, "bot_ambush_end" },
{ 0x2D0C, "bot_assign_personality_functions" },
{ 0x2D0D, "bot_attachment_reticle" }, // AUTOADDED
{ 0x2D0E, "bot_attachmenttable" }, // AUTOADDED
{ 0x2D0F, "bot_attacker_limit_for_team" }, // AUTOADDED
{ 0x2D10, "bot_balance_personality" },
{ 0x2D16, "bot_body_is_dead" },
{ 0x2D19, "bot_cache_entrances_to_bombzones" },
{ 0x2D1A, "bot_cache_entrances_to_flags_or_radios" },
{ 0x2D1B, "bot_cache_flag_distances" },
{ 0x2D1F, "bot_camp_tag" },
{ 0x2D20, "bot_camp_zone" },
{ 0x2D21, "bot_camping" },
{ 0x2D22, "bot_can_join_team" },
{ 0x2D23, "bot_can_revive" },
{ 0x2D24, "bot_can_use_aa_launcher" }, // AUTOADDED
{ 0x2D25, "bot_can_use_air_superiority" }, // AUTOADDED
{ 0x2D26, "bot_can_use_ball_drone" }, // AUTOADDED
{ 0x2D27, "bot_can_use_box_by_type" },
{ 0x2D2B, "bot_capture_point" },
{ 0x2D2C, "bot_capture_zone" },
{ 0x2D31, "bot_choose_flag" },
{ 0x2D33, "bot_class" },
{ 0x2D34, "bot_client_counts" }, // AUTOADDED
{ 0x2D35, "bot_cm_human_picked" },
{ 0x2D36, "bot_cm_spawned_bots" },
{ 0x2D37, "bot_cm_waited_players_time" },
{ 0x2D38, "bot_combine_tag_seen_arrays" }, // AUTOADDED
{ 0x2D39, "bot_conf_think" }, // AUTOADDED
{ 0x2D3A, "bot_connect_monitor" },
{ 0x2D3B, "bot_control_heli" }, // AUTOADDED
{ 0x2D3C, "bot_control_heli_main_move_loop" }, // AUTOADDED
{ 0x2D3D, "bot_control_heli_pilot" }, // AUTOADDED
{ 0x2D3E, "bot_control_heli_sniper" }, // AUTOADDED
{ 0x2D3F, "bot_control_odin" }, // AUTOADDED
{ 0x2D40, "bot_control_odin_assault" }, // AUTOADDED
{ 0x2D41, "bot_control_odin_support" }, // AUTOADDED
{ 0x2D42, "bot_control_switchblade_cluster" }, // AUTOADDED
{ 0x2D43, "bot_control_vanguard" },
{ 0x2D44, "bot_crate_is_command_goal" },
{ 0x2D45, "bot_crate_valid" },
{ 0x2D46, "bot_ctf_think" },
{ 0x2D47, "bot_damage_callback" },
{ 0x2D49, "bot_debug_script_goal" },
{ 0x2D4A, "bot_default_sd_role_behavior" },
{ 0x2D4B, "bot_defend_get_precalc_entrances_for_current_area" },
{ 0x2D4C, "bot_defend_get_random_entrance_point_for_current_area" },
{ 0x2D4D, "bot_defend_player_guarding" },
{ 0x2D4E, "bot_defend_stop" },
{ 0x2D4F, "bot_defend_think" },
{ 0x2D50, "bot_defender_limit_for_team" }, // AUTOADDED
{ 0x2D51, "bot_defending" }, // AUTOADDED
{ 0x2D52, "bot_defending_center" }, // AUTOADDED
{ 0x2D53, "bot_defending_nodes" }, // AUTOADDED
{ 0x2D54, "bot_defending_override_origin_node" }, // AUTOADDED
{ 0x2D55, "bot_defending_radius" }, // AUTOADDED
{ 0x2D56, "bot_defending_trigger" }, // AUTOADDED
{ 0x2D57, "bot_defending_type" }, // AUTOADDED
{ 0x2D58, "bot_delete_badplace_on_death" },
{ 0x2D59, "bot_dd_think" },
{ 0x2D5B, "bot_difficulty_defaults" },
{ 0x2D5C, "bot_disable_tactical_goals" },
{ 0x2D5D, "bot_do_doublejump" },
{ 0x2D5E, "bot_dom_apply_commander_tactics" },
{ 0x2D5F, "bot_dom_debug_should_capture_all" },
{ 0x2D60, "bot_dom_debug_should_protect_all" },
{ 0x2D61, "bot_dom_get_node_chance" },
{ 0x2D62, "bot_dom_leader_dialog" },
{ 0x2D63, "bot_dom_override_flag_targets" },
{ 0x2D64, "bot_dom_think" },
{ 0x2D68, "bot_drop" },
{ 0x2D69, "bot_enable_tactical_goals" }, // AUTOADDED
{ 0x2D6A, "bot_end_control_on_respawn" }, // AUTOADDED
{ 0x2D6B, "bot_end_control_on_vehicle_death" }, // AUTOADDED
{ 0x2D6C, "bot_end_control_watcher" }, // AUTOADDED
{ 0x2D6D, "bot_end_odin_watcher" }, // AUTOADDED
{ 0x2D6E, "bot_ent_is_anonymous_mine" }, // AUTOADDED
{ 0x2D6F, "bot_fallback_personality" }, // AUTOADDED
{ 0x2D70, "bot_fallback_weapon" }, // AUTOADDED
{ 0x2D71, "bot_filter_ambush_inuse" },
{ 0x2D72, "bot_filter_ambush_vicinity" }, // AUTOADDED
{ 0x2D73, "bot_find_ambush_entrances" }, // AUTOADDED
{ 0x2D74, "bot_find_best_tag_from_array" }, // AUTOADDED
{ 0x2D75, "bot_find_closest_tag" }, // AUTOADDED
{ 0x2D76, "bot_find_defend_node_func" }, // AUTOADDED
{ 0x2D77, "bot_find_node_that_protects_point" }, // AUTOADDED
{ 0x2D78, "bot_find_node_to_capture_point" }, // AUTOADDED
{ 0x2D79, "bot_find_node_to_capture_zone" }, // AUTOADDED
{ 0x2D7A, "bot_find_node_to_guard_player" },
{ 0x2D7B, "bot_find_random_midpoint" }, // AUTOADDED
{ 0x2D7C, "bot_find_visible_tags" }, // AUTOADDED
{ 0x2D7D, "bot_find_visible_tags_mugger" }, // AUTOADDED
{ 0x2D7E, "bot_fireteam_buddy_search" },
{ 0x2D7F, "bot_fireteam_buddy_think" },
{ 0x2D80, "bot_fireteam_buddy_up" },
{ 0x2D81, "bot_fireteam_cac_getperk" },
{ 0x2D82, "bot_fireteam_cac_getprimarygrenade" },
{ 0x2D83, "bot_fireteam_cac_getsecondarygrenade" },
{ 0x2D84, "bot_fireteam_cac_getstreak" },
{ 0x2D85, "bot_fireteam_cac_getweapon" },
{ 0x2D86, "bot_fireteam_cac_getweaponattachment" },
{ 0x2D87, "bot_fireteam_cac_getweaponattachmenttwo" },
{ 0x2D88, "bot_fireteam_cac_getweaponbuff" }, // AUTOADDED
{ 0x2D89, "bot_fireteam_cac_getweaponcamo" },
{ 0x2D8A, "bot_fireteam_cac_getweaponreticle" },
{ 0x2D8B, "bot_fireteam_connect_monitor" },
{ 0x2D8C, "bot_fireteam_follower" },
{ 0x2D8D, "bot_fireteam_hunt_zone_find_node" },
{ 0x2D8E, "bot_fireteam_init" },
{ 0x2D8F, "bot_fireteam_loadout_class_callback" },
{ 0x2D90, "bot_fireteam_monitor_killstreak_earned" },
{ 0x2D91, "bot_fireteam_setup_callback_class" },
{ 0x2D92, "bot_fireteam_setup_callbacks" },
{ 0x2D93, "bot_fireteam_spawn_callback" },
{ 0x2D94, "bot_flag_trigger" }, // AUTOADDED
{ 0x2D95, "bot_flag_trigger_clear" },
{ 0x2D9C, "bot_force_stance_for_time" },
{ 0x2D9D, "bot_free_to_move" },
{ 0x2D9E, "bot_funcs" },
{ 0x2D9F, "bot_gametype_chooses_class" },
{ 0x2DA0, "bot_gametype_chooses_team" },
{ 0x2DA1, "bot_gametype_precaching_done" }, // AUTOADDED
{ 0x2DA2, "bot_get_all_possible_flags" }, // AUTOADDED
{ 0x2DA3, "bot_get_ambush_trap_item" }, // AUTOADDED
{ 0x2DA4, "bot_get_available_ball" }, // AUTOADDED
{ 0x2DA5, "bot_get_ball_carrier" }, // AUTOADDED
{ 0x2DA6, "bot_get_client_limit" },
{ 0x2DA7, "bot_get_enemy_team" }, // AUTOADDED
{ 0x2DA8, "bot_get_entrances_for_stance_and_index" }, // AUTOADDED
{ 0x2DA9, "bot_get_grenade_ammo" }, // AUTOADDED
{ 0x2DAA, "bot_get_grenade_for_purpose" }, // AUTOADDED
{ 0x2DAB, "bot_get_heli_goal_dist_sq" }, // AUTOADDED
{ 0x2DAC, "bot_get_heli_slowdown_dist_sq" }, // AUTOADDED
{ 0x2DAD, "bot_get_host_team" }, // AUTOADDED
{ 0x2DAE, "bot_get_human_picked_team" }, // AUTOADDED
{ 0x2DAF, "bot_get_known_attacker" },
{ 0x2DB0, "bot_get_low_on_ammo" }, // AUTOADDED
{ 0x2DB1, "bot_get_nodes_in_cone" },
{ 0x2DB2, "bot_get_player_team" }, // AUTOADDED
{ 0x2DB3, "bot_get_rank_xp" }, // AUTOADDED
{ 0x2DB4, "bot_get_string_index_for_integer" }, // AUTOADDED
{ 0x2DB5, "bot_get_team_limit" }, // AUTOADDED
{ 0x2DB6, "bot_get_teammates_currently_defending_point" }, // AUTOADDED
{ 0x2DB7, "bot_get_teammates_in_radius" }, // AUTOADDED
{ 0x2DB8, "bot_get_total_gun_ammo" }, // AUTOADDED
{ 0x2DB9, "bot_get_zones_within_dist" }, // AUTOADDED
{ 0x2DBA, "bot_get_zones_within_dist_recurs" }, // AUTOADDED
{ 0x2DBB, "bot_goal_can_override" }, // AUTOADDED
{ 0x2DBC, "bot_goto_zone" }, // AUTOADDED
{ 0x2DBD, "bot_grenade_matches_purpose" }, // AUTOADDED
{ 0x2DBE, "bot_grind_extra_think" }, // AUTOADDED
{ 0x2DBF, "bot_grind_think" }, // AUTOADDED
{ 0x2DC0, "bot_grnd_think" }, // AUTOADDED
{ 0x2DC1, "bot_guard_player" }, // AUTOADDED
{ 0x2DC2, "bot_handle_no_valid_defense_node" },
{ 0x2DC4, "bot_hardpoint_think" },
{ 0x2DC5, "bot_has_tactical_goal" }, // AUTOADDED
{ 0x2DC6, "bot_headquarters_think" }, // AUTOADDED
{ 0x2DC7, "bot_heli_find_unvisited_nodes" }, // AUTOADDED
{ 0x2DC8, "bot_heli_nodes" }, // AUTOADDED
{ 0x2DC9, "bot_heli_pilot_traceoffset" },
{ 0x2DCA, "bot_in_combat" },
{ 0x2DCB, "bot_infect_ai_director_update" }, // AUTOADDED
{ 0x2DCC, "bot_infect_angle_too_steep_for_knife_throw" }, // AUTOADDED
{ 0x2DCD, "bot_infect_find_node_can_see_ent" }, // AUTOADDED
{ 0x2DCE, "bot_infect_retrieve_knife" }, // AUTOADDED
{ 0x2DCF, "bot_infect_think" }, // AUTOADDED
{ 0x2DD0, "bot_initialized_remote_vehicles" },
{ 0x2DD1, "bot_interaction_type" }, // AUTOADDED
{ 0x2DD2, "bot_invalid_attachment_combos" },
{ 0x2DD3, "bot_is_assigned_location" },
{ 0x2DD4, "bot_is_bodyguarding" }, // AUTOADDED
{ 0x2DD5, "bot_is_capturing" }, // AUTOADDED
{ 0x2DD6, "bot_is_capturing_flag" }, // AUTOADDED
{ 0x2DD7, "bot_is_defending" }, // AUTOADDED
{ 0x2DD8, "bot_is_defending_point" }, // AUTOADDED
{ 0x2DD9, "bot_is_fireteam_mode" },
{ 0x2DDA, "bot_is_guarding_player" }, // AUTOADDED
{ 0x2DDB, "bot_is_killstreak_supported" }, // AUTOADDED
{ 0x2DDC, "bot_is_patrolling" }, // AUTOADDED
{ 0x2DDD, "bot_is_protecting" }, // AUTOADDED
{ 0x2DDE, "bot_is_protecting_flag" }, // AUTOADDED
{ 0x2DDF, "bot_is_ready_to_spawn" }, // AUTOADDED
{ 0x2DE0, "bot_is_remote_or_linked" },
{ 0x2DE1, "bot_is_tag_visible" }, // AUTOADDED
{ 0x2DE2, "bot_israndom" },
{ 0x2DE3, "bot_jump_for_tag" }, // AUTOADDED
{ 0x2DE4, "bot_killstreak_choose_loc_enemies" }, // AUTOADDED
{ 0x2DE5, "bot_killstreak_drop" }, // AUTOADDED
{ 0x2DE6, "bot_killstreak_drop_anywhere" }, // AUTOADDED
{ 0x2DE7, "bot_killstreak_drop_hidden" }, // AUTOADDED
{ 0x2DE8, "bot_killstreak_drop_outside" }, // AUTOADDED
{ 0x2DE9, "bot_killstreak_get_all_outside_allies" }, // AUTOADDED
{ 0x2DEA, "bot_killstreak_get_all_outside_enemies" }, // AUTOADDED
{ 0x2DEB, "bot_killstreak_get_outside_players" }, // AUTOADDED
{ 0x2DEC, "bot_killstreak_get_zone_allies_outside" }, // AUTOADDED
{ 0x2DED, "bot_killstreak_get_zone_enemies_outside" }, // AUTOADDED
{ 0x2DEE, "bot_killstreak_is_valid_internal" }, // AUTOADDED
{ 0x2DEF, "bot_killstreak_is_valid_single" }, // AUTOADDED
{ 0x2DF0, "bot_killstreak_never_use" }, // AUTOADDED
{ 0x2DF1, "bot_killstreak_remote_control" }, // AUTOADDED
{ 0x2DF2, "bot_killstreak_sentry" }, // AUTOADDED
{ 0x2DF3, "bot_killstreak_setup" },
{ 0x2DF4, "bot_killstreak_simple_use" }, // AUTOADDED
{ 0x2DF5, "bot_killstreak_valid_for_specific_streaktype" }, // AUTOADDED
{ 0x2DF6, "bot_killstreak_vanguard_start" }, // AUTOADDED
{ 0x2DF7, "bot_killstreak_wait" }, // AUTOADDED
{ 0x2DF8, "bot_know_enemies_on_start" },
{ 0x2DF9, "bot_ks_funcs" }, // AUTOADDED9555
{ 0x2DFA, "bot_ks_heli_offset" },
{ 0x2DFB, "bot_leader_dialog" },
{ 0x2DFC, "bot_light_volumes" }, // AUTOADDED
{ 0x2DFD, "bot_loadout_choose_fallback_primary" }, // AUTOADDED
{ 0x2DFE, "bot_loadout_choose_from_attachmenttable" }, // AUTOADDED
{ 0x2DFF, "bot_loadout_choose_from_camotable" }, // AUTOADDED
{ 0x2E00, "bot_loadout_choose_from_default_class" }, // AUTOADDED
{ 0x2E01, "bot_loadout_choose_from_perktable" }, // AUTOADDED
{ 0x2E02, "bot_loadout_choose_from_set" },
{ 0x2E03, "bot_loadout_choose_from_statstable" },
{ 0x2E04, "bot_loadout_choose_values" },
{ 0x2E05, "bot_loadout_class_callback" },
{ 0x2E06, "bot_loadout_copy_from_client" },
{ 0x2E07, "bot_loadout_fields" }, // AUTOADDED
{ 0x2E08, "bot_loadout_get_archetype" }, // AUTOADDED
{ 0x2E09, "bot_loadout_get_difficulty" }, // AUTOADDED
{ 0x2E0A, "bot_loadout_item_allowed" }, // AUTOADDED
{ 0x2E0B, "bot_loadout_make_index" }, // AUTOADDED
{ 0x2E0C, "bot_loadout_perk_slots" }, // AUTOADDED
{ 0x2E0D, "bot_loadout_pick" }, // AUTOADDED
{ 0x2E0E, "bot_loadout_set" }, // AUTOADDED
{ 0x2E0F, "bot_loadout_setup_perks" }, // AUTOADDED
{ 0x2E13, "bot_loadout_valid_choice" },
{ 0x2E14, "bot_loadouts_initialized" },
{ 0x2E15, "bot_lui_convert_team_to_int" },
{ 0x2E16, "bot_make_entity_sentient" }, // AUTOADDED
{ 0x2E17, "bot_map_center" }, // AUTOADDED
{ 0x2E18, "bot_map_max_x" },
{ 0x2E19, "bot_map_max_y" },
{ 0x2E1A, "bot_map_max_z" },
{ 0x2E1B, "bot_map_min_x" },
{ 0x2E1C, "bot_map_min_y" },
{ 0x2E1D, "bot_map_min_z" },
{ 0x2E1E, "bot_melee_tactical_insertion_check" },
{ 0x2E1F, "bot_memory_goal" },
{ 0x2E20, "bot_memory_goal_time" },
{ 0x2E21, "bot_monitor_enemy_camp_spots" }, // AUTOADDED
{ 0x2E22, "bot_monitor_watch_entrances_at_goal" },
{ 0x2E23, "bot_monitor_watch_entrances_bodyguard" },
{ 0x2E24, "bot_monitor_watch_entrances_camp" },
{ 0x2E25, "bot_mugger_loadout_modify" },
{ 0x2E26, "bot_mugger_think" },
{ 0x2E27, "bot_new_tactical_goal" },
{ 0x2E3B, "bot_out_of_ammo" },
{ 0x2E3C, "bot_out_of_combat_time" },
{ 0x2E3D, "bot_patrol_area" },
{ 0x2E3E, "bot_perk_cost" },
{ 0x2E3F, "bot_perktable" },
{ 0x2E40, "bot_perktable_groups" },
{ 0x2E41, "bot_perktypes" },
{ 0x2E42, "bot_pers_init" },
{ 0x2E43, "bot_pers_update" },
{ 0x2E44, "bot_personality" },
{ 0x2E45, "bot_personality_list" },
{ 0x2E46, "bot_personality_type" },
{ 0x2E47, "bot_personality_types_desired" },
{ 0x2E48, "bot_pick_personality_from_weapon" },
{ 0x2E49, "bot_pick_random_point_from_set" },
{ 0x2E4A, "bot_pick_random_point_in_radius" },
{ 0x2E4B, "bot_picking_up" },
{ 0x2E4C, "bot_pickup_weapon" },
{ 0x2E4D, "bot_player_spawned" },
{ 0x2E4E, "bot_point_is_on_pathgrid" },
{ 0x2E50, "bot_post_teleport" }, // AUTOADDED
{ 0x2E51, "bot_post_use_ammo_crate" }, // AUTOADDED
{ 0x2E52, "bot_post_use_box_of_type" }, // AUTOADDED
{ 0x2E54, "bot_post_use_ammo_crate" },
{ 0x2E55, "bot_pre_use_box_of_type" }, // AUTOADDED
{ 0x2E56, "bot_prematchdonetime" }, // AUTOADDED
{ 0x2E57, "bot_protect_point" }, // AUTOADDED
{ 0x2E58, "bot_queued_process" }, // AUTOADDED
{ 0x2E59, "bot_queued_process_level_thread" }, // AUTOADDED
{ 0x2E5A, "bot_queued_process_level_thread_active" }, // AUTOADDED
{ 0x2E5B, "bot_queued_process_queue" }, // AUTOADDED
{ 0x2E5C, "bot_random_path" },
{ 0x2E5D, "bot_random_path_default" },
{ 0x2E5E, "bot_random_path_function" },
{ 0x2E5F, "bot_random_ranks_for_difficulty" },
{ 0x2E60, "bot_rank_weapon_class" },
{ 0x2E62, "bot_recent_point_of_interest" },
{ 0x2E63, "bot_register_killstreak_func" }, // AUTOADDED
{ 0x2E64, "bot_remove_from_bot_level_targets" }, // AUTOADDED
{ 0x2E65, "bot_remove_invalid_tags" }, // AUTOADDED
{ 0x2E66, "bot_respawn_launcher_name" }, // AUTOADDED
{ 0x2E67, "bot_restart_think_threads" },
{ 0x2E68, "bot_rnd_prestige" }, // AUTOADDED
{ 0x2E69, "bot_rnd_rank" },
{ 0x2E6A, "bot_scavenger_bags" }, // AUTOADDED
{ 0x2E6B, "bot_sd_ai_director_update" }, // AUTOADDED
{ 0x2E6C, "bot_sd_override_zone_targets" }, // AUTOADDED
{ 0x2E6D, "bot_sd_start" }, // AUTOADDED
{ 0x2E6E, "bot_sd_think" }, // AUTOADDED
{ 0x2E6F, "bot_seek_dropped_weapon" }, // AUTOADDED
{ 0x2E70, "bot_send_cancel_notify" }, // AUTOADDED
{ 0x2E71, "bot_send_place_notify" }, // AUTOADDED
{ 0x2E72, "bot_sentry_activate" }, // AUTOADDED
{ 0x2E73, "bot_sentry_add_goal" }, // AUTOADDED
{ 0x2E74, "bot_sentry_cancel" }, // AUTOADDED
{ 0x2E75, "bot_sentry_cancel_failsafe" }, // AUTOADDED
{ 0x2E76, "bot_sentry_carried_obj" }, // AUTOADDED
{ 0x2E77, "bot_sentry_choose_placement" }, // AUTOADDED
{ 0x2E78, "bot_sentry_choose_target" }, // AUTOADDED
{ 0x2E79, "bot_sentry_ensure_exit" }, // AUTOADDED
{ 0x2E7A, "bot_sentry_force_cancel" }, // AUTOADDED
{ 0x2E7B, "bot_sentry_path_start" }, // AUTOADDED
{ 0x2E7C, "bot_sentry_path_thread" }, // AUTOADDED
{ 0x2E7D, "bot_sentry_should_abort" }, // AUTOADDED
{ 0x2E7E, "bot_set_ambush_trap" }, // AUTOADDED
{ 0x2E7F, "bot_set_ambush_trap_wait_fire" }, // AUTOADDED
{ 0x2E80, "bot_set_bombzone_bottargets" }, // AUTOADDED
{ 0x2E81, "bot_set_difficulty" },
{ 0x2E82, "bot_set_loadout_class" },
{ 0x2E83, "bot_set_personality" },
{ 0x2E84, "bot_set_role" }, // AUTOADDED
{ 0x2E85, "bot_set_role_delayed" }, // AUTOADDED
{ 0x2E86, "bot_setup_bombzone_bottargets" }, // AUTOADDED
{ 0x2E87, "bot_setup_bot_targets" }, // AUTOADDED
{ 0x2E88, "bot_setup_callback_class" },
{ 0x2E89, "bot_setup_loadout_callback" },
{ 0x2E8A, "bot_setup_objective_bottargets" }, // AUTOADDED
{ 0x2E8B, "bot_setup_radio_bottargets" }, // AUTOADDED
{ 0x2E8C, "bot_should_defend" }, // AUTOADDED
{ 0x2E8D, "bot_should_defend_flag" }, // AUTOADDED
{ 0x2E8E, "bot_should_do_killcam" },
{ 0x2E8F, "bot_should_melee_level_damage_target" }, // AUTOADDED
{ 0x2E90, "bot_should_pickup_weapons" },
{ 0x2E91, "bot_should_pickup_weapons_infect" }, // AUTOADDED
{ 0x2E92, "bot_should_use_ammo_crate" }, // AUTOADDED
{ 0x2E93, "bot_should_use_ballistic_vest_crate" }, // AUTOADDED
{ 0x2E94, "bot_should_use_grenade_crate" }, // AUTOADDED
{ 0x2E95, "bot_should_use_juicebox_crate" },
{ 0x2E96, "bot_should_use_scavenger_bag" },
{ 0x2E97, "bot_siege_manager_think" },
{ 0x2E98, "bot_siege_think" },
{ 0x2E99, "bot_spawned_before" },
{ 0x2E9A, "bot_squad_lookup" }, // AUTOADDED
{ 0x2E9B, "bot_squad_lookup_enemy" }, // AUTOADDED
{ 0x2E9C, "bot_squad_lookup_private" }, // AUTOADDED
{ 0x2E9D, "bot_squad_lookup_ranked" }, // AUTOADDED
{ 0x2E9E, "bot_squadmember_lookup" }, // AUTOADDED
{ 0x2E9F, "bot_sr_think" }, // AUTOADDED
{ 0x2EA0, "bot_start_aa_launcher_tracking" },
{ 0x2EA1, "bot_start_know_enemy" },
{ 0x2EA2, "bot_start_known_by_enemy" },
{ 0x2EA4, "bot_supported_killstreaks" }, // AUTOADDED
{ 0x2EA5, "bot_switch_to_killstreak_weapon" }, // AUTOADDED
{ 0x2EA6, "bot_tag_allowable_jump_height" },
{ 0x2EA7, "bot_tag_obj_radius" }, // AUTOADDED
{ 0x2EA8, "bot_target" }, // AUTOADDED
{ 0x2EA9, "bot_target_is_flag" }, // AUTOADDED
{ 0x2EAA, "bot_targets" }, // AUTOADDED
{ 0x2EAB, "bot_tdm_apply_commander_tactics" },
{ 0x2EAC, "bot_team" },
{ 0x2EAD, "bot_team_tdm_personality" },
{ 0x2EAE, "bot_think" },
{ 0x2EAF, "bot_think_crate" },
{ 0x2EB0, "bot_think_crate_blocking_path" },
{ 0x2EB1, "bot_think_gametype" },
{ 0x2EB2, "bot_think_killstreak" },
{ 0x2EB3, "bot_think_level_acrtions" },
{ 0x2EB4, "bot_think_powers" },
{ 0x2EB5, "bot_think_revive" },
{ 0x2EB6, "bot_think_seek_dropped_weapons" },
{ 0x2EB7, "bot_think_supers" },
{ 0x2EB8, "bot_think_tactical_goals" },
{ 0x2EB9, "bot_think_watch_aerial_killstreak" },
{ 0x2EBA, "bot_think_watch_enemy" },
{ 0x2EBB, "bot_triggers" }, // AUTOADDED
{ 0x2EBC, "bot_try_trap_follower" }, // AUTOADDED
{ 0x2EBD, "bot_update_camp_assassin" }, // AUTOADDED
{ 0x2EBE, "bot_usebutton_wait" }, // AUTOADDED
{ 0x2EBF, "bot_valid_camp_assassin" }, // AUTOADDED
{ 0x2EC0, "bot_validate_perk" }, // AUTOADDED
{ 0x2EC1, "bot_validate_reticle" }, // AUTOADDED
{ 0x2EC2, "bot_validate_weapon" }, // AUTOADDED
{ 0x2EC3, "bot_vanguard_find_unvisited_nodes" }, // AUTOADDED
{ 0x2EC4, "bot_vanguard_height_trace_size" }, // AUTOADDED
{ 0x2EC5, "bot_variables_initialized" }, // AUTOADDED
{ 0x2EC6, "bot_vectors_are_equal" }, // AUTOADDED
{ 0x2EC7, "bot_visited_times" }, // AUTOADDED
{ 0x2EC8, "bot_wait_free_to_move" },
{ 0x2EC9, "bot_wait_here" },
{ 0x2ECA, "bot_waittill_bots_enabled" },
{ 0x2ECB, "bot_waittill_goal_or_fail" },
{ 0x2ECC, "bot_waittill_out_of_combat_or_time" }, // AUTOADDED
{ 0x2ECD, "bot_waittill_using_vehicle" }, // AUTOADDED
{ 0x2ECE, "bot_war_think" },
{ 0x2ECF, "bot_watch_entrances_delayed" }, // AUTOADDED
{ 0x2ED0, "bot_watch_for_death" }, // AUTOADDED
{ 0x2ED1, "bot_watch_for_killstreak_use" }, // AUTOADDED
{ 0x2ED2, "bot_watch_manual_detonate" }, // AUTOADDED
{ 0x2ED3, "bot_watch_new_tags" }, // AUTOADDED
{ 0x2ED4, "bot_watch_nodes" }, // AUTOADDED
{ 0x2ED5, "bot_weap_personality" }, // AUTOADDED
{ 0x2ED6, "bot_weap_statstable" },
{ 0x2ED7, "bot_weapon_is_better_class" },
{ 0x2ED8, "botarchetype" }, // AUTOADDED
{ 0x2ED9, "botarchetypes" }, // AUTOADDED
{ 0x2EDA, "botblockedkillstreaks" }, // AUTOADDED
{ 0x2EE3, "botlastloadout" },
{ 0x2EE4, "botlastloadoutdifficulty" },
{ 0x2EE5, "botlastloadoutpersonality" },
{ 0x2EE6, "botloadoutfavoritecamo" },
{ 0x2EE7, "botloadoutsets" }, // AUTOADDED
{ 0x2EE8, "botloadouttemplates" }, // AUTOADDED
{ 0x2EEB, "bots" }, // AUTOADDED
{ 0x2EEC, "bots_attacking_wanted" }, // AUTOADDED
{ 0x2EED, "bots_defending_wanted" }, // AUTOADDED
{ 0x2EEE, "bots_disable_team_switching" }, // AUTOADDED
{ 0x2EEF, "bots_exist" }, // AUTOADDED
{ 0x2EF0, "bots_fireteam_humans" },
{ 0x2EF1, "bots_fireteam_num_classes_loaded" },
{ 0x2EF2, "bots_gametype_handles_class_choice" },
{ 0x2EF3, "bots_gametype_handles_team_choice" },
{ 0x2EF4, "bots_gametype_initialized" }, // AUTOADDED
{ 0x2EF5, "bots_ignore_team_balance" },
{ 0x2EF6, "bots_notify_on_disconnect" }, // AUTOADDED
{ 0x2EF7, "bots_notify_on_spawn" }, // AUTOADDED
{ 0x2EF8, "bots_remove_from_array_on_notify" }, // AUTOADDED
{ 0x2EF9, "bots_update_difficulty" }, // AUTOADDED
{ 0x2EFA, "bots_used" },
{ 0x2EFD, "bottarget" },
{ 0x2EFE, "bottargets" },
{ 0x2F13, "box_addboxforplayer" }, // AUTOADDED
{ 0x2F14, "box_agentconnected" }, // AUTOADDED
{ 0x2F15, "box_disableplayeruse" }, // AUTOADDED
{ 0x2F18, "box_enableplayeruse" }, // AUTOADDED
{ 0x2F19, "box_handledamage" }, // AUTOADDED
{ 0x2F1A, "box_handledeath" }, // AUTOADDED
{ 0x2F1B, "box_handledeathdamage" }, // AUTOADDED
{ 0x2F1C, "box_handleownerdisconnect" }, // AUTOADDED
{ 0x2F1D, "box_leave" }, // AUTOADDED
{ 0x2F1E, "box_modelteamupdater" }, // AUTOADDED
{ 0x2F1F, "box_modifydamage" }, // AUTOADDED
{ 0x2F20, "box_playerconnected" }, // AUTOADDED
{ 0x2F21, "box_playerjoinedteam" }, // AUTOADDED
{ 0x2F22, "box_setactive" }, // AUTOADDED
{ 0x2F23, "box_seticon" }, // AUTOADDED
{ 0x2F24, "box_setinactive" }, // AUTOADDED
{ 0x2F25, "box_should_leave_immediately" }, // AUTOADDED
{ 0x2F26, "box_timeout" }, // AUTOADDED
{ 0x2F27, "box_waittill_player_spawn_and_add_box" }, // AUTOADDED
{ 0x2F28, "boxcapturethink" }, // AUTOADDED
{ 0x2F2B, "boxes" },
{ 0x2F2F, "boxparams" }, // AUTOADDED
{ 0x2F30, "boxsettings" }, // AUTOADDED
{ 0x2F31, "boxthink" }, // AUTOADDED
{ 0x2F32, "boxtouchonly" }, // AUTOADDED
{ 0x2F33, "boxtype" },
{ 0x2F34, "bp" },
{ 0x2F35, "bplanted" },
{ 0x2F37, "bpm" }, // AUTOADDED
{ 0x2F39, "bpowerdown" }, // AUTOADDED
{ 0x2F3A, "bpowereddown" }, // AUTOADDED
{ 0x2FB2, "break_barrier_from_entrance" },
{ 0x2FC6, "breathingmanager" },
{ 0x2FC7, "breathingstoptime" },
{ 0x2FC8, "breload" },
{ 0x3101, "brush_delete" },
{ 0x3102, "brush_show" },
{ 0x3103, "brush_shown" },
{ 0x3104, "brush_throw" },
{ 0x3111, "brute_damage_adjustment_func" },
{ 0x3113, "brute_hit_arcade_cabinet_with_laser" },
{ 0x3135, "bt" },
{ 0x313B, "bthrowgrenade" },
{ 0x313D, "bfire" },
{ 0x3140, "btracking" },
{ 0x3141, "btraversing" }, // AUTOADDED
{ 0x3142, "btreeorient" }, // AUTOADDED
{ 0x3143, "btstate_addsubstate" }, // AUTOADDED
{ 0x3144, "btstate_clearsubstates" }, // AUTOADDED
{ 0x3145, "btstate_endcurrentsubstate" }, // AUTOADDED
{ 0x3146, "btstate_endstates" }, // AUTOADDED
{ 0x3147, "btstate_getcurrentsubstate" }, // AUTOADDED
{ 0x3148, "btstate_getsubstate" }, // AUTOADDED
{ 0x3149, "btstate_setupstate" }, // AUTOADDED
{ 0x314A, "btstate_tickstates" }, // AUTOADDED
{ 0x314B, "btstate_transitionstate" }, // AUTOADDED
{ 0x314C, "bucket" }, // AUTOADDED
{ 0x314D, "bucket_terminator" }, // AUTOADDED
{ 0x314E, "buddy_boost" }, // AUTOADDED
{ 0x314F, "buddy_boost_restart" }, // AUTOADDED
{ 0x3150, "buddy_down" }, // AUTOADDED
{ 0x3151, "buddy_down_damage_thread" }, // AUTOADDED
{ 0x3152, "buddy_down_dialogue" }, // AUTOADDED
{ 0x3153, "buddy_down_door_damage" }, // AUTOADDED
{ 0x3154, "buddy_down_dropgun" }, // AUTOADDED
{ 0x3155, "buddy_down_enemydead_interrupt" }, // AUTOADDED
{ 0x3156, "buddy_down_gunner_damage_thread" }, // AUTOADDED
{ 0x3157, "buddy_down_gunner_death" }, // AUTOADDED
{ 0x3158, "buddy_down_gunner_flashed_thread" }, // AUTOADDED
{ 0x3159, "buddy_down_player_engaging_early" }, // AUTOADDED
{ 0x315A, "buddy_down_price_anim" }, // AUTOADDED
{ 0x315B, "buddy_down_remove_playerclip" }, // AUTOADDED
{ 0x315C, "buddy_down_skip_move" }, // AUTOADDED
{ 0x315D, "buddy_down_skip_post_clear" }, // AUTOADDED
{ 0x315E, "buddy_down_skip_setup" }, // AUTOADDED
{ 0x315F, "buddy_down_trigger_damage_ondamage" }, // AUTOADDED
{ 0x3160, "buddy_down_trigger_damage_onflashbang" }, // AUTOADDED
{ 0x3161, "buddy_down_two_enemy_dead_thread" }, // AUTOADDED
{ 0x3162, "buddyplayerid" }, // AUTOADDED
{ 0x3163, "buddyspawn" }, // AUTOADDED
{ 0x3164, "buddyspawnid" }, // AUTOADDED
{ 0x3165, "budgetedents" }, // AUTOADDED
{ 0x3166, "budy_death_watcher" }, // AUTOADDED
{ 0x3167, "buffedbyplayers" },
{ 0x3168, "bufferedbestscorestats" }, // AUTOADDED
{ 0x3169, "bufferedchildstats" }, // AUTOADDED
{ 0x316A, "bufferedchildstatsmax" }, // AUTOADDED
{ 0x316B, "bufferednotifications" }, // AUTOADDED
{ 0x316C, "bufferednotify" }, // AUTOADDED
{ 0x316D, "bufferednotify_internal" }, // AUTOADDED
{ 0x316E, "bufferedstats" }, // AUTOADDED
{ 0x316F, "bufferedstatsmax" }, // AUTOADDED
{ 0x3170, "bufferedstatwritethink" }, // AUTOADDED
{ 0x3171, "bufferedweapons" }, // AUTOADDED
{ 0x3172, "bug_out" }, // AUTOADDED
{ 0x3173, "bug_test_move_startpoint" }, // AUTOADDED
{ 0x3174, "bugoutontimeout" }, // AUTOADDED
{ 0x3175, "build_ace" }, // AUTOADDED
{ 0x3176, "build_aianims" }, // AUTOADDED
{ 0x3177, "build_all_treadfx" }, // AUTOADDED
{ 0x3178, "build_atmo_types" }, // AUTOADDED
{ 0x3179, "build_attach_models" }, // AUTOADDED
{ 0x317A, "build_bulletshield" }, // AUTOADDED
{ 0x317B, "build_call_buttons" },
{ 0x318E, "build_elevators" },
{ 0x31CF, "build_weapon_name_func" },
{ 0x31D3, "buildallflightpaths" },
{ 0x31D4, "buildallflightpathsdefault" },
{ 0x31D5, "buildattachmentmaps" },
{ 0x3211, "buildkilldeathactionvalue" }, // AUTOADDED
{ 0x3212, "buildloadoutstring" },
{ 0x3214, "buildmeritinfo" },
{ 0x3215, "buildmerittableinfo" },
{ 0x3217, "buildrandomattachmentarray" },
{ 0x3218, "buildrandomweapontable" },
{ 0x321B, "buildspawnpointstatestring" }, // AUTOADDED
{ 0x3220, "buildweaponassetname" },
{ 0x3223, "buildweaponmaps" },
{ 0x3224, "buildweaponname" },
{ 0x3225, "buildweaponnamecamo" },
{ 0x3227, "buildweaponnamereticle" },
{ 0x3228, "buildweaponnamevariantid" },
{ 0x3237, "bullet_damage_scalar" },
{ 0x3248, "bulletoutline" }, // AUTOADDED
{ 0x3249, "bulletoutlineaddenemy" },
{ 0x324B, "bulletoutlinecheck" },
{ 0x324C, "bulletoutlineremoveenemy" }, // AUTOADDED
{ 0x3250, "bulletsinclip" },
{ 0x3257, "bulletstormshield" }, // AUTOADDED
{ 0x3261, "bumper_car_impact_spots" },
{ 0x3262, "bumper_cars" },
{ 0x3289, "burn_loop" },
{ 0x3294, "burning" },
{ 0x32C0, "burstmax" }, // AUTOADDED
{ 0x32C1, "burstmin" }, // AUTOADDED
{ 0x32C3, "burstshootanimrate" },
{ 0x32DF, "button_is_clicked" },
{ 0x32E0, "button_is_held" },
{ 0x32E1, "button_is_kb" },
{ 0x32E7, "button_parse_parameters" }, // AUTOADDED
{ 0x32E8, "button_pressed_from_string" }, // AUTOADDED
{ 0x32E9, "button_smash_count" }, // AUTOADDED
{ 0x32EA, "button_sound" }, // AUTOADDED
{ 0x32EB, "button_switch" }, // AUTOADDED
{ 0x32EC, "button_toggles" }, // AUTOADDED
{ 0x32ED, "buttonclick" },
{ 0x32EE, "buttondown" },
{ 0x32EF, "buttonisheld" },
{ 0x32F0, "buttonpress_create_exploder" },
{ 0x32F1, "buttonpress_create_interval_sound" },
{ 0x32F2, "buttonpress_create_loopfx" },
{ 0x32F3, "buttonpress_create_loopsound" },
{ 0x32F4, "buttonpress_create_oneshot" },
{ 0x32F5, "buttonpress_create_reactiveent" },
{ 0x32F6, "buttonpressed_internal" },
{ 0x32F8, "buy_loc" },
{ 0x331E, "bwaitingforteamselect" },
{ 0x3322, "bwantrangeattack" },
{ 0x3323, "bwantstostrafe" }, // AUTOADDED
{ 0x3324, "bwanttograbzombie" },
{ 0x3327, "bypassclasschoice" },
{ 0x3328, "bypassclasschoicefunc" },
{ 0x332E, "c4_addtoarray" },
{ 0x332F, "c4_candetonate" }, // AUTOADDED
{ 0x3330, "c4_delete" },
{ 0x3331, "c4_deleteonownerdisconnect" }, // AUTOADDED
{ 0x3332, "c4_destroy" },
{ 0x3333, "c4_destroyonemp" },
{ 0x3334, "c4_destroyongameend" }, // AUTOADDED
{ 0x3335, "c4_detonate" }, // AUTOADDED
{ 0x3336, "c4_detonateall" }, // AUTOADDED
{ 0x3337, "c4_earthquake" },
{ 0x3338, "c4_explode" },
{ 0x3339, "c4_explodeonnotify" },
{ 0x333B, "c4_removefromarray" },
{ 0x333C, "c4_removefromarrayondeath" },
{ 0x333D, "c4_set" }, // AUTOADDED
{ 0x333E, "c4_used" },
{ 0x333F, "c4_watchforaltdetonation" },
{ 0x3340, "c4_watchfordetonation" },
{ 0x3341, "c4activate" },
{ 0x3349, "c4detonateallcharges" },
{ 0x334A, "c4empdamage" },
{ 0x334B, "c4explodethisframe" },
{ 0x334C, "c4implode" },
{ 0x334E, "c4s" }, // AUTOADDED
{ 0x334F, "c4stuck" },
{ 0x3350, "c4used" },
{ 0x365D, "c130" },
{ 0x365E, "c130setup" },
{ 0x3676, "cac_getcharacterarchetype" },
{ 0x3678, "cac_getextracharge" },
{ 0x3679, "cac_getextracharge2" },
{ 0x367A, "cac_getgesture" },
{ 0x367B, "cac_getkillstreak" },
{ 0x367C, "cac_getkillstreaklootid" },
{ 0x367E, "cac_getloadoutarchetypeperk" }, // AUTOADDED
{ 0x367F, "cac_getloadoutextraperk" }, // AUTOADDED
{ 0x3680, "cac_getloadoutperk" }, // AUTOADDED
{ 0x3682, "cac_getpower" },
{ 0x3683, "cac_getpowerid" },
{ 0x3684, "cac_getpower2" },
{ 0x3685, "cac_getpower2id" },
{ 0x3688, "cac_getsuper" }, // AUTOADDED
{ 0x3689, "cac_getweapon" }, // AUTOADDED
{ 0x368A, "cac_getweaponattachment" },
{ 0x3691, "cac_getweaponcamo" }, // AUTOADDED
{ 0x3692, "cac_getweaponlootitemid" }, // AUTOADDED
{ 0x3694, "cac_getweaponreticle" }, // AUTOADDED
{ 0x3695, "cac_getweaponvariantid" }, // AUTOADDED
{ 0x3698, "cac_vo_female" },
{ 0x3699, "cac_vo_male" },
{ 0x36A3, "cachedactions" }, // AUTOADDED
{ 0x36A4, "cachelootweaponweaponinfo" },
{ 0x36A5, "cacheplayeraction" }, // AUTOADDED
{ 0x36DD, "calculate_and_show_encounter_scores" },
{ 0x36E6, "calculate_defend_stance" },
{ 0x36EC, "calculate_encounter_scores" },
{ 0x36ED, "calculate_escape_score" }, // AUTOADDED
{ 0x36EE, "calculate_final_spider_score" }, // AUTOADDED
{ 0x36EF, "calculate_func" },
{ 0x36F7, "calculate_mobile_shield_pos" },
{ 0x36FB, "calculate_player_encounter_scores" },
{ 0x36FD, "calculate_players_total_end_game_score" },
{ 0x3704, "calculate_tag_on_path_grid" },
{ 0x3708, "calculate_total_end_game_score" },
{ 0x370A, "calculate_under_max_score" },
{ 0x370D, "calculated_closest_point" },
{ 0x370E, "calculated_nearest_node" }, // AUTOADDED
{ 0x3710, "calculatefactorscore" }, // AUTOADDED
{ 0x3718, "calculatenodeoffset" },
{ 0x371E, "calculatespawndisttoballstart" }, // AUTOADDED
{ 0x371F, "calculatespawndisttozones" },
{ 0x3728, "calculatezombiehealth" },
{ 0x3731, "calculations_in_progress" },
{ 0x3732, "call_elevator" },
{ 0x373E, "callback_defaultplayerlaststand" },
{ 0x373F, "callback_frontendhostmigration" },
{ 0x3740, "callback_frontendplayerconnect" },
{ 0x3741, "callback_frontendplayerdamage" },
{ 0x3742, "callback_frontendplayerdisconnect" },
{ 0x3743, "callback_frontendplayerimpaled" },
{ 0x3744, "callback_frontendplayerkilled" },
{ 0x3745, "callback_frontendplayerlaststand" },
{ 0x3746, "callback_frontendplayermigrated" },
{ 0x3747, "callback_frontendstartgametype" },
{ 0x3749, "callback_hostmigration" },
{ 0x374A, "callback_killingblow" },
{ 0x374C, "callback_playerconnect" },
{ 0x374D, "callback_playerdamage" },
{ 0x374E, "callback_playerdamage_internal" },
{ 0x374F, "callback_playerdisconnect" },
{ 0x3750, "callback_playerimpaled" },
{ 0x3751, "callback_playerkilled" },
{ 0x3752, "callback_playerlaststand" },
{ 0x3753, "callback_playerlaststandalien" }, // AUTOADDED
{ 0x3754, "callback_playerlaststandhorde" }, // AUTOADDED
{ 0x3755, "callback_playermigrated" },
{ 0x3757, "callback_startgametype" },
{ 0x375A, "callback_zombieplayerdamage" },
{ 0x375E, "callbackhostmigration" },
{ 0x375F, "callbackplayerconnect" },
{ 0x3760, "callbackplayerdamage" },
{ 0x3761, "callbackplayerdisconnect" },
{ 0x3762, "callbackplayerimpaled" },
{ 0x3763, "callbackplayerkilled" },
{ 0x3764, "callbackplayerlaststand" },
{ 0x3766, "callbackplayermigrated" },
{ 0x3767, "callbacks" }, // AUTOADDED
{ 0x3768, "callbackstartgametype" },
{ 0x3769, "callbackvoid" },
{ 0x3774, "callout" },
{ 0x3779, "calloutarea" },
{ 0x377A, "calloutareathink" }, // AUTOADDED
{ 0x377B, "calloutdestroyed" }, // AUTOADDED
{ 0x377C, "calloutglobals" },
{ 0x3780, "callouttable" },
{ 0x3785, "callstrike" },
{ 0x3787, "callstrike_bombeffect" },
{ 0x378F, "calulatezombiemovemode" },
{ 0x37A6, "camera_anchor" },
{ 0x37A8, "camera_bro_shot" },
{ 0x37B1, "camera_move_helper" },
{ 0x37C0, "camera_zoomout" },
{ 0x37C1, "cameraang" }, // AUTOADDED
{ 0x37C3, "cameramapobjs" }, // AUTOADDED
{ 0x37C4, "cameramodel" },
{ 0x37C8, "camerapos" }, // AUTOADDED
{ 0x37E6, "camp_bomb_update" },
{ 0x37EB, "camper_time_started_hunting" },
{ 0x37EC, "camper_trigger_think" }, // AUTOADDED
{ 0x37ED, "campercheck" }, // AUTOADDED
{ 0x37EE, "campfire_temp_dialog" }, // AUTOADDED
{ 0x37EF, "camping_needs_fallback_camp_location" },
{ 0x37F8, "can_attack" },
{ 0x37FA, "can_be_attacked_by_ghost" },
{ 0x37FB, "can_be_attacked_by_ufo_turret" },
{ 0x37FD, "can_be_killed" },
{ 0x37FF, "can_be_slow_projectile_target" },
{ 0x3802, "can_camp_near_others" },
{ 0x3803, "can_charge_power_nodes" },
{ 0x3804, "can_collect_lost_and_found_items" },
{ 0x380B, "can_damage" },
{ 0x380E, "can_do_duplicating_attack" },
{ 0x380F, "can_do_health_regen" },
{ 0x3811, "can_do_teleport_attack" },
{ 0x3812, "can_do_teleport_dash" },
{ 0x3813, "can_do_teleport_summon" },
{ 0x3814, "can_do_teleport_to_loner" },
{ 0x381D, "can_give_weapon" },
{ 0x381F, "can_hypno" },
{ 0x3829, "can_melee_enemy_time" },
{ 0x382E, "can_pickup_bomb_time" },
{ 0x3835, "can_place_speaker" },
{ 0x3837, "can_play_dialogue_system" },
{ 0x383D, "can_purchase_ammo" },
{ 0x383E, "can_purchase_interaction" },
{ 0x383F, "can_regen_health" },
{ 0x3842, "can_revive" },
{ 0x3845, "can_scale_weapon" },
{ 0x384C, "can_set_traversal_unit_type" }, // AUTOADDED
{ 0x3859, "can_teleport" },
{ 0x385F, "can_upgrade" },
{ 0x3862, "can_use_attachment" },
{ 0x3863, "can_use_interaction" },
{ 0x3865, "can_use_override_func" },
{ 0x3866, "can_use_pap_upgrade" },
{ 0x3867, "can_use_perk" },
{ 0x3868, "can_use_pistol_during_last_stand" },
{ 0x3869, "can_use_pistol_during_laststand_func" },
{ 0x386A, "can_use_selfrevive_door" },
{ 0x386B, "can_use_struct_for_final_pos" },
{ 0x3872, "canbeplaced" }, // AUTOADDED
{ 0x3874, "canbetargeted" },
{ 0x3878, "cancalloutlocation" },
{ 0x3881, "cancelkillcam" },
{ 0x3882, "cancellethaldelay" }, // AUTOADDED
{ 0x3887, "cancelsuperdelay" }, // AUTOADDED
{ 0x3896, "canconcat" }, // AUTOADDED
{ 0x3897, "cancontestclaim" },
{ 0x38AF, "candorangeattack" },
{ 0x38BE, "cangrabzombie" },
{ 0x38C3, "caninteractwith" },
{ 0x38C6, "canlogclient" }, // AUTOADDED
{ 0x38C7, "canlogdeath" },
{ 0x38CA, "canloglife" }, // AUTOADDED
{ 0x38CD, "canmeleeduringstealth" },
{ 0x38CF, "canmovefrompointtopoint" },
{ 0x38D3, "cannon" }, // AUTOADDED
{ 0x38D4, "cannon_effect" },
{ 0x38D9, "cannonfirevfx" },
{ 0x38DA, "cannonrumble" },
{ 0x38DD, "cannontarget" }, // AUTOADDED
{ 0x38E1, "cannotmelee" },
{ 0x38E2, "cannotplacehinton" },
{ 0x38E3, "cannotplacestring" },
{ 0x38EB, "canphaseslide" },
{ 0x38F0, "canplayerbebuddyspawnedon" }, // AUTOADDED
{ 0x38FF, "canregenhealth" },
{ 0x3900, "canreturntocover" }, // AUTOADDED
{ 0x3901, "cansave" }, // AUTOADDED
{ 0x3902, "cansay" }, // AUTOADDED
{ 0x3903, "cansayname" }, // AUTOADDED
{ 0x3904, "cansayplayername" }, // AUTOADDED
{ 0x3905, "canseeandshootpoint" },
{ 0x3907, "canseeenemy" },
{ 0x3908, "canseeenemyfromexposed" },
{ 0x3909, "canseepointfromexposedatcorner" },
{ 0x390A, "canseepointfromexposedatnode" },
{ 0x390B, "canseetarget" }, // AUTOADDED
{ 0x390C, "canseethroughfoliage" }, // AUTOADDED
{ 0x390D, "canshootinvehicle" }, // AUTOADDED
{ 0x390E, "canshoottarget" }, // AUTOADDED
{ 0x390F, "canshoottargetfrompos" }, // AUTOADDED
{ 0x3910, "canshowsplash" }, // AUTOADDED
{ 0x3911, "canshowtoughenupshield" }, // AUTOADDED
{ 0x3916, "canstow" }, // AUTOADDED
{ 0x3917, "cansuppressenemy" },
{ 0x3918, "cansuppressenemyfromexposed" },
{ 0x3925, "canteleslide" },
{ 0x3936, "canusecallback" },
{ 0x393A, "canuseobject" },
{ 0x393B, "canuseotherboxes" },
{ 0x3A00, "caprate" },
{ 0x3A07, "capsperminute" }, // AUTOADDED
{ 0x3A08, "capsule_get_closest_point" },
{ 0x3A09, "capsule_trace" },
{ 0x3A0A, "capsule_trace_get_all_results" },
{ 0x3A0B, "capsule_trace_passed" },
{ 0x3A37, "capture_flag" },
{ 0x3A38, "capture_radius" },
{ 0x3A3C, "capturecondition" }, // AUTOADDED
{ 0x3A3D, "capturecount" },
{ 0x3A3E, "capturednuke" },
{ 0x3A3F, "captures" },
{ 0x3A40, "capturetime" }, // AUTOADDED
{ 0x3A42, "capzones" },
{ 0x3A52, "card_refills" },
{ 0x3A58, "carepackagedropnodes" }, // AUTOADDED
{ 0x3A59, "carepackages" }, // AUTOADDED
{ 0x3A5A, "carestrike" },
{ 0x3A9A, "carried_fireworks_trap" },
{ 0x3A9B, "carried_trap" },
{ 0x3A9C, "carriedboombox" },
{ 0x3A9D, "carriedby" }, // AUTOADDED
{ 0x3A9E, "carriedgascan" }, // AUTOADDED
{ 0x3A9F, "carriedims" }, // AUTOADDED
{ 0x3AA0, "carrieditem" }, // AUTOADDED
{ 0x3AA1, "carriedmedusa" }, // AUTOADDED
{ 0x3AA2, "carriedobj" }, // AUTOADDED
{ 0x3AA3, "carriedobject" }, // AUTOADDED
{ 0x3AA4, "carriedrevocator" }, // AUTOADDED
{ 0x3AA5, "carriedsentry" }, // AUTOADDED
{ 0x3AA6, "carriedtrapangles" }, // AUTOADDED
{ 0x3AA7, "carriedtrapoffset" }, // AUTOADDED
{ 0x3AA8, "carrier" }, // AUTOADDED
{ 0x3AEC, "carrierarmor" },
{ 0x3AED, "carrierbonusscore" }, // AUTOADDED
{ 0x3AEE, "carrierbonustime" }, // AUTOADDED
{ 0x3AEF, "carriergivescore" }, // AUTOADDED
{ 0x3AF0, "carrierhascarryweaponinloadout" }, // AUTOADDED
{ 0x3AF1, "carriervisible" }, // AUTOADDED
{ 0x3AF2, "carrierweaponcurrent" }, // AUTOADDED
{ 0x3AF4, "carryflag" }, // AUTOADDED
{ 0x3AF5, "carryicon" }, // AUTOADDED
{ 0x3AF6, "carrymodel" },
{ 0x3AF7, "carryobject" },
{ 0x3AF8, "carryobject_overridemovingplatformdeath" }, // AUTOADDED
{ 0x3AF9, "carryobjectasset" }, // AUTOADDED
{ 0x3AFA, "carryobjectproxthink" }, // AUTOADDED
{ 0x3AFB, "carryobjectproxthinkdelayed" }, // AUTOADDED
{ 0x3AFC, "carryobjectusethink" }, // AUTOADDED
{ 0x3AFD, "carryremoteuav_delete" }, // AUTOADDED
{ 0x3B01, "carryweapon" }, // AUTOADDED
{ 0x3B02, "carryweaponthink" }, // AUTOADDED
{ 0x3B0F, "cash_scalar" },
{ 0x3B1D, "casualmode" },
{ 0x3B21, "cat_array_add" }, // AUTOADDED
{ 0x3B22, "cat_array_get" }, // AUTOADDED
{ 0x3B23, "catch_alien_on_fire" },
{ 0x3B95, "category" }, // AUTOADDED
{ 0x3BA0, "cautious_approach_till_close" },
{ 0x3BB7, "centerref" }, // AUTOADDED
{ 0x3BB8, "centerstructstriggered" },
{ 0x3BE9, "cfxprintln" },
{ 0x3BEA, "cfxprintlnend" },
{ 0x3BEB, "cfxprintlnstart" },
{ 0x3C11, "challenge_area_marker" },
{ 0x3C17, "challenge_data" },
{ 0x3C1A, "challenge_hotjoin_func" },
{ 0x3C1B, "challenge_name" },
{ 0x3C1E, "challenge_registration_func" },
{ 0x3C1F, "challenge_results" },
{ 0x3C23, "challenge_scalar_func" },
{ 0x3C39, "chance_to_play" },
{ 0x3C51, "changeangledelay" },
{ 0x3C53, "changearchetype" },
{ 0x3C54, "changecrateweight" },
{ 0x3C56, "changedarchetypeinfo" }, // AUTOADDED
{ 0x3C5E, "changeweapons" },
{ 0x3C61, "changingdirection" },
{ 0x3C62, "changingtoregularinfected" }, // AUTOADDED
{ 0x3C63, "changingtoregularinfectedbykill" }, // AUTOADDED
{ 0x3C64, "changingweapon" },
{ 0x3CA6, "chaos_update_spending_currency_event" },
{ 0x3CAA, "char_loc" },
{ 0x3CAE, "character_hat_index" },
{ 0x3CAF, "character_head_index" },
{ 0x3CB1, "character_index_cache" },
{ 0x3CB2, "character_model_cache" }, // AUTOADDED
{ 0x3CB3, "charactercac" },
{ 0x3CB5, "characters" }, // AUTOADDED
{ 0x3CBE, "charge_distance" },
{ 0x3CBF, "charge_fx" },
{ 0x3CC6, "charge_players_arcane_base_attachment" },
{ 0x3D12, "chargemode_speedscale" },
{ 0x3D23, "charges" },
{ 0x3D46, "chaseenemy" },
{ 0x3D55, "cheatammoifnecessary" },
{ 0x3D5D, "check_arcade_game_performance_at_least" },
{ 0x3D5E, "check_arcade_game_performance_at_most" },
{ 0x3D65, "check_createfx_limit" },
{ 0x3D85, "check_for_grenade_in_volume" },
{ 0x3D89, "check_for_invalid_attachments" },
{ 0x3D9D, "check_for_special_damage" },
{ 0x3DAB, "check_is_in_front_of" },
{ 0x3DB0, "check_kill_on_dance_floor" },
{ 0x3DB2, "check_limit_type" },
{ 0x3DBF, "check_owner" }, // AUTOADDED
{ 0x3DC5, "check_reactive_fx_type" },
{ 0x3DCA, "check_self_revive_attempts" },
{ 0x3DD5, "check_to_increase_powerup_drop_rates" },
{ 0x3DD7, "check_to_use_headshot_explosion" },
{ 0x3DE9, "checkallowspectating" },
{ 0x3DF0, "checkattack" },
{ 0x3DF5, "checkbuddyspawn" },
{ 0x3DFC, "checkcodcasterplayerdataexists" }, // AUTOADDED
{ 0x3E05, "checkdynamicspawns" }, // AUTOADDED
{ 0x3E06, "checked" },
{ 0x3E07, "checkendgame" },
{ 0x3E08, "checkenemiesinfov" },
{ 0x3E21, "checkisfacing" }, // AUTOADDED
{ 0x3E23, "checkkillsteal" },
{ 0x3E2F, "checkpassivemessage" }, // AUTOADDED
{ 0x3E33, "checkpitchvisibility" },
{ 0x3E34, "checkplayer" },
{ 0x3E35, "checkplayerscorelimitsoon" },
{ 0x3E42, "checkpredictedspawnpointcorrectness" },
{ 0x3E46, "checkscopes" }, // AUTOADDED
{ 0x3E47, "checkscorelimit" },
{ 0x3E4C, "checkstancestatus" }, // AUTOADDED
{ 0x3E52, "checkteam" },
{ 0x3E5A, "checkvalidplacementstate" },
{ 0x3E5B, "checkvalidposition" },
{ 0x3E66, "childchecktime" }, // AUTOADDED
{ 0x3E67, "children" }, // AUTOADDED
{ 0x3E69, "chill" }, // AUTOADDED
{ 0x3E6A, "chill_blind" }, // AUTOADDED
{ 0x3E6B, "chill_data" }, // AUTOADDED
{ 0x3E6C, "chill_impair" }, // AUTOADDED
{ 0x3E6D, "chill_impairend" }, // AUTOADDED
{ 0x3E6E, "chill_init" }, // AUTOADDED
{ 0x3E70, "chill_resetdata" }, // AUTOADDED
{ 0x3E71, "chill_resetscriptable" }, // AUTOADDED
{ 0x3E72, "chill_scrnfx" },
{ 0x3E75, "chill_update" }, // AUTOADDED
{ 0x3E76, "chillend" }, // AUTOADDED
{ 0x3E83, "choose_from_weighted_array" },
{ 0x3E88, "choose_last_weapon" },
{ 0x3E89, "choose_new_dj_door" },
{ 0x3E8B, "choose_powerup" },
{ 0x3EAC, "chooseanim_weaponswitch" }, // AUTOADDED
{ 0x3EB7, "chooseanimshoot" }, // AUTOADDED
{ 0x3ECD, "choosedemeanoranimwithoverride" }, // AUTOADDED
{ 0x3ECE, "choosedemeanoranimwithoverridevariants" }, // AUTOADDED
{ 0x3ED0, "choosedirection" }, // AUTOADDED
{ 0x3ED9, "choosefirstinfected" },
{ 0x3EE3, "choosenumshotsandbursts" },
{ 0x3EF9, "chooseshootstyle" },
{ 0x3F04, "choosestrongdamagedeath" }, // AUTOADDED
{ 0x3F14, "chopper" },
{ 0x3F19, "chopper_fx" }, // AUTOADDED
{ 0x3F29, "chosentemplates" },
{ 0x3F2A, "chromosphere_mini_ufo" },
{ 0x3FEC, "civstate" },
{ 0x3FED, "civstatetime" },
{ 0x3FF2, "claimed" },
{ 0x3FF7, "claimgracetime" },
{ 0x3FF9, "claimteam" },
{ 0x4000, "clampedhealth" },
{ 0x4001, "clampweaponspeed" }, // AUTOADDED
{ 0x4004, "class" },
{ 0x4006, "class_num" },
{ 0x4007, "class_override" },
{ 0x4008, "class_progression_init" }, // AUTOADDED
{ 0x4009, "classcallback" }, // AUTOADDED
{ 0x400A, "classgrenades" }, // AUTOADDED
{ 0x400B, "classhasperk" }, // AUTOADDED
{ 0x400C, "classmap" },
{ 0x400D, "classrefreshed" },
{ 0x400E, "classstruct" },
{ 0x400F, "classset" }, // guessed
{ 0x4010, "classtablename" },
{ 0x4012, "classteam" },
{ 0x4013, "classtweaks" }, // AUTOADDED
{ 0x4023, "claymoredetectiondot" },
{ 0x4024, "claymoredetectiongraceperiod" },
{ 0x4025, "claymoredetectionmindist" },
{ 0x4026, "claymoredetectiontrigger" }, // AUTOADDED
{ 0x4027, "claymoredetonateradius" },
{ 0x4028, "claymoredetonation" },
{ 0x4029, "claymoremakesentient" }, // AUTOADDED
{ 0x402A, "claymores" }, // AUTOADDED
{ 0x402B, "claymoresentientfunc" }, // AUTOADDED
{ 0x402C, "claymoretracking" }, // AUTOADDED
{ 0x402D, "claymoreused" },
{ 0x403E, "clean_up_zombie_armor" },
{ 0x403F, "cleanarray" }, // guessed
{ 0x4041, "cleanlbarray" }, // AUTOADDED
{ 0x4045, "cleanup" }, // AUTOADDED
{ 0x4066, "cleanup_crate_capture" },
{ 0x40E1, "cleanupafterplayerdeath" }, // AUTOADDED
{ 0x40E2, "cleanupaftertimeoutordeath" },
{ 0x40E3, "cleanupaircraft" },
{ 0x40E7, "cleanupbuddyspawn" },
{ 0x40EF, "cleanupcrankedplayertimer" },
{ 0x40F0, "cleanupcrankedtimer" },
{ 0x40F4, "cleanupequipment" }, // AUTOADDED
{ 0x40F5, "cleanupexplosivesondeath" }, // AUTOADDED
{ 0x40F6, "cleanupflashanim" }, // AUTOADDED
{ 0x40F7, "cleanupgamemodes" }, // AUTOADDED
{ 0x40F8, "cleanupgametypevips" }, // AUTOADDED
{ 0x4103, "cleanuplocalplayersplashlist" }, // AUTOADDED
{ 0x4108, "cleanuponparentdeath" },
{ 0x410D, "cleanuppowerup" },
{ 0x410E, "cleanupprojectile" },
{ 0x4110, "cleanupreviveent" },
{ 0x4118, "cleanupsingularity" },
{ 0x411E, "cleanuptrigger" },
{ 0x412B, "clear_arcane_effects" },
{ 0x4133, "clear_bot_camping_on_bot_death" },
{ 0x4134, "clear_bot_camping_on_reset" },
{ 0x4135, "clear_bot_on_bot_death" },
{ 0x4136, "clear_bot_on_reset" },
{ 0x413A, "clear_camper_data" },
{ 0x4142, "clear_debris" },
{ 0x4143, "clear_defend" },
{ 0x4144, "clear_defense_sequence_zombie_model" },
{ 0x414D, "clear_entity_selection" },
{ 0x414E, "clear_exception" },
{ 0x4152, "clear_fx_hudelements" },
{ 0x4157, "clear_goal_icon_on" },
{ 0x4159, "clear_grey_fight_clips" },
{ 0x4164, "clear_last_stand_timer" },
{ 0x4174, "clear_previous_lost_and_found" },
{ 0x417C, "clear_script_goal_on" },
{ 0x417D, "clear_script_origin_other_on_ai" }, // AUTOADDED
{ 0x417E, "clear_scripted_anim" }, // AUTOADDED
{ 0x417F, "clear_settable_fx" },
{ 0x4185, "clear_target_zone_update" },
{ 0x4188, "clear_tool_hud" },
{ 0x418F, "clear_up_previous_scu" },
{ 0x4191, "clear_weapons_status" },
{ 0x4194, "clearafterfade" },
{ 0x4198, "cleararchetype" }, // AUTOADDED
{ 0x419F, "clearcalloutareaondeath" },
{ 0x41A0, "clearcarrier" },
{ 0x41A5, "cleardamagehistory" }, // AUTOADDED
{ 0x41A6, "cleardamagemodifiers" },
{ 0x41B4, "clearhealthshield" }, // AUTOADDED
{ 0x41B5, "clearhidenode" },
{ 0x41B7, "clearhovernode" },
{ 0x41BD, "clearkillcamattachmentomnvars" }, // AUTOADDED
{ 0x41BE, "clearkillcamkilledbyitemomnvars" }, // AUTOADDED
{ 0x41BF, "clearkillcamstate" },
{ 0x41C1, "clearkillstreakselection" }, // AUTOADDED
{ 0x41C4, "clearlowermessage" },
{ 0x41C5, "clearlowermessages" },
{ 0x41C8, "clearondeath" },
{ 0x41C9, "clearonvictimdisconnect" }, // AUTOADDED
{ 0x41CA, "clearpassives" }, // AUTOADDED
{ 0x41CB, "clearpathactionvalue" }, // AUTOADDED
{ 0x41CD, "clearplayerlockfromremoteuavlaunch" }, // AUTOADDED
{ 0x41CE, "clearplayersweaponlevels" },
{ 0x41D0, "clearpowers" },
{ 0x41D1, "clearprematchlook" },
{ 0x41D3, "clearprogress" },
{ 0x41D6, "clearrideintro" }, // AUTOADDED
{ 0x41D7, "clearscoreeventlistafterwait" }, // AUTOADDED
{ 0x41D8, "clearscriptable" },
{ 0x41DD, "clearsinglerecordedlocation" },
{ 0x41DE, "clearspawnpointdistancedata" }, // AUTOADDED
{ 0x41DF, "clearspawnpointsightdata" }, // AUTOADDED
{ 0x41E2, "clearsuper" }, // AUTOADDED
{ 0x41E7, "cleartextmarker" },
{ 0x41E8, "clearthreatbias" }, // AUTOADDED
{ 0x41E9, "clearusingremote" }, // AUTOADDED
{ 0x41F0, "clientid" }, // AUTOADDED
{ 0x41F1, "clientmatchdata" }, // AUTOADDED
{ 0x41F2, "clientmatchdata_data_type" }, // AUTOADDED
{ 0x41F3, "clientmatchdata_struct" }, // AUTOADDED
{ 0x41F4, "clientmatchdataid" }, // AUTOADDED
{ 0x41F5, "clientnum" },
{ 0x4221, "clip" },
{ 0x4224, "clip_model" },
{ 0x424E, "clone_health" },
{ 0x4250, "close_afterlife_door_for_player" },
{ 0x4256, "close_coaster_door" },
{ 0x425B, "close_coaster_doors" },
{ 0x426E, "close_gates" },
{ 0x4272, "close_inner_doors" },
{ 0x4278, "close_outer_doors" },
{ 0x4282, "closecapturekiller" },
{ 0x4293, "closeomamenuondeath" }, // AUTOADDED
{ 0x4297, "closest_crystal_func" },
{ 0x4298, "closest_entrance" },
{ 0x4299, "closest_player_near_interaction_point" },
{ 0x429A, "closest_point_on_grid" },
{ 0x42A1, "closestdistancebetweenlines" },
{ 0x42A2, "closestdistancebetweensegments" },
{ 0x42A3, "closestdoorpos" }, // AUTOADDED
{ 0x42A4, "closestenemies" }, // AUTOADDED
{ 0x42A5, "closestenemies_array" }, // AUTOADDED
{ 0x42A6, "closestpoint" }, // AUTOADDED
{ 0x42A7, "closestpointtowall" }, // AUTOADDED
{ 0x42A8, "closet_runner_ignore_manager" }, // AUTOADDED
{ 0x42A9, "closetacopsmap" }, // AUTOADDED
{ 0x42AA, "closetargetsinouterradius" }, // AUTOADDED
{ 0x42AB, "closetogoalcheck" }, // AUTOADDED
{ 0x42CF, "clouds" },
{ 0x42D0, "clouds_create" },
{ 0x42DA, "clustergrenadeexplode" },
{ 0x42DC, "clustergrenadeinit" },
{ 0x42DE, "clustergrenadeused" },
{ 0x42E0, "clusterticks" },
{ 0x42E8, "coaster_begin_ride" },
{ 0x42E9, "coaster_danger_zone" },
{ 0x42EA, "coaster_dmg_trig_monitor" },
{ 0x42EB, "coaster_end_announcer_vo" },
{ 0x42ED, "coaster_flow_manager" },
{ 0x42EE, "coaster_hi_score" },
{ 0x42EF, "coaster_infinite_ammo" },
{ 0x42F1, "coaster_last_stand_monitor" },
{ 0x42F2, "coaster_monitor" },
{ 0x42F3, "coaster_ondeck_path" },
{ 0x42F4, "coaster_path_logic" },
{ 0x42F5, "coaster_ride_sfx" },
{ 0x42F6, "coaster_rumble_and_shake" },
{ 0x42F7, "coaster_start_path" },
{ 0x42F8, "coaster_usage_monitor" },
{ 0x42F9, "coaster_wait_for_power" },
{ 0x42FB, "coaster_zombies_group" },
{ 0x42FC, "coasterplayers" },
{ 0x4333, "codcastermatchdata" }, // AUTOADDED
{ 0x4334, "codcastermatchdataid" }, // AUTOADDED
{ 0x433D, "codxp_dialogue_vo_handler" },
{ 0x433E, "codxp_timer" },
{ 0x4347, "cointoss" },
{ 0x4374, "collect_arcane_essense" },
{ 0x4376, "collect_tokens_vo" },
{ 0x4377, "collectibles" },
{ 0x4381, "collision" },
{ 0x43A6, "colorindex" },
{ 0x43AE, "colors" },
{ 0x43E9, "combat_resource" },
{ 0x4401, "combatendtime" },
{ 0x4402, "combathigh" }, // AUTOADDED
{ 0x4403, "combathighicon" }, // AUTOADDED
{ 0x4404, "combathighoverlay" }, // AUTOADDED
{ 0x4405, "combathightimer" }, // AUTOADDED
{ 0x4406, "combatidle" }, // AUTOADDED
{ 0x4407, "combatidlepreventoverlappingplayer" }, // AUTOADDED
{ 0x4408, "combatmemorytimeconst" }, // AUTOADDED
{ 0x4409, "combatmemorytimerand" }, // AUTOADDED
{ 0x440A, "combatmode_old" }, // AUTOADDED
{ 0x440B, "combatspeedscalar" },
{ 0x4415, "combo_multiplier" },
{ 0x441A, "command_given" },
{ 0x441B, "command_goal" },
{ 0x442A, "commander_aggregate_score_on_game_end" },
{ 0x442B, "commander_can_takeover_bot" },
{ 0x442C, "commander_closed_menu_time" },
{ 0x442D, "commander_create_dom_obj" },
{ 0x4430, "commander_gametype_initialized" },
{ 0x4431, "commander_gave_hint" },
{ 0x4432, "commander_handle_notify_quick" },
{ 0x4433, "commander_hint" },
{ 0x4434, "commander_hint_delete_on_commander_menu" },
{ 0x4435, "commander_hint_fade" },
{ 0x4436, "commander_initialize_gametype" },
{ 0x4437, "commander_last_tactic_applied" },
{ 0x4438, "commander_last_tactic_selected" },
{ 0x4439, "commander_loadout_class_callback" },
{ 0x443A, "commander_monitor_tactics" },
{ 0x443B, "commander_or_bot_change_class" },
{ 0x443C, "commander_order_ack" },
{ 0x443F, "commander_spectate_bot" },
{ 0x4440, "commander_spectate_first_available_bot" },
{ 0x4441, "commander_spectate_next_bot" },
{ 0x4443, "commander_takeover_first_available_bot" },
{ 0x4444, "commander_wait_connect" },
{ 0x4445, "commanderhintelem" },
{ 0x4447, "commanding_bot" },
{ 0x445B, "compare_player_pass_dot" }, // AUTOADDED
{ 0x445C, "compare_player_score" }, // AUTOADDED
{ 0x4460, "compareballindexes" }, // AUTOADDED
{ 0x4462, "comparezoneindexes" }, // AUTOADDED
{ 0x4463, "compassiconenemy" }, // AUTOADDED
{ 0x4464, "compassiconfriendly" }, // AUTOADDED
{ 0x446A, "complete_all_speaker_defense" },
{ 0x446B, "complete_brute_hit_arcade_cabinet_with_laser" },
{ 0x446C, "complete_fetch_quest" },
{ 0x446E, "complete_get_1_9_8_4_kills_on_dance_floor" },
{ 0x4470, "complete_get_tone_generator" },
{ 0x4471, "complete_grey_fight" },
{ 0x4476, "complete_match_ufo_tone" },
{ 0x4479, "complete_place_tone_generator" },
{ 0x447A, "complete_pop_all_balloons_in_beginning_area" },
{ 0x447B, "complete_shoot_ice_monster_eye_during_coaster_ride" },
{ 0x447D, "complete_spell_the_word_ghost" },
{ 0x447E, "complete_ufo_projectile_attack" },
{ 0x447F, "complete_clean_arcade_cabinet" },
{ 0x4481, "completed_dialogues" },
{ 0x4485, "completeplayerwarp" },
{ 0x4488, "component_specific_init" },
{ 0x448F, "computescoreboardslot" }, // AUTOADDED
{ 0x44ED, "concussionendtime" },
{ 0x4503, "conf_camper_camp_tags" },
{ 0x4504, "conf_camping_tag" },
{ 0x4505, "conf_camping_zone" },
{ 0x4507, "conf_fx" },
{ 0x451C, "config" },
{ 0x4522, "confirmed" },
{ 0x452A, "connect_time" },
{ 0x452B, "connected" },
{ 0x4530, "connectedpostgame" },
{ 0x4533, "connectingPlayers" },
{ 0x4535, "connectnewagent" }, // AUTOADDED
{ 0x4539, "connecttime" },
{ 0x453C, "consecutivehitsperweapon" },
{ 0x4542, "console" },
{ 0x4554, "constantsize" },
{ 0x4555, "constraingametype" }, // AUTOADDED
{ 0x4557, "consumable_activate" },
{ 0x4558, "consumable_activate_internal" },
{ 0x455C, "consumable_cash_scalar" },
{ 0x4560, "consumable_meter" },
{ 0x4561, "consumable_meter_full" },
{ 0x4563, "consumable_meter_max" },
{ 0x4565, "consumable_setup_functions" },
{ 0x4569, "consumable_table" },
{ 0x456B, "consumables" },
{ 0x4572, "consumables_used" },
{ 0x4574, "consume_from_inventory" },
{ 0x457C, "content" },
{ 0x457E, "contestedbrush" }, // AUTOADDED
{ 0x4581, "contestedzonebrushes" }, // AUTOADDED
{ 0x4594, "context_sensative_dialog" },
{ 0x4595, "context_sensative_dialog_filler" },
{ 0x4596, "context_sensative_dialog_guy_crawling" },
{ 0x4597, "context_sensative_dialog_guy_in_sight" },
{ 0x4598, "context_sensative_dialog_guy_in_sight_check" },
{ 0x4599, "context_sensative_dialog_guy_pain" },
{ 0x459A, "context_sensative_dialog_kill" },
{ 0x459B, "context_sensative_dialog_kill_thread" },
{ 0x459C, "context_sensative_dialog_locations" },
{ 0x459D, "context_sensative_dialog_locations_add_notify_event" },
{ 0x459E, "context_sensative_dialog_locations_thread" },
{ 0x459F, "context_sensative_dialog_play_random_group_sound" },
{ 0x45A0, "context_sensative_dialog_secondary_explosion_vehicle" },
{ 0x45A1, "context_sensative_dialog_timedout" },
{ 0x45A2, "context_sensative_dialog_timeouts" },
{ 0x45A3, "context_sensative_dialog_vehicledeath" },
{ 0x45A4, "context_sensative_dialog_vehiclespawn" },
{ 0x45D6, "controlsfrozen" },
{ 0x45EA, "convert_alias_string_for_players" },
{ 0x45EC, "convert_capsule_data" },
{ 0x45F4, "convert_selection_to_exploder" },
{ 0x45F5, "convert_surface_flag" },
{ 0x45F6, "convert_to_float_array" },
{ 0x4613, "cooldown" },
{ 0x461B, "cooldownratemod" },
{ 0x461D, "cooldowntime" }, // AUTOADDED
{ 0x4621, "cooldownwaittime" }, // AUTOADDED
{ 0x4622, "cooling_down" },
{ 0x4624, "coop_gameshouldend" },
{ 0x4626, "coop_getweaponclass" },
{ 0x4627, "coop_interaction_pregame" },
{ 0x4628, "coop_maydolaststand" },
{ 0x4629, "coop_mode_enable" },
{ 0x462A, "coop_mode_feature" },
{ 0x462B, "coop_mode_has" },
{ 0x462C, "coop_perk_callbacks" },
{ 0x462F, "coop_weapontable" },
{ 0x4632, "cop_spawn_percent" },
{ 0x4639, "copy_all_perks" },
{ 0x463A, "copy_all_powers" },
{ 0x463B, "copy_angles_of_selected_ents" },
{ 0x4640, "copy_crafting_struct" },
{ 0x4641, "copy_ents" },
{ 0x4642, "copy_from_playerdata" },
{ 0x4643, "copy_fullweaponlist" },
{ 0x4647, "copy_special_ammo_type" },
{ 0x4648, "copy_weapon_ammo_clip" },
{ 0x4649, "copy_weapon_ammo_clip_left" },
{ 0x464A, "copy_weapon_ammo_stock" },
{ 0x464B, "copy_weapon_current" },
{ 0x464C, "copy_weapon_level" },
{ 0x4666, "cornerline_height" },
{ 0x46A1, "cosine" },
{ 0x46A2, "cost" },
{ 0x46BB, "countplayers" }, // AUTOADDED
{ 0x46BE, "countteammates" },
{ 0x4717, "covercrouchleanpitch" },
{ 0x473C, "covernode" },
{ 0x474D, "coverstate" }, // AUTOADDED
{ 0x4771, "cp_rave_introscreen_text" },
{ 0x4772, "cp_rave_onplayerconnect" },
{ 0x4773, "cp_rave_pillage_init" },
{ 0x4774, "cp_rave_should_continue_progress_bar_think" },
{ 0x4775, "cp_zmb_escape_init" },
{ 0x4776, "cp_zmb_global_clientmatchdata_func" },
{ 0x4778, "cp_zmb_introscreen_text" },
{ 0x4779, "cp_zmb_mutilation_mask_func" },
{ 0x477A, "cp_zmb_near_equipment_func" },
{ 0x477B, "cp_zmb_number_of_quest_pieces" },
{ 0x477C, "cp_zmb_onplayerconnect" },
{ 0x477D, "cp_zmb_pillage_init" },
{ 0x477E, "cp_zmb_respawn_loc_func" },
{ 0x4780, "cp_zmb_should_allow_far_search_dist_func" },
{ 0x4781, "cp_zmb_should_continue_progress_bar_think" },
{ 0x4782, "cp_zmb_spawn_fx_func" },
{ 0x4783, "cp_zmb_zombie_init" },
{ 0x4784, "cpm" }, // AUTOADDED
{ 0x47A5, "craft_souvenir" },
{ 0x47A7, "craftable_items_list" },
{ 0x47AE, "crafted_boombox_settings" },
{ 0x47B2, "crafted_souvenir" },
{ 0x47B8, "crafting_fx_spot" },
{ 0x47BA, "crafting_icon" },
{ 0x47BD, "crafting_item_debug_drop" },
{ 0x47BE, "crafting_item_drop_func" },
{ 0x47C0, "crafting_item_max_drop_time" },
{ 0x47C1, "crafting_item_min_drop_time" },
{ 0x47C2, "crafting_item_models" },
{ 0x47C3, "crafting_item_ordered_list" },
{ 0x47C4, "crafting_item_pickup" },
{ 0x47C6, "crafting_item_timeout" },
{ 0x47C9, "crafting_model" },
{ 0x47CE, "crafting_station_power" },
{ 0x47CF, "crafting_table" },
{ 0x47ED, "cranked" },
{ 0x47EE, "cranked_end_time" },
{ 0x47EF, "crankedbombtimer" }, // AUTOADDED
{ 0x4824, "crashed" },
{ 0x482C, "crashplane" },
{ 0x482F, "crate_calculate_on_path_grid" },
{ 0x4830, "crate_can_use" }, // AUTOADDED
{ 0x4831, "crate_can_use_always" },
{ 0x4832, "crate_can_use_smartglass" },
{ 0x4837, "crate_get_bot_target" },
{ 0x4838, "crate_get_bot_target_check_distance" }, // AUTOADDED
{ 0x4839, "crate_get_nearest_valid_nodes" }, // AUTOADDED
{ 0x483A, "crate_has_landed" }, // AUTOADDED
{ 0x483B, "crate_in_range" }, // AUTOADDED
{ 0x483C, "crate_is_on_path_grid" }, // AUTOADDED
{ 0x483D, "crate_landed_and_on_path_grid" }, // AUTOADDED
{ 0x483E, "crate_low_ammo_check" },
{ 0x483F, "crate_monitor_position" }, // AUTOADDED
{ 0x4841, "crate_picked_up" }, // AUTOADDED
{ 0x484B, "crate_should_claim" },
{ 0x484D, "crate_wait_use" },
{ 0x484E, "crateallcapturethink" },
{ 0x4850, "cratealluselogic" },
{ 0x4853, "crateheadicon" },
{ 0x4854, "cratekill" }, // AUTOADDED
{ 0x4855, "cratemaxval" }, // AUTOADDED
{ 0x4856, "cratemodelenemyteamsupdater" }, // AUTOADDED
{ 0x4857, "cratemodelplayerupdater" }, // AUTOADDED
{ 0x4858, "cratemodelteamupdater" }, // AUTOADDED
{ 0x4859, "cratenonownerusetime" },
{ 0x485A, "crateothercapturethink" }, // AUTOADDED
{ 0x485B, "crateownercapturethink" }, // AUTOADDED
{ 0x485C, "crateownerusetime" },
{ 0x485D, "cratesetupforuse" },
{ 0x485E, "crateteammodelupdater" }, // AUTOADDED
{ 0x485F, "cratetype" },
{ 0x4860, "cratetypes" },
{ 0x4861, "crateuseents" },
{ 0x4862, "crateusejuggernautupdater" },
{ 0x4863, "crateusepostjuggernautupdater" },
{ 0x4864, "crateuseteamupdater" },
{ 0x4865, "crateuseteamupdater_multiteams" },
{ 0x4866, "cratewatcher" },
{ 0x4879, "crawlmelee" }, // AUTOADDED
{ 0x4882, "crawlmeleegrab" },
{ 0x4899, "create_alien_fuse" },
{ 0x489A, "create_all_contents" },
{ 0x48A4, "create_attachment_variant_list" },
{ 0x48A7, "create_attract_positions" },
{ 0x48B1, "create_character_contents" },
{ 0x48BC, "create_contents" },
{ 0x48C2, "create_crafting_pickup_interaction" },
{ 0x48CC, "create_default_contents" },
{ 0x48DB, "create_essence_interaction" },
{ 0x48DD, "create_explosion_sphere" },
{ 0x48DE, "create_explosive_shield" },
{ 0x48E6, "create_fire_patch" },
{ 0x48E7, "create_fire_patch_3rd" },
{ 0x48E8, "create_fire_trail" },
{ 0x48E9, "create_fire_wave" },
{ 0x48ED, "create_flags_and_return_tokens" },
{ 0x48F1, "create_fx_menu" },
{ 0x48F5, "create_glass_contents" },
{ 0x4907, "create_interval_sound" },
{ 0x4909, "create_item_contents" },
{ 0x4914, "create_lock" },
{ 0x4916, "create_looper" },
{ 0x4917, "create_loopsound" },
{ 0x4918, "create_loot_model" },
{ 0x4919, "create_lua_progress_bar" },
{ 0x4939, "create_player_crafting_item_icon" },
{ 0x493E, "create_playerclip_contents" },
{ 0x4950, "create_shotclip_contents" },
{ 0x4956, "create_solid_ai_contents" },
{ 0x496F, "create_triggerfx" },
{ 0x4972, "create_vehicle_contents" },
{ 0x4978, "create_vo_data" },
{ 0x497D, "create_world_contents" },
{ 0x497F, "create_zap_ring" },
{ 0x4980, "create_zombie_base_to_unique_map" },
{ 0x4982, "createairdropcrate" },
{ 0x4985, "createballbase" },
{ 0x4986, "createballdrone" },
{ 0x4987, "createbar" }, // AUTOADDED
{ 0x4988, "createbombsquadmodel" },
{ 0x4989, "createboomboxforplayer" },
{ 0x498B, "createboxforplayer" }, // AUTOADDED
{ 0x498F, "createcalloutareaidmap" },
{ 0x4990, "createcaptureobjective" }, // AUTOADDED
{ 0x4991, "createcapzone" }, // AUTOADDED
{ 0x4992, "createcarriedobject" }, // AUTOADDED
{ 0x4993, "createcarryobject" },
{ 0x499E, "createcodcastermatchdataforplayer" }, // AUTOADDED
{ 0x49A7, "createdropzones" }, // AUTOADDED
{ 0x49A8, "createdynamicholduseobject" }, // AUTOADDED
{ 0x49A9, "createechoalias" }, // AUTOADDED
{ 0x49AA, "createeffect" },
{ 0x49AB, "createendzone" }, // AUTOADDED
{ 0x49AC, "createendzoneobjective" }, // AUTOADDED
{ 0x49AD, "createentityeventdata" }, // AUTOADDED
{ 0x49AE, "createexploder" },
{ 0x49AF, "createexploderex" },
{ 0x49B0, "createextractvfx" }, // AUTOADDED
{ 0x49B1, "createflagsandhud" }, // AUTOADDED
{ 0x49B2, "createfontstring" }, // AUTOADDED
{ 0x49B3, "createfullscreenimage" }, // AUTOADDED
{ 0x49B4, "createfx" },
{ 0x49B5, "createfx_adjust_array" },
{ 0x49B6, "createfx_autosave" },
{ 0x49B7, "createfx_centerprint" },
{ 0x49B8, "createfx_centerprint_thread" },
{ 0x49B9, "createfx_common" },
{ 0x49BA, "createfx_devraw_map" },
{ 0x49BB, "createfx_draw_enabled" },
{ 0x49BC, "createfx_enabled" },
{ 0x49BF, "createfx_filter_types" },
{ 0x49C0, "createfx_inputlocked" },
{ 0x49C1, "createfx_loopcounter" },
{ 0x49C2, "createfx_offset" },
{ 0x49C5, "createfx_print3d" },
{ 0x49C6, "createfx_selecting" },
{ 0x49C7, "createfxbyfxid" }, // AUTOADDED
{ 0x49C8, "createfxcursor" },
{ 0x49C9, "createfxent" },
{ 0x49CA, "createfxexploders" },
{ 0x49CB, "createfxlogic" },
{ 0x49CC, "createfxmasks" },
{ 0x49D0, "creategoal" }, // AUTOADDED
{ 0x49D6, "createhudelems" },
{ 0x49D7, "createhvt" }, // AUTOADDED
{ 0x49D8, "createhvtextractionsite" }, // AUTOADDED
{ 0x49D9, "createicon" }, // AUTOADDED
{ 0x49DA, "createicon_hudelem" }, // AUTOADDED
{ 0x49DB, "createims" }, // AUTOADDED
{ 0x49DC, "createimsforplayer" }, // AUTOADDED
{ 0x49DD, "createintervalsound" },
{ 0x49DF, "createkillcam" }, // AUTOADDED
{ 0x49E6, "createloopeffect" },
{ 0x49E7, "createloopsound" },
{ 0x49F0, "createmlgcamobject" }, // AUTOADDED
{ 0x49F2, "createmuggercrates" },
{ 0x49F4, "createnewexploder" },
{ 0x49F5, "createnewexploder_internal" },
{ 0x49F7, "createobjective" },
{ 0x49F8, "createobjective_engineer" },
{ 0x49FA, "createoneshoteffect" },
{ 0x49FC, "createplaceable" }, // AUTOADDED
{ 0x49FD, "createplaneasheli" },
{ 0x4A02, "createprimaryprogressbar" }, // AUTOADDED
{ 0x4A03, "createprimaryprogressbartext" }, // AUTOADDED
{ 0x4A04, "createpulluptrigger" }, // AUTOADDED
{ 0x4A05, "createquestinstance" }, // AUTOADDED
{ 0x4A06, "createreactiveent" },
{ 0x4A11, "createsentryforplayer" }, // AUTOADDED
{ 0x4A17, "createservertimer" }, // AUTOADDED
{ 0x4A1D, "createstructinmiddle" },
{ 0x4A1E, "createtags" },
{ 0x4A21, "createteamflag" },
{ 0x4A22, "createteamflagbase" },
{ 0x4A27, "createtimer" }, // AUTOADDED
{ 0x4A2D, "createuseent" },
{ 0x4A2E, "createuseobject" },
{ 0x4A31, "createzones" },
{ 0x4A71, "critical_factor" }, // AUTOADDED
{ 0x4A7D, "croc_chomp" },
{ 0x4A99, "crossproduct" },
{ 0x4A9C, "crouch_visible_from" },
{ 0x4AB0, "crouch" },
{ 0x4ADD, "crystal_check_func" },
{ 0x4ADE, "crystal_killed_notify" },
{ 0x4ADF, "crystal_listener" },
{ 0x4AE0, "crystal_model" },
{ 0x4AE1, "crystal_slot" },
{ 0x4AE2, "crystals" },
{ 0x4AE3, "crytsal_capture_killed_essense" },
{ 0x4B05, "ctf_loadouts" }, // AUTOADDED
{ 0x4B0C, "cur_defend_angle_override" }, // AUTOADDED
{ 0x4B0D, "cur_defend_node" }, // AUTOADDED
{ 0x4B0E, "cur_defend_point_override" }, // AUTOADDED
{ 0x4B0F, "cur_defend_stance" }, // AUTOADDED
{ 0x4B12, "cur_move_mode" },
{ 0x4B19, "curbombzone" }, // AUTOADDED
{ 0x4B1C, "curclass" }, // AUTOADDED
{ 0x4B26, "curmeleetarget" },
{ 0x4B29, "curobj" }, // AUTOADDED
{ 0x4B2A, "curobjectiveindex" }, // AUTOADDED
{ 0x4B2B, "curobjid" }, // AUTOADDED
{ 0x4B2C, "curorigin" },
{ 0x4B30, "curprogress" }, // AUTOADDED
{ 0x4B32, "curr_weap" },
{ 0x4B48, "current_bombzone" },
{ 0x4B4A, "current_challenge" },
{ 0x4B4B, "current_challenge_exist" },
{ 0x4B4C, "current_challenge_index" },
{ 0x4B4D, "current_challenge_is" },
{ 0x4B4E, "current_challenge_percent" },
{ 0x4B4F, "current_challenge_pre_challenge" },
{ 0x4B50, "current_challenge_progress_current" },
{ 0x4B51, "current_challenge_progress_max" },
{ 0x4B52, "current_challenge_scalar" },
{ 0x4B53, "current_challenge_target_player" },
{ 0x4B54, "current_challenge_timer" },
{ 0x4B55, "current_challenge_title" },
{ 0x4B5C, "current_crafted_inventory" },
{ 0x4B5E, "current_crafting_struct" },
{ 0x4B63, "current_death_grid_lines_front_y_pos" },
{ 0x4B67, "current_dj_song" },
{ 0x4B6E, "current_enemy_deaths" },
{ 0x4B6F, "current_entangler_target" },
{ 0x4B70, "current_entangler_target_monitor" },
{ 0x4B72, "current_exit_path" },
{ 0x4B75, "current_flag" },
{ 0x4B82, "current_icon" },
{ 0x4B88, "current_interaction_structs" },
{ 0x4B92, "current_mode_hud" },
{ 0x4B95, "current_num_spawned_enemies" },
{ 0x4BA0, "current_progress" },
{ 0x4BA5, "current_revive_icon_color" },
{ 0x4BA8, "current_room_index" },
{ 0x4BAB, "current_score" },
{ 0x4BAC, "current_score_earned" },
{ 0x4BB5, "current_spawn_group_index" },
{ 0x4BB8, "current_speaker" },
{ 0x4BBD, "current_start" }, // AUTOADDED
{ 0x4BBE, "current_state" },
{ 0x4BD3, "current_zm_show_challenge" },
{ 0x4BD7, "currentactivevehiclecount" },
{ 0x4BDB, "currentanimindex" },
{ 0x4BDC, "currentanimstate" },
{ 0x4BF5, "currentmeleeweapon" },
{ 0x4BFF, "currentround" },
{ 0x4C02, "currentselectedkillstreakslot" }, // AUTOADDED
{ 0x4C07, "currentstate" }, // AUTOADDED
{ 0x4C16, "currentweaponatspawn" },
{ 0x4C17, "current_max_health_regen_level" },
{ 0x4C2A, "cursuspsensetrack" }, // AUTOADDED
{ 0x4C46, "custom_death_challenge_func" },
{ 0x4C4D, "custom_dummy_crate_model" },
{ 0x4C4E, "custom_ending" },
{ 0x4C55, "custom_giveloadout" },
{ 0x4C66, "custom_onplayerconnect_func" },
{ 0x4C67, "custom_onspawnplayer_func" },
{ 0x4C6A, "custom_pillageinitfunc" },
{ 0x4C6C, "custom_player_hotjoin_func" },
{ 0x4C6E, "custom_playerdamage_challenge_func" },
{ 0x4C6F, "custom_radius_damage_for_exploders" },
{ 0x4C72, "custom_search_dist" },
{ 0x4C85, "customcratefunc" },
{ 0x4C87, "customdeath" },
{ 0x4C8E, "customjuiced" },
{ 0x4C8F, "custommoveanimset" }, // AUTOADDED
{ 0x4C90, "custommovetransition" }, // AUTOADDED
{ 0x4C91, "custommovetransitionfunc" }, // AUTOADDED
{ 0x4C92, "customnotetrackfx" },
{ 0x4CC4, "cycle_reward_scalar" },
{ 0x4CC6, "cycle_score_scalar" },
{ 0x4CD2, "cycletargets" },
{ 0x4CDC, "damage_alien_over_time" },
{ 0x4CE9, "damage_done" },
{ 0x4CEC, "damage_enemies_in_radius" },
{ 0x4D07, "damage_monitor" },
{ 0x4D0D, "damage_over_time" },
{ 0x4D0F, "damage_per_second" },
{ 0x4D26, "damage_to_clones" },
{ 0x4D2A, "damagearea" },
{ 0x4D2C, "damageattacker" },
{ 0x4D2D, "damageblockedtotal" },
{ 0x4D2E, "damagecallback" },
{ 0x4D2F, "damagecenter" },
{ 0x4D32, "damaged_by_players" },
{ 0x4D3C, "damaged_players" },
{ 0x4D3F, "damagedby" },
{ 0x4D43, "damagedplayer" },
{ 0x4D44, "damagedplayers" },
{ 0x4D46, "damagedsubpart" },
{ 0x4D47, "damageent" },
{ 0x4D48, "damageeventcount" }, // AUTOADDED
{ 0x4D4A, "damagefeedback" },
{ 0x4D4E, "damagefeedbacknosound" },
{ 0x4D53, "damageinfo" },
{ 0x4D54, "damageinfocolorindex" }, // AUTOADDED
{ 0x4D55, "damageinfovictim" }, // AUTOADDED
{ 0x4D56, "damageinvulnerability" }, // AUTOADDED
{ 0x4D57, "damagelistindex" }, // AUTOADDED
{ 0x4D58, "damagelistsize" },
{ 0x4D59, "damagelocationisany" },
{ 0x4D5C, "damageowner" },
{ 0x4D61, "damageplayerovertime" },
{ 0x4D67, "damageshellshockandrumble" }, // AUTOADDED
{ 0x4D68, "damageshieldcounter" }, // AUTOADDED
{ 0x4D69, "damageshieldexpiretime" },
{ 0x4D6E, "damagesubpartlocationisany" },
{ 0x4D72, "damagetracker" },
{ 0x4D7C, "dance_floor_volume" },
{ 0x4D7E, "dancers" },
{ 0x4D81, "dangerforwardpush" },
{ 0x4D82, "dangermaxradius" },
{ 0x4D83, "dangerminradius" },
{ 0x4D84, "dangerovalscale" },
{ 0x4DA4, "ddbombmodel" },
{ 0x4DA6, "deactivate" }, // AUTOADDED
{ 0x4DA8, "deactivate_area_kills" },
{ 0x4DAE, "deactivate_current_challenge" },
{ 0x4DAF, "deactivate_dismember_challenge" },
{ 0x4DB0, "deactivate_distance_shot" },
{ 0x4DB3, "deactivate_explosive_armor" },
{ 0x4DB9, "deactivate_infinite_ammo" },
{ 0x4DBA, "deactivate_infinite_grenade" },
{ 0x4DBB, "deactivate_instakill" },
{ 0x4DC2, "deactivate_kill_marked" },
{ 0x4DC3, "deactivate_kill_zombiewhodamagedme" },
{ 0x4DC4, "deactivate_left_power" },
{ 0x4DC9, "deactivate_mobile_shields" },
{ 0x4DCA, "deactivate_outline_enemies" },
{ 0x4DCC, "deactivate_protect_a_player" },
{ 0x4DCD, "deactivate_scaled_cash" },
{ 0x4DD2, "deactivate_ticket_counter_slot" },
{ 0x4DD3, "deactivate_ufo_beam" },
{ 0x4DD6, "deactivate_window_boards" },
{ 0x4DD8, "deactivate_zero_g_on_character" },
{ 0x4DD9, "deactivate_zerog_func" },
{ 0x4DDA, "deactivateadjacentvolumes" },
{ 0x4DDB, "deactivateagent" },
{ 0x4DDC, "deactivateagentdelayed" }, // AUTOADDED
{ 0x4DDD, "deactivateallmiddleplacementstructs" },
{ 0x4DDF, "deactivatemiddleplacementstructs" },
{ 0x4DE0, "deactivatepower" },
{ 0x4DE2, "deactivatezone" },
{ 0x4E13, "death_monitor" },
{ 0x4E24, "death_track" },
{ 0x4E3A, "deathdamagemax" },
{ 0x4E3B, "deathdamagemin" },
{ 0x4E3C, "deathdamageradius" },
{ 0x4E3D, "deathdelaycleanup" },
{ 0x4E4C, "deathmethod" },
{ 0x4E53, "deathoverridecallback" }, // AUTOADDED
{ 0x4E55, "deathposition" },
{ 0x4E72, "deathtime" },
{ 0x4E74, "deathvfx" },
{ 0x4E76, "deathweaponinfo" },
{ 0x4EA0, "debuffedbyplayers" },
{ 0x4EAF, "debug_beat_alien_grey_fight" },
{ 0x4EB0, "debug_beat_fetch_quest" },
{ 0x4EB2, "debug_beat_speaker_defense" },
{ 0x4EB3, "debug_beat_ufo_projectile_attack" },
{ 0x4EB4, "debug_beat_ufo_suicide_bomber" },
{ 0x4EB5, "debug_beat_wait_one_wave" },
{ 0x4EB6, "debug_beat_wait_some_wave" },
{ 0x4EB8, "debug_brute_hit_arcade_cabinet_with_laser" },
{ 0x4EBA, "debug_change_vo_prefix_watcher" },
{ 0x4EBC, "debug_circle" },
{ 0x4EBD, "debug_circle_drawlines" },
{ 0x4EC4, "debug_dischord_targets" },
{ 0x4EC5, "debug_dj_location" },
{ 0x4EDE, "debug_get_1_9_8_4_kills_on_dance_floor" },
{ 0x4EE3, "debug_get_tone_generator" },
{ 0x4EEE, "debug_line" }, // AUTOADDED
{ 0x4EF2, "debug_make_dischord_targets_invisible" },
{ 0x4EF3, "debug_make_dischord_targets_visible" },
{ 0x4EF5, "debug_match_ufo_tone" },
{ 0x4F01, "debug_place_tone_generator" },
{ 0x4F07, "debug_pop_all_balloons_in_beginning_area" },
{ 0x4F09, "debug_print3d" }, // AUTOADDED
{ 0x4F0A, "debug_print3d_simple" }, // AUTOADDED
{ 0x4F18, "debug_shoot_ice_monster_eye_during_coaster_ride" },
{ 0x4F19, "debug_show_dischord_targets" },
{ 0x4F1F, "debug_spell_the_word_ghost" },
{ 0x4F24, "debug_temp_sphere" }, // AUTOADDED
{ 0x4F2F, "debug_use_pap_portal" },
{ 0x4F30, "debug_wait_for_player_activation" },
{ 0x4F33, "debugafterlifearcadeenabled" },
{ 0x4F3A, "debugcircle" }, // AUTOADDED
{ 0x4F48, "debugline" }, // AUTOADDED
{ 0x4F51, "debugprint" }, // AUTOADDED
{ 0x4F5F, "decayrate" },
{ 0x4F60, "decaytime" }, // AUTOADDED
{ 0x4F62, "decidemovetype" },
{ 0x4FB8, "decrease_reserved_spawn_slots" },
{ 0x4FBC, "decrement_list_offset" },
{ 0x4FBD, "decrementalivecount" },
{ 0x4FBE, "decrementbulletsinclip" },
{ 0x4FBF, "decrementcolorusers" }, // AUTOADDED
{ 0x4FC0, "decremented" }, // AUTOADDED
{ 0x4FC1, "decrementfauxvehiclecount" }, // AUTOADDED
{ 0x4FDB, "default_ball_origin" }, // AUTOADDED
{ 0x4FE6, "default_death_challenge_func" },
{ 0x4FE7, "default_dj_interactions" },
{ 0x4FEF, "default_flag_origins" },
{ 0x4FF3, "default_gametype_think" },
{ 0x4FF4, "default_goal_origins" }, // AUTOADDED
{ 0x4FF9, "default_init" },
{ 0x5001, "default_meleechargedist" },
{ 0x5003, "default_on_damage" },
{ 0x5004, "default_on_damage_finished" },
{ 0x5006, "default_on_killed" },
{ 0x5008, "default_onhalftime" }, // AUTOADDED
{ 0x5009, "default_ononeleftevent" }, // AUTOADDED
{ 0x500A, "default_ontimelimit" },
{ 0x500D, "default_player_init_laststand" },
{ 0x500E, "default_playerdamage_challenge_func" },
{ 0x500F, "default_playerlaststand" },
{ 0x5010, "default_resetsuccess" },
{ 0x5015, "default_should_update" },
{ 0x5016, "default_spawn_func" },
{ 0x501B, "default_starting_melee_weapon" },
{ 0x501C, "default_starting_pistol" },
{ 0x5021, "default_success" },
{ 0x5022, "default_successfunc" },
{ 0x5026, "default_timer" },
{ 0x502B, "default_use_time" },
{ 0x502E, "default_weapon" },
{ 0x5032, "default_zombie_prematch_func" },
{ 0x5034, "defaultclass" },
{ 0x5037, "defaultemissive" },
{ 0x503A, "defaultexception" },
{ 0x503B, "defaultgetspawnpoint" },
{ 0x503C, "defaultgoalradius" },
{ 0x503F, "defaultlightfx" }, // AUTOADDED
{ 0x504A, "defaults" },
{ 0x504B, "defaultslot" },
{ 0x5052, "dropscavengerfordeath" },
{ 0x5060, "defend_entrance_index" },
{ 0x5062, "defend_flag" },
{ 0x5064, "defend_get_ally_bots_at_zone_for_stance" },
{ 0x5072, "defend_planted_bomb_update" },
{ 0x507A, "defend_valid_center" }, // AUTOADDED
{ 0x5081, "defend_zone" },
{ 0x5085, "defender_set_script_pathstyle" },
{ 0x5086, "defender_update" },
{ 0x5087, "defendloc" }, // AUTOADDED
{ 0x508B, "defends" },
{ 0x508C, "defense_cautious_approach" },
{ 0x508D, "defense_death_monitor" }, // AUTOADDED
{ 0x508E, "defense_force_next_node_goal" },
{ 0x508F, "defense_get_initial_entrances" },
{ 0x5090, "defense_investigate_specific_point" },
{ 0x5091, "defense_override_watch_nodes" },
{ 0x5092, "defense_score_flags" }, // AUTOADDED
{ 0x5093, "defense_sequence_duration" },
{ 0x5094, "defense_sequence_fail" },
{ 0x5096, "defense_sequence_success" },
{ 0x5097, "defense_watch_entrances_at_goal" },
{ 0x50A2, "definechestweapons" }, // AUTOADDED
{ 0x50A3, "definepassivevalue" }, // AUTOADDED
{ 0x50A7, "defuseendtime" },
{ 0x50A8, "defuser_bad_path_counter" },
{ 0x50A9, "defuser_wait_for_death" },
{ 0x50AA, "defuses" },
{ 0x50AB, "defusetime" },
{ 0x50AE, "delay" },
{ 0x50B4, "delay_end_ghost" },
{ 0x50B5, "delay_end_ghost_wave_on_fail" },
{ 0x50B6, "delay_end_ghost_when_won" },
{ 0x50BC, "delay_hint" },
{ 0x50C2, "delay_make_protect_head_icon_for" },
{ 0x50CC, "delay_set_lost_and_found_omnvars" },
{ 0x50CD, "delay_set_player_angles" },
{ 0x50D2, "delay_spawn_glow_vfx_on" },
{ 0x50D6, "delay_try_merge_clones" },
{ 0x50D7, "delay_update_next_hide_time" },
{ 0x50DC, "delaybetweenlockon" },
{ 0x50DD, "delaybetweenrockets" },
{ 0x50E1, "delaycall" },
{ 0x50E2, "delaycall_proc" },
{ 0x50E9, "delayed_death" },
{ 0x50F2, "delayed_move_mode" },
{ 0x50FA, "delayed_trigger_unset" },
{ 0x50FF, "delayedfofoverlay" },
{ 0x5106, "delayentdelete" }, // AUTOADDED
{ 0x510C, "delayjackalloopsfx" }, // AUTOADDED
{ 0x5113, "delayminetime" },
{ 0x5117, "delayplayer" }, // AUTOADDED
{ 0x5118, "delayplayerscorepopup" }, // AUTOADDED
{ 0x511B, "delayplayfxontagforclients" },
{ 0x511D, "delayplaysound" },
{ 0x5120, "delayshardfire" },
{ 0x5124, "delaystartragdoll" },
{ 0x5127, "delaythread" },
{ 0x512D, "delaythread_proc" },
{ 0x5137, "delete_all_doors" },
{ 0x513E, "delete_battery_at_end_node" },
{ 0x5147, "delete_door" },
{ 0x5152, "delete_exploder_proc" },
{ 0x5157, "delete_glasses_after_time" },
{ 0x5172, "delete_move_ent" },
{ 0x5179, "delete_on_death" },
{ 0x518B, "delete_pressed" },
{ 0x5191, "delete_selection" },
{ 0x5197, "delete_team_door" },
{ 0x51A4, "delete_zombie_gamemode_entities" },
{ 0x51A6, "deleteaftertime" }, // AUTOADDED
{ 0x51A7, "deleteallgrenades" },
{ 0x51AA, "deletecrateold" },
{ 0x51AE, "deletedestructiblekillcament" }, // AUTOADDED
{ 0x51AF, "deletedisparateplacedequipment" }, // AUTOADDED
{ 0x51B5, "deleteexplosive" }, // AUTOADDED
{ 0x51BC, "deleteobjpoint" },
{ 0x51BD, "deleteonac130playerremoved" },
{ 0x51BF, "deleteondeath" },
{ 0x51C2, "deleteonentnotify" }, // AUTOADDED
{ 0x51C3, "deleteonlingerstart" },
{ 0x51C5, "deleteonownerdeath" }, // AUTOADDED
{ 0x51C6, "deleteonparentdeath" }, // AUTOADDED
{ 0x51C7, "deleteonplayerdeathdisconnect" }, // AUTOADDED
{ 0x51C8, "deleteonspawn" }, // AUTOADDED
{ 0x51C9, "deleteotpreview" }, // AUTOADDED
{ 0x51CA, "deletepentsondisconnect" }, // AUTOADDED
{ 0x51CB, "deletepentsonrespawn" }, // AUTOADDED
{ 0x51CC, "deletepickupafterawhile" },
{ 0x51D7, "deleteti" },
{ 0x51D9, "deleteuseent" },
{ 0x51DA, "deleteuseobject" }, // AUTOADDED
{ 0x51DD, "delivertime" },
{ 0x51E3, "demeanoroverride" },
{ 0x51E9, "denied" },
{ 0x5212, "deployable_box" }, // AUTOADDED
{ 0x5213, "deployable_box_onuse_message" },
{ 0x5220, "deployablebox_vest_max" }, // AUTOADDED
{ 0x5221, "deployablebox_vest_rank" }, // AUTOADDED
{ 0x5225, "deployableexclusion" }, // AUTOADDED
{ 0x522D, "deployed_scu" },
{ 0x5230, "deployedsfx" },
{ 0x5231, "deployflares" }, // AUTOADDED
{ 0x5264, "deselect_all_ents" },
{ 0x5265, "deselect_entity" },
{ 0x5266, "designated_player" },
{ 0x526F, "desired_accel" }, // AUTOADDED
{ 0x5273, "desired_dance_angles" },
{ 0x5274, "desired_enemy_deaths_this_wave" },
{ 0x5275, "desired_speed" }, // AUTOADDED
{ 0x5276, "desired_state" },
{ 0x5277, "desiredenemydistmax" },
{ 0x5278, "desiredenemydistmin" },
{ 0x527A, "desiredhelmetlocation" },
{ 0x5293, "destination" },
{ 0x52BB, "destroy_ufo_vo" },
{ 0x52CB, "destroyairdroponcollision" },
{ 0x52CC, "destroyalltonestructs" },
{ 0x52CF, "destroydroneoncollision" },
{ 0x52D9, "destroyedobject" },
{ 0x52DC, "destroyelem" }, // AUTOADDED
{ 0x5318, "destroyexplosiveoncollision" }, // AUTOADDED
{ 0x531B, "destroyfrozenzombies" },
{ 0x531E, "destroyheadiconsondeath" },
{ 0x531F, "destroyiconsondeath" },
{ 0x5320, "destroyonownerdisconnect" },
{ 0x5334, "destructable_destruct" }, // AUTOADDED
{ 0x5335, "destructable_think" }, // AUTOADDED
{ 0x5336, "destructible" }, // AUTOADDED
{ 0x5383, "destructions" },
{ 0x5391, "detachflag" }, // AUTOADDED
{ 0x5393, "detachifattached" }, // AUTOADDED
{ 0x5395, "detachobjectifcarried" }, // AUTOADDED
{ 0x5397, "detachusemodels" }, // AUTOADDED
{ 0x53B4, "detectiongraceperiod" },
{ 0x53B5, "detectionheight" },
{ 0x53B6, "detectionradius" },
{ 0x53BB, "determine_game_fail" },
{ 0x53D1, "detonateball" },
{ 0x53DC, "dev_damage_show_damage_numbers" },
{ 0x53DD, "dev_flag_find_ground" }, // AUTOADDED
{ 0x53DE, "dev_forcelivelobbystart" }, // AUTOADDED
{ 0x53DF, "dev_spawning_bots" }, // AUTOADDED
{ 0x53E0, "devaliengiveplayersmoney" }, // AUTOADDED
{ 0x53E1, "devball" }, // AUTOADDED
{ 0x53E3, "devfindhost" }, // AUTOADDED
{ 0x53EA, "devlistinventory" }, // AUTOADDED
{ 0x53EF, "devprintweaponlist" }, // AUTOADDED
{ 0x540D, "dialogue_arr" },
{ 0x5472, "dialogue_playing_queue" },
{ 0x549B, "dialogue_vo_handler" },
{ 0x54AA, "dialogueprefix" },
{ 0x54AD, "dichordtraptrigger" },
{ 0x54B3, "diddamagewithlethalequipment" },
{ 0x54B5, "diddamagewithtacticalequipment" },
{ 0x54BB, "didhalfscorevoboost" },
{ 0x54BD, "didnonmeleedamage" },
{ 0x54C5, "didstatusnotify" }, // AUTOADDED
{ 0x54CB, "died_poorly" },
{ 0x54CC, "diehardmode" },
{ 0x54CF, "difficulty" },
{ 0x54E0, "direct_existing_zombies_to_attack_speaker" },
{ 0x54ED, "dirt_concrete_fx" },
{ 0x54EE, "dirt_fx" },
{ 0x54F0, "dirteffect" },
{ 0x5502, "disable_armor" },
{ 0x550B, "disable_broadcast" },
{ 0x5510, "disable_consumable" },
{ 0x5511, "disable_consumables" },
{ 0x552D, "disable_force_sprint" },
{ 0x5547, "disable_killcam" },
{ 0x554F, "disable_linked_interactions" },
{ 0x555D, "disable_on_world_progress_bar_for_other_players" },
{ 0x5560, "disable_outline" },
{ 0x5561, "disable_outline_for_player" },
{ 0x5562, "disable_outline_for_players" },
{ 0x5565, "disable_pistol_during_laststand" },
{ 0x557F, "disable_self_revive" },
{ 0x5586, "disable_speaker_loc_interaction" },
{ 0x5591, "disable_teleportation" },
{ 0x5596, "disable_trigger" },
{ 0x5597, "disable_trigger_helper" },
{ 0x55A5, "disable_weapon_progression" },
{ 0x55AA, "disable_zombie_exo_abilities" },
{ 0x55B0, "disablearrivals" },
{ 0x55B4, "disablebattlechatter" }, // AUTOADDED
{ 0x55B5, "disablebulletwhizbyreaction" }, // AUTOADDED
{ 0x55B6, "disablebutton" }, // AUTOADDED
{ 0x55B7, "disableclientspawntraces" }, // AUTOADDED
{ 0x55B8, "disablecollision" }, // AUTOADDED
{ 0x55B9, "disablecoverarrivalsonly" }, // AUTOADDED
{ 0x55BA, "disabled" },
{ 0x55BB, "disabled_interactions" },
{ 0x55BC, "disabled_use_for" }, // AUTOADDED
{ 0x55BE, "disabledads" },
{ 0x55C1, "disableautoreload" },
{ 0x55C3, "disabledcrouch" },
{ 0x55C6, "disableddoublejump" },
{ 0x55C8, "disabledfire" },
{ 0x55CD, "disabledinteractions" },
{ 0x55D0, "disabledjump" },
{ 0x55D1, "disabledlean" },
{ 0x55D4, "disabledmantle" },
{ 0x55D5, "disabledmelee" },
{ 0x55D6, "disabledoffhandprimaryweapons" },
{ 0x55D7, "disabledoffhandsecondaryweapons" },
{ 0x55D8, "disabledoffhandshieldweapons" },
{ 0x55D9, "disabledoffhandweapons" },
{ 0x55DC, "disabledprone" },
{ 0x55DD, "disabledreason" },
{ 0x55DE, "disabledreload" },
{ 0x55DF, "disabledsecondaryoffhandweapons" },
{ 0x55E0, "disabledslide" },
{ 0x55E1, "disabledsprint" },
{ 0x55E2, "disabledstances" },
{ 0x55E3, "disabledteleportation" },
{ 0x55E4, "disabledusability" },
{ 0x55E5, "disabledwallrun" },
{ 0x55E6, "disabledweapon" },
{ 0x55E9, "disabledweaponswitch" },
{ 0x55EB, "disableenemybaseoutline" }, // AUTOADDED
{ 0x55EE, "disableforfeit" },
{ 0x55F9, "disablelifepackboost" }, // AUTOADDED
{ 0x55FA, "disablelittlebirdrally" }, // AUTOADDED
{ 0x55FB, "disablelmgmount" }, // AUTOADDED
{ 0x55FC, "disablelongdeath" },
{ 0x5601, "disablemusic" }, // AUTOADDED
{ 0x5603, "disableobject" }, // AUTOADDED
{ 0x5606, "disableparkpas" },
{ 0x5607, "disablepickuppromptfortime" },
{ 0x560B, "disableportals" },
{ 0x5611, "disablespawning" },
{ 0x5612, "disablespawnwarnings" }, // AUTOADDED
{ 0x561C, "disableweaponlaser" }, // AUTOADDED
{ 0x561E, "disablewhenjuggernaut" },
{ 0x5620, "dischord_battery_move" },
{ 0x5621, "dischord_crafting_list" },
{ 0x5622, "dischord_death_logic" },
{ 0x5623, "dischord_glasses_listener" },
{ 0x5624, "dischord_spin" },
{ 0x5625, "dischord_spin_attack" },
{ 0x5627, "dischord_target_listener" },
{ 0x5628, "dischord_targets" },
{ 0x5629, "dischord_targets_hit" },
{ 0x562A, "dischord_visibility_listener" },
{ 0x562C, "disco_mini_ufo" },
{ 0x562D, "disco_trap_kills" },
{ 0x5635, "disconnect_paths" },
{ 0x5638, "disconnected" },
{ 0x563D, "discotrap_active" },
{ 0x563E, "discotrap_disabled" },
{ 0x563F, "discotrapuses" },
{ 0x5641, "discrete_waittill" },
{ 0x565B, "dismember_challenge_logic" },
{ 0x565C, "dismember_crawl" },
{ 0x565E, "dismemberchargeexplodedistsq" },
{ 0x5665, "dismemberedparts" },
{ 0x56B7, "display_fx_add_options" },
{ 0x56B8, "display_fx_info" },
{ 0x56B9, "display_ghost_arcade_message" },
{ 0x56C1, "display_objective_message" },
{ 0x56C3, "display_powerup_popup" },
{ 0x56C8, "display_skull_escaped_message" },
{ 0x56C9, "display_soul_power_earned" },
{ 0x56CF, "display_target_escaped_message" },
{ 0x56F4, "distance_2d_squared" },
{ 0x56F6, "distance_check_for_vo" },
{ 0x56FA, "distance_from_grey" },
{ 0x5700, "distance_shot_logic" },
{ 0x5708, "distancetotarg" },
{ 0x571E, "distsqtoballstart" }, // AUTOADDED
{ 0x571F, "distsqtokothzones" }, // AUTOADDED
{ 0x5720, "distsquaredcheck" }, // AUTOADDED
{ 0x5722, "distsumsquared" }, // AUTOADDED
{ 0x5723, "distsumsquaredcapped" }, // AUTOADDED
{ 0x5724, "disttohomebase" }, // AUTOADDED
{ 0x5726, "disttravelled" },
{ 0x572A, "dj" },
{ 0x572B, "dj_approach_mic" },
{ 0x572C, "dj_arcade_purchase_hint_func" },
{ 0x572D, "dj_broadcast_vo_handler" },
{ 0x572E, "dj_broadcasting" },
{ 0x572F, "dj_close_window" },
{ 0x5731, "dj_door_hintstring" },
{ 0x5732, "dj_endon_timeout" },
{ 0x5733, "dj_exit_mic" },
{ 0x5734, "dj_idle" },
{ 0x5735, "dj_interrupt_test" },
{ 0x5736, "dj_mic_loop" },
{ 0x5737, "dj_open_window" },
{ 0x5738, "dj_part_1_found" },
{ 0x5739, "dj_part_2_found" },
{ 0x573A, "dj_part_3_found" },
{ 0x573B, "dj_quest_dialogue_vo" },
{ 0x573C, "dj_quest_vo_init_timer" },
{ 0x573D, "dj_say_vo" },
{ 0x573E, "dj_speaker_mid_hint_func" },
{ 0x573F, "dj_state_manager" },
{ 0x5740, "dj_states" },
{ 0x5741, "dj_trying_to_broadcast" },
{ 0x5744, "djcenterstructs" },
{ 0x5745, "djgenreintro" },
{ 0x5747, "djintro" },
{ 0x5748, "djoutro" },
{ 0x5749, "djpartsareas" },
{ 0x5755, "dlc_get_non_agent_enemies" },
{ 0x5761, "dmg_trig" },
{ 0x5764, "dmgtrigger" },
{ 0x576A, "do_armageddon_earthquake" },
{ 0x577E, "do_earthquake" },
{ 0x5785, "do_fetch_quest" },
{ 0x5787, "do_first_speaker_defend" },
{ 0x5793, "do_immediate_ragdoll" },
{ 0x57B2, "do_radius_damage" },
{ 0x57B9, "do_screen_flash" },
{ 0x57BA, "do_second_speaker_defend" },
{ 0x57C3, "do_speaker_defense" },
{ 0x57CE, "do_third_speaker_defend" },
{ 0x57EB, "doblinkinglight" },
{ 0x57EF, "doc130flyby" },
{ 0x57F3, "docked" },
{ 0x5804, "dodgedefenseignorefunc" }, // AUTOADDED
{ 0x5812, "dodging" }, // AUTOADDED
{ 0x5828, "doeomcombat" }, // AUTOADDED
{ 0x5857, "doflyby" }, // AUTOADDED
{ 0x58BD, "dogtag" }, // AUTOADDED
{ 0x58BE, "dogtagallyonusecb" }, // AUTOADDED
{ 0x58BF, "dogtagenemyonusecb" }, // AUTOADDED
{ 0x58C0, "dogtags" },
{ 0x58C2, "dogtagsenabled" },
{ 0x58C3, "dogtagsicon" },
{ 0x58C4, "dogtagsplayer" }, // AUTOADDED
{ 0x58C5, "dogtagstext" }, // AUTOADDED
{ 0x58C8, "dohalftimevo" },
{ 0x58CD, "doing_duplicating_attack" },
{ 0x58D3, "doing_teleport_attack" },
{ 0x58D4, "doing_teleport_dash" },
{ 0x58D5, "doing_teleport_summon" },
{ 0x58D7, "doingbroshot" },
{ 0x58E1, "dointro" }, // AUTOADDED
{ 0x58ED, "balldrone_burstfirestop" },
{ 0x58FB, "domegac130flyby" },
{ 0x58FC, "domegaflyby" },
{ 0x5902, "domelee" },
{ 0x5904, "domeleedamage" },
{ 0x5905, "domeritcallback" },
{ 0x5912, "domflag_setneutral" },
{ 0x5913, "domflags" },
{ 0x5917, "dompoint_onuse" },
{ 0x5918, "dompoint_onusebegin" },
{ 0x5919, "dompoint_onuseend" },
{ 0x591A, "dompoint_onuseupdate" },
{ 0x591B, "dompoint_setcaptured" },
{ 0x591C, "dompoint_setupflagmodels" },
{ 0x591F, "dompointa" },
{ 0x5920, "dompointb" },
{ 0x5921, "dompointc" },
{ 0x5922, "dompointnumber" },
{ 0x592B, "donotetracks" },
{ 0x592C, "donotetracks_vsplayer" }, // AUTOADDED
{ 0x592D, "donotetracksforever" }, // AUTOADDED
{ 0x592E, "donotetracksforeverintercept" },
{ 0x592F, "donotetracksforeverproc" },
{ 0x5930, "donotetracksforpopup" }, // AUTOADDED
{ 0x5931, "donotetracksfortime" },
{ 0x5932, "donotetracksfortimeendnotify" },
{ 0x5933, "donotetracksfortimeintercept" },
{ 0x5934, "donotetracksfortimeout" },
{ 0x5935, "donotetracksfortimeproc" },
{ 0x5936, "donotetracksintercept" },
{ 0x5937, "donotetrackspostcallback" },
{ 0x5938, "donotetrackspostcallbackwithendon" }, // AUTOADDED
{ 0x5939, "donotetrackswithendon" }, // AUTOADDED
{ 0x593A, "donotetrackswithtimeout" },
{ 0x5940, "dont_auto_balance" }, // AUTOADDED
{ 0x5949, "dont_plant_until_time" },
{ 0x594C, "dont_scriptkill" },
{ 0x594E, "dont_unlink_ragdoll" },
{ 0x594F, "dont_use_charges" },
{ 0x595D, "dontevershoot" },
{ 0x5962, "dontgiveuponsuppressionyet" },
{ 0x5966, "dontmelee" },
{ 0x5968, "dontremoveperksuntildeath" },
{ 0x5969, "dontseekenemies" },
{ 0x596B, "dontshootstraight" },
{ 0x5976, "dooneflyby" },
{ 0x59E7, "door_setup" }, // AUTOADDED
{ 0x59EC, "door_state_change" }, // AUTOADDED
{ 0x59ED, "door_state_exit" }, // AUTOADDED
{ 0x59EE, "door_state_next" }, // AUTOADDED
{ 0x59EF, "door_state_on_interrupt" }, // AUTOADDED
{ 0x59F0, "door_state_update" }, // AUTOADDED
{ 0x59F5, "door_system_init" }, // AUTOADDED
{ 0x59F7, "door_think" }, // AUTOADDED
{ 0x5A2B, "doors" }, // AUTOADDED
{ 0x5A5A, "dopain" },
{ 0x5A5F, "doping" },
{ 0x5A62, "doprematch" },
{ 0x5A64, "doradiationdamage" }, // AUTOADDED
{ 0x5AA3, "doscreenflash" },
{ 0x5AB0, "dosound" },
{ 0x5AB7, "dostrike" },
{ 0x5ABA, "dot" },
{ 0x5ABE, "dotaunt" },
{ 0x5ABF, "dothreatcalloutresponse" },
{ 0x5ACF, "double_grenades_allowed" },
{ 0x5AD6, "double_money" },
{ 0x5ADD, "doublebubblesort" }, // AUTOADDED
{ 0x5ADE, "doubledip" }, // AUTOADDED
{ 0x5AE0, "doublejumpenergy" },
{ 0x5AE1, "doublejumpenergyrestorerate" },
{ 0x5AF9, "downgradeweapon" },
{ 0x5AFA, "downgradeweaponaftertimeout" },
{ 0x5AFC, "downsperweaponlog" },
{ 0x5AFD, "downswithweapon" },
{ 0x5B00, "dpad_consumable_selection_watch" },
{ 0x5B01, "dpad_drain_activations" },
{ 0x5B02, "dpad_drain_time" },
{ 0x5B03, "dpad_drain_triggerpassive" },
{ 0x5B04, "dpad_drain_wave" },
{ 0x5B0C, "dpadname" }, // AUTOADDED
{ 0x5B0F, "dpstime" },
{ 0x5B20, "draw_angles" },
{ 0x5B21, "draw_arrow" },
{ 0x5B22, "draw_arrow_time" },
{ 0x5B23, "draw_axis" },
{ 0x5B27, "draw_capsule" },
{ 0x5B28, "draw_character_capsule" },
{ 0x5B29, "draw_circle" }, // AUTOADDED
{ 0x5B2A, "draw_circle_lines_until_notify" }, // AUTOADDED
{ 0x5B2B, "draw_circle_until_notify" }, // AUTOADDED
{ 0x5B2C, "draw_closest_wall_points" }, // AUTOADDED
{ 0x5B2D, "draw_color_friendlies" }, // AUTOADDED
{ 0x5B2E, "draw_colornodes" }, // AUTOADDED
{ 0x5B2F, "draw_cool_circle" }, // AUTOADDED
{ 0x5B30, "draw_cool_circle_for_time" }, // AUTOADDED
{ 0x5B31, "draw_cool_circle_til_notify" }, // AUTOADDED
{ 0x5B32, "draw_cross" },
{ 0x5B3A, "draw_distance" },
{ 0x5B3B, "draw_dot_for_ent" }, // AUTOADDED
{ 0x5B3C, "draw_dot_for_guy" }, // AUTOADDED
{ 0x5B3D, "draw_effects_list" },
{ 0x5B41, "draw_ent_axis" },
{ 0x5B42, "draw_ent_axis_forever" },
{ 0x5B43, "draw_ent_bone_forever" },
{ 0x5B44, "draw_entity_bounds" },
{ 0x5B4A, "draw_line" }, // AUTOADDED
{ 0x5B4B, "draw_line_for_time" },
{ 0x5B55, "draw_origin" },
{ 0x5B58, "draw_player_capsule" },
{ 0x5B64, "draw_text" }, // AUTOADDED
{ 0x5B65, "draw_thermal" }, // AUTOADDED
{ 0x5B66, "draw_trace" },
{ 0x5B67, "draw_trace_hit" },
{ 0x5B68, "draw_trace_type" },
{ 0x5B6F, "drawaxis" },
{ 0x5B78, "drawfriend" }, // AUTOADDED
{ 0x5B79, "drawgraph" }, // AUTOADDED
{ 0x5B7A, "drawline" }, // AUTOADDED
{ 0x5B7F, "drawn" },
{ 0x5B80, "drawoffset" }, // AUTOADDED
{ 0x5B81, "draworgforever" }, // AUTOADDED
{ 0x5B82, "draworiginforever" }, // AUTOADDED
{ 0x5B83, "drawpath" }, // AUTOADDED
{ 0x5B84, "drawplayerviewforever" }, // AUTOADDED
{ 0x5B85, "drawsphere" },
{ 0x5BC1, "drillspeedmodifier" },
{ 0x5CB9, "dronemissilespawnarray" }, // AUTOADDED
{ 0x5CC4, "drones_disabled" },
{ 0x5CDF, "drop_alien_fuses" },
{ 0x5CE4, "drop_bots" },
{ 0x5CF6, "drop_loot" },
{ 0x5CF8, "drop_max_ammo" },
{ 0x5CF9, "drop_max_ammo_func" },
{ 0x5CFA, "drop_meteor_in_area" },
{ 0x5CFB, "drop_off_player" },
{ 0x5D0B, "drop_selection_to_ground" },
{ 0x5D12, "drop_soul_key" },
{ 0x5D14, "drop_to_ground" },
{ 0x5D24, "dropbombs" }, // AUTOADDED
{ 0x5D27, "dropcrateexistence" },
{ 0x5D2A, "dropimpulse" },
{ 0x5D2B, "dropintolaststand" },
{ 0x5D2D, "dropnuke" },
{ 0x5D39, "droppeddeathweapon" },
{ 0x5D44, "droppingtoground" }, // AUTOADDED
{ 0x5D52, "dropscavengerfordeath" },
{ 0x5D8F, "dropship_change_thrust_sfx" }, // AUTOADDED
{ 0x5EEB, "droptags" },
{ 0x5EEC, "dropthecrate" },
{ 0x5EED, "droptime" },
{ 0x5EEE, "droptimeout" },
{ 0x5EF1, "droptype" },
{ 0x5EF3, "dropweaponfordeath" },
{ 0x5F60, "dvarintvalue" },
{ 0x5F6A, "dvar" }, // AUTOADDED
{ 0x5F6B, "dvarfloatvalue" },
{ 0x5F6C, "dvarfuncs" }, // AUTOADDED
{ 0x5F6D, "dvarintvalue" },
{ 0x5F70, "dying_zapper_death" },
{ 0x5F7F, "dynamic_enemy_types" },
{ 0x5F93, "dynamicspawns" }, // AUTOADDED
{ 0x5FAC, "e" },
{ 0x5FB5, "earlyabortwatcher" },
{ 0x5FB6, "earlyendon" },
{ 0x5FB7, "earn_all_perks" },
{ 0x5FB9, "earned" },
{ 0x5FC6, "earthquake" },
{ 0x5FCC, "earthquake_time_extension" },
{ 0x5FDF, "effect" },
{ 0x5FE0, "effect_list_offset" },
{ 0x5FE1, "effect_list_offset_max" },
{ 0x5FE2, "effect_loopsound" },
{ 0x5FE6, "effect_soundalias" },
{ 0x5FF5, "egg_land_spot" },
{ 0x6000, "einflictor" },
{ 0x6009, "elapsed_time" },
{ 0x6015, "electric_trap_damage" },
{ 0x601A, "electrocute_zombie" },
{ 0x601E, "elements" },
{ 0x601F, "elemtype" }, // AUTOADDED
{ 0x6028, "elevator_accel" },
{ 0x6029, "elevator_aggressive_call" },
{ 0x6041, "elevator_call" },
{ 0x6042, "elevator_callbutton_link_h" },
{ 0x6043, "elevator_callbutton_link_v" },
{ 0x6044, "elevator_callbuttons" },
{ 0x6051, "elevator_debug" },
{ 0x6052, "elevator_decel" },
{ 0x6074, "elevator_floor_update" },
{ 0x6075, "elevator_fsm" },
{ 0x6076, "elevator_get_dvar" },
{ 0x6077, "elevator_get_dvar_int" },
{ 0x6087, "elevator_innerdoorspeed" },
{ 0x6088, "elevator_interrupt" },
{ 0x6089, "elevator_interrupted" },
{ 0x60A7, "elevator_motion_detection" },
{ 0x60A9, "elevator_move" },
{ 0x60AD, "elevator_music" },
{ 0x60B3, "elevator_outterdoorspeed" },
{ 0x60BF, "elevator_return" },
{ 0x60CC, "elevator_sound_think" },
{ 0x60CF, "elevator_speed" },
{ 0x60D5, "elevator_think" },
{ 0x60E0, "elevator_update_global_dvars" },
{ 0x60E4, "elevator_waittime" },
{ 0x60E5, "elevator_zoom" }, // AUTOADDED
{ 0x60E6, "elevatorblockpath" }, // AUTOADDED
{ 0x60E7, "elevatorclearpath" }, // AUTOADDED
{ 0x60E8, "elevatordoorsautoclose" }, // AUTOADDED
{ 0x60E9, "elevatormovetofloor" }, // AUTOADDED
{ 0x60EA, "elevators" },
{ 0x6109, "eligible_for_reward" },
{ 0x61A0, "empendtime" },
{ 0x61A3, "empgrenaded" }, // AUTOADDED
{ 0x61AA, "empmarked" }, // AUTOADDED
{ 0x61AD, "empplayer" },
{ 0x61AE, "empradarwatcher" }, // AUTOADDED
{ 0x61AF, "empremovecallback" }, // AUTOADDED
{ 0x61B0, "empremoved" }, // AUTOADDED
{ 0x61B1, "empscramblelevels" }, // AUTOADDED
{ 0x61B2, "empsitewatcher" }, // AUTOADDED
{ 0x61B3, "empspawnindex" }, // AUTOADDED
{ 0x61B4, "empstartcallback" }, // AUTOADDED
{ 0x61B5, "empstuntime" }, // AUTOADDED
{ 0x61B6, "emptriggerholdonuse" }, // AUTOADDED
{ 0x61B7, "empty_breathing_func" }, // AUTOADDED
{ 0x61B8, "empty_func" }, // AUTOADDED
{ 0x61B9, "empty_init_func" },
{ 0x61C0, "emptylocations" }, // AUTOADDED
{ 0x61C2, "empvfx" }, // AUTOADDED
{ 0x61CD, "enable_alien_scripted" },
{ 0x61F5, "enable_escape_exit_interaction" },
{ 0x6214, "enable_linked_interactions" },
{ 0x621E, "enable_on_world_progress_bar_for_other_players" },
{ 0x621F, "enable_outline" },
{ 0x6220, "enable_outline_for_player" },
{ 0x6221, "enable_outline_for_players" },
{ 0x6225, "enable_pistol_during_laststand" },
{ 0x6235, "enable_self_revive" },
{ 0x624A, "enable_trigger" },
{ 0x625A, "enable_windows_in_area" },
{ 0x6260, "enablebattlechatter" }, // AUTOADDED
{ 0x6261, "enabled" },
{ 0x6262, "enabledcollisionnotifies" },
{ 0x6263, "enabledequipdeployvfx" },
{ 0x6266, "enabledignoreme" },
{ 0x6267, "enableenemybaseoutline" },
{ 0x626A, "enableinfectedtracker" },
{ 0x6270, "enablemeleeforsentry" },
{ 0x6273, "enablemultibombui" },
{ 0x6275, "enableobject" },
{ 0x6276, "enableparkpas" },
{ 0x6277, "enableping" },
{ 0x6279, "enableportals" },
{ 0x6281, "enablevisibilitycullingforclient" }, // AUTOADDED
{ 0x6282, "enableweaponlaser" }, // AUTOADDED
{ 0x6296, "encounter_performance" },
{ 0x6299, "encounter_score_components" },
{ 0x62A3, "end" },
{ 0x62CE, "end_game_score" },
{ 0x62CF, "end_game_score_component_ref" },
{ 0x62D1, "end_game_string_index" },
{ 0x62D3, "end_ghost_sequence" },
{ 0x62D4, "end_ghost_wave" },
{ 0x62ED, "end_portal_name" },
{ 0x62EF, "end_positions" },
{ 0x6302, "end_thread" },
{ 0x6311, "endbroshot" },
{ 0x631B, "endflyby" },
{ 0x631E, "endgame" },
{ 0x6324, "endgame_write_clientmatchdata_for_player_func" },
{ 0x6325, "endgamedeath" },
{ 0x6326, "endgameencounterscorefunc" },
{ 0x6328, "endgameicon" }, // AUTOADDED
{ 0x632B, "endgametimer" }, // AUTOADDED
{ 0x6334, "endhover" },
{ 0x6336, "endinactiveinstructionondeath" }, // AUTOADDED
{ 0x635B, "endinstructiononnotification" }, // AUTOADDED
{ 0x6360, "endmatchonhostdisconnect" }, // AUTOADDED
{ 0x6366, "endnode" },
{ 0x6367, "endnode_pos" }, // AUTOADDED
{ 0x636D, "endon_different_state_changed" },
{ 0x636E, "endondeath" }, // AUTOADDED
{ 0x6371, "endonstring" }, // AUTOADDED
{ 0x637D, "endrespawnnotify" }, // AUTOADDED
{ 0x6386, "endselectiononaction" },
{ 0x638E, "endstrafesequence" },
{ 0x6396, "enduavonlatejoiner" },
{ 0x639D, "enemies" }, // AUTOADDED
{ 0x63AB, "enemieskilledintimewindow" },
{ 0x63E3, "enemy_camp_assassin" }, // AUTOADDED
{ 0x63E4, "enemy_camp_assassin_goal" }, // AUTOADDED
{ 0x63E5, "enemy_camp_spots" }, // AUTOADDED
{ 0x649A, "enemy_killed_thread" },
{ 0x64E8, "enemy_mortar_strike_exists" }, // AUTOADDED
{ 0x64EC, "enemy_odin_assault_exists" }, // AUTOADDED
{ 0x6512, "enemy_spawner_init" },
{ 0x6514, "enemy_spawning_run" },
{ 0x6527, "enemy_switchblade_exists" }, // AUTOADDED
{ 0x6541, "enemy_watcher" },
{ 0x654A, "enemyaveragedist" },
{ 0x654D, "enemybasekillstreakwatcher" },
{ 0x6550, "enemybrush" }, // AUTOADDED
{ 0x6556, "enemyendtimes" }, // AUTOADDED
{ 0x655F, "enemyids" }, // AUTOADDED
{ 0x6561, "enemyishiding" },
{ 0x6562, "enemyisingeneraldirection" }, // AUTOADDED
{ 0x6563, "enemykilled" }, // AUTOADDED
{ 0x6564, "enemymodel" }, // AUTOADDED
{ 0x656A, "enemyonuse" },
{ 0x6576, "enemyteamid" }, // AUTOADDED
{ 0x6578, "enemytrigger" },
{ 0x657A, "enemyzonebrushes" }, // AUTOADDED
{ 0x658D, "engagementstarttime" },
{ 0x658E, "engagementtimes" },
{ 0x65D0, "enginevfxtag" }, // AUTOADDED
{ 0x65D1, "enhanced_vision" }, // AUTOADDED
{ 0x65D2, "ensurelaststandparamsvalidity" },
{ 0x65D3, "ent" },
{ 0x65DA, "ent_draw_axis" },
{ 0x65EE, "ent_is_highlighted" },
{ 0x65F0, "ent_is_near_equipment" },
{ 0x65F2, "ent_is_selected" },
{ 0x65F4, "ent_near_crystal" },
{ 0x65FE, "entangleghost" },
{ 0x65FF, "entangler_hit_monitor" },
{ 0x6601, "entangler_recharge_monitor" },
{ 0x6603, "enter_afterlife_arcade" },
{ 0x6609, "enter_bleed_out" },
{ 0x660A, "enter_camera_zoomout" },
{ 0x6610, "enter_gamemodespecificaction" },
{ 0x6612, "enter_globaldefaultaction" },
{ 0x6613, "enter_globaldefaultaction_getcurrentweapon" },
{ 0x6616, "enter_laststand" },
{ 0x6619, "enter_rave_mode" },
{ 0x661A, "enter_revive_use_hold_think" },
{ 0x661D, "enter_spectate" },
{ 0x6622, "entered_playspace" },
{ 0x662A, "enterpronewrapper" },
{ 0x662C, "enterspectator" },
{ 0x6634, "entities_are_selected" },
{ 0x663E, "entity_highlight_disable" },
{ 0x663F, "entity_highlight_enable" },
{ 0x6640, "entity_number" },
{ 0x6644, "entityheadicon" },
{ 0x6645, "entityheadiconoffset" },
{ 0x6646, "entityheadiconreferencefunc" }, // AUTOADDED
{ 0x6647, "entityheadicons" }, // AUTOADDED
{ 0x6648, "entityheadiconteam" },
{ 0x6649, "entitynumber" }, // AUTOADDED
{ 0x664A, "entnum" },
{ 0x664D, "entrance_has_barriers" },
{ 0x664E, "entrance_indices" },
{ 0x664F, "entrance_is_fully_repaired" },
{ 0x6650, "entrance_origin_points" },
{ 0x6651, "entrance_points" },
{ 0x6652, "entrance_points_finished_caching" },
{ 0x6654, "entrance_to_enemy_zone" }, // AUTOADDED
{ 0x6655, "entrance_visible_from" }, // AUTOADDED
{ 0x6656, "entrance_watched_by_ally" },
{ 0x6657, "entrance_watched_by_player" },
{ 0x6666, "entsound" }, // AUTOADDED
{ 0x6669, "eog_player_tracking_init" },
{ 0x666A, "eog_player_update_stat" },
{ 0x666B, "eog_score_components" },
{ 0x666C, "eog_to_lb_playerdata_mapping" },
{ 0x666D, "eog_update_on_player_disconnect" },
{ 0x666E, "eol" },
{ 0x6670, "ephemeralweapon" },
{ 0x668B, "equal_to_goal" },
{ 0x6692, "equipextras" },
{ 0x6695, "equipment_enabled" }, // AUTOADDED
{ 0x66A6, "equipmentdeathvfx" },
{ 0x66A8, "equipmentdeletevfx" }, // AUTOADDED
{ 0x66A9, "equipmentempstunvfx" },
{ 0x66B5, "equipmentwatchuse" },
{ 0x66BC, "erasefinalkillcam" }, // AUTOADDED
{ 0x66BD, "error" },
{ 0x66BE, "error_print" }, // AUTOADDED
{ 0x66BF, "errormessagebitflipper" }, // AUTOADDED
{ 0x66C7, "escape_armageddon" },
{ 0x66C9, "escape_barriers" },
{ 0x66F2, "escape_game_init" },
{ 0x66F3, "escape_game_logic" },
{ 0x66F9, "escape_interaction_registration_func" },
{ 0x6705, "escape_objective_notify" },
{ 0x6712, "escape_rank_array" },
{ 0x6714, "escape_room_init" },
{ 0x6716, "escape_score_goal" },
{ 0x6720, "escape_spawn_score_func" },
{ 0x6728, "escape_table" },
{ 0x672A, "escape_time" },
{ 0x672B, "escape_timer" },
{ 0x672C, "escape_timer_func" },
{ 0x672E, "escape_timer_time" },
{ 0x6733, "escape_update_money_performance" },
{ 0x673B, "escape_weapon_progression" },
{ 0x673C, "escapefromentanglement" },
{ 0x6742, "essence_pickup_func" },
{ 0x6746, "estate" },
{ 0x6747, "estimatedtimetillscorelimit" }, // AUTOADDED
{ 0x67A8, "europa_2" },
{ 0x67C3, "europa_tunnel" },
{ 0x67E3, "evasivemaneuvers" }, // AUTOADDED
{ 0x6840, "event_funcs" },
{ 0x689D, "event_songs" },
{ 0x68B9, "eventstring" },
{ 0x68BC, "eventvalue" },
{ 0x68BE, "everyone_else_all_in_laststand" },
{ 0x68C0, "exceededmaxballdrones" },
{ 0x68C3, "exceededmaxlittlebirds" }, // AUTOADDED
{ 0x68C4, "exceededmaxremoteuavs" }, // AUTOADDED
{ 0x68C5, "exceededmaxvanguards" }, // AUTOADDED
{ 0x68C6, "exception" },
{ 0x68C9, "excludedattachments" },
{ 0x68D6, "executehover" },
{ 0x68D9, "executing" }, // AUTOADDED
{ 0x693B, "exist_in_array_MAYBE" },
{ 0x693C, "existinarray" }, // AUTOADDED
{ 0x693F, "exit_afterlife_arcade" },
{ 0x6943, "exit_camera_zoomout" },
{ 0x6949, "exit_defense_sequence" },
{ 0x6951, "exit_gamemodespecificaction" },
{ 0x6952, "exit_globaldefaultaction" },
{ 0x6956, "exit_laststand" },
{ 0x6958, "exit_menu" },
{ 0x695B, "exit_portal_fx" },
{ 0x695D, "exit_rave_mode" },
{ 0x6962, "exit_spectator_request_monitor" },
{ 0x6977, "exitingafterlifearcade" },
{ 0x6978, "exitphaseshift" },
{ 0x697B, "exitpronewrapper" },
{ 0x6987, "expandmaxs" }, // AUTOADDED
{ 0x6988, "expandmins" }, // AUTOADDED
{ 0x6989, "expandspawnpointbounds" }, // AUTOADDED
{ 0x6995, "explode_head_shards" },
{ 0x6996, "explode_head_with_fx" },
{ 0x699B, "explode_when_near_coaster" },
{ 0x699E, "exploded" },
{ 0x69A1, "explodeonexpire" },
{ 0x69A3, "exploder" },
{ 0x69A4, "exploder_after_load" },
{ 0x69A5, "exploder_before_load" },
{ 0x69A6, "exploder_damage" },
{ 0x69A7, "exploder_delay" },
{ 0x69A8, "exploder_earthquake" },
{ 0x69A9, "exploder_flag_wait" },
{ 0x69AA, "exploder_load" }, // AUTOADDED
{ 0x69AB, "exploder_model_is_chunk" },
{ 0x69AC, "exploder_model_is_damaged_model" },
{ 0x69AD, "exploder_model_starts_hidden" },
{ 0x69AF, "exploder_playsound" },
{ 0x69B0, "exploder_rumble" },
{ 0x69B4, "exploderfunction" },
{ 0x69B6, "exploderindex" },
{ 0x69B8, "exploders" },
{ 0x69B9, "explodevfx" }, // AUTOADDED
{ 0x69BA, "exploding" },
{ 0x69D8, "exploimpactmod" },
{ 0x69ED, "explosiondamagemax" },
{ 0x69EE, "explosiondamagemin" },
{ 0x69EF, "explosionradius" },
{ 0x69F7, "explosive" },
{ 0x69F9, "explosive_damage_scalar" },
{ 0x69FA, "explosive_touch" },
{ 0x69FB, "explosive_touch_time" },
{ 0x69FF, "explosivehandlemovers" },
{ 0x6A00, "explosiveinfo" },
{ 0x6A08, "explosivetrigger" },
{ 0x6A50, "extraperkmap" },
{ 0x6A53, "extratime" },
{ 0x6A57, "eye_damage_monitor" },
{ 0x6A73, "facemelter_battery" },
{ 0x6A74, "facemelter_battery_phase_listener" },
{ 0x6A75, "facemelter_crafting_list" },
{ 0x6A76, "facemelter_death_logic" },
{ 0x6A77, "facemelter_fire_pool" },
{ 0x6A78, "facemelter_fx_init" },
{ 0x6A7A, "facemelter_portal" },
{ 0x6A81, "facial" },
{ 0x6A87, "facialanimdone" },
{ 0x6A88, "facialanimidx" }, // AUTOADDED
{ 0x6A89, "facialidx" }, // AUTOADDED
{ 0x6A8A, "facialsounddone" },
{ 0x6A90, "factors" }, // AUTOADDED
{ 0x6AB2, "fadeaway" }, // AUTOADDED
{ 0x6AB9, "fadeoutblackout" }, // AUTOADDED
{ 0x6ABA, "fadeoutpinnedicon" },
{ 0x6ABC, "fadetoalpha" },
{ 0x6ABD, "fadetoalphatime" },
{ 0x6AC2, "fail_kill_nodamage" },
{ 0x6AD5, "failure" },
{ 0x6AE3, "fake_crystal_logic" },
{ 0x6AEC, "fake_ghost_explode" },
{ 0x6AEF, "fake_health" },
{ 0x6B57, "fakevote" }, // AUTOADDED
{ 0x6B6D, "fallbackspawnpoints" },
{ 0x6B6E, "fallen" },
{ 0x6B89, "fast_mover" },
{ 0x6B8E, "fast_travel_hint_logic" },
{ 0x6B8F, "fast_travel_init" },
{ 0x6B90, "fast_travel_spots" },
{ 0x6B97, "fastcrawlanimscale" },
{ 0x6B98, "fastcrawlmaxhealth" },
{ 0x6BA3, "fate_card_weapon" },
{ 0x6BA4, "fateandfortuneweaponscale" },
{ 0x6BA5, "faux_spawn_infected" },
{ 0x6BA6, "faux_spawn_stance" },
{ 0x6BA7, "fauxdeath" },
{ 0x6BAA, "fauxvehiclecount" }, // AUTOADDED
{ 0x6BAC, "favorclosespawnent" },
{ 0x6BC4, "feedbackruggedeqp" },
{ 0x6BD4, "feral_occludes" },
{ 0x6BD7, "fetch_quest_use_dj_door" },
{ 0x6BDB, "fieldgoals" },
{ 0x6BE0, "fighter_deathfx" }, // AUTOADDED
{ 0x6C01, "fil" },
{ 0x6C03, "fileprint_launcher" },
{ 0x6C04, "fileprint_launcher_end_file" },
{ 0x6C05, "fileprint_launcher_start_file" },
{ 0x6C06, "fileprint_map_entity_end" },
{ 0x6C07, "fileprint_map_entity_start" },
{ 0x6C08, "fileprint_map_header" },
{ 0x6C09, "fileprint_map_keypairprint" },
{ 0x6C0A, "fileprint_map_start" },
{ 0x6C0B, "fileprint_radiant_vec" },
{ 0x6C0C, "fileprint_start" },
{ 0x6C0D, "fileprintlauncher_linecount" },
{ 0x6C12, "filloffhandweapons" },
{ 0x6C18, "filterattachments" },
{ 0x6C19, "filterdamage" },
{ 0x6C5B, "finalizespawnpointchoice" },
{ 0x6C5C, "finalkill" }, // AUTOADDED
{ 0x6C5D, "finalkillcam_attacker" },
{ 0x6C5E, "finalkillcam_attackerdata" },
{ 0x6C5F, "finalkillcam_attackerperks" },
{ 0x6C60, "finalkillcam_attackernum" },
{ 0x6C61, "finalkillcam_attackers" },
{ 0x6C63, "finalkillcam_delay" },
{ 0x6C67, "finalkillcam_killcamentityindex" }, // AUTOADDED
{ 0x6C68, "finalkillcam_killcamentitystarttime" }, // AUTOADDED
{ 0x6C69, "finalkillcam_psoffsettime" }, // AUTOADDED
{ 0x6C6A, "finalkillcam_smeansofdeath" }, // AUTOADDED
{ 0x6C6B, "finalkillcam_sweapon" }, // AUTOADDED
{ 0x6C6C, "finalkillcam_timegameended" },
{ 0x6C6D, "finalkillcam_timerecorded" },
{ 0x6C6E, "finalkillcam_victim" }, // AUTOADDED
{ 0x6C6F, "finalkillcam_winner" }, // AUTOADDED
{ 0x6C72, "finalsurvivoruav" },
{ 0x6C77, "find_ambush_node" },
{ 0x6C7E, "find_camp_node" }, // AUTOADDED
{ 0x6C7F, "find_camp_node_worker" },
{ 0x6C80, "find_closest_bombzone_to_player" }, // AUTOADDED
{ 0x6C81, "find_closest_heli_node_2d" }, // AUTOADDED
{ 0x6C82, "find_closest_path_struct" }, // AUTOADDED
{ 0x6C83, "find_cluster_rocket_for_bot" }, // AUTOADDED
{ 0x6C84, "find_connected_turrets" }, // AUTOADDED
{ 0x6C85, "find_current_radio" }, // AUTOADDED
{ 0x6C86, "find_defend_node_bodyguard" }, // AUTOADDED
{ 0x6C87, "find_defend_node_capture" }, // AUTOADDED
{ 0x6C88, "find_defend_node_capture_zone" }, // AUTOADDED
{ 0x6C89, "find_defend_node_patrol" },
{ 0x6C8A, "find_defend_node_protect" }, // AUTOADDED
{ 0x6CA1, "find_squad_member_index" },
{ 0x6CA5, "find_ticking_bomb" },
{ 0x6CAE, "finalkillcam_victim" },
{ 0x6CAF, "findboxcenter" },
{ 0x6CB0, "findbuddypathnode" }, // AUTOADDED
{ 0x6CB7, "findgoodsuppressspot" },
{ 0x6CBD, "findnewowner" }, // AUTOADDED
{ 0x6CC5, "findspawnlocationnearplayer" }, // AUTOADDED
{ 0x6CC7, "findtargets" },
{ 0x6CC9, "findunobstructedfiringpoint" }, // AUTOADDED
{ 0x6CCA, "findunobstructedfiringpointaroundy" }, // AUTOADDED
{ 0x6CCB, "findunobstructedfiringpointaroundz" }, // AUTOADDED
{ 0x6CCE, "finish_creating_entity" },
{ 0x6CD2, "finishaastrike" },
{ 0x6CD3, "finishairstrikeusage" },
{ 0x6CD8, "finished" },
{ 0x6CE1, "finishplayerdamagewrapper" },
{ 0x6CE2, "finishreconagentloadout" },
{ 0x6CF5, "fire_effect" },
{ 0x6D14, "fire_notetrack_functions" },
{ 0x6D1C, "fire_pool_timeout" },
{ 0x6D21, "fire_rocket" },
{ 0x6D28, "fire_sale_func" },
{ 0x6D31, "fire_slow_projectile_from" },
{ 0x6D3C, "fire_straight" },
{ 0x6D58, "fireattarget" },
{ 0x6D70, "fireloopmod" },
{ 0x6D75, "firemissile" }, // AUTOADDED
{ 0x6D76, "firemissiles" },
{ 0x6D78, "firemortar" },
{ 0x6D79, "fireoncannontarget" }, // AUTOADDED
{ 0x6D7A, "fireontarget" }, // AUTOADDED
{ 0x6D7B, "fireonturrettarget" }, // AUTOADDED
{ 0x6D82, "fireshield" },
{ 0x6D88, "fireteam_commander" },
{ 0x6D89, "fireteam_connected" },
{ 0x6D8A, "fireteam_dom_point_obj" },
{ 0x6D8B, "fireteam_hunt_goalpos" },
{ 0x6D8C, "fireteam_hunt_leader" },
{ 0x6D8D, "fireteam_hunt_next_zone_search_time" }, // AUTOADDED
{ 0x6D8E, "fireteam_hunt_target_zone" },
{ 0x6D8F, "fireteam_menu" },
{ 0x6D90, "fireteam_personality_original" },
{ 0x6D91, "fireteam_tdm_find_hunt_zone" },
{ 0x6D92, "fireteam_tdm_hunt_end" },
{ 0x6D93, "fireteam_tdm_hunt_most_dangerous_zone" },
{ 0x6D94, "fireteam_tdm_set_hunt_leader" },
{ 0x6DC7, "first_frame" },
{ 0x6DDD, "first_time_in_arcade" },
{ 0x6DE3, "firstcapture" },
{ 0x6DE4, "firstcontact" }, // AUTOADDED
{ 0x6DE5, "firstcratedrop" },
{ 0x6DEC, "firstplacement" },
{ 0x6DED, "firstspawn" },
{ 0x6DEE, "firsttimebomb" }, // AUTOADDED
{ 0x6DEF, "firsttimedamaged" },
{ 0x6DFD, "fix_pap" },
{ 0x6DFF, "fixarchetype" }, // AUTOADDED
{ 0x6E00, "fixattachment" }, // AUTOADDED
{ 0x6E06, "fixinvaliditems" }, // AUTOADDED
{ 0x6E07, "fixkillstreaks" }, // AUTOADDED
{ 0x6E08, "fixloadout" }, // AUTOADDED
{ 0x6E09, "fixperk" }, // AUTOADDED
{ 0x6E0A, "fixpower" }, // AUTOADDED
{ 0x6E0B, "fixsuper" }, // AUTOADDED
{ 0x6E10, "fixweapon" }, // AUTOADDED
{ 0x6E25, "flag" },
{ 0x6E27, "flag_assert" },
{ 0x6E2A, "flag_clear" },
{ 0x6E30, "flag_create_team_goal" },
{ 0x6E31, "flag_default_origins" },
{ 0x6E32, "flag_distances" },
{ 0x6E34, "flag_exist" },
{ 0x6E36, "flag_find_ground" }, // AUTOADDED
{ 0x6E37, "flag_has_been_captured_before" }, // AUTOADDED
{ 0x6E38, "flag_has_never_been_captured" }, // AUTOADDED
{ 0x6E39, "flag_init" },
{ 0x6E3E, "flag_set" },
{ 0x6E3F, "flag_set_delayed" },
{ 0x6E44, "flag_setupvfx" },
{ 0x6E46, "flag_struct" },
{ 0x6E4C, "flag_wait" },
{ 0x6E4D, "flag_wait_all" },
{ 0x6E4E, "flag_wait_any" },
{ 0x6E4F, "flag_wait_any_return" },
{ 0x6E50, "flag_wait_badplace_brush" }, // AUTOADDED
{ 0x6E51, "flag_wait_delete" }, // AUTOADDED
{ 0x6E52, "flag_wait_either" },
{ 0x6E53, "flag_wait_either_return" },
{ 0x6E59, "flag_wait_or_timeout" },
{ 0x6E5A, "flag_waitopen" },
{ 0x6E5B, "flag_waitopen_any" }, // AUTOADDED
{ 0x6E5C, "flag_waitopen_or_timeout" },
{ 0x6E61, "flagbase" },
{ 0x6E63, "flagbaseglowfxid" }, // AUTOADDED
{ 0x6E64, "flagcapsuccess" },
{ 0x6E65, "flagcapturetime" },
{ 0x6E67, "flagmodel" },
{ 0x6E68, "flagneutralization" },
{ 0x6E69, "flagownersalive" }, // AUTOADDED
{ 0x6E6A, "flagradiusfxid" }, // AUTOADDED
{ 0x6E6E, "flags_lock" },
{ 0x6E70, "flagsetup" },
{ 0x6E82, "flame_damage_time" },
{ 0x6E84, "flame_vel" },
{ 0x6E9D, "flares_areavailable" },
{ 0x6E9E, "flares_cleanflareslivearray" },
{ 0x6EA7, "flares_getflarelive" },
{ 0x6EA8, "flares_getflarereserve" },
{ 0x6EA9, "flares_getnumleft" },
{ 0x6EAD, "flares_monitor" },
{ 0x6EB3, "flareslive" },
{ 0x6EB4, "flaresreservecount" },
{ 0x6EB9, "flash_inventory" },
{ 0x6EBE, "flash_power_icon" },
{ 0x6ECA, "flashendtime" },
{ 0x6ECB, "flashfiremain" }, // AUTOADDED
{ 0x6ECC, "flashfrac" }, // AUTOADDED
{ 0x6EDE, "flashthread" }, // AUTOADDED
{ 0x6EE0, "flashufolights" },
{ 0x6EE1, "flat_angle" },
{ 0x6EE2, "flat_angle_yaw" }, // AUTOADDED
{ 0x6EE3, "flat_origin" },
{ 0x6EE6, "flatten_vector" },
{ 0x6F2D, "fling_from_meteor" },
{ 0x6F32, "fling_zombie" },
{ 0x6F33, "fling_zombie_from_meteor" },
{ 0x6F65, "floor_override" },
{ 0x6F73, "flung" },
{ 0x6F74, "flushmidmatchawardqueue" }, // AUTOADDED
{ 0x6F75, "flushmidmatchawardqueuewhenable" },
{ 0x6F76, "flushscoreeventpopupqueue" }, // AUTOADDED
{ 0x6F77, "flushscoreeventpopupqueueonspawn" }, // AUTOADDED
{ 0x6F78, "flushscorepointspopupqueue" }, // AUTOADDED
{ 0x6F7E, "fly_around_main_street" },
{ 0x6F83, "fly_back_into_portal" },
{ 0x7009, "flying_to_portal" },
{ 0x702F, "flytogatormouth" },
{ 0x7047, "fmtraptrigger" },
{ 0x7088, "fn_get_closest_entrance" },
{ 0x7197, "fnbotdamagecallback" },
{ 0x7199, "fncanmovefrompointtopoint" },
{ 0x719B, "fncustomtargetingfunc" },
{ 0x71AF, "fnismeleevalid" },
{ 0x71C0, "fnmeleecharge_init" },
{ 0x71C1, "fnmeleecharge_terminate" },
{ 0x71C2, "fnmeleevsplayer_init" },
{ 0x71C3, "fnmeleevsplayer_terminate" },
{ 0x71D6, "fnzombieenterplayspace" },
{ 0x71D7, "fnzombieshouldenterplayspace" },
{ 0x722E, "follow_struct_trail" },
{ 0x7247, "followspeed" },
{ 0x724F, "fontheight" }, // AUTOADDED
{ 0x7250, "fontpulse" },
{ 0x7251, "fontpulseinit" }, // AUTOADDED
{ 0x7254, "foot" }, // AUTOADDED
{ 0x7257, "footsteps" }, // AUTOADDED
{ 0x725C, "force_all_players_to_role" },
{ 0x725D, "forceenable_fire_MAYBE" },
{ 0x725E, "forceenable_melee_MAYBE" },
{ 0x725F, "forceenable_weapon_MAYBE" },
{ 0x726C, "force_drop_loot_item" },
{ 0x727F, "force_new_goal" },
{ 0x728D, "force_song" },
{ 0x728E, "force_song_func" },
{ 0x7298, "force_usability_enabled" },
{ 0x72A1, "forcebleedout" },
{ 0x72AA, "forced_nuke" },
{ 0x72AB, "forced_songs" },
{ 0x72B5, "forcedisable" }, // AUTOADDED
{ 0x72B6, "forcedisconnectuntil" },
{ 0x72BE, "forceend" },
{ 0x72C5, "forcefastcrawldist" },
{ 0x72DD, "forceselfdestructtimer" }, // AUTOADDED
{ 0x72DF, "forcespawn" },
{ 0x72E0, "forcespawnangles" },
{ 0x72E1, "forcespawnnearteammates" },
{ 0x72E2, "forcespawnorigin" },
{ 0x72E4, "forcespectatorent" },
{ 0x72E7, "forcesuppression" },
{ 0x72F6, "forgefreeze_hint_display" },
{ 0x72FB, "forgetpassives" }, // AUTOADDED
{ 0x731A, "formation_1_move_pattern" },
{ 0x731B, "formation_2_move_pattern" },
{ 0x731C, "formation_3_move_pattern" },
{ 0x731D, "formation_4_move_pattern" },
{ 0x731E, "formation_5_move_pattern" },
{ 0x731F, "formation_6_move_pattern" },
{ 0x7320, "formation_7_move_pattern" },
{ 0x7321, "formation_8_move_pattern" },
{ 0x7322, "formation_9_move_pattern" },
{ 0x7323, "formation_10_move_pattern" },
{ 0x7324, "formation_11_move_pattern" },
{ 0x7325, "formation_12_move_pattern" },
{ 0x7326, "formation_13_move_pattern" },
{ 0x7327, "formation_14_move_pattern" },
{ 0x7328, "formation_15_move_pattern" },
{ 0x7329, "formation_id" },
{ 0x732A, "formation_movements" },
{ 0x732C, "fortune_visit_cost_1" },
{ 0x732D, "fortune_visit_cost_2" },
{ 0x732F, "fortune_visit_this_round" },
{ 0x7339, "found" },
{ 0x7349, "frac" }, // AUTOADDED
{ 0x735B, "frame_events" },
{ 0x735E, "frames_visible" }, // AUTOADDED
{ 0x7368, "free_ents_for_createfx" },
{ 0x736F, "freegameplayhudelems" }, // AUTOADDED
{ 0x7372, "freeze_active" },
{ 0x7374, "freeze_breath" },
{ 0x7376, "freeze_check_loop" },
{ 0x7380, "freeze_players" },
{ 0x7381, "freeze_struct" },
{ 0x7382, "freeze_volume" },
{ 0x7383, "freeze_zombie" },
{ 0x7385, "freezecontrolswrapper" },
{ 0x7386, "freezeplayerforroundend" },
{ 0x738E, "frequency" },
{ 0x73A6, "friendly_damage_check" },
{ 0x73DC, "friendly_nearby" },
{ 0x7401, "friendlybasetriggerwatcher" }, // AUTOADDED
{ 0x7402, "friendlybasewatcher" }, // AUTOADDED
{ 0x7403, "friendlybrush" }, // AUTOADDED
{ 0x7408, "friendlydamage" },
{ 0x7409, "friendlydeath_thread" }, // AUTOADDED
{ 0x740A, "friendlyfire" }, // AUTOADDED
{ 0x7415, "friendlyfirecheck" }, // AUTOADDED
{ 0x741D, "friendlymodel" }, // AUTOADDED
{ 0x7424, "friendlyteamid" }, // AUTOADDED
{ 0x7428, "friendlyzonebrushes" }, // AUTOADDED
{ 0x7443, "front_gate" },
{ 0x7449, "frontend_camera_move" },
{ 0x744A, "frontend_camera_setup" },
{ 0x744B, "frontend_camera_teleport" },
{ 0x744C, "frontend_camera_watcher" },
{ 0x7455, "frozentick" },
{ 0x7456, "frozenzombiefunc" },
{ 0x74B5, "full_gib" },
{ 0x74BE, "fully_charged" },
{ 0x74C2, "func" },
{ 0x74C3, "func_bot_get_closest_navigable_point" }, // AUTOADDED
{ 0x74C4, "func_cangive" }, // AUTOADDED
{ 0x74C5, "func_create_loopsound" },
{ 0x74C6, "func_destructible_crush_player" }, // AUTOADDED
{ 0x74C7, "func_get_level_fx" },
{ 0x74C8, "func_get_nodes_on_path" },
{ 0x74C9, "func_get_path_dist" },
{ 0x74CA, "func_getspawneraitype" }, // AUTOADDED
{ 0x74CB, "func_glass_handler" }, // AUTOADDED
{ 0x74CC, "func_loopfxthread" },
{ 0x74CD, "func_oneshotfxthread" },
{ 0x74CE, "func_player_speed" },
{ 0x74CF, "func_position_player" },
{ 0x74D0, "func_position_player_get" },
{ 0x74D2, "func_process_fx_rotater" },
{ 0x74D3, "func_updatefx" },
{ 0x74E2, "furthestspawndistsq" },
{ 0x74E4, "fuse_pick_up_monitor" },
{ 0x7541, "fwd_spot" },
{ 0x7542, "fx" },
{ 0x7543, "fx_add_crater_plume" }, // AUTOADDED
{ 0x7544, "fx_airlock_ambient" }, // AUTOADDED
{ 0x7545, "fx_airstrike_afterburner" }, // AUTOADDED
{ 0x7546, "fx_airstrike_contrail" }, // AUTOADDED
{ 0x7547, "fx_airstrike_wingtip_light_green" }, // AUTOADDED
{ 0x7548, "fx_airstrike_wingtip_light_red" }, // AUTOADDED
{ 0x757B, "fx_ent" },
{ 0x7593, "fx_highlightedent" },
{ 0x75A2, "fx_leave_tag" },
{ 0x75DC, "fx_rotating" },
{ 0x75F5, "fx_spot" },
{ 0x75FA, "fx_stun_damage" },
{ 0x760B, "fx_time" },
{ 0x7626, "fxent" },
{ 0x7627, "fxentdeletelist" }, // AUTOADDED
{ 0x7628, "fxexists" },
{ 0x762B, "fxhudelements" },
{ 0x762F, "fxid_contrail" },
{ 0x7630, "fxid_explode" },
{ 0x7632, "fxid_light1" },
{ 0x7633, "fxid_light2" },
{ 0x7634, "fxid_light3" },
{ 0x7635, "fxid_light4" },
{ 0x7638, "fxid_sparks" },
{ 0x763D, "fxname" },
{ 0x7641, "fxstart" },
{ 0x7642, "fxstop" },
{ 0x7643, "fxtag" }, // AUTOADDED
{ 0x7644, "fxtags" }, // AUTOADDED
{ 0x7645, "fxtime" }, // AUTOADDED
{ 0x7665, "game_mode_attachment_map" },
{ 0x7666, "game_mode_statstable" },
{ 0x7667, "game_won_sequence" },
{ 0x7668, "gamealreadyended" },
{ 0x7669, "gameended" }, // AUTOADDED
{ 0x766A, "gameendlistener" }, // AUTOADDED
{ 0x766B, "gameendtime" }, // AUTOADDED
{ 0x766C, "gameflag" },
{ 0x766D, "gameflagclear" }, // AUTOADDED
{ 0x766E, "gameflaginit" }, // AUTOADDED
{ 0x766F, "gameflagset" }, // AUTOADDED
{ 0x7670, "gameflagwait" },
{ 0x7671, "gamehasneutralcrateowner" },
{ 0x7672, "gamehasstarted" },
{ 0x7673, "gamemode_chosenclass" },
{ 0x7674, "gamemode_perk_callback_init_func" },
{ 0x7675, "gamemodefirstspawn" },
{ 0x7676, "gamemodejoinedatstart" },
{ 0x7677, "gamemodemaydropweapon" },
{ 0x7678, "gamemodemodifyplayerdamage" },
{ 0x767A, "gamemodeusesdeathmatchscoring" },
{ 0x767B, "gameobject" },
{ 0x767C, "gameobject_fauxspawn" },
{ 0x767E, "gameobjects_getcurrentprimaryweapon" }, // AUTOADDED
{ 0x7681, "gamescoreevent" }, // AUTOADDED
{ 0x7682, "gameshouldend" },
{ 0x7688, "gametimerbeeps" }, // AUTOADDED
{ 0x7689, "gametweaks" }, // AUTOADDED
{ 0x768A, "gametype" },
{ 0x768D, "gametype_level_init" },
{ 0x768E, "gametypestarted" },
{ 0x76CB, "gascankills" },
{ 0x76CC, "gascanowner" },
{ 0x76CD, "gascanownercount" },
{ 0x76F2, "gates" },
{ 0x76F6, "gathergroups" }, // AUTOADDED
{ 0x7706, "gator_light" },
{ 0x770A, "gator_mouth" },
{ 0x770B, "gator_mouth_activation_func" },
{ 0x770C, "gator_mouth_crush" },
{ 0x770D, "gator_mouth_door" },
{ 0x770E, "gator_mouth_hint_func" },
{ 0x770F, "gator_mouth_light" },
{ 0x7711, "gator_mouth_twitch" },
{ 0x7714, "gator_quest_debug" },
{ 0x7719, "gator_teeth_array" },
{ 0x771B, "gator_teeth_placed" },
{ 0x771C, "gator_tooth_broken" },
{ 0x771D, "gator_tooth_init" },
{ 0x771F, "gator_tooth_placement_init" },
{ 0x7720, "gator_tooth_use_trig" },
{ 0x7727, "gender" },
{ 0x772A, "generalspeedratescale" },
{ 0x772B, "generate_fx_log" },
{ 0x7730, "generatemaxweightedcratevalue" },
{ 0x773B, "generators" },
{ 0x7742, "generic_activate_challenge" },
{ 0x7744, "generic_challenge_timer" },
{ 0x7757, "generic_generator" },
{ 0x7763, "generic_index" },
{ 0x7779, "generic_update_challenge" },
{ 0x777B, "generic_voice_override" },
{ 0x777F, "generic_zombie_model_list" },
{ 0x7783, "genre" },
{ 0x778A, "gesture_activate" },
{ 0x77C2, "gestureweapon" },
{ 0x77C5, "get_1_9_8_4_kills_on_dance_floor" },
{ 0x77CF, "get_active_moving_target_based_on_priority" },
{ 0x77D0, "get_active_moving_target_in_group" },
{ 0x77D4, "get_adjusted_armor" }, // AUTOADDED
{ 0x77D5, "get_afterlife_arcade_start_point" },
{ 0x77D7, "get_agent_type" },
{ 0x77ED, "get_alias_2d_version" },
{ 0x77FB, "get_aliensession_stat" },
{ 0x77FD, "get_alive_enemies" },
{ 0x7800, "get_all_connected_nodes" }, // AUTOADDED
{ 0x7801, "get_all_enemies" }, // AUTOADDED
{ 0x7802, "get_all_force_color_friendlies" }, // AUTOADDED
{ 0x7803, "get_all_my_locations" }, // AUTOADDED
{ 0x7809, "get_allied_attackers_for_team" },
{ 0x780A, "get_allied_defenders_for_team" },
{ 0x780B, "get_ally_flags" },
{ 0x7828, "get_area" },
{ 0x7829, "get_area_for_power" },
{ 0x782A, "get_ark_attachment_type" },
{ 0x782F, "get_array_of_closest" },
{ 0x7830, "get_array_of_farthest" },
{ 0x7831, "get_array_of_perk_machines_by_type" },
{ 0x7833, "get_array_of_valid_players" },
{ 0x783C, "get_attachment_from_interaction" },
{ 0x7844, "get_attacker_as_player" },
{ 0x784C, "get_available_players" },
{ 0x7858, "get_base_weapon_name" },
{ 0x785B, "get_bb_string" },
{ 0x785D, "get_beam_down_ground_location" },
{ 0x785E, "get_best_area_attack_node" }, // AUTOADDED
{ 0x7879, "get_bots_defending_flag" },
{ 0x788C, "get_card_deck_size" },
{ 0x7890, "get_center_of_array" },
{ 0x78AD, "get_closest_attract_position" },
{ 0x78B4, "get_closest_entrance" },
{ 0x78B7, "get_closest_flag" },
{ 0x78BC, "get_closest_living_player" },
{ 0x78C1, "get_closest_player_near_interaction_point" },
{ 0x78CF, "get_hudoutline_item" },
{ 0x78D0, "get_hudoutline_for_player_health" },
{ 0x78DE, "get_consumable_loot_id" },
{ 0x78EA, "get_craftable_items_from_table" },
{ 0x78EC, "get_crafted_souvenir" },
{ 0x78F1, "get_crafting_models_from_table" },
{ 0x78F2, "get_createfx_array" },
{ 0x78F3, "get_createfx_types" },
{ 0x78F5, "get_culled_primary_list" },
{ 0x78F6, "get_cumulative_weights" },
{ 0x78F7, "get_curfloor" },
{ 0x78F8, "get_currency_penalty_amount" },
{ 0x7910, "get_current_weapon" },
{ 0x7919, "get_damage_direction" },
{ 0x7923, "get_dance_floor_tile_color" },
{ 0x7924, "get_data_for_all_perks" },
{ 0x7925, "get_data_to_update" },
{ 0x7948, "get_dj_into_idle" },
{ 0x794B, "get_door_connecting_areas" },
{ 0x7953, "get_doublejumpenergy" },
{ 0x7954, "get_doublejumpenergyrestorerate" },
{ 0x796B, "get_drop_pos" },
{ 0x7971, "get_dummy_crate_model" },
{ 0x797B, "get_enemy_crate_model" },
{ 0x797C, "get_enemy_flags" },
{ 0x7982, "get_enemy_pos" },
{ 0x7984, "get_enemy_team" },
{ 0x7985, "get_enemy_vanguard" }, // AUTOADDED
{ 0x798F, "get_entangler_track_time" },
{ 0x79A0, "get_escape_exit_interactions" },
{ 0x79A2, "get_event_xp_base_value" },
{ 0x79A3, "get_event_xp_multiplier_value" },
{ 0x79A7, "get_exploder_array_proc" },
{ 0x79A8, "get_explosive_damage_on_player" },
{ 0x79A9, "get_extended_path" }, // AUTOADDED
{ 0x79BA, "get_flag_capture_radius" },
{ 0x79BB, "get_flag_label" },
{ 0x79BC, "get_flag_protect_radius" },
{ 0x79C2, "get_floor" },
{ 0x79C9, "get_formation_id_for_wave" },
{ 0x79D1, "get_friendly_crate_model" },
{ 0x79DB, "get_fullrank_by_id" },
{ 0x79E0, "get_fx_points" },
{ 0x79E2, "get_gamemode_subdir" },
{ 0x79E6, "get_geyser" },
{ 0x79E8, "get_ghost_entangled_dist_from_player" },
{ 0x79F7, "get_group_move_direction" },
{ 0x79FC, "get_has_seen_tutorial" },
{ 0x7A0E, "get_hives_destroyed_stat" },
{ 0x7A14, "get_housing_children" },
{ 0x7A15, "get_housing_closedpos" },
{ 0x7A16, "get_housing_door_trigger" },
{ 0x7A17, "get_housing_inside_trigger" },
{ 0x7A18, "get_housing_leftdoor" },
{ 0x7A19, "get_housing_leftdoor_opened_pos" },
{ 0x7A1A, "get_housing_mainframe" },
{ 0x7A1B, "get_housing_models" },
{ 0x7A1C, "get_housing_musak_model" },
{ 0x7A1D, "get_housing_primarylight" },
{ 0x7A1E, "get_housing_rightdoor" },
{ 0x7A1F, "get_housing_rightdoor_opened_pos" },
{ 0x7A21, "get_human_player" },
{ 0x7A25, "get_icon_by_id" },
{ 0x7A27, "get_icon_index_based_on_model" },
{ 0x7A38, "get_index_for_powerup" },
{ 0x7A3B, "get_info_for_all_players" },
{ 0x7A3C, "get_info_for_player_powers" },
{ 0x7A3E, "get_ingamerank_by_id" },
{ 0x7A3F, "get_initfloor" },
{ 0x7A4F, "get_intro_message" },
{ 0x7A64, "get_kill_spot_in_area" },
{ 0x7A70, "get_last_selected_ent" },
{ 0x7A71, "get_last_stand_count" },
{ 0x7A72, "get_last_stand_pistol" },
{ 0x7A76, "get_lb_escape_rank" },
{ 0x7A7C, "get_least_used_index" },
{ 0x7A81, "get_level_by_id" },
{ 0x7A84, "get_level_xp_scale" },
{ 0x7A90, "get_linked_interactions" },
{ 0x7A9C, "get_links" },
{ 0x7AA1, "get_living_players_on_team" },
{ 0x7AB8, "get_loot_content" },
{ 0x7AB9, "get_loot_fx" },
{ 0x7ABA, "get_loot_index_based_on_weights" },
{ 0x7ABB, "get_lost_and_found_hintstring" },
{ 0x7AC0, "get_mapped_lb_ref_from_eog_ref" },
{ 0x7AC6, "get_max_meter" },
{ 0x7AC8, "get_max_num_ghosts_per_player" },
{ 0x7AC9, "get_max_num_of_attacks" },
{ 0x7ACD, "get_max_static_enemies" },
{ 0x7ACF, "get_max_weapon_rank_for_root_weapon" },
{ 0x7AD1, "get_maxxp_by_id" },
{ 0x7AD3, "get_melee_damage_dealt" },
{ 0x7AD8, "get_melee_weapon_fov" },
{ 0x7AD9, "get_melee_weapon_hit_distance" },
{ 0x7ADA, "get_melee_weapon_max_enemies" },
{ 0x7ADB, "get_melee_weapon_melee_damage" },
{ 0x7AE1, "get_min_num_of_attacks" },
{ 0x7AE2, "get_min_player_attack_by_frequency" },
{ 0x7AE7, "get_minxp_by_id" },
{ 0x7AF8, "get_move_rate" },
{ 0x7AFC, "get_moving_target_pattern" },
{ 0x7B0E, "get_nerf_scalar" },
{ 0x7B10, "get_new_zombie_to_attack_speaker" },
{ 0x7B13, "get_next_board_to_repair" },
{ 0x7B1B, "get_next_valid_struct" },
{ 0x7B1D, "get_nextxp_by_id" },
{ 0x7B22, "get_normal_revive_time" },
{ 0x7B24, "get_notetrack_movement" },
{ 0x7B25, "get_notetrack_time" },
{ 0x7B26, "get_noteworthy_array" },
{ 0x7B2D, "get_num_allies_capturing_flag" },
{ 0x7B2E, "get_num_allies_getting_tag" },
{ 0x7B2F, "get_num_ally_flags" },
{ 0x7B33, "get_num_nerf_selected" },
{ 0x7B35, "get_num_of_active_moving_target" },
{ 0x7B37, "get_num_of_dj_quest_parts_collected" },
{ 0x7B38, "get_num_of_ghosts_attacking_me" },
{ 0x7B39, "get_num_of_nodes_to_travel_before_spawn_zombie" },
{ 0x7B3F, "get_num_ufo_zombies" },
{ 0x7B40, "get_number_of_last_stand_clips" },
{ 0x7B4A, "get_omnvar_bit" },
{ 0x7B4C, "get_open_attack_spot" },
{ 0x7B4E, "get_option" },
{ 0x7B51, "get_other_flag" },
{ 0x7B55, "get_outer_closedpos" },
{ 0x7B56, "get_outer_doorset" },
{ 0x7B57, "get_outer_doorsets" },
{ 0x7B58, "get_outer_leftdoor" },
{ 0x7B59, "get_outer_leftdoor_openedpos" },
{ 0x7B5A, "get_outer_rightdoor" },
{ 0x7B5B, "get_outer_rightdoor_openedpos" },
{ 0x7B5E, "get_override_flag_targets" },
{ 0x7B5F, "get_override_lane_entry" }, // AUTOADDED
{ 0x7B60, "get_override_zone_targets" },
{ 0x7B64, "get_pain_breathing_sfx_alias" },
{ 0x7B6A, "get_part_model" },
{ 0x7B6B, "get_part_name" },
{ 0x7B78, "get_perk_machine_cost" },
{ 0x7B89, "get_player_character_num" },
{ 0x7B8B, "get_player_currency" },
{ 0x7B8F, "get_player_encounter_performance" },
{ 0x7B99, "get_player_interaction_trigger" },
{ 0x7BA6, "get_player_max_currency" },
{ 0x7BA9, "get_player_prestige" },
{ 0x7BAA, "get_player_rank" },
{ 0x7BAB, "get_player_ready_to_look_at_screen" }, // AUTOADDED
{ 0x7BAC, "get_player_rig" }, // AUTOADDED
{ 0x7BAD, "get_player_score" }, // AUTOADDED
{ 0x7BAE, "get_player_session_rankup" },
{ 0x7BAF, "get_player_session_tokens" },
{ 0x7BB0, "get_player_session_xp" },
{ 0x7BB8, "get_player_xp" },
{ 0x7BBE, "get_players_by_role" },
{ 0x7BBF, "get_players_defending_zone" },
{ 0x7BC3, "get_players_watching" },
{ 0x7BCA, "get_possible_attachments_by_weaponclass" },
{ 0x7BD0, "get_power_node_struct" },
{ 0x7BD9, "get_print3d_text" },
{ 0x7BE5, "get_random_character" },
{ 0x7BE6, "get_random_drop_pos" },
{ 0x7BEE, "get_random_outside_target" },
{ 0x7BF3, "get_random_weapon" },
{ 0x7BF5, "get_randomly_weighted_character" },
{ 0x7BF7, "get_rank_by_xp" },
{ 0x7BF8, "get_rank_xp_for_bot" },
{ 0x7BF9, "get_raw_or_devraw_subdir" },
{ 0x7BFA, "get_reactive_sound_ent" },
{ 0x7BFE, "get_recent_damage_amount_threshold" },
{ 0x7BFF, "get_recent_vo_time" },
{ 0x7C00, "get_ref_by_id" },
{ 0x7C0A, "get_respawn_loc_near_team_center" },
{ 0x7C0B, "get_respawn_loc_rated" },
{ 0x7C11, "get_revive_icon_initial_alpha" },
{ 0x7C12, "get_revive_result" },
{ 0x7C13, "get_reward_point_for_kill" },
{ 0x7C21, "get_round_end_time" },
{ 0x7C28, "get_scalar_from_table" },
{ 0x7C2B, "get_scaled_xp" },
{ 0x7C2E, "get_scored_goon_spawn_location" },
{ 0x7C49, "get_selected_move_vector" },
{ 0x7C4A, "get_selected_nerf" },
{ 0x7C4B, "get_selected_node_for_teleport" }, // AUTOADDED
{ 0x7C4C, "get_selected_option" },
{ 0x7C52, "get_selection_index_loop_around" },
{ 0x7C53, "get_self_revive_door_hint" },
{ 0x7C65, "get_shortrank_by_id" },
{ 0x7C6B, "get_single_value_struct" },
{ 0x7C6E, "get_skull_escaped_message_id" },
{ 0x7C70, "get_slow_projectile_targets" },
{ 0x7C73, "get_song_struct" },
{ 0x7C74, "get_soul_power_goal" },
{ 0x7C76, "get_sound_length" },
{ 0x7C82, "get_spawn_volumes_player_is_in" },
{ 0x7C83, "get_spawn_volumes_players_are_in" },
{ 0x7C8F, "get_speaker_icon_shader" },
{ 0x7C90, "get_speaker_loc" },
{ 0x7C92, "get_specific_flag" },
{ 0x7C93, "get_specific_zone" },
{ 0x7C94, "get_spectated_player" },
{ 0x7C95, "get_spectator_revive_time" },
{ 0x7C98, "get_splash_by_id" },
{ 0x7C9D, "get_spread_out_points" },
{ 0x7CA5, "get_starting_currency" },
{ 0x7CC7, "get_synch_direction_list" },
{ 0x7CC8, "get_table_data" }, // AUTOADDED
{ 0x7CC9, "get_table_data_array" }, // AUTOADDED
{ 0x7CCA, "get_table_data_array_internal" }, // AUTOADDED
{ 0x7CCB, "get_table_name" },
{ 0x7CCF, "get_target_array" },
{ 0x7CD1, "get_target_ent" },
{ 0x7CE5, "get_team_encounter_performance" },
{ 0x7CE6, "get_team_score_component_name" },
{ 0x7CF1, "get_template_script_MAYBE" },
{ 0x7D08, "get_token_reward_by_id" },
{ 0x7D09, "get_tone_generator" },
{ 0x7D0A, "get_tool_hudelem" },
{ 0x7D10, "get_total_spawned_enemies" },
{ 0x7D11, "get_toy_angle_offset" },
{ 0x7D12, "get_toy_pos_offset" },
{ 0x7D2B, "get_ufo_model" },
{ 0x7D2C, "get_ufo_turret_target" },
{ 0x7D2D, "get_ufo_zombie_spawn_locations" },
{ 0x7D32, "get_update_max_spawn_frequency" },
{ 0x7D4B, "get_visible_nodes_array" }, // AUTOADDED
{ 0x7D50, "get_wall_buy_hint_func" },
{ 0x7D58, "get_wave_move_time" },
{ 0x7D59, "get_wave_wait_time_between_group" },
{ 0x7D62, "get_weapon_level" },
{ 0x7D63, "get_weapon_level_func" },
{ 0x7D65, "get_weapon_max_rank_xp" },
{ 0x7D6B, "get_weapon_passive_xp_scale" },
{ 0x7D6E, "get_weapon_rank_info_max_xp" },
{ 0x7D72, "get_weapon_variant_id" },
{ 0x7D76, "get_weight_sum" },
{ 0x7D83, "get_xp_value" },
{ 0x7D88, "get_zombie_killed_weapon_xp_multiplier_type" },
{ 0x7D8D, "getaalauncherchildname" },
{ 0x7D8E, "getaalauncherhomingname" },
{ 0x7D8F, "getaalaunchername" },
{ 0x7D94, "getactiveagentsofspecies" }, // AUTOADDED
{ 0x7D95, "getactiveagentsoftype" }, // AUTOADDED
{ 0x7D97, "getactiveghostswithinrange" },
{ 0x7D9A, "getactiveplayerlist" }, // AUTOADDED
{ 0x7DA4, "getaimpitchtopoint3d" },
{ 0x7DA6, "getaimyawtopoint3d" },
{ 0x7DA7, "getaimyawtopoint" },
{ 0x7DA8, "getaimyawtoshootentorpos" }, // AUTOADDED
{ 0x7DA9, "getaiprimaryweapon" }, // AUTOADDED
{ 0x7DAA, "getairstrikedanger" }, // AUTOADDED
{ 0x7DAB, "getaisecondaryweapon" }, // AUTOADDED
{ 0x7DAC, "getaisidearmweapon" }, // AUTOADDED
{ 0x7DAD, "getaliastypefromsoundalias" },
{ 0x7DAF, "getaliveagents" }, // AUTOADDED
{ 0x7DB0, "getaliveagentsofteam" }, // AUTOADDED
{ 0x7DB1, "getaliveenemies" },
{ 0x7DCF, "getarkattachmentlist" },
{ 0x7DD0, "getarkqueststruct" },
{ 0x7DD2, "getarrayofdialoguealiases" },
{ 0x7DDA, "getassignedspawnpoint" },
{ 0x7DDB, "getassistbonusamount" },
{ 0x7DDC, "getattachmentlist" },
{ 0x7DDD, "getattachmentlistbasenames" },
{ 0x7DDF, "getattachmentlistuniquenames" },
{ 0x7DE0, "getattachmentloadoutstring" }, // AUTOADDED
{ 0x7DE1, "getattachmenttype" },
{ 0x7DE2, "getattachmenttypeslist" },
{ 0x7DE6, "getavailableattachments" },
{ 0x7DF2, "getballorigin" }, // AUTOADDED
{ 0x7DF3, "getballstarts" },
{ 0x7DF4, "getballtriggers" },
{ 0x7DF6, "getbaseperkname" }, // AUTOADDED
{ 0x7DF7, "getbaseweaponname" },
{ 0x7DF8, "getbattleslideoffensedamage" }, // AUTOADDED
{ 0x7DFF, "getbestplayer" },
{ 0x7E05, "getbesttarget" }, // AUTOADDED
{ 0x7E08, "getblackholecenter" },
{ 0x7E16, "getcameravecorang" }, // AUTOADDED
{ 0x7E17, "getcamotablecolumnindex" }, // AUTOADDED
{ 0x7E18, "getcannedresponse" }, // AUTOADDED
{ 0x7E1A, "getcapxpscale" }, // AUTOADDED
{ 0x7E1B, "getcashsoundaliasforplayer" }, // AUTOADDED
{ 0x7E1C, "getcenterfrac" }, // AUTOADDED
{ 0x7E1D, "getcenterpoint" }, // AUTOADDED
{ 0x7E25, "getcharactercardgesturelength" },
{ 0x7E2A, "getclasschoice" }, // AUTOADDED
{ 0x7E2B, "getclassindex" },
{ 0x7E2D, "getclosenoderadiusdist" }, // AUTOADDED
{ 0x7E2E, "getclosest" },
{ 0x7E31, "getclosestentrance" },
{ 0x7E39, "getcodcasterplayervalue" },
{ 0x7E3E, "getcorrectheight" }, // AUTOADDED
{ 0x7E3F, "getcover3dnodeoffset" },
{ 0x7E43, "getcratetypefordroptype" },
{ 0x7E4C, "getcurrentfraction" }, // AUTOADDED
{ 0x7E4D, "getcurrentmonitoredweaponswitchweapon" },
{ 0x7E4E, "getcurrentsuper" }, // AUTOADDED
{ 0x7E4F, "getcurrentsuperref" }, // AUTOADDED
{ 0x7E55, "getcustomization" }, // AUTOADDED
{ 0x7E58, "getdamageableents" },
{ 0x7E5B, "getdamagefromzombietype" },
{ 0x7E5C, "getdamagemodifiertotal" },
{ 0x7E5E, "getdamagetype" },
{ 0x7E63, "getdeathspawnpoint" },
{ 0x7E64, "getdebuffattackersbyweapon" },
{ 0x7E66, "getdefaultenemychestpos" },
{ 0x7E88, "getdropzonecratetype" },
{ 0x7E8B, "getearliestclaimplayer" },
{ 0x7E8C, "getempdamageents" }, // AUTOADDED
{ 0x7E8D, "getenemyeyepos" },
{ 0x7E9D, "getequipmenttype" },
{ 0x7EA0, "getescapespawnpoint" },
{ 0x7EA5, "getexplodedistance" }, // AUTOADDED
{ 0x7EA6, "getexploderdelaydefault" },
{ 0x7EAA, "getexplosiveusableoffset" },
{ 0x7EB3, "getfarnoderadiusdist" }, // AUTOADDED
{ 0x7EB7, "getfirstprimaryweapon" },
{ 0x7EB8, "getfirstzone" },
{ 0x7EB9, "getflagcount" }, // AUTOADDED
{ 0x7EBA, "getflagpos" }, // AUTOADDED
{ 0x7EBB, "getflagteam" },
{ 0x7EBC, "getflavorburstaliases" }, // AUTOADDED
{ 0x7EBD, "getflavorburstid" }, // AUTOADDED
{ 0x7EBE, "getflightpath" }, // AUTOADDED
{ 0x7EC0, "getflyheightoffset" },
{ 0x7EC5, "getfreeagent" }, // AUTOADDED
{ 0x7EC6, "getfreeagentcount" }, // AUTOADDED
{ 0x7ECB, "getfx" },
{ 0x7ECE, "getgametypenumlives" },
{ 0x7ED0, "getgesturedata" },
{ 0x7ED2, "getghostdetonateexplosionrange" },
{ 0x7ED4, "getghostimpactexplosionrange" },
{ 0x7ED5, "getghostnavmode" },
{ 0x7ED7, "getglobalfrontlineinfo" },
{ 0x7EDB, "getglobalweaponrankxpmultiplier" }, // AUTOADDED
{ 0x7EE7, "getgrenademodel" },
{ 0x7EF4, "gethealthcap" },
{ 0x7EF8, "getheavyarmor" }, // AUTOADDED
{ 0x7EF9, "gethelipilotmeshoffset" },
{ 0x7EFA, "gethelipilottraceoffset" },
{ 0x7EFF, "gethighestprogressedplayers" }, // AUTOADDED
{ 0x7F00, "gethighestscoringplayer" }, // AUTOADDED
{ 0x7F02, "gethitlocheight" }, // AUTOADDED
{ 0x7F03, "gethitmarkerpriority" }, // AUTOADDED
{ 0x7F07, "gethostplayer" }, // AUTOADDED
{ 0x7F18, "getindexfromhitloc" }, // AUTOADDED
{ 0x7F1B, "getintervalsounddelaymaxdefault" },
{ 0x7F1C, "getintervalsounddelaymindefault" },
{ 0x7F1D, "getintproperty" }, // AUTOADDED
{ 0x7F1E, "getinvultime" }, // AUTOADDED
{ 0x7F1F, "getitemdroporiginandangles" }, // AUTOADDED
{ 0x7F20, "getitemfromcache" }, // AUTOADDED
{ 0x7F21, "getitemslot" }, // AUTOADDED
{ 0x7F22, "getitemweaponname" }, // AUTOADDED
{ 0x7F24, "getjointeampermissions" },
{ 0x7F44, "getkillstreakindex" },
{ 0x7F49, "getkillstreakoverheadicon" },
{ 0x7F50, "getkillstreaksetupinfo" }, // AUTOADDED
{ 0x7F55, "getkillstreakweapon" },
{ 0x7F57, "getkothzonedeadzonedist" }, // AUTOADDED
{ 0x7F58, "getlabel" }, // AUTOADDED
{ 0x7F59, "getlabelid" }, // AUTOADDED
{ 0x7F5A, "getlaserangles" }, // AUTOADDED
{ 0x7F5B, "getlaserdirection" }, // AUTOADDED
{ 0x7F5C, "getlaserstartpoint" }, // AUTOADDED
{ 0x7F5D, "getlastclaimteam" }, // AUTOADDED
{ 0x7F5E, "getlastlivingplayer" },
{ 0x7F62, "getlastweapon" },
{ 0x7F65, "getlengthofconversation" },
{ 0x7F72, "getlifelinktarget" },
{ 0x7F73, "getlightarmorvalue" }, // AUTOADDED
{ 0x7F7A, "getlivingplayers" }, // AUTOADDED
{ 0x7F7C, "getloadoutstreaktypefromstreaktype" }, // AUTOADDED
{ 0x7F7E, "getlocation" },
{ 0x7F7F, "getloccalloutalias" },
{ 0x7F80, "getlookattarget" }, // AUTOADDED
{ 0x7F81, "getloopeffectdelaydefault" },
{ 0x7F82, "getlootinfoforweapon" },
{ 0x7F83, "getlosingplayers" }, // AUTOADDED
{ 0x7F85, "getlowermessage" },
{ 0x7F87, "getlowestavailableclientid" },
{ 0x7F8B, "getmapname" },
{ 0x7F8F, "getmatchbonusspm" }, // AUTOADDED
{ 0x7F90, "getmatchendtimeutc" }, // AUTOADDED
{ 0x7F91, "getmatchrulesdatawithteamandindex" }, // AUTOADDED
{ 0x7F92, "getmatchrulesspecialclass" },
{ 0x7F96, "getmaxattachments" }, // AUTOADDED
{ 0x7F97, "getmaxdamage" }, // AUTOADDED
{ 0x7F98, "getmaxdistancetolos" }, // AUTOADDED
{ 0x7F9E, "getmaxprimaryattachments" },
{ 0x7F9F, "getmaxsceneduration" }, // AUTOADDED
{ 0x7FA0, "getmaxsecondaryattachments" },
{ 0x7FA4, "getmaxweaponrank" }, // AUTOADDED
{ 0x7FA5, "getmaxweaponrankforrootweapon" }, // AUTOADDED
{ 0x7FA7, "getmaxwinbytworounds" }, // AUTOADDED
{ 0x7FB2, "getmeritfilter" },
{ 0x7FB3, "getmeritstatus" },
{ 0x7FB5, "getminiufopath" },
{ 0x7FB6, "getminiufostartingstruct" },
{ 0x7FB8, "getminoufofromorbeffect" },
{ 0x7FB9, "getminutespassed" }, // AUTOADDED
{ 0x7FBD, "getmodifiedantikillstreakdamage" },
{ 0x7FDC, "getnearestflagpoint" },
{ 0x7FDD, "getnearestflagteam" },
{ 0x7FE2, "getnewpoint" }, // AUTOADDED
{ 0x7FE5, "getnextgun" },
{ 0x7FE7, "getnextmissilespawnindex" }, // AUTOADDED
{ 0x7FEF, "getnextzone" },
{ 0x7FF3, "getnodearrayfunction" },
{ 0x7FF4, "getnodedirection" }, // AUTOADDED
{ 0x7FF5, "getnodeforward" }, // AUTOADDED
{ 0x7FF6, "getnodeforwardangles" }, // AUTOADDED
{ 0x7FF7, "getnodeforwardyaw" },
{ 0x7FF8, "getnodeforwardyawnodetypelookupoverride" }, // AUTOADDED
{ 0x7FF9, "getnodefunction" },
{ 0x7FFA, "getnodeinzone" },
{ 0x7FFB, "getnodenearenemies" },
{ 0x7FFC, "getnodeoffset" },
{ 0x7FFF, "getnodetypename" }, // AUTOADDED
{ 0x8000, "getnodeyawfromoffsettable" }, // AUTOADDED
{ 0x8001, "getnodeyawoffset" }, // AUTOADDED
{ 0x8002, "getnodeyawtoenemy" },
{ 0x8003, "getnodeyawtoorigin" },
{ 0x8008, "getnumactiveagents" }, // AUTOADDED
{ 0x800A, "getnumberoffrozenticksfromwave" },
{ 0x8010, "getnumownedactiveagents" }, // AUTOADDED
{ 0x8011, "getnumownedactiveagentsbytype" }, // AUTOADDED
{ 0x8012, "getnumownedagentsonteambytype" }, // AUTOADDED
{ 0x8013, "getnumownedjackals" }, // AUTOADDED
{ 0x801A, "getobjectivehinttext" }, // AUTOADDED
{ 0x801B, "getobjectivescoretext" }, // AUTOADDED
{ 0x801C, "getobjectivetext" }, // AUTOADDED
{ 0x801D, "getobjpointbyindex" }, // AUTOADDED
{ 0x801E, "getobjpointbyname" }, // AUTOADDED
{ 0x801F, "getoffsetfrombaseweaponname" },
{ 0x8021, "getomnvarvalue" },
{ 0x8022, "getoneshoteffectdelaydefault" },
{ 0x8025, "getoriginoffsets" }, // AUTOADDED
{ 0x8026, "getothermode" }, // AUTOADDED
{ 0x8027, "getotherteam" },
{ 0x803D, "getowneddomflags" }, // AUTOADDED
{ 0x803E, "getownerteam" },
{ 0x803F, "getownerteamplayer" }, // AUTOADDED
{ 0x8045, "getparent" }, // AUTOADDED
{ 0x8048, "getpassiveattachment" },
{ 0x8049, "getpassivedeathwatching" }, // AUTOADDED
{ 0x804A, "getpassivemessage" }, // AUTOADDED
{ 0x804B, "getpassiveperk" }, // AUTOADDED
{ 0x804C, "getpassivesforweapon" },
{ 0x804D, "getpassivestruct" }, // AUTOADDED
{ 0x804E, "getpassivevalue" }, // AUTOADDED
{ 0x804F, "getpathactionvalue" },
{ 0x8050, "getpatharray" }, // AUTOADDED
{ 0x8051, "getpathend" }, // AUTOADDED
{ 0x8052, "getpathindex" },
{ 0x8053, "getpathsighttestnodes" }, // AUTOADDED
{ 0x8054, "getpathstart" }, // AUTOADDED
{ 0x8056, "getpreferreddompoints" },
{ 0x805A, "getequipmenttableinfo" },
{ 0x805F, "getpersstat" },
{ 0x8066, "getpitchtospot3d" },
{ 0x806C, "getplayerassets" },
{ 0x8071, "getplayerforguid" },
{ 0x8072, "getplayerfromclientnum" }, // AUTOADDED
{ 0x8073, "getplayerheadmodel" }, // AUTOADDED
{ 0x8074, "getplayerhelispeed" }, // AUTOADDED
{ 0x8075, "getplayerkills" }, // AUTOADDED
{ 0x8076, "getplayerkillstreakcombatmode" }, // AUTOADDED
{ 0x8077, "getplayerlookattarget" }, // AUTOADDED
{ 0x8078, "getplayermodelindex" }, // AUTOADDED
{ 0x8079, "getplayermodelname" }, // AUTOADDED
{ 0x807D, "getplayersinradiusview" }, // AUTOADDED
{ 0x807F, "getplayerspeedbyweapon" },
{ 0x8083, "getplayertraceheight" }, // AUTOADDED
{ 0x8084, "getplayerviewmodelfrombody" }, // AUTOADDED
{ 0x8085, "getplayerweaponrank" }, // AUTOADDED
{ 0x8086, "getplayerweaponrankxp" }, // AUTOADDED
{ 0x8087, "getpos1offset" },
{ 0x808A, "getpotentiallivingplayers" },
{ 0x808C, "getcurrentequipment" }, // AUTOADDED
{ 0x8092, "getpredictedaimpitchtoshootentorpos3d" },
{ 0x8093, "getpredictedaimyawtoshootentorpos3d" },
{ 0x8094, "getpredictedaimyawtoshootentorpos" },
{ 0x809D, "getprioritywaittime" }, // AUTOADDED
{ 0x80A3, "getqacalloutalias" }, // AUTOADDED
{ 0x80A4, "getquadrant" },
{ 0x80AA, "getradiuspathsighttestnodes" }, // AUTOADDED
{ 0x80AB, "getraidspawnpoint" }, // AUTOADDED
{ 0x80AC, "getrallyvehiclespawndata" }, // AUTOADDED
{ 0x80AD, "getrandom_spammodel" }, // AUTOADDED
{ 0x80AE, "getrandomanimentry" }, // AUTOADDED
{ 0x80AF, "getrandomarchetype" }, // AUTOADDED
{ 0x80B0, "getrandomarmkillstreak" }, // AUTOADDED
{ 0x80B1, "getrandomattachments" }, // AUTOADDED
{ 0x80B6, "getrandomcratetype" },
{ 0x80B7, "getrandomcratetypeforgamemode" },
{ 0x80BB, "getrandomhovernodesaroundtargetpos" },
{ 0x80BC, "getrandomindex" },
{ 0x80C0, "getrandompoint" }, // AUTOADDED
{ 0x80C5, "getrandomweapon" }, // AUTOADDED
{ 0x80C6, "getrandomweaponattachments" },
{ 0x80C7, "getrandomweaponfromcategory" },
{ 0x80C8, "getrank" }, // AUTOADDED
{ 0x80C9, "getrankforxp" }, // AUTOADDED
{ 0x80CA, "getrankfromname" }, // AUTOADDED
{ 0x80CB, "getrankinfofull" }, // AUTOADDED
{ 0x80CC, "getrankinfoicon" }, // AUTOADDED
{ 0x80CD, "getrankinfolevel" }, // AUTOADDED
{ 0x80CE, "getrankinfomaxxp" }, // AUTOADDED
{ 0x80CF, "getrankinfominxp" },
{ 0x80D1, "getrankinfoxpamt" },
{ 0x80D2, "getrankxp" }, // AUTOADDED
{ 0x80D3, "getrankxpmultiplier" }, // AUTOADDED
{ 0x80D8, "getrawbaseweaponname" },
{ 0x80E2, "getrecoilreductionvalue" }, // AUTOADDED
{ 0x80E3, "getregendata" }, // AUTOADDED
{ 0x80E4, "getregionforpos" }, // AUTOADDED
{ 0x80E5, "getrelativeangles" }, // AUTOADDED
{ 0x80E6, "getrelativeteam" }, // AUTOADDED
{ 0x80E9, "getrespawndelay" }, // AUTOADDED
{ 0x80F0, "getrevivetimescaler" },
{ 0x80F3, "getrigindexfromarchetyperef" }, // AUTOADDED
{ 0x80F6, "getrootsuperref" }, // AUTOADDED
{ 0x80F9, "getroundswon" }, // AUTOADDED
{ 0x80FA, "getrunningforwarddeathanim" }, // AUTOADDED
{ 0x80FB, "getrunningforwardpainanim" }, // AUTOADDED
{ 0x80FC, "getsafeanimmovedeltapercentage" }, // AUTOADDED
{ 0x80FD, "getsafecircleorigin" }, // AUTOADDED
{ 0x80FE, "getsafecircleradius" }, // AUTOADDED
{ 0x80FF, "getsantizedhealth" }, // AUTOADDED
{ 0x8102, "getscoreinfocategory" },
{ 0x8104, "getscoreinfovalue" },
{ 0x8105, "getscorelimit" }, // AUTOADDED
{ 0x8106, "getscoreperminute" }, // AUTOADDED
{ 0x8107, "getscoreperminuteroundbased" }, // AUTOADDED
{ 0x8108, "getscoreremaining" }, // AUTOADDED
{ 0x810C, "getsecondspassed" },
{ 0x8116, "getsettdefsuit" },
{ 0x8124, "getsingleairstrikedanger" },
{ 0x8125, "getsixthsensedirection" },
{ 0x8135, "getspawnorigin" },
{ 0x8136, "getspawnpoint" },
{ 0x813C, "getspawnpoint_random" }, // AUTOADDED
{ 0x813D, "getspawnpoint_safeguard" }, // AUTOADDED
{ 0x813E, "getspawnpoint_searchandrescue" }, // AUTOADDED
{ 0x813F, "getspawnpoint_startspawn" },
{ 0x8140, "getspawnpointarray" },
{ 0x8141, "getspawnpointdist" }, // AUTOADDED
{ 0x8143, "getspawnteam" }, // AUTOADDED
{ 0x8148, "getspectatepoint" },
{ 0x814B, "getsplashtablename" }, // AUTOADDED
{ 0x8152, "getstackcount" }, // AUTOADDED
{ 0x8154, "getstackvalues" }, // AUTOADDED
{ 0x815C, "getstancecenter" },
{ 0x8167, "getstartspawnpoint_freeforall" },
{ 0x817B, "getstreakcost" },
{ 0x817E, "getstruct" },
{ 0x817F, "getstruct_delete" }, // AUTOADDED
{ 0x8180, "getstructarray" },
{ 0x8182, "getstructstate" },
{ 0x8191, "gettag" }, // AUTOADDED
{ 0x8198, "gettargetchargepos" },
{ 0x819E, "gettargets" },
{ 0x81A0, "getteamarray" },
{ 0x81A7, "getteamdompoints" }, // AUTOADDED
{ 0x81A9, "getteamfallbackspawnpoints" },
{ 0x81AB, "getteamflagcount" },
{ 0x81B8, "getteamsize" }, // AUTOADDED
{ 0x81B9, "getteamspawnmusic" }, // AUTOADDED
{ 0x81BA, "getteamspawnpoints" },
{ 0x81BC, "getteamvoiceprefix" },
{ 0x81BF, "getteleportlonertargetplayer" },
{ 0x81C8, "gettimefrommatchstart" }, // AUTOADDED
{ 0x81CA, "gettimelimit" }, // AUTOADDED
{ 0x81CB, "gettimepassed" }, // AUTOADDED
{ 0x81CC, "gettimepassedpercentage" }, // AUTOADDED
{ 0x81CD, "gettimeremaining" },
{ 0x81CE, "gettimeremainingpercentage" }, // AUTOADDED
{ 0x81CF, "gettimesincedompointcapture" }, // AUTOADDED
{ 0x81D1, "gettingloadout" },
{ 0x81DA, "gettruenodeangles" },
{ 0x81E5, "gettweakabledvarvalue" }, // AUTOADDED
{ 0x81E6, "gettweakablelastvalue" }, // AUTOADDED
{ 0x81E7, "gettweakablevalue" }, // AUTOADDED
{ 0x81E9, "getufolightcolor" },
{ 0x81EC, "getuniqueid" },
{ 0x81EE, "getuniqueobjectid" }, // AUTOADDED
{ 0x81F5, "getvalidattachments" }, // AUTOADDED
{ 0x81F6, "getvalidextraammoweapons" }, // AUTOADDED
{ 0x81F7, "getvalidlocation" }, // AUTOADDED
{ 0x81F8, "getvalidplayersinarray" }, // AUTOADDED
{ 0x81F9, "getvalidplayersinteam" }, // AUTOADDED
{ 0x81FA, "getvalidpointtopointmovelocation" }, // AUTOADDED
{ 0x81FB, "getvalidspawnpathnodenearplayer" }, // AUTOADDED
{ 0x8214, "getwatcheddvar" },
{ 0x8215, "getweaponassetfromrootweapon" }, // AUTOADDED
{ 0x8216, "getweaponattachmentarray" },
{ 0x8217, "getweaponattachmentarrayfromstats" },
{ 0x8218, "getweaponattachmentfromchallenge" }, // AUTOADDED
{ 0x8219, "getweaponattachmentfromstats" }, // AUTOADDED
{ 0x821A, "getweaponattachmentsbasenames" },
{ 0x821B, "getweaponbarsize" }, // AUTOADDED
{ 0x821C, "getweaponbasedgrenadecount" }, // AUTOADDED
{ 0x821D, "getweaponbasedsmokegrenadecount" }, // AUTOADDED
{ 0x821E, "getweaponchoice" }, // AUTOADDED
{ 0x821F, "getweaponclass" },
{ 0x8223, "getweaponfrommerit" },
{ 0x8225, "getweapongroup" },
{ 0x8227, "getweaponmaxrankxp" }, // AUTOADDED
{ 0x8229, "getweaponpassives" },
{ 0x822C, "getweaponrankforxp" }, // AUTOADDED
{ 0x822D, "getweaponrankinfomaxxp" }, // AUTOADDED
{ 0x822E, "getweaponrankinfominxp" }, // AUTOADDED
{ 0x8232, "getweaponrankxpmultiplier" }, // AUTOADDED
{ 0x8234, "getweaponrootname" },
{ 0x823A, "getweaponvariantattachments" }, // AUTOADDED
{ 0x823B, "getweaponvarianttablename" }, // AUTOADDED
{ 0x823C, "getweaponweight" }, // AUTOADDED
{ 0x823D, "getweightedchanceroll" }, // AUTOADDED
{ 0x823E, "getwholescenedurationmax" }, // AUTOADDED
{ 0x823F, "getwholescenedurationmin" }, // AUTOADDED
{ 0x8240, "getwingamebytype" }, // AUTOADDED
{ 0x8245, "getyaw2d" },
{ 0x8246, "getyaw" },
{ 0x8247, "getyaw2d" }, // AUTOADDED
{ 0x8248, "getyawangles" }, // AUTOADDED
{ 0x8249, "getyawfromorigin" },
{ 0x824A, "getyawtoenemy" },
{ 0x824B, "getyawtoorigin" },
{ 0x824C, "getyawtospot3d" },
{ 0x824D, "getyawtospot" },
{ 0x824F, "getzbaseweaponname" },
{ 0x8255, "getzonearray" },
{ 0x8256, "geyser_erupt" },
{ 0x8257, "geyser_sequence" },
{ 0x825B, "geysers_and_boatride" },
{ 0x8264, "ghost_can_be_contained" },
{ 0x8266, "ghost_death_trigger_monitor" },
{ 0x8267, "ghost_hide_node" },
{ 0x8268, "ghost_hover_node" },
{ 0x8269, "ghost_killed_update_func" },
{ 0x826C, "ghost_nav_mode" },
{ 0x826D, "ghost_portal_vfx" },
{ 0x8272, "ghost_target_position" },
{ 0x8273, "ghost_trail_to_scu" },
{ 0x8275, "ghost_wave_can_use_pistol_in_laststand" },
{ 0x8278, "ghostattack" },
{ 0x8279, "ghostattack_internal" },
{ 0x827A, "ghostentangled" },
{ 0x827B, "ghostexplode" },
{ 0x827D, "ghostexplosionradiusdamage" },
{ 0x827E, "ghosthide" },
{ 0x827F, "ghosthover" },
{ 0x8281, "ghostlaunched" },
{ 0x8284, "ghosts_attack_logic" },
{ 0x8285, "ghostshouldexplode" },
{ 0x8286, "ghostskulls_complete_status" },
{ 0x8287, "ghostskulls_total_waves" },
{ 0x8288, "ghostskullstimestart" },
{ 0x828A, "gib_fx_override" },
{ 0x829A, "give_ammo" },
{ 0x82A2, "give_attacker_kill_rewards" },
{ 0x82A7, "give_boom_perk" },
{ 0x82A8, "give_boombox" },
{ 0x82AE, "give_capture_credit" },
{ 0x82B2, "give_consumable" },
{ 0x82B4, "give_crafted_boombox" },
{ 0x82B5, "give_crafted_fireworks_trap" },
{ 0x82B6, "give_crafted_gascan" },
{ 0x82B8, "give_crafted_medusa" },
{ 0x82B9, "give_crafted_revocator" },
{ 0x82BA, "give_crafted_sentry" },
{ 0x82BB, "give_crafted_trap" },
{ 0x82C4, "give_explosive_armor" },
{ 0x82C6, "give_explosive_touch_on_revived" },
{ 0x82CD, "give_flash_perk" },
{ 0x82CE, "give_fwoosh_perk" },
{ 0x82D2, "give_glasses_power" },
{ 0x82D3, "give_glasses_to_player" },
{ 0x82D9, "give_infinite_ammo" },
{ 0x82DA, "give_infinite_grenade" },
{ 0x82E0, "give_laststand" },
{ 0x82E2, "give_left_powers" },
{ 0x82EB, "give_money" },
{ 0x82EE, "give_more_perk" },
{ 0x82EF, "give_mp_super_weapon" },
{ 0x82F5, "give_player_back_weapon" },
{ 0x82F7, "give_player_crafted_power" },
{ 0x82F8, "give_player_cryobomb" },
{ 0x82F9, "give_player_currency" },
{ 0x8300, "give_player_explosive_armor" },
{ 0x830B, "give_player_next_weapon" },
{ 0x830F, "give_player_session_tokens" },
{ 0x8310, "give_player_session_xp" },
{ 0x8317, "give_player_tickets" },
{ 0x8319, "give_player_wall_bought_power" },
{ 0x831B, "give_player_weapon_xp" },
{ 0x831D, "give_player_xp" },
{ 0x8326, "give_rat_a_tat_perk" },
{ 0x8327, "give_revive_perk" },
{ 0x832B, "give_run_perk" },
{ 0x832E, "give_self_revive_token" },
{ 0x8331, "give_smack_perk" },
{ 0x8334, "give_soul_power" },
{ 0x8341, "give_tough_perk" },
{ 0x834D, "give_zap_perk" },
{ 0x834E, "give_zombies_perk" },
{ 0x8352, "giveaward" },
{ 0x8361, "givedefaultloadout" },
{ 0x8365, "giveflagassistedcapturepoints" },
{ 0x8366, "giveflagcapturexp" },
{ 0x8367, "givefriendlyperks" }, // AUTOADDED
{ 0x8368, "givegesture" }, // AUTOADDED
{ 0x8369, "givegoproattachments" }, // AUTOADDED
{ 0x836A, "givegrabscore" },
{ 0x8371, "givejuggernaut" },
{ 0x8373, "givekillreward" },
{ 0x8374, "givekillstreak" }, // AUTOADDED
{ 0x8377, "giveknifeback" },
{ 0x8378, "givelastonteamwarning" },
{ 0x8379, "giveloadout" },
{ 0x837A, "giveloadoutswap" }, // guessed
{ 0x837F, "givemeritscore" },
{ 0x8380, "givemidmatchaward" },
{ 0x8381, "givenextgun" }, // AUTOADDED
{ 0x8382, "giveobject" }, // AUTOADDED
{ 0x8384, "giveonemanarmyclass" },
{ 0x8385, "giveortakethrowingknife" },
{ 0x8387, "giveperk" },
{ 0x8388, "giveperkequipment" }, // AUTOADDED
{ 0x8389, "giveperkoffhand" },
{ 0x838A, "giveperks" }, // AUTOADDED
{ 0x838B, "giveperksafterspawn" },
{ 0x838E, "giveplaceable" }, // AUTOADDED
{ 0x838F, "giveplayeraccessory" }, // AUTOADDED
{ 0x8390, "giveplayerbonuscash" }, // AUTOADDED
{ 0x8391, "giveplayerpassive" }, // AUTOADDED
{ 0x8392, "giveplayerscore" },
{ 0x8397, "givepower" },
{ 0x839A, "giverankxp" },
{ 0x839B, "giverankxp_regularmp" }, // AUTOADDED
{ 0x839C, "giverankxpafterwait" },
{ 0x839D, "giverecentshieldxp" },
{ 0x839F, "givescoreforblackhat" }, // AUTOADDED
{ 0x83A1, "givescorefortrophyblocks" }, // AUTOADDED
{ 0x83A3, "givesentry" }, // AUTOADDED
{ 0x83AB, "givesurvivortimescore" }, // AUTOADDED
{ 0x83B0, "giveteamscoreforobjective" },
{ 0x83B4, "giveunifiedpoints" },
{ 0x83B8, "giveuponsuppressiontime" },
{ 0x83BA, "giveweaponpassives" },
{ 0x83BD, "guid" },
{ 0x83D0, "glinton" }, // AUTOADDED
{ 0x83D8, "global_fx" }, // AUTOADDED
{ 0x83DA, "global_physics_sound_monitor" }, // AUTOADDED
{ 0x83DC, "global_tables" },
{ 0x83E1, "globtouched" },
{ 0x83F3, "glprox_trygetweaponname" },
{ 0x841C, "go_to_radio_and_dance" },
{ 0x8423, "goal_head_icon" },
{ 0x842B, "goal_position" },
{ 0x842C, "goal_radius" },
{ 0x8430, "goal_type" },
{ 0x8432, "goal_zone" },
{ 0x8434, "goalflag" },
{ 0x8436, "goals" }, // AUTOADDED
{ 0x8444, "going_for_knife" }, // AUTOADDED
{ 0x8446, "gold_teeth_hint_func" },
{ 0x8447, "gold_teeth_pickup" },
{ 0x8448, "gold_teeth_pickup_debug" },
{ 0x844C, "gold_tooth_3_pickup" },
{ 0x844E, "gonevo" }, // AUTOADDED
{ 0x8451, "goodshootpos" },
{ 0x8453, "goon_spawn_event_func" },
{ 0x8457, "goon_spawners" },
{ 0x846C, "goto_selected" },
{ 0x8474, "gotpullbacknotify" },
{ 0x858A, "grenade_earthquake" }, // AUTOADDED
{ 0x858B, "grenade_earthquakeatposition" },
{ 0x858C, "grenade_earthquakeatposition_internal" }, // AUTOADDED
{ 0x859A, "grenade_model" },
{ 0x85BB, "grenadeexplosionfx" }, // AUTOADDED
{ 0x85D5, "grenades" }, // AUTOADDED
{ 0x85DD, "grenadestuckto" },
{ 0x85E4, "grenadetimers" },
{ 0x85E7, "grenadeusefunc" },
{ 0x85EC, "grey_fight_sfx" },
{ 0x85ED, "grey_fight_vfx" },
{ 0x85F0, "grey_killed_vo" },
{ 0x85F1, "grey_on_killed_func" },
{ 0x85F9, "greygetmeleedamagedfunc" },
{ 0x85FA, "greymeleevsplayer_init" },
{ 0x85FB, "greymeleevsplayer_terminate" },
{ 0x85FC, "greymeleevsplayer_update" },
{ 0x8600, "greysetupfunc" },
{ 0x860B, "grind_waiting_to_bank" },
{ 0x8619, "grnd_previouscratetypes" },
{ 0x862F, "ground_origin" }, // AUTOADDED
{ 0x8658, "groundpound_raisefx" },
{ 0x865B, "groundpoundboost_onimpact" }, // AUTOADDED
{ 0x865C, "groundpoundshield" },
{ 0x865D, "groundpoundshield_break" },
{ 0x865F, "groundpoundshield_damagedfx" }, // AUTOADDED
{ 0x8660, "groundpoundshield_deleteondisconnect" }, // AUTOADDED
{ 0x8661, "groundpoundshield_deleteshield" }, // AUTOADDED
{ 0x8662, "groundpoundshield_lower" },
{ 0x8663, "groundpoundshield_lowerfx" },
{ 0x8664, "groundpoundshield_loweronjump" },
{ 0x8665, "groundpoundshield_loweronleavearea" },
{ 0x8666, "groundpoundshield_lowerontime" },
{ 0x8668, "groundpoundshield_monitorhealth" },
{ 0x8669, "groundpoundshield_monitorjoinedteam" },
{ 0x866A, "groundpoundshield_onimpact" },
{ 0x866B, "groundpoundshield_raise" },
{ 0x866C, "groundpoundshield_raiseondelay" },
{ 0x866D, "groundpoundshock_empplayer" },
{ 0x866E, "groundpoundshock_onimpact" },
{ 0x866F, "groundpoundshock_onimpactfx" }, // AUTOADDED
{ 0x8677, "group" },
{ 0x8696, "group_name" },
{ 0x869E, "group_target_timeout" },
{ 0x86A2, "groupname" },
{ 0x86A3, "groups" },
{ 0x86A9, "gs" },
{ 0x86AD, "gtnw" },
{ 0x86BD, "guid" },
{ 0x86BF, "guidgen" },
{ 0x86C1, "gun" },
{ 0x86D0, "gun_fired_and_ready_105mm" },
{ 0x86D1, "gun_firstspawn" },
{ 0x86D4, "gun_guns" }, // AUTOADDED
{ 0x86D6, "gun_loadouts" },
{ 0x86D7, "gun_model" },
{ 0x86DC, "gun_on_standee" },
{ 0x86E6, "gun_slot" },
{ 0x86F7, "gunfireloopfx" },
{ 0x86F8, "gunfireloopfxthread" },
{ 0x86FB, "gungamegunindex" }, // AUTOADDED
{ 0x86FC, "gungameprevgunindex" }, // AUTOADDED
{ 0x8712, "gunner" },
{ 0x8863, "halfdistance" },
{ 0x889B, "handle" },
{ 0x88C0, "handle_challenge_hotjoin" },
{ 0x88D4, "handle_disable_rotation" }, // AUTOADDED
{ 0x892D, "handle_moving_platform_invalid" }, // AUTOADDED
{ 0x892E, "handle_moving_platform_touch" }, // AUTOADDED
{ 0x892F, "handle_moving_platforms" }, // AUTOADDED
{ 0x8931, "handle_nondeterministic_entities" },
{ 0x895B, "handle_selected_ents" },
{ 0x896F, "handle_zapper_fx" },
{ 0x8975, "handleapdamage" },
{ 0x898C, "handledamage" }, // AUTOADDED
{ 0x898D, "handledamagefeedback" }, // AUTOADDED
{ 0x898E, "handledeath" }, // AUTOADDED
{ 0x898F, "handledeathdamage" },
{ 0x8996, "handledropclip" },
{ 0x8998, "handleemp" },
{ 0x8999, "handleempdamage" }, // AUTOADDED
{ 0x89A7, "handlefriendlyfiredamage" },
{ 0x89A8, "handlefriendlyfiredeath" },
{ 0x89AA, "handlegoreeffect" },
{ 0x89AC, "handlegrenadedamage" },
{ 0x89B4, "handlehostmigration" },
{ 0x89B5, "handleincomingmissiles" },
{ 0x89C3, "handlemeleedamage" }, // AUTOADDED
{ 0x89C6, "handlemissiledamage" },
{ 0x89CA, "handlenormaldeath" },
{ 0x89CB, "handlenotetrack" }, // AUTOADDED
{ 0x89CD, "handleoutlinesforstreaks" },
{ 0x89DD, "handleriotshieldhits" },
{ 0x89DE, "handlerocketlauncherammoondeath" },
{ 0x89E2, "handleshotgundamage" },
{ 0x89E9, "handlesplashqueue" },
{ 0x89ED, "handlesuicidedeath" },
{ 0x89FC, "handleworlddeath" },
{ 0x8B38, "hardcoremode" }, // AUTOADDED
{ 0x8B49, "hardpoint_setneutral" }, // AUTOADDED
{ 0x8B4A, "hardpoint_setupobjective" },
{ 0x8B4C, "hardpoint_onplayerjoinedteam" },
{ 0x8B4E, "hardpointmainloop" },
{ 0x8B52, "hardpointtweaks" }, // AUTOADDED
{ 0x8B53, "hardpointtype" }, // AUTOADDED
{ 0x8B54, "harness_model" }, // AUTOADDED
{ 0x8B55, "harrier" }, // AUTOADDED
{ 0x8B56, "harrier_afterburnerfx" }, // AUTOADDED
{ 0x8B57, "harrier_deathfx" }, // AUTOADDED
{ 0x8B58, "harrier_incoming" }, // AUTOADDED
{ 0x8B59, "harrier_smoke" }, // AUTOADDED
{ 0x8B66, "has_backpack" },
{ 0x8B68, "has_balanced_personality" },
{ 0x8B69, "has_building_upgrade" },
{ 0x8B71, "has_dischord_glasses" },
{ 0x8B74, "has_encounter_score_component" },
{ 0x8B78, "has_eog_score_component" },
{ 0x8B7A, "has_explosive_armor" },
{ 0x8B7D, "has_fnf_weapon" },
{ 0x8B7E, "has_fragile_relic_and_is_sprinting" },
{ 0x8B88, "has_infinite_ammo" },
{ 0x8B89, "has_infinite_grenade" },
{ 0x8B8C, "has_left_power" },
{ 0x8B97, "has_outline_on" },
{ 0x8B98, "has_override_flag_targets" },
{ 0x8B99, "has_override_zone_targets" },
{ 0x8BA0, "has_replaced_starting_pistol" },
{ 0x8BA4, "has_score_component_internal" },
{ 0x8BA8, "has_self_revive_token" },
{ 0x8BAD, "has_speaker" },
{ 0x8BAE, "has_special_weapon" },
{ 0x8BAF, "has_started_thinking" },
{ 0x8BB0, "has_stun_ammo" },
{ 0x8BB1, "has_tag" },
{ 0x8BB7, "has_trap" },
{ 0x8BBB, "has_weapon_variation" },
{ 0x8BBC, "has_white_ark" },
{ 0x8BBD, "has_white_ark_hint_func" },
{ 0x8BBE, "has_zombie_perk" },
{ 0x8BC1, "hasactivesmokegrenade" }, // AUTOADDED
{ 0x8BC8, "hasammoinclip" },
{ 0x8BD1, "has_attachment" },
{ 0x8BD8, "hasbots" },
{ 0x8BDB, "haschangedarchetype" }, // AUTOADDED
{ 0x8BDC, "haschangedclass" },
{ 0x8BE2, "hasdied" }, // AUTOADDED
{ 0x8BE5, "hasdodged" },
{ 0x8BE9, "hasdonecombat" }, // AUTOADDED
{ 0x8BF4, "hasgl3weapon" },
{ 0x8BF9, "hashealthshield" },
{ 0x8BFA, "hasheavyarmor" }, // AUTOADDED
{ 0x8BFB, "hasheavyarmorinvulnerability" }, // AUTOADDED
{ 0x8C01, "hasincoming" }, // AUTOADDED
{ 0x8C02, "hasintel" }, // AUTOADDED
{ 0x8C03, "hasjuiced" }, // AUTOADDED
{ 0x8C07, "haslightarmor" }, // AUTOADDED
{ 0x8C10, "hasperksprintfire" },
{ 0x8C14, "hasplayedvignetteanim" },
{ 0x8C17, "hasequipment" },
{ 0x8C18, "hasprogressbar" },
{ 0x8C19, "hasrearguardshield" },
{ 0x8C1A, "hasregenfaster" }, // AUTOADDED
{ 0x8C1C, "hasrephase" },
{ 0x8C1E, "hasriotshield" },
{ 0x8C1F, "hasriotshieldequipped" },
{ 0x8C29, "hassoflam" },
{ 0x8C2A, "hasspawned" }, // AUTOADDED
{ 0x8C2B, "hasspawnradar" },
{ 0x8C31, "hassuppressableenemy" },
{ 0x8C32, "hastag" },
{ 0x8C35, "hastraversed" },
{ 0x8C38, "hasvalidationinfraction" }, // AUTOADDED
{ 0x8C43, "hatmodel" },
{ 0x8C44, "have_clan_tag" },
{ 0x8C45, "have_self_revive" },
{ 0x8C46, "have_things_in_lost_and_found" },
{ 0x8C4A, "havedataformerit" },
{ 0x8C4C, "haveinvulnerabilityavailable" },
{ 0x8C50, "haveselfrevive" },
{ 0x8C51, "havespawnedplayers" },
{ 0x8C55, "hctraptrigger" },
{ 0x8C59, "head" },
{ 0x8C5C, "head_cutter_trap_kills" },
{ 0x8C5D, "head_exploder" },
{ 0x8C5F, "head_is_exploding" },
{ 0x8C64, "head_shard_init" },
{ 0x8C66, "headcutter_crafting_list" },
{ 0x8C68, "headcutter_freeze_loop" },
{ 0x8C69, "headcutter_freeze_test" },
{ 0x8C6B, "headcutter_org" },
{ 0x8C7A, "headiconoffset" },
{ 0x8C7C, "heading_for_tag_pile" },
{ 0x8C98, "headmodel" },
{ 0x8C9D, "headshot_reload_check" },
{ 0x8C9E, "headshot_reload_time" },
{ 0x8CA0, "headshots" },
{ 0x8CAA, "health_addition_per_regen_segement" },
{ 0x8CB2, "health_regen_minimum" },
{ 0x8CBC, "healthoverlaycutoff" },
{ 0x8CBF, "healthregen" },
{ 0x8CC0, "healthregencap" }, // AUTOADDED
{ 0x8CC1, "healthregendisabled" },
{ 0x8CC2, "healthregenerated" }, // AUTOADDED
{ 0x8CC3, "healthregenerated_regularmp" }, // AUTOADDED
{ 0x8CC4, "healthregeneration" }, // AUTOADDED
{ 0x8CC5, "healthregenerationstreak" }, // AUTOADDED
{ 0x8CC6, "healthregeninit" },
{ 0x8CD0, "heat" },
{ 0x8CDE, "heatlevel" }, // AUTOADDED
{ 0x8CFC, "heavyarmor" }, // AUTOADDED
{ 0x8CFD, "heavyarmor_break" }, // AUTOADDED
{ 0x8D01, "heavyarmor_getdamagemodifier" }, // AUTOADDED
{ 0x8D07, "heavyarmormodifydamage" }, // AUTOADDED
{ 0x8D13, "heightrange" },
{ 0x8D2B, "heli_angle_offset" }, // AUTOADDED
{ 0x8D33, "heli_crash" }, // AUTOADDED
{ 0x8D3E, "heli_crash_nodes" }, // AUTOADDED
{ 0x8D40, "heli_damage_monitor" },
{ 0x8D43, "heli_debug" }, // AUTOADDED
{ 0x8D4A, "heli_existence" },
{ 0x8D4C, "heli_explode" }, // AUTOADDED
{ 0x8D52, "heli_fly_loop_path" }, // AUTOADDED
{ 0x8D53, "heli_fly_simple_path" }, // AUTOADDED
{ 0x8D58, "heli_get_node_origin" },
{ 0x8D59, "heli_get_target" }, // AUTOADDED
{ 0x8D5A, "heli_get_target_ai_only" }, // AUTOADDED
{ 0x8D5B, "heli_get_target_player_only" }, // AUTOADDED
{ 0x8D5C, "heli_getteamforsoundclip" }, // AUTOADDED
{ 0x8D5D, "heli_goal_think" }, // AUTOADDED
{ 0x8D5E, "heli_guys_logic" }, // AUTOADDED
{ 0x8D5F, "heli_has_player_target" }, // AUTOADDED
{ 0x8D60, "heli_has_target" }, // AUTOADDED
{ 0x8D61, "heli_health" }, // AUTOADDED
{ 0x8D64, "heli_is_threatened" }, // AUTOADDED
{ 0x8D66, "heli_leave" }, // AUTOADDED
{ 0x8D67, "heli_leave_nodes" }, // AUTOADDED
{ 0x8D68, "heli_leave_on_changeteams" }, // AUTOADDED
{ 0x8D69, "heli_leave_on_disconnect" }, // AUTOADDED
{ 0x8D6A, "heli_leave_on_gameended" }, // AUTOADDED
{ 0x8D6B, "heli_leave_on_nuke" }, // AUTOADDED
{ 0x8D6C, "heli_leave_on_spawned" }, // AUTOADDED
{ 0x8D6D, "heli_leave_on_timeout" }, // AUTOADDED
{ 0x8D6F, "heli_loop_nodes" }, // AUTOADDED
{ 0x8D71, "heli_loop_speed_control" }, // AUTOADDED
{ 0x8D78, "heli_pick_node_furthest_from_center" }, // AUTOADDED
{ 0x8D79, "heli_pilot" }, // AUTOADDED
{ 0x8D7A, "heli_pilot_allowed" },
{ 0x8D7B, "heli_pilot_control_heli_aiming" }, // AUTOADDED
{ 0x8D7C, "heli_pilot_mesh" }, // AUTOADDED
{ 0x8D7D, "heli_pilot_missile_radius" }, // AUTOADDED
{ 0x8D7E, "heli_pilot_monitor_flares" }, // AUTOADDED
{ 0x8D7F, "heli_pilot_pick_node" }, // AUTOADDED
{ 0x8D80, "heli_pilot_waittill_initial_goal" }, // AUTOADDED
{ 0x8D82, "heli_reset" }, // AUTOADDED
{ 0x8D83, "heli_secondary_explosions" }, // AUTOADDED
{ 0x8D86, "heli_sniper_allowed" },
{ 0x8D87, "heli_sniper_clear_script_goal_on_ride" }, // AUTOADDED
{ 0x8D88, "heli_sniper_pick_node" }, // AUTOADDED
{ 0x8D89, "heli_sniper_waittill_initial_goal" }, // AUTOADDED
{ 0x8D8A, "heli_sound" }, // AUTOADDED
{ 0x8D8B, "heli_spin" }, // AUTOADDED
{ 0x8D99, "heli_targeting" }, // AUTOADDED
{ 0x8D9E, "heli_turretclipsize" }, // AUTOADDED
{ 0x8DA2, "heli_visual_range" }, // AUTOADDED
{ 0x8DA4, "heli_watchdeath" }, // AUTOADDED
{ 0x8DA5, "heli_watchempdamage" }, // AUTOADDED
{ 0x8DA6, "heliconfigs" }, // AUTOADDED
{ 0x8DB5, "helidestroyed" },
{ 0x8DB9, "heligotostartposition" }, // AUTOADDED
{ 0x8DBA, "heliheight" }, // AUTOADDED
{ 0x8DBB, "heliheightoffset" }, // AUTOADDED
{ 0x8DBC, "heliheightoverride" }, // AUTOADDED
{ 0x8DBD, "heliinproximity" }, // AUTOADDED
{ 0x8DBE, "heliisfacing" }, // AUTOADDED
{ 0x8DBF, "helimakedepotwait" }, // AUTOADDED
{ 0x8DC0, "helipathmemory" }, // AUTOADDED
{ 0x8DC1, "helipilot_endride" }, // AUTOADDED
{ 0x8DC2, "helipilot_freezebuffer" }, // AUTOADDED
{ 0x8DC3, "helipilot_getcloseststartnode" }, // AUTOADDED
{ 0x8DC4, "helipilot_getlinkedstruct" }, // AUTOADDED
{ 0x8DC5, "helipilot_leave" }, // AUTOADDED
{ 0x8DC6, "helipilot_lightfx" }, // AUTOADDED
{ 0x8DC7, "helipilot_setairstartnodes" }, // AUTOADDED
{ 0x8DC8, "helipilot_watchads" }, // AUTOADDED
{ 0x8DC9, "helipilot_watchdeath" }, // AUTOADDED
{ 0x8DCA, "helipilot_watchobjectivecam" }, // AUTOADDED
{ 0x8DCB, "helipilot_watchownerloss" }, // AUTOADDED
{ 0x8DCC, "helipilot_watchroundend" }, // AUTOADDED
{ 0x8DCD, "helipilot_watchtimeout" }, // AUTOADDED
{ 0x8DCE, "helipilotsettings" }, // AUTOADDED
{ 0x8DCF, "helipilottype" }, // AUTOADDED
{ 0x8DD0, "heliremoveoutline" }, // AUTOADDED
{ 0x8DD3, "helis" },
{ 0x8DD4, "helisetup" },
{ 0x8DD8, "helispawning" },
{ 0x8DD9, "helitype" },
{ 0x8DDA, "helmet" },
{ 0x8E14, "helmetlocation" },
{ 0x8E1C, "helmetsidemodel" },
{ 0x8E5A, "hidden" }, // AUTOADDED
{ 0x8E5E, "hidden_pictures" },
{ 0x8E5F, "hidden_room" },
{ 0x8E60, "hidden_room_exit_tube" },
{ 0x8E64, "hidden_room_timer" },
{ 0x8E67, "hidden_song" },
{ 0x8E68, "hidden_song_2" },
{ 0x8E6A, "hidden_toys" },
{ 0x8E6C, "hide_all_revive_icons" },
{ 0x8E7D, "hide_entangler_hud" },
{ 0x8E81, "hide_exploder_models_proc" },
{ 0x8EA0, "hide_power_icon" },
{ 0x8EB0, "hide_tutorial" },
{ 0x8EBA, "hidecarryiconongameend" },
{ 0x8EBD, "hideelem" }, // AUTOADDED
{ 0x8EC1, "hidefxarray" }, // AUTOADDED
{ 0x8EC2, "hideheadicon" },
{ 0x8EC3, "hideheadicons" }, // AUTOADDED
{ 0x8EC5, "hidehudelementongameend" }, // AUTOADDED
{ 0x8ED4, "hideplacedmodel" }, // AUTOADDED
{ 0x8ED5, "hideplayerspecificbrushes" }, // AUTOADDED
{ 0x8EDE, "hideworldiconongameend" }, // AUTOADDED
{ 0x8EE1, "hiding_until_bank" },
{ 0x8EE3, "high_priority_for" }, // AUTOADDED
{ 0x8EE8, "highestspawndistratio" },
{ 0x8EF3, "highlightairdrop" },
{ 0x8EFC, "hijacknotify" },
{ 0x8FFA, "hint_func" },
{ 0x9010, "hint_string" },
{ 0x9011, "hint_string_func" },
{ 0x901C, "hintmessage" },
{ 0x901D, "hintmessagedeaththink" },
{ 0x902E, "hit_point_left" },
{ 0x9036, "hits" },
{ 0x9038, "hitloc" },
{ 0x9039, "hitlocdebug" },
{ 0x903A, "hitlocinited" },
{ 0x9040, "hitmarkerpriorities" }, // AUTOADDED
{ 0x9041, "hitroundlimit" }, // AUTOADDED
{ 0x9042, "hits" },
{ 0x9043, "hitsail" }, // AUTOADDED
{ 0x9044, "hitscorelimit" }, // AUTOADDED
{ 0x9045, "hitsthismag" },
{ 0x9047, "hitsthismag_init" },
{ 0x9048, "hitsthismag_update" },
{ 0x9049, "hittimelimit" }, // AUTOADDED
{ 0x904A, "hitwinlimit" }, // AUTOADDED
{ 0x9082, "hoop" },
{ 0x9083, "hoop_clip" },
{ 0x9084, "hoop_trig" },
{ 0x9098, "horse" },
{ 0x90A1, "hostforcedend" }, // AUTOADDED
{ 0x90A2, "hostidledout" }, // AUTOADDED
{ 0x90A4, "hostmigration" },
{ 0x90A5, "hostmigrationconnectwatcher" }, // AUTOADDED
{ 0x90A6, "hostmigrationcontrolsfrozen" }, // AUTOADDED
{ 0x90A7, "hostmigrationname" }, // AUTOADDED
{ 0x90A8, "hostmigrationreturnedplayercount" },
{ 0x90A9, "hostmigrationtimer" }, // AUTOADDED
{ 0x90AA, "hostmigrationtimerthink" }, // AUTOADDED
{ 0x90AB, "hostmigrationtimerthink_internal" }, // AUTOADDED
{ 0x90AC, "hostmigrationwait" }, // AUTOADDED
{ 0x90AD, "hostmigrationwaitforplayers" }, // AUTOADDED
{ 0x90BF, "hot_potato_carrier" },
{ 0x90C0, "hot_potato_stage" },
{ 0x90F0, "hoverlifepack" }, // AUTOADDED
{ 0x9118, "hp" }, // AUTOADDED
{ 0x911B, "hp_move_soon" },
{ 0x911F, "hpcaptureloop" },
{ 0x9120, "hpstarttime" },
{ 0x9121, "hqactivatenextzone" },
{ 0x9157, "hud_monitorplayerownership" },
{ 0x9168, "hud_value" },
{ 0x917B, "hudelem_count" },
{ 0x917C, "hudelem_destroy" }, // AUTOADDED
{ 0x917D, "hudelemdestroy" }, // AUTOADDED
{ 0x917E, "hudelems" },
{ 0x917F, "hudicontype" },
{ 0x91AD, "hudoutlinesettings" },
{ 0x91B2, "hudtweaks" }, // AUTOADDED
{ 0x91D3, "human_team_bot_added" },
{ 0x91E4, "hunt_human" },
{ 0x926B, "hybrid_assist" },
{ 0x927D, "i_am_clone" },
{ 0x9286, "ice_frost" },
{ 0x928E, "icon" },
{ 0x9292, "icon_entity" },
{ 0x9298, "icon_shader" },
{ 0x9299, "iconcapture2d" },
{ 0x929A, "iconcapture3d" },
{ 0x929B, "iconcaptureflag2d" },
{ 0x929C, "iconcaptureflag3d" },
{ 0x929F, "icondefend2d" },
{ 0x92A0, "icondefend3d" },
{ 0x92A1, "icondefendflag2d" },
{ 0x92A2, "icondefendflag3d" },
{ 0x92A6, "iconenemycontested2d" },
{ 0x92A7, "iconenemycontested3d" },
{ 0x92A8, "iconescort2d" },
{ 0x92A9, "iconescort3d" },
{ 0x92AA, "iconfriendlycontested2d" },
{ 0x92AB, "iconfriendlycontested3d" },
{ 0x92AC, "iconkill2d" },
{ 0x92AD, "iconkill3d" },
{ 0x92AF, "iconneutral2d" },
{ 0x92B0, "iconneutral3d" },
{ 0x92B2, "iconreturnflag2d" },
{ 0x92B3, "iconreturnflag3d" },
{ 0x92B4, "icons_to_hide_when_in_afterlife" },
{ 0x92B5, "iconvisall" },
{ 0x92B8, "id" }, // AUTOADDED
{ 0x92BA, "idamage" },
{ 0x92BB, "identifier" },
{ 0x92BF, "idflags_no_armor" },
{ 0x92C0, "idflags_no_knockback" },
{ 0x92C1, "idflags_no_protection" },
{ 0x92C2, "idflags_no_team_protection" },
{ 0x92C3, "idflags_passthru" },
{ 0x92C4, "idflags_penetration" },
{ 0x92C5, "idflags_radius" },
{ 0x92C6, "idflags_ricochet" },
{ 0x92C7, "idflags_shield_explosive_impact" },
{ 0x92C8, "idflags_shield_explosive_impact_huge" },
{ 0x92C9, "idflags_shield_explosive_splash" },
{ 0x92CA, "idflags_stun" },
{ 0x92F7, "idleresettime" }, // AUTOADDED
{ 0x92FD, "idletarget" },
{ 0x92FE, "idletargetmover" },
{ 0x930E, "isgameparticipant" },
{ 0x9340, "immune_against_freeze" },
{ 0x9341, "immune_against_nuke" },
{ 0x934E, "impale" }, // AUTOADDED
{ 0x934F, "impale_cleanup" },
{ 0x9350, "impale_detachaftertime" }, // AUTOADDED
{ 0x9351, "impale_effects" }, // AUTOADDED
{ 0x9376, "ims_setcancelled" },
{ 0x9387, "in_afterlife_arcade" },
{ 0x9394, "in_delay_update_next_hide_time" },
{ 0x9398, "in_goal" },
{ 0x939A, "in_inclusion_list" },
{ 0x93A2, "in_room_check_func" },
{ 0x93A5, "in_spawnspectator" },
{ 0x93A8, "in_use" },
{ 0x93AF, "inactive" },
{ 0x93B9, "inboundsfx" }, // AUTOADDED
{ 0x93BA, "inboundvo" }, // AUTOADDED
{ 0x93BB, "inc4death" },
{ 0x93BE, "inc_bleedout_counts" },
{ 0x93C1, "inc_downed_counts" },
{ 0x93C4, "inc_laststand_record" },
{ 0x93C7, "inc_revived_counts" },
{ 0x93C9, "inc_session_stat" },
{ 0x93CB, "inc_stat" },
{ 0x93CC, "include_default_achievements" },
{ 0x93CD, "include_default_challenges" }, // AUTOADDED
{ 0x93CE, "include_default_unlocks" }, // AUTOADDED
{ 0x93CF, "incombatspeed" },
{ 0x93DA, "incomingmissile" },
{ 0x93DB, "incomingmissiles" }, // AUTOADDED
{ 0x93DF, "incperstat" },
{ 0x93E0, "incplayerrecord" }, // AUTOADDED
{ 0x93E4, "increase_afterlife_count" },
{ 0x93E5, "increase_damage_scalar" },
{ 0x93EB, "increase_reserved_spawn_slots" },
{ 0x93ED, "increase_threatbias" },
{ 0x93F2, "increment_alien_head_destroyed_count" },
{ 0x93F3, "increment_list_offset" },
{ 0x93F5, "increment_num_of_quest_piece_completed" },
{ 0x93F8, "incrementalivecount" },
{ 0x93FA, "incrementfauxvehiclecount" },
{ 0x93FF, "index_is_selected" },
{ 0x940C, "inenemybase" }, // AUTOADDED
{ 0x940D, "infect_allowsuicide" },
{ 0x940E, "infect_awardedfinalsurvivor" },
{ 0x940F, "infect_choosingfirstinfected" },
{ 0x9410, "infect_chosefirstinfected" },
{ 0x9411, "infect_countdowninprogress" },
{ 0x9412, "infect_isbeingchosen" },
{ 0x9413, "infect_loadouts" },
{ 0x9414, "infect_players" },
{ 0x9415, "infect_skipsounds" },
{ 0x9416, "infect_spawnpos" },
{ 0x9417, "infect_teamscores" }, // AUTOADDED
{ 0x9419, "infected_class" },
{ 0x941A, "infectedkillsthislife" },
{ 0x941B, "infectedlethal" },
{ 0x941C, "infectedprimaryweapon" },
{ 0x941D, "infectedrejoined" },
{ 0x941E, "infectedsecondaryweapon" },
{ 0x941F, "infectedsuper" },
{ 0x9420, "infectedtactical" },
{ 0x9422, "infectextratimeperkill" },
{ 0x9423, "infectstreakbonus" },
{ 0x94A2, "infinalstand" },
{ 0x94A4, "infinite_ammo" },
{ 0x94A8, "infinite_grenades" },
{ 0x94B8, "info" },
{ 0x94C4, "inframes" }, // AUTOADDED
{ 0x94C5, "infriendlybase" }, // AUTOADDED
{ 0x94C6, "infront" }, // AUTOADDED
{ 0x94C7, "ingame_cinematic_loop" }, // AUTOADDED
{ 0x94C8, "ingraceperiod" },
{ 0x94CA, "ingredient_list" },
{ 0x94CB, "ingredient_list_check" },
{ 0x94D1, "inheliproximity" }, // AUTOADDED
{ 0x94D7, "init_afterlife_arcade" },
{ 0x94D8, "init_afterlife_basketball_game" },
{ 0x94D9, "init_afterlife_clowntooth_game" },
{ 0x94DC, "init_agent" },
{ 0x94EA, "init_alien_grey_fight" },
{ 0x94EC, "init_all_afterlife_laughing_clowns" },
{ 0x94ED, "init_all_debris_and_door_positions" },
{ 0x94EE, "init_all_laughing_clowns" },
{ 0x94F0, "init_all_race_games" },
{ 0x94F2, "init_all_weapon_upgrades" },
{ 0x94FA, "init_analytics" },
{ 0x94FE, "init_animatedmodels" },
{ 0x9529, "init_arcade_counter_ammo_slot" },
{ 0x952A, "init_arcade_grenade_slot" },
{ 0x952B, "init_ark_quest" },
{ 0x952D, "init_armageddon" },
{ 0x952E, "init_armageddon_areas" },
{ 0x9538, "init_atm" },
{ 0x9539, "init_audio" },
{ 0x953C, "init_available_formations" },
{ 0x9541, "init_basketball_game" },
{ 0x9547, "init_beam_trap" },
{ 0x9549, "init_bfp_afterlife_game" },
{ 0x954A, "init_bfp_game" },
{ 0x954B, "init_blackhole_trap" },
{ 0x9553, "init_boom_machines_func" },
{ 0x9554, "init_bot_archetypes" },
{ 0x9555, "init_bot_attachmenttable" },
{ 0x9556, "init_bot_camotable" },
{ 0x9557, "init_bot_game_ctf" }, // AUTOADDED
{ 0x9558, "init_bot_game_demolition" }, // AUTOADDED
{ 0x9559, "init_bot_game_headquarters" }, // AUTOADDED
{ 0x955A, "init_bot_weap_statstable" },
{ 0x9560, "init_bumper_cars" },
{ 0x9569, "init_callback_func" },
{ 0x9579, "init_class_table" }, // AUTOADDED
{ 0x957A, "init_clowntooth_game" },
{ 0x957B, "init_coaster" },
{ 0x957F, "init_colors" },
{ 0x9588, "init_consumable_meter" },
{ 0x9589, "init_consumables" },
{ 0x958C, "init_consumables_used" },
{ 0x958E, "init_coop_challenge" },
{ 0x9594, "init_crafting" },
{ 0x9596, "init_crafting_station" },
{ 0x9599, "init_crosshair" },
{ 0x959A, "init_cryobomb" },
{ 0x95AE, "init_dischord_data" },
{ 0x95AF, "init_dischord_glasses_power" },
{ 0x95B0, "init_discoball_trap" },
{ 0x95B2, "init_dj_quest_part" },
{ 0x95B3, "init_dj_quests" },
{ 0x95B4, "init_dj_speaker" },
{ 0x95C5, "init_empattack" },
{ 0x95C6, "init_empty_func_ref_MAYBE" },
{ 0x95CC, "init_escape_interactions" },
{ 0x95D7, "init_facemelter_data" },
{ 0x95DC, "init_fetch_quest" },
{ 0x95DF, "init_first_speaker_defense" },
{ 0x95E2, "init_flags" },
{ 0x95E3, "init_flash_machines_func" },
{ 0x95EA, "init_cryobomb" },
{ 0x95EB, "init_formation_movements" },
{ 0x95F2, "init_func" },
{ 0x95F4, "init_fwoosh_machines_func" },
{ 0x95F6, "init_fx_thread" },
{ 0x95F8, "init_gamescore" },
{ 0x95FF, "init_get_tone_generator" },
{ 0x9601, "init_ghost_killed_func" },
{ 0x9602, "init_ghost_n_skull_quest" },
{ 0x9603, "init_ghost_related_vfx" },
{ 0x9604, "init_ghost_spawn_loc" },
{ 0x9609, "init_grabzombie" },
{ 0x9618, "init_headcutter_data" },
{ 0x9622, "init_hidden_song_2_quest" },
{ 0x9623, "init_hidden_song_quest" },
{ 0x962A, "init_huds" },
{ 0x9642, "init_jaroslav" },
{ 0x964A, "init_knifethrow_game" },
{ 0x9651, "init_large_counter_slot" },
{ 0x9652, "init_laserattack" },
{ 0x9654, "init_laststand" },
{ 0x965E, "init_level_variables" },
{ 0x965F, "init_light" }, // AUTOADDED
{ 0x9660, "init_light_destructable" }, // AUTOADDED
{ 0x9661, "init_light_flicker" }, // AUTOADDED
{ 0x9662, "init_light_generic_iw7" }, // AUTOADDED
{ 0x9663, "init_light_pulse_iw7" }, // AUTOADDED
{ 0x9664, "init_light_trig" }, // AUTOADDED
{ 0x9665, "init_light_type" }, // AUTOADDED
{ 0x9666, "init_lighting" }, // AUTOADDED
{ 0x9667, "init_lighting_dvars" }, // AUTOADDED
{ 0x9668, "init_lights" }, // AUTOADDED
{ 0x9669, "init_loadout" }, // AUTOADDED
{ 0x966A, "init_local" }, // AUTOADDED
{ 0x966B, "init_location" }, // AUTOADDED
{ 0x966C, "init_locations" }, // AUTOADDED
{ 0x966D, "init_locked_list" },
{ 0x9670, "init_loot" },
{ 0x9671, "init_lost_and_found" },
{ 0x9672, "init_magic_wheel" },
{ 0x9678, "init_match_ufo_tone" },
{ 0x9679, "init_matchdata" },
{ 0x967A, "init_medium_counter_slot" },
{ 0x967B, "init_menu" },
{ 0x968B, "init_more_machines_func" },
{ 0x9691, "init_moving_target_waves" },
{ 0x9699, "init_neil_quest" },
{ 0x969A, "init_nerf_scalar" },
{ 0x96A9, "init_pap_boat" },
{ 0x96AB, "init_pap_upgrade" },
{ 0x96AD, "init_part_1" },
{ 0x96AE, "init_part_2" },
{ 0x96AF, "init_part_3" },
{ 0x96C6, "init_perk_machine" },
{ 0x96C7, "init_perk_machines_func" },
{ 0x96CF, "init_perks_from_table" },
{ 0x96D0, "init_perktable" }, // AUTOADDED
{ 0x96D3, "init_personality_camper" },
{ 0x96D4, "init_personality_default" },
{ 0x96D5, "init_pillage_drops" },
{ 0x96D6, "init_place_tone_generator" },
{ 0x96D8, "init_player_achievement" },
{ 0x96DB, "init_player_consumables" },
{ 0x96DF, "init_player_gameobjects" },
{ 0x96EB, "init_player_score" },
{ 0x96F5, "init_powerup_data" },
{ 0x96F6, "init_powerup_effects" },
{ 0x96F7, "init_powerup_flags" },
{ 0x9704, "init_rangeattack" },
{ 0x9705, "init_rat_a_tat_machines_func" },
{ 0x970C, "init_reverb" }, // AUTOADDED
{ 0x970D, "init_revive_icon_list" },
{ 0x970E, "init_revive_machines_func" },
{ 0x9713, "init_rockettrap" },
{ 0x9719, "init_run_machines_func" },
{ 0x9721, "init_scrambler" },
{ 0x9724, "init_script" },
{ 0x9729, "init_second_speaker_defense" },
{ 0x972F, "init_selfrevive_door" },
{ 0x9742, "init_shredder_data" },
{ 0x9749, "init_sliding_power_doors" },
{ 0x974A, "init_smack_machines_func" },
{ 0x974B, "init_small_counter_slot" },
{ 0x974F, "init_soul_power" },
{ 0x9751, "init_sounds" },
{ 0x975E, "init_spectate_door" },
{ 0x9764, "init_standee_interaction" },
{ 0x9765, "init_standee_slots" },
{ 0x9779, "init_template_table" }, // AUTOADDED
{ 0x977E, "init_third_speaker_defense" },
{ 0x9786, "init_tool_hud" },
{ 0x9787, "init_tough_machines_func" },
{ 0x978C, "init_trigger_flags" },
{ 0x978F, "init_tutorial_message_array" },
{ 0x9790, "init_ufo_anim" },
{ 0x9791, "init_ufo_projectile_attack" },
{ 0x9792, "init_ufo_quest" },
{ 0x9793, "init_ufo_vfx" },
{ 0x9795, "init_upgrade_weapon" },
{ 0x97AB, "init_wor_items" },
{ 0x97AC, "init_zap_machines_func" },
{ 0x97B2, "init_zombie_entrances" },
{ 0x97B3, "init_zombie_flags" },
{ 0x97B4, "init_zombie_fx" },
{ 0x97B5, "init_zombie_ghosts" },
{ 0x97B6, "init_zombie_perks_callback" },
{ 0x97B7, "init_zombie_scoring" },
{ 0x97BC, "initac130hud" },
{ 0x97C1, "initagentlevelvariables" },
{ 0x97C2, "initagentscriptvariables" }, // AUTOADDED
{ 0x97C4, "initairdropcrate" },
{ 0x97D5, "initawards" }, // AUTOADDED
{ 0x97D6, "initballtimer" },
{ 0x97D7, "initbaseaward" }, // AUTOADDED
{ 0x97D8, "initbasemidmatchaward" }, // AUTOADDED
{ 0x97DB, "initbestscorestatstable" }, // AUTOADDED
{ 0x97DC, "initbombsitespawns" }, // AUTOADDED
{ 0x97DE, "initbotlevelvariables" },
{ 0x97DF, "initbotmapextents" },
{ 0x97E0, "initbroshot" },
{ 0x97E1, "initbroshotfx" }, // AUTOADDED
{ 0x97E2, "initbufferedstats" }, // AUTOADDED
{ 0x97E9, "initclientdvars" },
{ 0x97EA, "initclientdvarssplitscreenspecific" },
{ 0x9802, "initeffects" },
{ 0x9805, "initfacialanims" },
{ 0x980A, "initfx" },
{ 0x980B, "initgameflags" },
{ 0x9819, "initial_active_volumes" },
{ 0x981C, "initial_bomb_location" },
{ 0x981D, "initial_bomb_location_nearest_node" },
{ 0x981E, "initial_bomb_pickup_time" },
{ 0x9826, "initial_pickup_wait_time" },
{ 0x982D, "initial_spawn_time" },
{ 0x9830, "initial_weapon_scale" },
{ 0x9841, "initialize_ball_role" },
{ 0x984D, "initialize_character_group" },
{ 0x9871, "initialize_sd_role" },
{ 0x987B, "initializematchrecording" },
{ 0x987C, "initializematchrules" },
{ 0x987D, "initializeobjectives" }, // AUTOADDED
{ 0x987E, "initializetagpathvariables" }, // AUTOADDED
{ 0x987F, "initialprimaryweapon" },
{ 0x9880, "initialsecondaryweapon" },
{ 0x9891, "initlevelface" },
{ 0x9892, "initlevelflags" },
{ 0x989A, "initmeritdata" },
{ 0x989B, "initmidmatchaward" }, // AUTOADDED
{ 0x989C, "initmidmatchawards" }, // AUTOADDED
{ 0x98A9, "initobjectivecam" }, // AUTOADDED
{ 0x98B3, "initpersstat" },
{ 0x98B6, "initplayerclass" }, // AUTOADDED
{ 0x98BA, "initplayerprestige" },
{ 0x98BB, "initplayerscriptvariables" },
{ 0x98BE, "initplayerstats" },
{ 0x98C0, "initprestige" },
{ 0x98C2, "initridekillstreak" }, // AUTOADDED
{ 0x98C3, "initridekillstreak_internal" }, // AUTOADDED
{ 0x98CD, "initspawnpointvalues" }, // AUTOADDED
{ 0x98CE, "initspawns" }, // AUTOADDED
{ 0x98D6, "initsurvivaltime" }, // AUTOADDED
{ 0x98E6, "initzombiebrute" },
{ 0x98E7, "initzombieghost" },
{ 0x98EA, "initcpvosystem" },
{ 0x98F3, "inlaststand" },
{ 0x9900, "inovertime" }, // AUTOADDED
{ 0x9901, "inplayerportableradar" }, // AUTOADDED
{ 0x9902, "inplayerscrambler" }, // AUTOADDED
{ 0x9903, "inplayersmokescreen" },
{ 0x9909, "input_reactive_radius" },
{ 0x990B, "insert_alien_fuses" },
{ 0x990C, "insert_effect" },
{ 0x9925, "insta_kill" },
{ 0x9926, "instakill" },
{ 0x9928, "instancedata" },
{ 0x992F, "instant_revive" },
{ 0x9A09, "interaction" },
{ 0x9A0A, "interaction_atm_deposit" },
{ 0x9A0B, "interaction_atm_withdrawal" },
{ 0x9A0D, "interaction_cooldown" },
{ 0x9A12, "interaction_hintstrings" },
{ 0x9A14, "interaction_is_ark_quest_station" },
{ 0x9A17, "interaction_is_crafting_station" },
{ 0x9A18, "interaction_is_door_buy" },
{ 0x9A1A, "interaction_is_fortune_teller" },
{ 0x9A1B, "interaction_is_grenade_wall_buy" },
{ 0x9A1D, "interaction_is_perk" },
{ 0x9A20, "interaction_is_shootinggallery" },
{ 0x9A21, "interaction_is_souvenir" },
{ 0x9A22, "interaction_is_special_door_buy" },
{ 0x9A24, "interaction_is_ticket_buy" },
{ 0x9A27, "interaction_is_valid" },
{ 0x9A28, "interaction_is_weapon_buy" },
{ 0x9A29, "interaction_is_weapon_upgrade" },
{ 0x9A2A, "interaction_is_white_ark" },
{ 0x9A2B, "interaction_is_window_entrance" },
{ 0x9A2D, "interaction_jaroslav" },
{ 0x9A33, "interaction_post_activate_delay" },
{ 0x9A34, "interaction_post_activate_update" },
{ 0x9A38, "interaction_purchase_weapon" },
{ 0x9A3C, "interaction_show_fail_reason" },
{ 0x9A3F, "interaction_trigger" },
{ 0x9A43, "interactions" },
{ 0x9A45, "interactions_disabled" },
{ 0x9A52, "interactteam" }, // AUTOADDED
{ 0x9A80, "internal_create_debug_data" },
{ 0x9A81, "internal_pack_default_trace" },
{ 0x9A8E, "interrupter" }, // AUTOADDED
{ 0x9A95, "intransit" },
{ 0x9A9A, "intro_anim_timer" },
{ 0x9AAC, "intro_dialogue_func" },
{ 0x9AAF, "intro_drop_pod_quake_max" },
{ 0x9AB0, "intro_drop_pod_quake_min" },
{ 0x9ACA, "intro_offset" },
{ 0x9ADC, "intro_shown" },
{ 0x9AF5, "introscreen_corner_line" },
{ 0x9AF6, "introscreen_done" },
{ 0x9AFF, "introscreen_overlay" },
{ 0x9B00, "introscreen_text_func" },
{ 0x9B01, "introvisionset" },
{ 0x9B04, "inuse" }, // AUTOADDED
{ 0x9B05, "inuseby" }, // AUTOADDED
{ 0x9B08, "invalid" },
{ 0x9B0B, "invalid_spawn_volume_array" }, // AUTOADDED
{ 0x9B0F, "invaliditems" }, // AUTOADDED
{ 0x9B11, "invalidparentoverridecallback" }, // AUTOADDED
{ 0x9B2A, "investigate_someone_using_bomb_update" },
{ 0x9B30, "invulnerabilityframe" }, // AUTOADDED
{ 0x9B31, "invultime_onshield" },
{ 0x9B32, "invultime_postshield" },
{ 0x9B33, "invultime_preshield" },
{ 0x9B3C, "ips_to_mph" },
{ 0x9B3F, "is3d" },
{ 0x9B4E, "is_activated" },
{ 0x9B51, "is_afflicted" },
{ 0x9B53, "is_agent_scripted" }, // AUTOADDED
{ 0x9B58, "is_akimbo" },
{ 0x9B5A, "is_alien_agent" },
{ 0x9B5F, "is_all_power_on" },
{ 0x9B6A, "is_arc_death" },
{ 0x9B6B, "is_arcane_attachment" },
{ 0x9B6D, "is_arm_or_head_damage" },
{ 0x9B73, "is_axe_weapon" },
{ 0x9B79, "is_being_revived" },
{ 0x9B81, "is_burning" },
{ 0x9B85, "is_casual_mode" },
{ 0x9B8A, "is_chem_burning" },
{ 0x9B8E, "is_clientmatchdata_data" },
{ 0x9B8F, "is_clientmatchdata_struct" },
{ 0x9B95, "is_coaster_spawner" },
{ 0x9B96, "is_coaster_zombie" },
{ 0x9B97, "is_codxp" },
{ 0x9B9E, "is_completed" },
{ 0x9BA0, "is_consumable_active" },
{ 0x9BA7, "is_cop" },
{ 0x9BA9, "is_correct_color" },
{ 0x9BAC, "is_crawler" },
{ 0x9BAD, "is_createfx_type" },
{ 0x9BB0, "is_dancing" },
{ 0x9BB4, "is_default_attachment" },
{ 0x9BBE, "is_distance_shot" },
{ 0x9BC9, "is_electrified" },
{ 0x9BCA, "is_elite_attack" },
{ 0x9BCC, "is_empty_string" },
{ 0x9BD2, "is_ent_filtered_out" },
{ 0x9BD3, "is_ent_or_struct" }, // AUTOADDED
{ 0x9BD4, "is_entangled" },
{ 0x9BD8, "is_escape_gametype" },
{ 0x9BDB, "is_explosive_kill" },
{ 0x9BE1, "is_fast_traveling" },
{ 0x9BEA, "is_friendly_damage" }, // AUTOADDED
{ 0x9BEF, "is_ghost_attack_disabled" },
{ 0x9BF1, "is_goal_reached_func" },
{ 0x9BF3, "is_goon" },
{ 0x9BF7, "is_grenade" },
{ 0x9BFB, "is_hardcore_mode" },
{ 0x9BFF, "is_higher_priority" }, // AUTOADDED
{ 0x9C01, "is_hive_explosion" },
{ 0x9C03, "is_holding_deployable" },
{ 0x9C04, "is_holding_pistol" },
{ 0x9C0C, "is_immune_against_nuke" },
{ 0x9C0E, "is_in_active_volume" },
{ 0x9C10, "is_in_afterlife_arcade" },
{ 0x9C12, "is_in_any_room_volume" },
{ 0x9C13, "is_in_array" },
{ 0x9C15, "is_in_callable_location" },
{ 0x9C17, "is_in_fake_phase_shift" },
{ 0x9C22, "is_incompatible_weapon" },
{ 0x9C23, "is_indoor_map" }, // AUTOADDED
{ 0x9C2D, "is_killed_by_kill_trigger" },
{ 0x9C38, "is_limb" },
{ 0x9C41, "is_matchdata_struct" },
{ 0x9C42, "is_melee_weapon" },
{ 0x9C43, "is_mod_attachment" },
{ 0x9C47, "is_mutilate_explosion" },
{ 0x9C48, "is_neil" },
{ 0x9C4C, "is_no_nerf" },
{ 0x9C50, "is_non_standard_zombie" },
{ 0x9C52, "is_normal_upright" },
{ 0x9C54, "is_off_grid" },
{ 0x9C5E, "is_pap_attachment" },
{ 0x9C62, "is_perk_attachment" },
{ 0x9C70, "is_player_gamepad_enabled" },
{ 0x9C78, "is_player_near_interaction_point" },
{ 0x9C80, "is_playing" },
{ 0x9C82, "is_playing_pain_breathing_sfx" },
{ 0x9C8B, "is_precalculated_entrance" },
{ 0x9C8F, "is_primary_melee_weapon" },
{ 0x9C95, "is_protecting_flag" },
{ 0x9C9D, "is_regening_health" },
{ 0x9C9E, "is_relics_enabled" },
{ 0x9CA2, "is_reserved" },
{ 0x9CA6, "is_ricochet_damage" },
{ 0x9CAB, "is_roomtype_valid" },
{ 0x9CAF, "is_scoring_disabled" },
{ 0x9CB3, "is_scripted_agent" }, // AUTOADDED
{ 0x9CBD, "is_shooting" },
{ 0x9CC1, "is_slide_land_sfx_playing" },
{ 0x9CC2, "is_slide_sfx_playing" },
{ 0x9CCB, "is_spawnid_a_less_than_b" }, // AUTOADDED
{ 0x9CD0, "is_spitter_gas" },
{ 0x9CD1, "is_spitter_spit" },
{ 0x9CDD, "is_suicide_bomber" },
{ 0x9CE6, "is_thrown_back_grenade" },
{ 0x9CEB, "is_trap" },
{ 0x9CEC, "is_traversing" },
{ 0x9CEE, "is_true" },
{ 0x9CEF, "is_turned" },
{ 0x9CF1, "is_unlocked" },
{ 0x9CF3, "is_upgrade_enabled" },
{ 0x9CF9, "is_using_extinction_tokens" },
{ 0x9CFF, "is_valid_achievement" },
{ 0x9D01, "is_valid_clientside_exploder_name" },
{ 0x9D04, "is_valid_perk" },
{ 0x9D05, "is_valid_player" },
{ 0x9D0B, "is_valid_weapon_hit" },
{ 0x9D0C, "is_vector_in_front_cone_of_grey" },
{ 0x9D13, "is_vo_system_busy" },
{ 0x9D18, "is_weapon_purchase_disabled" },
{ 0x9D1B, "is_weapon_unlocked" },
{ 0x9D1D, "is_weight_a_less_than_b" },
{ 0x9D20, "is_zombie_agent" },
{ 0x9D22, "is_zombies_mode" },
{ 0x9D25, "isactive" }, // AUTOADDED
{ 0x9D29, "isemped" },
{ 0x9D2B, "isagent" },
{ 0x9D2C, "isaifunc" }, // AUTOADDED
{ 0x9D2D, "isaigameparticipant" },
{ 0x9D2E, "isaimedataimtarget" },
{ 0x9D31, "isairdenied" },
{ 0x9D32, "isairdrop" }, // AUTOADDED
{ 0x9D33, "isairdropmarker" },
{ 0x9D36, "isaiteamparticipant" },
{ 0x9D3D, "isaltforgefreezeweapon" },
{ 0x9D3E, "isaltmodeweapon" },
{ 0x9D46, "isanymlgmatch" },
{ 0x9D47, "isanymonitoredweaponswitchinprogress" },
{ 0x9D4A, "isarkdamage" },
{ 0x9D4D, "isasniper" },
{ 0x9D4E, "isassaultkillstreak" },
{ 0x9D50, "isatcovernode" }, // AUTOADDED
{ 0x9D5A, "isattacking" }, // AUTOADDED
{ 0x9D5F, "isbackkill" }, // AUTOADDED
{ 0x9D67, "isbehindmeleevictim" }, // AUTOADDED
{ 0x9D69, "isbeingcaptured" }, // AUTOADDED
{ 0x9D6B, "isblinded" },
{ 0x9D6C, "isbombcarrier" },
{ 0x9D6E, "isbombsiteweapon" }, // AUTOADDED
{ 0x9D6F, "isboosted" },
{ 0x9D74, "isbulletdamage" },
{ 0x9D75, "isbulletweapon" },
{ 0x9D78, "iscacprimaryweapon" },
{ 0x9D79, "iscacsecondaryweapon" },
{ 0x9D7A, "iscallouttypeconcat" }, // AUTOADDED
{ 0x9D7B, "iscallouttypeqa" }, // AUTOADDED
{ 0x9D7C, "iscallouttypereport" }, // AUTOADDED
{ 0x9D7F, "iscapturingcrate" },
{ 0x9D81, "iscarrying" }, // AUTOADDED
{ 0x9D85, "ischangingweapon" },
{ 0x9D8A, "ischilled" }, // AUTOADDED
{ 0x9D90, "isconsumableitem" }, // AUTOADDED
{ 0x9D91, "iscontrolled" }, // AUTOADDED
{ 0x9D92, "iscontrollingproxyagent" }, // AUTOADDED
{ 0x9D93, "iscooked" }, // AUTOADDED
{ 0x9D94, "iscorempgametype" }, // AUTOADDED
{ 0x9D95, "iscosmeticitem" }, // AUTOADDED
{ 0x9D9A, "iscp" },
{ 0x9D9E, "iscrawling" },
{ 0x9DA5, "iscurrentweapon" },
{ 0x9DB7, "isdeathfromabove" }, // AUTOADDED
{ 0x9DBC, "isdefusing" },
{ 0x9DBD, "isdeploying" }, // AUTOADDED
{ 0x9DBE, "isdepot" }, // AUTOADDED
{ 0x9DBF, "isdeserteagle" }, // AUTOADDED
{ 0x9DC0, "isdestroyed" }, // AUTOADDED
{ 0x9DC1, "isdestructibleweapon" },
{ 0x9DC6, "isdoingsplash" }, // AUTOADDED
{ 0x9DC7, "isdonewithsearchmove" }, // AUTOADDED
{ 0x9DC8, "isdoublejumpanimdone" }, // AUTOADDED
{ 0x9DC9, "isdowned" }, // AUTOADDED
{ 0x9DCA, "isdriving" }, // AUTOADDED
{ 0x9DCB, "isdronepackage" }, // AUTOADDED
{ 0x9DCC, "isdroppableweapon" }, // AUTOADDED
{ 0x9DCD, "isducking" }, // AUTOADDED
{ 0x9DCE, "isdummyarmcrate" }, // AUTOADDED
{ 0x9DCF, "isdynamicspawn" }, // AUTOADDED
{ 0x9DD6, "isenemy" },
{ 0x9DD7, "isenemyinfrontofme" },
{ 0x9DDD, "isentangled" },
{ 0x9DDF, "isentityphaseshifted" },
{ 0x9DE2, "isenvironmentweapon" },
{ 0x9DE5, "isexcluded" },
{ 0x9DE6, "isexplosivedangeroustoplayer" }, // AUTOADDED
{ 0x9DE7, "isexplosivemissile" }, // AUTOADDED
{ 0x9DE8, "isexposed" }, // AUTOADDED
{ 0x9DE9, "isexposed_crouch" }, // AUTOADDED
{ 0x9DEA, "isexposed_prone" }, // AUTOADDED
{ 0x9DEB, "isfacialstateallowed" }, // AUTOADDED
{ 0x9DEC, "isfacing" }, // AUTOADDED
{ 0x9DED, "isfacingenemy" }, // AUTOADDED
{ 0x9DEE, "isfactorinuse" }, // AUTOADDED
{ 0x9DEF, "isfactorregistered" }, // AUTOADDED
{ 0x9DF5, "isfirstarmageddonmeteorhit" },
{ 0x9DFA, "isflashbanged" },
{ 0x9DFB, "isflashed" },
{ 0x9DFC, "isflashing" }, // AUTOADDED
{ 0x9DFD, "isfloat" }, // AUTOADDED
{ 0x9DFE, "isflyingkillstreak" }, // AUTOADDED
{ 0x9DFF, "isfmjdamage" },
{ 0x9E02, "isforgefreezeweapon" },
{ 0x9E06, "isfriendlyfire" }, // AUTOADDED
{ 0x9E07, "isfriendlyteam" }, // AUTOADDED
{ 0x9E08, "isfriendlytobox" }, // AUTOADDED
{ 0x9E09, "isfriendlytoims" }, // AUTOADDED
{ 0x9E0A, "isfriendlytosentry" }, // AUTOADDED
{ 0x9E0C, "isfrozen" },
{ 0x9E0E, "isgameparticipant" }, // AUTOADDED
{ 0x9E10, "isgimme" }, // AUTOADDED
{ 0x9E11, "isgl3weapon" },
{ 0x9E19, "isgrenadedeployable" },
{ 0x9E1A, "isgreymeleeallowed" },
{ 0x9E1E, "ishackweapon" }, // AUTOADDED
{ 0x9E22, "isheadless" },
{ 0x9E27, "isheadshot" },
{ 0x9E29, "ishealthboosted" },
{ 0x9E2A, "ishealthregendisabled" },
{ 0x9E32, "isholdingdeployablebox" },
{ 0x9E35, "ishome" }, // AUTOADDED
{ 0x9E37, "ishovering" },
{ 0x9E3A, "isignoremeenabled" },
{ 0x9E3C, "isinbound" },
{ 0x9E3D, "isinbound_single" }, // AUTOADDED
{ 0x9E3E, "isinboundingspere" },
{ 0x9E49, "isinitialinfected" }, // AUTOADDED
{ 0x9E4A, "isinkillcam" },
{ 0x9E4F, "isinremotenodeploy" }, // AUTOADDED
{ 0x9E50, "isinset" },
{ 0x9E53, "isinuse" }, // AUTOADDED
{ 0x9E54, "isinvalidzone" },
{ 0x9E55, "isinventoryprimaryweapon" },
{ 0x9E57, "isinzone" }, // AUTOADDED
{ 0x9E58, "isitem" }, // AUTOADDED
{ 0x9E59, "isjuggernaut" },
{ 0x9E5A, "isjuggernautdef" },
{ 0x9E5B, "isjuggernautgl" },
{ 0x9E5C, "isjuggernautlevelcustom" },
{ 0x9E5D, "isjuggernautmaniac" },
{ 0x9E5E, "isjuggernautrecon" },
{ 0x9E60, "isjuggernautweapon" },
{ 0x9E62, "isjuiced" }, // AUTOADDED
{ 0x9E63, "iskillstreak" },
{ 0x9E66, "iskillstreakblockedforbots" }, // AUTOADDED
{ 0x9E67, "iskillstreakcalloutsplash" }, // AUTOADDED
{ 0x9E68, "iskillstreakdenied" },
{ 0x9E69, "iskillstreakitem" }, // AUTOADDED
{ 0x9E6C, "iskillstreakweapon" },
{ 0x9E6D, "isknifeonly" },
{ 0x9E74, "islastwinbytwo" }, // AUTOADDED
{ 0x9E78, "isleaving" },
{ 0x9E7A, "isleft2d" },
{ 0x9E83, "islongrangeai" },
{ 0x9E92, "ismarkedtarget" },
{ 0x9E99, "ismeleevalid" },
{ 0x9E9A, "ismeleevalid_common" },
{ 0x9E9C, "ismeritunlocked" },
{ 0x9EA2, "ismissiletargeted" },
{ 0x9EA6, "ismlgmatch" }, // AUTOADDED
{ 0x9EA7, "ismlgprivatematch" }, // AUTOADDED
{ 0x9EA8, "ismlgsystemlink" }, // AUTOADDED
{ 0x9EA9, "ismoddedroundgame" }, // AUTOADDED
{ 0x9EAE, "ismusicenabled" }, // AUTOADDED
{ 0x9EB1, "isnode3d" },
{ 0x9EB2, "isnodecover3d" },
{ 0x9EB3, "isnodecovercrouch" },
{ 0x9EB4, "isnodecoverleft" },
{ 0x9EB5, "isnodecovermulticorner" }, // AUTOADDED
{ 0x9EB6, "isnodecoverorconceal" }, // AUTOADDED
{ 0x9EB7, "isnodecoverright" },
{ 0x9EB8, "isnodeexposed3d" },
{ 0x9EBD, "isobjectivebased" }, // AUTOADDED
{ 0x9EBE, "isoffhandprimaryweaponsallowed" },
{ 0x9EBF, "isoffhandsecondaryweaponsallowed" },
{ 0x9EC1, "isoffhandweaponsallowed" },
{ 0x9EC5, "isonemanarmymenu" }, // AUTOADDED
{ 0x9EC6, "isonhumanteam" },
{ 0x9ECC, "isoperationmerit" },
{ 0x9ED0, "isownercarepakage" },
{ 0x9ED2, "ispainted" }, // AUTOADDED
{ 0x9ED3, "ispartdismembered" },
{ 0x9ED7, "ispathdataavailable" },
{ 0x9EDB, "ispendingdeath" },
{ 0x9EDC, "isperformingmaneuver" }, // AUTOADDED
{ 0x9EE4, "isplaced" }, // AUTOADDED
{ 0x9EE5, "isplantedequipment" }, // AUTOADDED
{ 0x9EE6, "isplanting" },
{ 0x9EE7, "isplayer" },
{ 0x9EEB, "isplayerffaenemy" },
{ 0x9EF3, "isplayeronenemyteam" },
{ 0x9EF4, "isplayeroutsideofanybombsite" }, // AUTOADDED
{ 0x9EF5, "isplayeroutsideofcurbombsite" }, // AUTOADDED
{ 0x9EFA, "isplayerteleporting" },
{ 0x9EFB, "isplayertimer" },
{ 0x9EFC, "isplayerusing" }, // AUTOADDED
{ 0x9EFD, "isplayerusingbox" }, // AUTOADDED
{ 0x9EFF, "isplayerweaponatmaxxp" }, // AUTOADDED
{ 0x9F02, "isplayingsolo" },
{ 0x9F08, "ispoweritem" }, // AUTOADDED
{ 0x9F0E, "isprimaryweapon" },
{ 0x9F10, "isprotectedbyaxeblock" },
{ 0x9F11, "isprotectedbyriotshield" },
{ 0x9F13, "isragdollzerog" },
{ 0x9F16, "isreadytofire" }, // AUTOADDED
{ 0x9F19, "isreallyalive" },
{ 0x9F1B, "isreaping" },
{ 0x9F1C, "isrecoilreducingweapon" },
{ 0x9F1E, "isregisteredevent" }, // AUTOADDED
{ 0x9F1F, "isrelativeteam" }, // AUTOADDED
{ 0x9F20, "isreliablyswitchingtoweapon" }, // AUTOADDED
{ 0x9F21, "isreloading" },
{ 0x9F23, "isrepairing" },
{ 0x9F24, "isresetting" },
{ 0x9F28, "isreviving" },
{ 0x9F2A, "isrewinding" },
{ 0x9F2D, "isriotshield" },
{ 0x9F32, "isroundbased" }, // AUTOADDED
{ 0x9F35, "isscoreboosting" },
{ 0x9F36, "isscoring" },
{ 0x9F37, "isscoringdisabled" },
{ 0x9F3D, "isselectableweapon" }, // AUTOADDED
{ 0x9F44, "issentry" },
{ 0x9F4F, "isshotgun" },
{ 0x9F50, "isshotgunai" },
{ 0x9F56, "issinglehitweapon" }, // AUTOADDED
{ 0x9F58, "isskeetshooter" }, // AUTOADDED
{ 0x9F62, "issniperrifle" },
{ 0x9F63, "issoldier" }, // AUTOADDED
{ 0x9F64, "issp" },
{ 0x9F65, "issp_towerdefense" },
{ 0x9F69, "isspawningonbattlebuddy" },
{ 0x9F6A, "isspeakerinrange" },
{ 0x9F6F, "isspecialistkillstreak" }, // AUTOADDED
{ 0x9F77, "isstatelocked" },
{ 0x9F79, "issteeldragon" },
{ 0x9F7C, "isstrstart" },
{ 0x9F7D, "isstuck" },
{ 0x9F80, "isstunned" },
{ 0x9F81, "isstunnedorblinded" }, // AUTOADDED
{ 0x9F88, "issuperinuse" }, // AUTOADDED
{ 0x9F89, "issupercharging" }, // AUTOADDED
{ 0x9F8A, "issuperready" }, // AUTOADDED
{ 0x9F8D, "issuperweapon" },
{ 0x9F8E, "issupportkillstreak" }, // AUTOADDED
{ 0x9F8F, "issuppressedwrapper" },
{ 0x9F90, "issurvivorkill" }, // AUTOADDED
{ 0x9F91, "isswitchingteams" }, // AUTOADDED
{ 0x9F92, "istactical" },
{ 0x9F97, "istarget" }, // AUTOADDED
{ 0x9F98, "istargetingoff" }, // AUTOADDED
{ 0x9F99, "istatechange" }, // AUTOADDED
{ 0x9F9A, "isteam" }, // AUTOADDED
{ 0x9F9B, "isteaminlaststand" }, // AUTOADDED
{ 0x9F9C, "isteamintelcomplete" }, // AUTOADDED
{ 0x9F9D, "isteamparticipant" },
{ 0x9F9E, "isteamsaying" }, // AUTOADDED
{ 0x9F9F, "isteamspeaking" },
{ 0x9FA0, "isteamswitchbalanced" }, // AUTOADDED
{ 0x9FA2, "isteleportenabled" },
{ 0x9FAA, "istimetobeatrulegametype" }, // AUTOADDED
{ 0x9FAB, "istimetobeatvalid" }, // AUTOADDED
{ 0x9FAC, "issmallmissile" }, // AUTOADDED
{ 0x9FB3, "istrue" },
{ 0x9FB6, "isttlosdataavailable" }, // AUTOADDED
{ 0x9FBE, "isusabilityallowed" },
{ 0x9FBF, "isusable" },
{ 0x9FC2, "isusingdefaultclass" }, // AUTOADDED
{ 0x9FC3, "isusinggunship" },
{ 0x9FC5, "isusingprimary" },
{ 0x9FC6, "isusingremote" },
{ 0x9FC8, "isusingsecondary" },
{ 0x9FC9, "isusingshotgun" },
{ 0x9FCA, "isusingsidearm" },
{ 0x9FCB, "isusingsupercard" },
{ 0x9FCC, "isusingvanguard" }, // AUTOADDED
{ 0x9FD2, "isvalidbestweapon" }, // AUTOADDED
{ 0x9FD4, "isvalidclass" },
{ 0x9FE8, "isvalidthrowingknifekill" },
{ 0x9FEA, "isvalidweapon" },
{ 0x9FEC, "isvalidzombietarget" },
{ 0x9FED, "isvalidzombieweapon" },
{ 0x9FFD, "isweaponallowed" },
{ 0xA001, "isweaponitem" }, // AUTOADDED
{ 0xA003, "isweaponmerit" },
{ 0xA009, "isweaponswitchallowed" },
{ 0xA00B, "iswinbytworulegametype" }, // AUTOADDED
{ 0xA00C, "iswinningteam" }, // AUTOADDED
{ 0xA021, "item_handleownerdisconnect" },
{ 0xA022, "item_keep_rotating" },
{ 0xA025, "item_oncarrierdeath" },
{ 0xA026, "item_oncarrierdisconnect" },
{ 0xA027, "item_ongameended" },
{ 0xA02C, "item_outline_weapon_monitor" },
{ 0xA030, "item_timeout" },
{ 0xA033, "iteminits" },
{ 0xA034, "itemkills" },
{ 0xA035, "itempicked" },
{ 0xA036, "itemremoveammofromaltmodes" }, // AUTOADDED
{ 0xA039, "itemtype" },
{ 0xA3BC, "jackaldelete" }, // AUTOADDED
{ 0xA3BF, "jackalexplode" }, // AUTOADDED
{ 0xA3F3, "jackalgettargets" }, // AUTOADDED
{ 0xA406, "jackalleave" }, // AUTOADDED
{ 0xA412, "jackals" }, // AUTOADDED
{ 0xA428, "jackpot_tag" }, // AUTOADDED
{ 0xA429, "jackpot_targetfx" }, // AUTOADDED
{ 0xA42A, "jackpot_zone" },
{ 0xA42B, "jackpotpileicon" }, // AUTOADDED
{ 0xA42C, "jackpotpileobjid" }, // AUTOADDED
{ 0xA438, "jaroslav_hint_logic" },
{ 0xA439, "jaroslav_interaction_vo" },
{ 0xA43A, "jaroslav_original_cost" },
{ 0xA44A, "jaw" },
{ 0xA49D, "joinedinprogress" },
{ 0xA49E, "joining_team" }, // AUTOADDED
{ 0xA49F, "joint1" }, // AUTOADDED
{ 0xA4A0, "joint2" }, // AUTOADDED
{ 0xA4A1, "jugg" },
{ 0xA4A5, "juggernautcratethink" },
{ 0xA4A8, "juggernautoverlay" },
{ 0xA4B0, "juicedicon" },
{ 0xA4B1, "juicedtimer" },
{ 0xA4BD, "jukebox_songs" },
{ 0xA4BE, "jukebox_start" },
{ 0xA4BF, "jukebox_table" },
{ 0xA4F5, "jumptoanywherebutherespawns" },
{ 0xA55F, "kb_locked" },
{ 0xA570, "keep_rotate" },
{ 0xA575, "keepcarryweapon" },
{ 0xA578, "keepiconpositioned" },
{ 0xA57C, "keeppositioned" },
{ 0xA581, "keepweaponsloaded" },
{ 0xA585, "kepler_donations" },
{ 0xA59F, "keyname" },
{ 0xA5A0, "keyobject" }, // AUTOADDED
{ 0xA5A4, "kick_for_inactivity" },
{ 0xA5AD, "kickifdontspawn" },
{ 0xA5AF, "kickwait" }, // AUTOADDED
{ 0xA5C6, "kill_closest_enemies" },
{ 0xA5F3, "kill_link_ent_on_death" },
{ 0xA5F6, "kill_me_if_stuck" },
{ 0xA5F8, "kill_nodamage_monitor" },
{ 0xA5FE, "kill_order_on_dance_floor" },
{ 0xA614, "kill_selected_enemy" },
{ 0xA616, "kill_sequence_completed" },
{ 0xA61A, "kill_streak" },
{ 0xA623, "kill_trigger_event_processed" },
{ 0xA624, "kill_trigger_event_was_processed" },
{ 0xA626, "kill_turned_zombie_after_time" },
{ 0xA631, "kill_zombies" },
{ 0xA632, "killagent" }, // AUTOADDED
{ 0xA636, "killcam" }, // AUTOADDED
{ 0xA63A, "killcament" }, // AUTOADDED
{ 0xA63C, "killcamentnum" }, // AUTOADDED
{ 0xA63F, "killcammiscitems" }, // AUTOADDED
{ 0xA640, "killcamoffset" }, // AUTOADDED
{ 0xA642, "killchains" },
{ 0xA649, "killdog" }, // AUTOADDED
{ 0xA64E, "killedby" },
{ 0xA650, "killedkillstreak" },
{ 0xA656, "killedself" }, // AUTOADDED
{ 0xA65D, "killenemiesinfov" },
{ 0xA664, "killhardpointvfx" }, // AUTOADDED
{ 0xA66A, "killnearbyzombies" },
{ 0xA66D, "killplayerfromcrate_dodamage" },
{ 0xA66E, "killplayerfromcrate_fastvelocitypush" },
{ 0xA672, "killrepulsorvictim" },
{ 0xA675, "killsasinfected" },
{ 0xA676, "killsassurvivor" },
{ 0xA681, "killsperweapon" },
{ 0xA682, "killsperweaponlog" },
{ 0xA684, "killsthislife" },
{ 0xA685, "killsthislifeperweapon" },
{ 0xA68B, "killstreak_botcanuse" }, // AUTOADDED
{ 0xA68C, "killstreak_botfunc" }, // AUTOADDED
{ 0xA68D, "killstreak_botparm" }, // AUTOADDED
{ 0xA68F, "killstreak_global_bp_exists_for" }, // AUTOADDED
{ 0xA690, "killstreak_info" }, // AUTOADDED
{ 0xA693, "killstreakcratethink" },
{ 0xA695, "killstreakdamaged" }, // AUTOADDED
{ 0xA696, "killstreakdamagefilter" },
{ 0xA6A0, "killstreakhit" },
{ 0xA6A3, "killstreakkilled" },
{ 0xA6AC, "killstreaks_array" }, // AUTOADDED
{ 0xA6AD, "killstreakscaler" },
{ 0xA6B2, "killstreaksetups" }, // AUTOADDED
{ 0xA6BB, "killstreaktype" },
{ 0xA6C5, "killstreakweildweapons" },
{ 0xA6C6, "killswithitem" },
{ 0xA6C8, "killtranspondervictim" },
{ 0xA6D2, "kinetic_pulse_fx" },
{ 0xA702, "knife_trigger" }, // AUTOADDED
{ 0xA708, "knifeteleownerinvalid" },
{ 0xA70A, "knock_off_battery" },
{ 0xA729, "ks_airsuperiority_handleincoming" },
{ 0xA72A, "ks_airsuperiority_monitorproximity" },
{ 0xA72B, "ks_laserguidedmissile_handleincoming" },
{ 0xA72C, "ks_laserguidedmissile_monitorproximity" },
{ 0xA731, "ks_watch_death_stop_sound" },
{ 0xA7A3, "ladderdeathsthisweapon" },
{ 0xA7A4, "ladderindex" },
{ 0xA7A5, "ladderkillsthisweapon" },
{ 0xA84C, "lanterns" }, // AUTOADDED
{ 0xA858, "largeessencefx" },
{ 0xA859, "largeprojectiledamage" }, // AUTOADDED
{ 0xA85F, "lasedstrikecrateactive" },
{ 0xA867, "laser_damage_trigger_logic" },
{ 0xA86B, "laser_on" }, // AUTOADDED
{ 0xA86D, "laser_target_handler" },
{ 0xA86E, "laser_timeout" },
{ 0xA872, "laserattackstarttime" },
{ 0xA873, "laserenemy" },
{ 0xA878, "laseron" },
{ 0xA88A, "last_atk_bomber_death_time" },
{ 0xA88B, "last_attack_time" },
{ 0xA88D, "last_bomb_location" },
{ 0xA89D, "last_commanded_bot" },
{ 0xA89F, "last_crafting_item_drop_time" },
{ 0xA8A2, "last_damage_time_on_player" },
{ 0xA8A5, "last_death_pos" },
{ 0xA8A9, "last_displayed_ent" },
{ 0xA8AF, "last_door_loc" },
{ 0xA8B4, "last_drop_time" },
{ 0xA8B7, "last_enemy_seen" },
{ 0xA8B8, "last_enemy_seen_time" },
{ 0xA8BA, "last_enemy_sight_time" },
{ 0xA8BC, "last_event_wave" },
{ 0xA8C1, "last_ghost_attack_time" },
{ 0xA8C2, "last_global_badplace_time" }, // AUTOADDED
{ 0xA8C7, "last_ground_fx_time" },
{ 0xA8CA, "last_health_regen_time" },
{ 0xA8D0, "last_infected_class" },
{ 0xA8D1, "last_infected_hiding_loc" },
{ 0xA8D2, "last_infected_hiding_time" },
{ 0xA8D3, "last_interaction_point" },
{ 0xA8D4, "last_investigation_time" },
{ 0xA8D9, "last_killtag_tactical_goal_pos" },
{ 0xA8DB, "last_large_rod_target" }, // AUTOADDED
{ 0xA8DC, "last_large_rod_time" }, // AUTOADDED
{ 0xA8E0, "last_loot_drop" },
{ 0xA8E1, "last_losing_flag_react" },
{ 0xA8E5, "last_melee_ti_check" },
{ 0xA8F7, "last_powers_dropped" },
{ 0xA8FB, "last_revive_fail_time" },
{ 0xA902, "last_selected_entity_has_changed" },
{ 0xA904, "last_sentry" }, // AUTOADDED
{ 0xA912, "last_spot" },
{ 0xA913, "last_stand_pistol" },
{ 0xA914, "last_stand_player_down_slide" },
{ 0xA915, "last_stand_weapons" },
{ 0xA91A, "last_tag_pile_location" },
{ 0xA91B, "last_tag_pile_time" },
{ 0xA91F, "last_ticket_item_outlined" },
{ 0xA920, "last_time_jumped_for_tag" },
{ 0xA921, "last_time_used" },
{ 0xA924, "last_used_time" }, // AUTOADDED
{ 0xA92C, "last_weapon" },
{ 0xA92D, "last_zombie_hit_time" },
{ 0xA930, "lastaction" }, // AUTOADDED
{ 0xA931, "lastactivatetime" },
{ 0xA93D, "lastarchetypeinfo" }, // AUTOADDED
{ 0xA94A, "lastbucket" }, // AUTOADDED
{ 0xA94F, "lastcaptime" },
{ 0xA950, "lastcaptureteam" },
{ 0xA956, "lastcarrier" },
{ 0xA957, "lastcarrierscored" },
{ 0xA958, "lastcarrierteam" },
{ 0xA95C, "lastclass" }, // AUTOADDED
{ 0xA964, "lastdamagedir" },
{ 0xA965, "lastdamagedtime" }, // AUTOADDED
{ 0xA96A, "lastdamagetime" },
{ 0xA970, "lastdamagewasfromenemy" },
{ 0xA971, "lastdeathicon" }, // AUTOADDED
{ 0xA972, "lastdeathpos" }, // AUTOADDED
{ 0xA978, "lastdroppableweaponobj" },
{ 0xA97B, "lastenemydeathpos" },
{ 0xA97C, "lastenemypos" },
{ 0xA97E, "lastenemysightposold" },
{ 0xA97F, "lastenemysightposselforigin" },
{ 0xA980, "lastenemysighttime" }, // AUTOADDED
{ 0xA981, "lastenemytime" },
{ 0xA98C, "lastfraggrenadetoplayerstart" },
{ 0xA991, "lastgrenadesuicidetime" },
{ 0xA99F, "lasthittime" },
{ 0xA9A0, "lasthostmigrationstate" }, // AUTOADDED
{ 0xA9A1, "lastindex" }, // AUTOADDED
{ 0xA9A2, "lastkilldogtime" }, // AUTOADDED
{ 0xA9A3, "lastkilledby" }, // AUTOADDED
{ 0xA9A6, "lastkillsplash" },
{ 0xA9A9, "lastkilltime" },
{ 0xA9AC, "lastlegitimateattacker" }, // AUTOADDED
{ 0xA9B5, "lastmansd" },
{ 0xA9C2, "lastmultikilltime" },
{ 0xA9D7, "lastradiotransmission" },
{ 0xA9EC, "lastselfvotime" }, // AUTOADDED
{ 0xA9EE, "lastshotfiredtime" }, // AUTOADDED
{ 0xA9F4, "lastspawnpoint" }, // AUTOADDED
{ 0xA9F5, "lastspawnteam" }, // AUTOADDED
{ 0xA9F6, "lastspawntime" },
{ 0xA9FB, "laststand_currency_penalty_amount_func" },
{ 0xA9FD, "laststand_enter_gamemodespecificaction" },
{ 0xA9FE, "laststand_enter_levelspecificaction" },
{ 0xA9FF, "laststand_exit_gamemodespecificaction" },
{ 0xAA03, "laststand_record" },
{ 0xAA08, "laststanding" }, // AUTOADDED
{ 0xAA0B, "laststandnumber" },
{ 0xAA0C, "laststandparams" },
{ 0xAA0D, "laststandrespawnplayer" },
{ 0xAA0E, "laststandrespawnplayerhorde" }, // AUTOADDED
{ 0xAA0F, "laststandrevivehorde" }, // AUTOADDED
{ 0xAA10, "laststandstarttime" },
{ 0xAA15, "laststandrevivetimer" },
{ 0xAA1A, "laststandwaittillrevivebyteammate" },
{ 0xAA1B, "laststate" }, // AUTOADDED
{ 0xAA2C, "lastthrowtime" },
{ 0xAA2D, "lasttimedamaged" },
{ 0xAA2E, "lasttimefired" }, // AUTOADDED
{ 0xAA2F, "lasttimekidnapped" }, // AUTOADDED
{ 0xAA30, "lasttimereachedscriptgoal" }, // AUTOADDED
{ 0xAA31, "lasttimesawkidnapper" }, // AUTOADDED
{ 0xAA32, "lasttorsoanim" }, // AUTOADDED
{ 0xAA33, "lasttouchedplatform" }, // AUTOADDED
{ 0xAA36, "lastupdatetime" }, // AUTOADDED
{ 0xAA3E, "lastusedtime" }, // AUTOADDED
{ 0xAA41, "lastvectotarget" }, // AUTOADDED
{ 0xAA42, "lastvisionsetthermal" }, // AUTOADDED
{ 0xAA44, "lastwave" }, // AUTOADDED
{ 0xAA45, "lastweapon" },
{ 0xAA4B, "laughing_clown" },
{ 0xAA56, "launch_and_kill" },
{ 0xAA5E, "launch_battery_from_geyser" },
{ 0xAA7A, "launch_glasses" },
{ 0xAA8B, "launch_player" },
{ 0xAA8E, "launch_player_to_kepler" },
{ 0xAA8F, "launch_players" },
{ 0xAAA3, "launch_zombies" },
{ 0xAAA8, "launched" },
{ 0xAAA9, "launchedawayfromplayer" },
{ 0xAAAC, "launcher_write_clipboard" },
{ 0xAAAD, "launchfakeghost" },
{ 0xAAB0, "launchheight" },
{ 0xAAB5, "launchshield" },
{ 0xAAB7, "launchtime" },
{ 0xAAB8, "launchuav" }, // AUTOADDED
{ 0xAAB9, "launchvelocity" }, // AUTOADDED
{ 0xAABA, "launchvelocity2d" }, // AUTOADDED
{ 0xAABB, "launchvfx" },
{ 0xAAC4, "lb_player_update_stat" },
{ 0xAAC5, "lbcolor" }, // AUTOADDED
{ 0xAAC6, "lbexplode" }, // AUTOADDED
{ 0xAAC7, "lbonkilled" }, // AUTOADDED
{ 0xAAC8, "lbsniper" },
{ 0xAAC9, "lbspin" }, // AUTOADDED
{ 0xAAE7, "leaderdialog" },
{ 0xAAE8, "leaderdialogactive" },
{ 0xAAE9, "leaderdialoggroup" },
{ 0xAAEA, "leaderdialoggroups" },
{ 0xAAEB, "leaderdialoglocqueue" },
{ 0xAAEC, "leaderdialogonplayer" },
{ 0xAAED, "leaderdialogonplayer_func" }, // AUTOADDED
{ 0xAAEE, "leaderdialogonplayers" }, // AUTOADDED
{ 0xAAEF, "leaderdialogqueue" },
{ 0xAB33, "leaving_team" }, // AUTOADDED
{ 0xABC3, "lethalequipmentdamagemod" },
{ 0xABDF, "level_notify" }, // AUTOADDED
{ 0xABE5, "level_specific_bot_targets" }, // AUTOADDED
{ 0xABE9, "level_specific_vo_callouts" },
{ 0xABEB, "level_trigger_should_abort" },
{ 0xABEC, "level_trigger_should_abort_melee" },
{ 0xABED, "level_trigger_should_abort_ranged" },
{ 0xABF0, "levelflag" },
{ 0xABF1, "levelflagclear" }, // AUTOADDED
{ 0xABF2, "levelflaginit" }, // AUTOADDED
{ 0xABF3, "levelflags" },
{ 0xAC4B, "life_linked" },
{ 0xAC67, "lifeboostactive" }, // AUTOADDED
{ 0xAC68, "lifeid" }, // AUTOADDED
{ 0xAC69, "lifelimitedallyonuse" },
{ 0xAC6A, "lifelimitedenemyonuse" },
{ 0xAC6F, "lifepackoutlines" },
{ 0xAC70, "lifepackowner" }, // AUTOADDED
{ 0xAC71, "lifespan" }, // AUTOADDED
{ 0xAC8D, "light_fx" },
{ 0xACA6, "lightarmor_lightarmor_disabled" }, // AUTOADDED
{ 0xACA7, "lightarmor_modifydamage" }, // AUTOADDED
{ 0xACA8, "lightarmor_monitordeath" }, // AUTOADDED
{ 0xACA9, "lightarmor_set" }, // AUTOADDED
{ 0xACAA, "lightarmor_setfx" }, // AUTOADDED
{ 0xACAC, "lightarmor_unset" },
{ 0xACAD, "lightarmor_updatehud" }, // AUTOADDED
{ 0xACAE, "lightarmorhp" }, // AUTOADDED
{ 0xACAF, "lightbar_off" },
{ 0xACB0, "lightbar_on" },
{ 0xACB1, "lightbarstructs" }, // AUTOADDED
{ 0xACB5, "lightfxfunc" }, // AUTOADDED
{ 0xACB6, "lightfxtag" },
{ 0xACC9, "lights" },
{ 0xACCC, "lights_off" }, // AUTOADDED
{ 0xACCD, "lights_off_internal" }, // AUTOADDED
{ 0xACCE, "lights_on" }, // AUTOADDED
{ 0xACD8, "lightweightscalar" }, // AUTOADDED
{ 0xACD9, "limb" },
{ 0xACE6, "line_interect_sphere" }, // AUTOADDED
{ 0xAD05, "link_ent" },
{ 0xAD0A, "link_player_to_boat" },
{ 0xAD0B, "link_player_to_coaster" },
{ 0xAD1C, "linked_coaster" },
{ 0xAD1E, "linked_ents" }, // AUTOADDED
{ 0xAD1F, "linked_fx" },
{ 0xAD26, "linked_player" },
{ 0xAD27, "linked_players" },
{ 0xAD2B, "linked_to_boat" },
{ 0xAD2C, "linked_to_coaster" },
{ 0xAD2D, "linked_to_player" },
{ 0xAD39, "linkparent" }, // AUTOADDED
{ 0xAD3C, "linkpoint" },
{ 0xAD48, "linktoenabledflag" },
{ 0xAD4A, "linktoplayer" },
{ 0xAD54, "listen_for" },
{ 0xAD55, "listen_for_cryo_kills" },
{ 0xAD57, "listen_for_grenade_in_volume" },
{ 0xAD59, "listen_for_mouth_explosion" },
{ 0xAD5A, "listen_for_mule_icon" },
{ 0xAD5B, "listen_for_old_spawning_dvar" },
{ 0xAD5C, "listen_for_pickup" },
{ 0xAD5F, "listen_for_shredder_battery_hit" },
{ 0xAD60, "listen_for_triton_power" },
{ 0xAD63, "listen_to_toggle_glasses" },
{ 0xAD79, "listenfortaunt" },
{ 0xAD7A, "listenfortauntinput" },
{ 0xAD7B, "listening_for_blocked_path" }, // AUTOADDED
{ 0xAD7C, "listenjump" }, // AUTOADDED
{ 0xAD7D, "listenkick" }, // AUTOADDED
{ 0xAD7E, "listenkillstreakaction" }, // AUTOADDED
{ 0xAD7F, "listhasattachment" }, // AUTOADDED
{ 0xAD80, "listoffoundturrets" }, // AUTOADDED
{ 0xAD8B, "littlebirds" }, // AUTOADDED
{ 0xAD8C, "littoral_ship_lights" }, // AUTOADDED
{ 0xAD8D, "livescount" },
{ 0xADA6, "load" },
{ 0xAE26, "loadout_clearweapons" },
{ 0xAE2E, "loadout_forcearchetype" },
{ 0xAE31, "loadout_getclassstruct" },
{ 0xAE32, "loadout_getclassteam" }, // AUTOADDED
{ 0xAE33, "loadout_getplayerstreaktype" }, // AUTOADDED
{ 0xAE3E, "loadout_removejugg_MAYBE" },
{ 0xAE47, "loadout_updateabilities" },
{ 0xAE48, "loadout_updateclass" },
{ 0xAE49, "loadout_updateclasscallback" },
{ 0xAE4A, "loadout_updateclasscustom" }, // AUTOADDED
{ 0xAE4B, "loadout_updateclassdefault" },
{ 0xAE4C, "loadout_updateclassfinalweapons" }, // AUTOADDED
{ 0xAE4D, "loadout_updateclassfistweapons" },
{ 0xAE4E, "loadout_updateclassgamemode" },
{ 0xAE52, "loadout_updateclassteam" },
{ 0xAE53, "loadout_updateplayer" },
{ 0xAE55, "loadout_updateplayerarchetype" },
{ 0xAE56, "loadout_updateplayergesture" },
{ 0xAE57, "loadout_updateplayerkillstreaks" },
{ 0xAE58, "loadout_updateplayerperks" },
{ 0xAE59, "loadout_updateplayerpowers_MAYBE" },
{ 0xAE5A, "loadout_updateplayerstreaktype" }, // AUTOADDED
{ 0xAE5B, "loadout_updateplayersuper" }, // AUTOADDED
{ 0xAE5C, "loadout_updateplayerweapons" }, // AUTOADDED
{ 0xAE5D, "loadout_updatestreaktype" }, // AUTOADDED
{ 0xAE5E, "loadout_updateweapondependentsettigns" }, // AUTOADDED
{ 0xAE5F, "loadout_validateclass" },
{ 0xAE62, "loadoutarchetype" }, // AUTOADDED
{ 0xAE66, "loadoutextraperks" },
{ 0xAE67, "loadoutextrapowerprimary" },
{ 0xAE68, "loadoutextrapowersecondary" },
{ 0xAE6C, "loadoutgesture" },
{ 0xAE6E, "loadoutkillstreak1" },
{ 0xAE70, "loadoutkillstreak2" },
{ 0xAE72, "loadoutkillstreak3" },
{ 0xAE78, "loadoutperkoffhand" },
{ 0xAE79, "loadoutperks" }, // AUTOADDED
{ 0xAE7A, "loadoutperksfromgamemode" },
{ 0xAE7F, "loadoutprimary" },
{ 0xAE86, "loadoutprimaryattachments" }, // AUTOADDED
{ 0xAE87, "loadoutprimarybuff" }, // AUTOADDED
{ 0xAE88, "loadoutprimarycamo" },
{ 0xAE89, "loadoutprimaryfullname" },
{ 0xAE8A, "loadoutprimarylootitemid" },
{ 0xAE90, "loadoutprimaryreticle" },
{ 0xAE91, "loadoutprimaryvariantid" },
{ 0xAE92, "loadoutrigtrait" },
{ 0xAE93, "loadouts" }, // AUTOADDED
{ 0xAE94, "loadoutsecondary" },
{ 0xAE9A, "loadoutsecondaryattachments" }, // AUTOADDED
{ 0xAE9B, "loadoutsecondarybuff" }, // AUTOADDED
{ 0xAE9C, "loadoutsecondarycamo" },
{ 0xAE9D, "loadoutsecondaryfullname" },
{ 0xAEA4, "loadoutsecondaryreticle" },
{ 0xAEA6, "loadoutsgroup" }, // AUTOADDED
{ 0xAEA7, "loadoutstandardperks" },
{ 0xAEA8, "loadoutstreaksfilled" },
{ 0xAEA9, "loadoutstreaktype" }, // AUTOADDED
{ 0xAEAA, "loadoutsuper" }, // AUTOADDED
{ 0xAEAB, "loadoutusingspecialist" }, // AUTOADDED
{ 0xAEAC, "loadoutvalues" }, // AUTOADDED
{ 0xAEAD, "loadplayerassets" },
{ 0xAEB1, "loadweaponranktable" }, // AUTOADDED
{ 0xAEB6, "lobbyteamselectenabled" },
{ 0xAEBE, "local_waittill_any_return_6" }, // AUTOADDED
{ 0xAEC4, "location" },
{ 0xAEC5, "location_add_last_callout_time" },
{ 0xAEC6, "location_called_out_ever" }, // AUTOADDED
{ 0xAEC7, "location_called_out_recently" }, // AUTOADDED
{ 0xAEC8, "location_dupes_thread" }, // AUTOADDED
{ 0xAEC9, "location_get_last_callout_time" }, // AUTOADDED
{ 0xAECA, "location_in_range" }, // AUTOADDED
{ 0xAECB, "locationaliases" },
{ 0xAECC, "locationlastcallouttimes" },
{ 0xAECD, "locationobjectives" }, // AUTOADDED
{ 0xAECE, "locations" }, // AUTOADDED
{ 0xAECF, "locations_to_investigate" },
{ 0xAED4, "lock" },
{ 0xAEED, "locked" },
{ 0xAEF7, "lockedlist" },
{ 0xAF2A, "lockonicon" },
{ 0xAF30, "lockontime" },
{ 0xAF31, "lockplayerforremoteuavlaunch" }, // AUTOADDED
{ 0xAF36, "locktimeruntilcap" },
{ 0xAF5A, "log_1984_kills" },
{ 0xAF5B, "log_activate_enter_ghostskulls_game" },
{ 0xAF5D, "log_atmused" },
{ 0xAF5E, "log_balloons_popped" },
{ 0xAF5F, "log_beating_arcade_games" },
{ 0xAF61, "log_brute_hits_cabinet" },
{ 0xAF69, "log_enteringafterlifearcade" },
{ 0xAF6B, "log_exitingafterlifearcade" },
{ 0xAF6C, "log_fafcardused" },
{ 0xAF6D, "log_fafrefill" },
{ 0xAF6E, "log_finished_mini_game" },
{ 0xAF6F, "log_frequency_device_collected" },
{ 0xAF70, "log_frequency_device_crafted_dj" },
{ 0xAF71, "log_ghost_spelled" },
{ 0xAF72, "log_grey_sequence_activated" },
{ 0xAF75, "log_item_purchase_with_tickets" },
{ 0xAF77, "log_itemcrafted" },
{ 0xAF78, "log_lostandfound" },
{ 0xAF7A, "log_matchdata" },
{ 0xAF7F, "log_papused" },
{ 0xAF80, "log_perk_machine_used" },
{ 0xAF81, "log_perk_returned" },
{ 0xAF83, "log_player_exits_ghostskulls_games" },
{ 0xAF86, "log_purchasingaweapon" },
{ 0xAF87, "log_session_xp_earned" },
{ 0xAF88, "log_shooting_icemonster_coaster" },
{ 0xAF89, "log_souvenircoindeposited" },
{ 0xAF8A, "log_speaker_defence_sequence_ends" },
{ 0xAF8B, "log_suicide_bomber_sequence_activated" },
{ 0xAF8C, "log_times_per_wave" },
{ 0xAF8D, "log_tone_sequence_activated" },
{ 0xAF8F, "log_ufo_destroyed" },
{ 0xAF92, "log_zombiedeath" },
{ 0xAF93, "logallplayerposthink" },
{ 0xAF95, "logattacker" },
{ 0xAF96, "logattackerkillstreak" }, // AUTOADDED
{ 0xAF98, "logbadspawn" }, // AUTOADDED
{ 0xAF9B, "logevent" },
{ 0xAF9C, "logevent_assist" },
{ 0xAF9D, "logevent_awardgained" },
{ 0xAF9E, "logevent_explosion" },
{ 0xAF9F, "logevent_frontlineupdate" },
{ 0xAFA0, "logevent_gameobject" },
{ 0xAFA1, "logevent_givempweaponxp" },
{ 0xAFA2, "logevent_giveplayerxp" },
{ 0xAFA3, "logevent_killstreakavailable" },
{ 0xAFA4, "logevent_killstreakearned" },
{ 0xAFA5, "logevent_message" },
{ 0xAFA6, "logevent_minimapcorners" },
{ 0xAFA7, "logevent_path" },
{ 0xAFA8, "logevent_playerconnected" },
{ 0xAFA9, "logevent_playerdeath" },
{ 0xAFAA, "logevent_playerkill" },
{ 0xAFAB, "logevent_playerspawn" },
{ 0xAFAC, "logevent_powerused" },
{ 0xAFAD, "logevent_reportgamescore" },
{ 0xAFAE, "logevent_reportstreakscore" },
{ 0xAFAF, "logevent_reportsuperscore" },
{ 0xAFB0, "logevent_scoreupdate" },
{ 0xAFB1, "logevent_sendplayerindexdata" },
{ 0xAFB2, "logevent_spawnpointupdate" },
{ 0xAFB3, "logevent_superearned" },
{ 0xAFB4, "logevent_superended" },
{ 0xAFB5, "logevent_tag" }, // AUTOADDED
{ 0xAFB6, "logeventflag" }, // AUTOADDED
{ 0xAFB7, "logextraspawn" }, // AUTOADDED
{ 0xAFB8, "logextraspawninfothink" }, // AUTOADDED
{ 0xAFB9, "logfinalstats" },
{ 0xAFBA, "loggameevent" },
{ 0xAFBC, "loggrenadedata" },
{ 0xAFC0, "logicvariantid" },
{ 0xAFC1, "logid" }, // AUTOADDED
{ 0xAFC2, "logids" }, // AUTOADDED
{ 0xAFC3, "loginckillchain" },
{ 0xAFC4, "loginitialspawnposition" }, // AUTOADDED
{ 0xAFC5, "loginitialstats" }, // AUTOADDED
{ 0xAFC6, "logkillsconfirmed" }, // AUTOADDED
{ 0xAFC7, "logkillsdenied" }, // AUTOADDED
{ 0xAFC8, "logkillstreakavailableevent" }, // AUTOADDED
{ 0xAFC9, "logkillstreakevent" }, // AUTOADDED
{ 0xAFCA, "logmatchtags" },
{ 0xAFD4, "logplayerdata" },
{ 0xAFD5, "logplayerdeath" },
{ 0xAFD6, "logplayerlife" },
{ 0xAFDB, "logteamselection" }, // AUTOADDED
{ 0xAFE9, "longregentime" },
{ 0xAFF0, "look_at_damage_trigger" },
{ 0xB02F, "lookuppowerslot" }, // AUTOADDED
{ 0xB040, "loop_fx_sound" },
{ 0xB041, "loop_fx_sound_interval" },
{ 0xB042, "loop_fx_sound_interval_with_angles" },
{ 0xB043, "loop_fx_sound_with_angles" },
{ 0xB044, "loop_node" }, // AUTOADDED
{ 0xB045, "loop_or_anim" }, // AUTOADDED
{ 0xB046, "loop_or_delete" }, // AUTOADDED
{ 0xB047, "loop_path" }, // AUTOADDED
{ 0xB048, "loop_sound" }, // AUTOADDED
{ 0xB049, "loop_sound_delete" },
{ 0xB051, "looper" },
{ 0xB052, "loopfx" },
{ 0xB053, "loopfx_ontag" }, // AUTOADDED
{ 0xB054, "loopfxchangedelay" }, // AUTOADDED
{ 0xB055, "loopfxchangeid" }, // AUTOADDED
{ 0xB056, "loopfxchangeorg" }, // AUTOADDED
{ 0xB057, "loopfxdeletion" }, // AUTOADDED
{ 0xB058, "loopfxstop" },
{ 0xB059, "loopfxthread" },
{ 0xB065, "loopsound" },
{ 0xB066, "loopsound_ent" },
{ 0xB067, "loopsoundthread" },
{ 0xB06C, "looptriggeredeffect" }, // AUTOADDED
{ 0xB07A, "loot_func" },
{ 0xB07B, "loot_fx" },
{ 0xB07C, "loot_fx_handler" },
{ 0xB07D, "loot_icon" },
{ 0xB07E, "loot_id" },
{ 0xB07F, "loot_info" },
{ 0xB086, "loot_pick_up_monitor" },
{ 0xB096, "loot_think" },
{ 0xB09C, "lootweaponcache" }, // AUTOADDED
{ 0xB09E, "losradiusdamage" },
{ 0xB09F, "lost_and_found_clean_up_monitor" },
{ 0xB0A0, "lost_and_found_ent" },
{ 0xB0A1, "lost_and_found_primary_count" },
{ 0xB0A2, "lost_and_found_spot" },
{ 0xB0A3, "lost_and_found_time_out" },
{ 0xB0C8, "low_entries_watcher" },
{ 0xB0DD, "lower_weapon_damage" },
{ 0xB0DE, "lowermessage" }, // AUTOADDED
{ 0xB0DF, "lowermessagefont" }, // AUTOADDED
{ 0xB0E0, "lowermessages" }, // AUTOADDED
{ 0xB0E1, "lowermessagethink" }, // AUTOADDED
{ 0xB0E4, "lowertextfontsize" }, // AUTOADDED
{ 0xB0E5, "lowertexty" }, // AUTOADDED
{ 0xB0E6, "lowertextyalign" }, // AUTOADDED
{ 0xB0E7, "lowertimer" }, // AUTOADDED
{ 0xB0F9, "lua_progress_bar_think" },
{ 0xB0FA, "lua_progress_bar_think_loop" },
{ 0xB0FB, "lua_string_index" },
{ 0xB111, "lvl" },
{ 0xB117, "m_bfiring" },
{ 0xB141, "machine" },
{ 0xB15E, "magic_weapons" },
{ 0xB218, "main_power_turned_on" },
{ 0xB266, "make_discrete_trigger" },
{ 0xB267, "make_enemies_ignore_you" }, // AUTOADDED
{ 0xB268, "make_entity_sentient_cp" }, // AUTOADDED
{ 0xB269, "make_entity_sentient_mp" },
{ 0xB26F, "make_grey_spawn_struct" },
{ 0xB27F, "make_protect_head_icon_for" },
{ 0xB280, "make_protect_head_icon_on" },
{ 0xB287, "make_spawner_active" },
{ 0xB288, "make_spawner_inactive" },
{ 0xB28B, "make_suicide_bomber_spawn_struct" },
{ 0xB291, "make_volume_active" },
{ 0xB292, "make_volume_inactive" },
{ 0xB295, "make_waypoint_on_escape_exit" },
{ 0xB296, "make_waypoint_to_door" },
{ 0xB29C, "makeblackholeimpulsefield" },
{ 0xB29D, "makebrowinner" },
{ 0xB29F, "makecranked" }, // AUTOADDED
{ 0xB2A0, "makeenemyusable" }, // AUTOADDED
{ 0xB2A1, "makeentitysentient_func" }, // AUTOADDED
{ 0xB2A2, "makeexplosivetargetablebyai" },
{ 0xB2A3, "makeexplosiveunusable" }, // AUTOADDED
{ 0xB2A4, "makeexplosiveunusuabletag" }, // AUTOADDED
{ 0xB2A5, "makeexplosiveusable" }, // AUTOADDED
{ 0xB2A6, "makeexplosiveusableinternal" }, // AUTOADDED
{ 0xB2A7, "makeexplosiveusabletag" },
{ 0xB2A8, "makehelitype" }, // AUTOADDED
{ 0xB2AE, "makereviveentity" },
{ 0xB2AF, "makereviveicon" },
{ 0xB2B0, "makereviveiconentity" },
{ 0xB2B1, "makesolid" }, // AUTOADDED
{ 0xB2E6, "manage_self_revive" },
{ 0xB2EE, "managelightbarstack" }, // AUTOADDED
{ 0xB2F2, "managespawnprotection" },
{ 0xB2F3, "managespeakerlocactivation" },
{ 0xB2F5, "managetimeout" },
{ 0xB2F9, "manipulate_createfx_ents" },
{ 0xB31B, "manualdropthink" }, // AUTOADDED
{ 0xB31D, "manuallyjoiningkillstreak" },
{ 0xB326, "map_interaction_func" },
{ 0xB32E, "mapcenter" },
{ 0xB32F, "mapcustombotkillstreakfunc" },
{ 0xB330, "mapcustomcratefunc" },
{ 0xB335, "mapname" }, // AUTOADDED
{ 0xB339, "mapsize" }, // AUTOADDED
{ 0xB35D, "mark_completed" },
{ 0xB35E, "mark_dangerous_nodes" },
{ 0xB369, "markdangerzoneonminimap" },
{ 0xB36A, "marked_by_hybrid" },
{ 0xB36D, "marked_for_challenge" },
{ 0xB36E, "marked_for_death" },
{ 0xB370, "markedbyboomperk" }, // AUTOADDED
{ 0xB372, "markedplayers" }, // AUTOADDED
{ 0xB373, "markeduioff" }, // AUTOADDED
{ 0xB374, "markeduion" }, // AUTOADDED
{ 0xB375, "markempsignatures" }, // AUTOADDED
{ 0xB377, "marker" }, // AUTOADDED
{ 0xB378, "markeractivate" },
{ 0xB37B, "markfordetete" }, // AUTOADDED
{ 0xB380, "marktarget_execute" },
{ 0xB381, "marktarget_init" },
{ 0xB382, "marktarget_run" },
{ 0xB383, "marktargetlaser" }, // AUTOADDED
{ 0xB384, "mars" },
{ 0xB385, "mars_3" },
{ 0xB3C8, "mask" },
{ 0xB3CC, "masked_exploder" },
{ 0xB3D3, "master_challenge_list" },
{ 0xB3D9, "match_end_delay" },
{ 0xB3DC, "match_ufo_tone" },
{ 0xB3DE, "matchbrushestozones" },
{ 0xB3DF, "matchdata" },
{ 0xB3E0, "matchdata_data_type" },
{ 0xB3E2, "matchdata_struct" },
{ 0xB3E3, "matchdatalifeindex" },
{ 0xB3EA, "matchforfeittimer" }, // AUTOADDED
{ 0xB3EB, "matchforfeittimer_internal" }, // AUTOADDED
{ 0xB3EC, "matchmakinggame" },
{ 0xB3ED, "matchmakingmatch" }, // AUTOADDED
{ 0xB3EE, "matchreceventcountline" }, // AUTOADDED
{ 0xB3EF, "matchrecevents" }, // AUTOADDED
{ 0xB3F0, "matchrecording_dump" }, // AUTOADDED
{ 0xB3F1, "matchrecording_eventcharmap" }, // AUTOADDED
{ 0xB3F2, "matchrecording_frontlinelogid" }, // AUTOADDED
{ 0xB3F3, "matchrecording_generateid" }, // AUTOADDED
{ 0xB3F6, "matchrecording_glog_dump" }, // AUTOADDED
{ 0xB3F7, "matchrecording_inceventlinecount" }, // AUTOADDED
{ 0xB3F8, "matchrecording_init" }, // AUTOADDED
{ 0xB3F9, "matchrecording_isenabled" }, // AUTOADDED
{ 0xB3FA, "matchrecording_logallplayerposthink" }, // AUTOADDED
{ 0xB3FB, "matchrecording_logevent" }, // AUTOADDED
{ 0xB3FC, "matchrecording_logeventmsg" }, // AUTOADDED
{ 0xB3FD, "matchrecording_logeventplayername" }, // AUTOADDED
{ 0xB400, "matchrecording_onplayerconnect" }, // AUTOADDED
{ 0xB401, "matchrecording_scriptdata_dump" }, // AUTOADDED
{ 0xB402, "matchrecording_scriptdata_openfileaddheader" }, // AUTOADDED
{ 0xB403, "matchrecording_scriptdata_openfileappend" }, // AUTOADDED
{ 0xB404, "matchrecording_scriptdata_openfilewrite" }, // AUTOADDED
{ 0xB405, "matchrecording_teammap" }, // AUTOADDED
{ 0xB406, "matchrecording_type" }, // AUTOADDED
{ 0xB407, "matchrecording_usereventthink" }, // AUTOADDED
{ 0xB40A, "matchrules_damagemultiplier" },
{ 0xB40B, "matchrules_droptime" }, // AUTOADDED
{ 0xB40C, "matchrules_enemyflagradar" },
{ 0xB40E, "matchrules_randomize" },
{ 0xB40F, "matchrules_switchteamdisabled" }, // AUTOADDED
{ 0xB410, "matchrules_vampirism" },
{ 0xB412, "matchstarttimer" },
{ 0xB413, "matchstarttimer_internal" },
{ 0xB424, "max_concurrent_player_count" }, // AUTOADDED
{ 0xB425, "max_count" },
{ 0xB426, "max_crafting_drops" },
{ 0xB42B, "max_delay" },
{ 0xB432, "max_dynamic_spawners" },
{ 0xB43C, "max_health" },
{ 0xB43F, "max_health_regen_level_penalty" },
{ 0xB442, "max_intensity" },
{ 0xB44D, "max_player_distance" },
{ 0xB467, "max_static_spawned_enemies" },
{ 0xB46B, "max_ufo_zombie_spawn_number" },
{ 0xB46C, "max_ufo_zombie_spawn_number_logic" },
{ 0xB46F, "max_wait_between_metors" },
{ 0xB47A, "maxallowedteamkills" },
{ 0xB47B, "maxalpha" }, // AUTOADDED
{ 0xB47D, "maxammo_model" },
{ 0xB486, "maxcharges" },
{ 0xB488, "maxclients" },
{ 0xB48A, "maxcurrency" },
{ 0xB48C, "maxdeathlogs" },
{ 0xB492, "maxdistance" }, // AUTOADDED
{ 0xB493, "maxdistancecallout" }, // AUTOADDED
{ 0xB494, "maxdriftdist" }, // AUTOADDED
{ 0xB495, "maxemissive" },
{ 0xB498, "maxenemysightfraction" },
{ 0xB49C, "maxfontscale" }, // AUTOADDED
{ 0xB4A3, "maxheight" }, // AUTOADDED
{ 0xB4A5, "maxjumpingenemysightfraction" },
{ 0xB4AF, "maxlives" }, // AUTOADDED
{ 0xB4B0, "maxlogclients" }, // AUTOADDED
{ 0xB4BA, "maxperplayerexplosives" },
{ 0xB4BB, "maxpickupsperround" }, // AUTOADDED
{ 0xB4BC, "maxplayercount" },
{ 0xB4BD, "maxplayerspawninfluencedistsquared" }, // AUTOADDED
{ 0xB4BE, "maxplayerspeeddist" }, // AUTOADDED
{ 0xB4BF, "maxqueue" }, // AUTOADDED
{ 0xB4C0, "maxrank" }, // AUTOADDED
{ 0xB4C6, "maxspawndisttohomebase" }, // AUTOADDED
{ 0xB4CD, "maxtimetostrafewithoutlos" },
{ 0xB4D1, "maxuses" }, // AUTOADDED
{ 0xB4D2, "maxvehiclesallowed" },
{ 0xB4D4, "maxweaponranks" }, // AUTOADDED
{ 0xB4D6, "maxxp" }, // AUTOADDED
{ 0xB4D9, "maxzdiff" },
{ 0xB4DC, "maydolaststand" },
{ 0xB4E9, "mayprocessmerits" },
{ 0xB4EE, "mayspawn" },
{ 0xB53A, "medusa_check_func" },
{ 0xB540, "medusa_killed_func" },
{ 0xB54B, "meet_recent_damage_threshold_check" },
{ 0xB54F, "megabankbonus" },
{ 0xB550, "megabanklimit" },
{ 0xB55B, "melee" },
{ 0xB570, "melee_attacker" },
{ 0xB57A, "melee_damage_amt" },
{ 0xB57B, "melee_damage_trigger" },
{ 0xB580, "melee_destroy" },
{ 0xB58B, "melee_enemy" },
{ 0xB58C, "melee_enemy_new_node_time" },
{ 0xB58D, "melee_enemy_node" },
{ 0xB599, "melee_init" },
{ 0xB5AF, "melee_scalar" },
{ 0xB5B1, "melee_self_new_node_time" },
{ 0xB5B2, "melee_self_node" },
{ 0xB5B5, "melee_shouldabort" },
{ 0xB5C6, "melee_strength_timer" },
{ 0xB5D9, "meleeactorboundsradius" },
{ 0xB5E9, "meleecharge_init_mp" },
{ 0xB5EF, "meleecharge_terminate_mp" },
{ 0xB5F1, "meleechargedist" },
{ 0xB5F2, "meleechargedistreloadmultiplier" },
{ 0xB5F4, "meleechargedistvsplayer" },
{ 0xB602, "meleedeathhandler" },
{ 0xB607, "meleedot" },
{ 0xB616, "meleegrab_ksweapon_used" },
{ 0xB625, "meleekill" },
{ 0xB626, "meleemaxdamage" },
{ 0xB628, "meleemindamage" },
{ 0xB62F, "meleeradiusbasesq" },
{ 0xB631, "meleeradiuswhentargetnotonnavmesh" },
{ 0xB632, "meleerangesq" },
{ 0xB633, "meleerequested" },
{ 0xB634, "meleerequestedcharge" }, // AUTOADDED
{ 0xB635, "meleerequestedcharge_target" }, // AUTOADDED
{ 0xB636, "meleerequestedcharge_targetposition" }, // AUTOADDED
{ 0xB637, "meleerequestedcomplete" }, // AUTOADDED
{ 0xB638, "meleerequestedtarget" },
{ 0xB646, "meleestate" },
{ 0xB648, "meleestrength" },
{ 0xB649, "meleestun" },
{ 0xB64D, "meleetarget" },
{ 0xB652, "meleevignetteanimfunc" },
{ 0xB654, "meleevsplayer_init_mp" },
{ 0xB655, "meleevsplayer_terminate" },
{ 0xB656, "meleevsplayer_terminate_mp" },
{ 0xB657, "meleevsplayer_update" },
{ 0xB665, "menu" },
{ 0xB666, "menu_add_options" },
{ 0xB667, "menu_change_selected_fx" },
{ 0xB668, "menu_create" },
{ 0xB669, "menu_create_select" },
{ 0xB66A, "menu_fx_creation" },
{ 0xB66B, "menu_fx_option_set" },
{ 0xB66D, "menu_none" },
{ 0xB66E, "menu_select_by_name" },
{ 0xB66F, "menu_sys" }, // AUTOADDED
{ 0xB670, "menuclass" }, // AUTOADDED
{ 0xB672, "menunone" },
{ 0xB673, "menuperkparsetable" }, // AUTOADDED
{ 0xB674, "menuperks" }, // AUTOADDED
{ 0xB675, "menurigperkparsetable" }, // AUTOADDED
{ 0xB676, "menurigperks" }, // AUTOADDED
{ 0xB677, "menus" },
{ 0xB678, "menuspectator" }, // AUTOADDED
{ 0xB67E, "merit_rewardval" },
{ 0xB67F, "merit_scoreval" },
{ 0xB681, "merit_targetval" },
{ 0xB682, "meritcallbacks" },
{ 0xB683, "meritdata" },
{ 0xB684, "meritinfo" },
{ 0xB685, "meritscompleted" },
{ 0xB69D, "meter_fill_up" },
{ 0xB6A0, "methodsinit" },
{ 0xB6BD, "mgturret" }, // AUTOADDED
{ 0xB6BF, "mgturretinfo" }, // AUTOADDED
{ 0xB6C0, "mgturretleft" }, // AUTOADDED
{ 0xB6C1, "mgturretright" }, // AUTOADDED
{ 0xB719, "microturret_use" },
{ 0xB726, "microturrets" },
{ 0xB72B, "midpoint" },
{ 0xB737, "migrationcapturereset" }, // AUTOADDED
{ 0xB73A, "min_ammo" },
{ 0xB73E, "min_delay" },
{ 0xB748, "min_health_regen_level" },
{ 0xB749, "min_intensity" },
{ 0xB756, "min_wait_between_metors" },
{ 0xB75F, "mindistsquared" }, // AUTOADDED
{ 0xB760, "mine_beacon" },
{ 0xB761, "mine_explode" },
{ 0xB762, "mine_launch" },
{ 0xB763, "mine_spin" },
{ 0xB764, "minebounce" },
{ 0xB765, "minedamagedebug" }, // AUTOADDED
{ 0xB766, "minedamagehalfheight" },
{ 0xB767, "minedamageheightpassed" }, // AUTOADDED
{ 0xB768, "minedamagemax" },
{ 0xB769, "minedamagemin" },
{ 0xB76A, "minedamagemonitor" },
{ 0xB76B, "minedamageradius" },
{ 0xB76C, "minedeletetrigger" },
{ 0xB76D, "minedetectiongraceperiod" },
{ 0xB76E, "minedetectionheight" },
{ 0xB76F, "minedetectionradius" },
{ 0xB770, "mineexplodeonnotify" },
{ 0xB771, "minefield" }, // AUTOADDED
{ 0xB772, "minefield_kill" }, // AUTOADDED
{ 0xB773, "minefield_think" }, // AUTOADDED
{ 0xB774, "minefields" }, // AUTOADDED
{ 0xB778, "mineproximitytrigger" },
{ 0xB779, "mines" },
{ 0xB77A, "mineselfdestruct" }, // AUTOADDED
{ 0xB77B, "mineselfdestructtime" }, // AUTOADDED
{ 0xB77C, "minesensorbounce" },
{ 0xB77F, "minethrown" },
{ 0xB780, "mineused" },
{ 0xB788, "mini_ufo_init" },
{ 0xB798, "minigame_vo" },
{ 0xB7A8, "minigunweapon" },
{ 0xB7BF, "miniufos" },
{ 0xB7CC, "minspeedsq" },
{ 0xB7CF, "minxp" }, // AUTOADDED
{ 0xB7F6, "missile_find_ground_target" }, // AUTOADDED
{ 0xB7FA, "missile_get_desired_angles_to_target" }, // AUTOADDED
{ 0xB7FB, "missile_get_distance_to_target" }, // AUTOADDED
{ 0xB80A, "missile_isincoming" }, // AUTOADDED
{ 0xB82F, "missile_settargetandflightmode" },
{ 0xB846, "missileacquiretargets" },
{ 0xB889, "missileeyes" },
{ 0xB88B, "missilegetbesttarget" },
{ 0xB88E, "missileisgoodtarget" },
{ 0xB88F, "missilelocktarget" },
{ 0xB898, "missiles" }, // AUTOADDED
{ 0xB8AF, "missilesleft" }, // AUTOADDED
{ 0xB8B1, "missilespawned" },
{ 0xB8B3, "missiletargetangle" },
{ 0xB8B7, "missilewaitfortriggerrelease" },
{ 0xB8E8, "mobile_shield_clean_up_monitor" },
{ 0xB8E9, "mobile_shield_damage_monitor" },
{ 0xB8EB, "mobile_shield_face_dir" },
{ 0xB8EC, "mobile_shield_look_at_ent" },
{ 0xB8ED, "mobile_shield_look_at_ent_clean_up_monitor" },
{ 0xB8EE, "mobile_shield_look_at_pos" },
{ 0xB8EF, "mobile_shield_pos" },
{ 0xB8F0, "mobile_shield_update_pos" },
{ 0xB8F1, "mobile_shield_visibility_monitor" },
{ 0xB8F2, "mobile_shields" },
{ 0xB8F8, "mod" },
{ 0xB914, "model_name_dummy" },
{ 0xB915, "model_name_enemy" },
{ 0xB916, "model_name_friendly" },
{ 0xB919, "modelbad" },
{ 0xB91A, "modelbase" }, // AUTOADDED
{ 0xB91C, "modelbombsquad" },
{ 0xB91D, "modeldestroyed" },
{ 0xB920, "modelgood" },
{ 0xB924, "modelplacement" },
{ 0xB925, "modelplacementfailed" },
{ 0xB92D, "modifieddefendcheck" }, // AUTOADDED
{ 0xB92E, "modifieddefendradiussetup" }, // AUTOADDED
{ 0xB92F, "modifiedspawnpoints" }, // AUTOADDED
{ 0xB930, "modifiers" }, // AUTOADDED
{ 0xB931, "modify_apache_lifetime" }, // AUTOADDED
{ 0xB932, "modify_moveplaybackrate_together" }, // AUTOADDED
{ 0xB933, "modify_player_speed" },
{ 0xB934, "modify_rate" },
{ 0xB935, "modifyblastshieldperk" }, // AUTOADDED
{ 0xB938, "modifydamage" },
{ 0xB939, "modifydamagegeneral" }, // AUTOADDED
{ 0xB93A, "modifyplayerdamage" },
{ 0xB93E, "modifyweapon" },
{ 0xB941, "momentum" }, // AUTOADDED
{ 0xB94D, "money" },
{ 0xB94E, "money_stack" },
{ 0xB958, "monitor_callbutton" },
{ 0xB959, "monitor_cautious_approach_dangerous_locations" },
{ 0xB95A, "monitor_cautious_approach_early_out" }, // AUTOADDED
{ 0xB962, "monitor_defend_player" }, // AUTOADDED
{ 0xB96A, "monitor_enemy_dangerous_killstreak" }, // AUTOADDED
{ 0xB96B, "monitor_enemy_for_downed" }, // AUTOADDED
{ 0xB96C, "monitor_enemy_proximity_during_enemy_downed" }, // AUTOADDED
{ 0xB96D, "monitor_enter_commander_mode" },
{ 0xB970, "monitor_flag_ownership" },
{ 0xB971, "monitor_flag_status" },
{ 0xB978, "monitor_health" },
{ 0xB981, "monitor_node_visible" },
{ 0xB983, "monitor_odin_marker" }, // AUTOADDED
{ 0xB984, "monitor_pain" }, // AUTOADDED
{ 0xB985, "monitor_pause_spawning" }, // AUTOADDED
{ 0xB9A2, "monitor_smoke_grenade" },
{ 0xB9A3, "monitor_smoke_grenades" },
{ 0xB9B0, "monitor_zone_control" },
{ 0xB9B1, "monitorweaponswitch" },
{ 0xB9B2, "monitoradstime" },
{ 0xB9B6, "monitoraltitude" },
{ 0xB9C1, "monitorboost" }, // AUTOADDED
{ 0xB9C6, "monitordamage" },
{ 0xB9C7, "monitordamageoneshot" },
{ 0xB9C8, "monitordeath" }, // AUTOADDED
{ 0xB9C9, "monitordisconnect" }, // AUTOADDED
{ 0xB9CA, "monitordisownedequipment" },
{ 0xB9DD, "monitorgameend" }, // AUTOADDED
{ 0xB9E5, "monitorjointeam" },
{ 0xB9EC, "monitorlauncherspawnedgrenades" },
{ 0xB9F1, "monitormanualplayerexit" },
{ 0xB9F3, "monitormeleeoverlay" },
{ 0xB9FD, "monitorobjectivecamera" }, // AUTOADDED
{ 0xB9FE, "monitoroutofboundsdistortion" }, // AUTOADDED
{ 0xB9FF, "monitorowner" }, // AUTOADDED
{ 0xBA04, "monitorplayers" },
{ 0xBA0A, "monitorprojectilearrive" },
{ 0xBA0E, "monitorrocketfire2" },
{ 0xBA0F, "monitorrocketfire" },
{ 0xBA14, "monitorsharpfocus" },
{ 0xBA19, "monitorsmokeactive" }, // AUTOADDED
{ 0xBA2E, "monitorsurvivaltime" },
{ 0xBA38, "monitorvotekick" },
{ 0xBA39, "monitorweaponfire" },
{ 0xBB03, "moon" },
{ 0xBB06, "moon_bridge" },
{ 0xBB11, "moon_donations" },
{ 0xBB29, "moon_outside_begin" },
{ 0xBB3D, "moon_rocket_space" },
{ 0xBB3E, "moon_second" },
{ 0xBB9C, "mortartarget" },
{ 0xBBC0, "motion_trigger" },
{ 0xBBF5, "mouth_trig_kill" },
{ 0xBBF7, "move" },
{ 0xBC13, "move_bots_from_team_to_team" },
{ 0xBC1E, "move_crystal_to_end_pos" },
{ 0xBC29, "move_forward" },
{ 0xBC31, "move_grey_fight_clip_down" },
{ 0xBC33, "move_group" },
{ 0xBC36, "move_hoop" },
{ 0xBC3A, "move_jaw" },
{ 0xBC4D, "move_pattern_func" },
{ 0xBC69, "move_selection_to_cursor" },
{ 0xBC6D, "move_slower" },
{ 0xBC70, "move_speed_scale" },
{ 0xBC77, "move_target" },
{ 0xBC83, "move_through_tube" },
{ 0xBC84, "move_time" },
{ 0xBC94, "move_to_spot" },
{ 0xBC9C, "move_up_and_delete" },
{ 0xBCA9, "moveballtoplayer" }, // AUTOADDED
{ 0xBCAB, "movebombcase" }, // AUTOADDED
{ 0xBCB7, "moveeffecttoclosestplayer" },
{ 0xBCC8, "movement" },
{ 0xBCCB, "movementgunposeoverride" }, // AUTOADDED
{ 0xBCCE, "movemodefunc" },
{ 0xBCD6, "moveplaybackrate" }, // AUTOADDED
{ 0xBCDE, "mover_suicide" }, // AUTOADDED
{ 0xBCE4, "moveratescale" },
{ 0xBCEA, "movers" }, // AUTOADDED
{ 0xBCF6, "movespeedscaler" }, // AUTOADDED
{ 0xBD12, "moveto_floor" },
{ 0xBD1F, "movetotraploop" },
{ 0xBD23, "movetype" },
{ 0xBD27, "movetypeisnotcasual" }, // AUTOADDED
{ 0xBD2F, "movezoneaftertime" }, // AUTOADDED
{ 0xBD30, "moving" }, // AUTOADDED
{ 0xBD3B, "moving_platform" },
{ 0xBD3C, "moving_platform_empty_func" },
{ 0xBD41, "moving_target" },
{ 0xBD43, "moving_target_groups" },
{ 0xBD44, "moving_target_intro_sequence" },
{ 0xBD45, "moving_target_pattern" },
{ 0xBD46, "moving_target_priority" },
{ 0xBD48, "moving_target_wave_info" },
{ 0xBD49, "moving_targets_attack_logic" },
{ 0xBD4A, "moving_targets_fly_to_portal_logic" },
{ 0xBD4B, "moving_targets_sequence" },
{ 0xBD4F, "movingplatformdetonate" }, // AUTOADDED
{ 0xBD5D, "mp_createfx" },
{ 0xBD67, "mpbuildweaponmap" },
{ 0xBD68, "mpbuildweaponname" },
{ 0xBD6A, "mph_to_ips" },
{ 0xBD6C, "mpsuperpreviousweapon" },
{ 0xBD6E, "mt_getprogress" },
{ 0xBD6F, "mt_getstate" },
{ 0xBD70, "mt_gettarget" },
{ 0xBD74, "mt_kills" },
{ 0xBD75, "mt_setprogress" },
{ 0xBD76, "mt_setstate" },
{ 0xBD7C, "mugger_add_extra_tag" }, // AUTOADDED
{ 0xBD7D, "mugger_bank_limit" }, // AUTOADDED
{ 0xBD7E, "mugger_bank_tags" }, // AUTOADDED
{ 0xBD7F, "mugger_check_muggernaut" }, // AUTOADDED
{ 0xBD80, "mugger_delayed_banking" }, // AUTOADDED
{ 0xBD81, "mugger_dropzones" }, // AUTOADDED
{ 0xBD82, "mugger_extra_tags" }, // AUTOADDED
{ 0xBD83, "mugger_first_unused_or_oldest_extra_tag" }, // AUTOADDED
{ 0xBD84, "mugger_fx" }, // AUTOADDED
{ 0xBD85, "mugger_fx_playing" },
{ 0xBD86, "mugger_go_to_tag_pile" }, // AUTOADDED
{ 0xBD87, "mugger_init_tags" }, // AUTOADDED
{ 0xBD88, "mugger_jackpot_abort_after_time" }, // AUTOADDED
{ 0xBD89, "mugger_jackpot_cleanup" }, // AUTOADDED
{ 0xBD8A, "mugger_jackpot_drop" },
{ 0xBD8B, "mugger_jackpot_fx" },
{ 0xBD8C, "mugger_jackpot_fx_cleanup" },
{ 0xBD8D, "mugger_jackpot_limit" }, // AUTOADDED
{ 0xBD8E, "mugger_jackpot_num_tags" }, // AUTOADDED
{ 0xBD8F, "mugger_jackpot_pile_notify" }, // AUTOADDED
{ 0xBD90, "mugger_jackpot_pile_notify_cleanup" },
{ 0xBD91, "mugger_jackpot_run" }, // AUTOADDED
{ 0xBD92, "mugger_jackpot_tags_spawned" }, // AUTOADDED
{ 0xBD93, "mugger_jackpot_tags_unspawned" }, // AUTOADDED
{ 0xBD94, "mugger_jackpot_text" }, // AUTOADDED
{ 0xBD95, "mugger_jackpot_timer" },
{ 0xBD96, "mugger_jackpot_wait_sec" },
{ 0xBD97, "mugger_jackpot_watch" }, // AUTOADDED
{ 0xBD98, "mugger_last_mega_drop" },
{ 0xBD99, "mugger_max_extra_tags" }, // AUTOADDED
{ 0xBD9A, "mugger_min_spawn_dist_sq" },
{ 0xBD9B, "mugger_monitor_remote_uav_pickups" }, // AUTOADDED
{ 0xBD9C, "mugger_monitor_tank_pickups" }, // AUTOADDED
{ 0xBD9D, "mugger_muggernaut_muggings_needed" }, // AUTOADDED
{ 0xBD9E, "mugger_muggernaut_window" }, // AUTOADDED
{ 0xBD9F, "mugger_pick_up_tag" }, // AUTOADDED
{ 0xBDA0, "mugger_pile_icon_remove" }, // AUTOADDED
{ 0xBDA1, "mugger_scorelimit" },
{ 0xBDA2, "mugger_tag_pickup_wait" }, // AUTOADDED
{ 0xBDA3, "mugger_tag_pile_notify" },
{ 0xBDA4, "mugger_tag_temp_spawn" }, // AUTOADDED
{ 0xBDA5, "mugger_targetfxid" }, // AUTOADDED
{ 0xBDA6, "mugger_throwing_knife_mug_frac" },
{ 0xBDA7, "mugger_timelimit" },
{ 0xBDA8, "muggercratethink" },
{ 0xBDAA, "muggings" }, // AUTOADDED
{ 0xBDC1, "multibomb" },
{ 0xBDC8, "multiplicativedamagemodifiers" },
{ 0xBDCC, "multiteambased" }, // AUTOADDED
{ 0xBDDB, "music_ent" },
{ 0xBDF0, "musicenabled" }, // AUTOADDED
{ 0xBDF4, "mustmaintainclaim" },
{ 0xBDF5, "mutations" },
{ 0xBDFC, "mutilation_mask_override_func" },
{ 0xBDFD, "mutilation_perk_func" },
{ 0xBE05, "mvparray" },
{ 0xBE17, "myfov" },
{ 0xBE47, "name_complete" }, // AUTOADDED
{ 0xBE63, "nav_obs" },
{ 0xBE74, "near_crystal" },
{ 0xBE75, "near_equipment_func" },
{ 0xBE77, "near_medusa" },
{ 0xBE7C, "nearest_node" }, // AUTOADDED
{ 0xBE7D, "nearest_node_for_camping" }, // AUTOADDED
{ 0xBE7E, "nearest_nodes" }, // AUTOADDED
{ 0xBE7F, "nearest_point_on_pathgrid" }, // AUTOADDED
{ 0xBE80, "nearest_points" }, // AUTOADDED
{ 0xBE82, "nearflagpoint" },
{ 0xBE8C, "needrecalculatesuppressspot" },
{ 0xBE8F, "needsbuttontorespawn" },
{ 0xBE98, "needstorechamber" },
{ 0xBE9E, "needtoreload" },
{ 0xBEAA, "neighbors" }, // AUTOADDED
{ 0xBEAB, "neil" },
{ 0xBEC6, "neil_head_added" },
{ 0xBEDD, "neil_repair_hintstring_logic" },
{ 0xBEE6, "nerf_already_activated" },
{ 0xBEE7, "nerf_based_on_selection" },
{ 0xBEE8, "nerf_list" },
{ 0xBEE9, "nerf_scalars" },
{ 0xBEEE, "neutralbrush" }, // AUTOADDED
{ 0xBEF3, "neutralhardpointfx" }, // AUTOADDED
{ 0xBEF4, "neutralized" },
{ 0xBEF6, "neutralzonebrushes" }, // AUTOADDED
{ 0xBEFC, "new" },
{ 0xBF05, "new_enemy_damage_check" },
{ 0xBF08, "new_goal_time" },
{ 0xBF18, "new_tool_hud" },
{ 0xBF19, "new_tool_hudelem" },
{ 0xBF24, "newprimarygun" },
{ 0xBF33, "next_button" },
{ 0xBF35, "next_check_recent_damage_time" },
{ 0xBF36, "next_crafting_item_drop_time" },
{ 0xBF40, "next_goal_time" }, // AUTOADDED
{ 0xBF44, "next_hide_time" },
{ 0xBF4A, "next_maxmoney_hint_time" },
{ 0xBF4F, "next_pain_vo_time" },
{ 0xBF50, "next_perk_jingle_time" },
{ 0xBF53, "next_play_time" },
{ 0xBF54, "next_reactive_time" },
{ 0xBF59, "next_scriptable_vo_time" },
{ 0xBF60, "next_strat_level_check" },
{ 0xBF63, "next_teleport_attack_time" },
{ 0xBF64, "next_teleport_dash_time" },
{ 0xBF65, "next_teleport_summon_time" },
{ 0xBF66, "next_teleport_time" },
{ 0xBF67, "next_teleport_to_loner_time" },
{ 0xBF68, "next_time_check_tags" }, // AUTOADDED
{ 0xBF73, "nextcanshoottesttime" },
{ 0xBF79, "nextdeathid" },
{ 0xBF7B, "nextdialogue" },
{ 0xBF84, "nextgrenadetrytime" },
{ 0xBF85, "nexthittime" },
{ 0xBF86, "nextlaserattacktime" },
{ 0xBF9C, "nextobjectid" }, // AUTOADDED
{ 0xBFA4, "nextplayerid" },
{ 0xBFA7, "nextroundisfinalround" }, // AUTOADDED
{ 0xBFAC, "nextspawntobeinstrumented" }, // AUTOADDED
{ 0xBFAD, "nextsplash" }, // AUTOADDED
{ 0xBFAE, "nextsplashlistindex" },
{ 0xBFB1, "nexttargetchangetime" },
{ 0xBFB2, "nextthrowtime" },
{ 0xBFD9, "no_abilities" },
{ 0xBFDB, "no_agent_spawn" }, // AUTOADDED
{ 0xBFE2, "no_class" },
{ 0xBFE8, "no_deployables" },
{ 0xBFF0, "no_gametype_update" },
{ 0xBFFF, "no_moving_platfrom_death" }, // AUTOADDED
{ 0xC000, "no_moving_platfrom_unlink" }, // AUTOADDED
{ 0xC004, "no_outline" },
{ 0xC00B, "no_power_cooldowns" },
{ 0xC016, "no_team_outlines" },
{ 0xC01C, "no_weapon_fired_notify" },
{ 0xC020, "noairdropkills" },
{ 0xC024, "nobuddyspawns" },
{ 0xC026, "nocorpse" },
{ 0xC027, "nocorpsedelete" }, // AUTOADDED
{ 0xC028, "nod_gesture" }, // AUTOADDED
{ 0xC029, "nodamage" }, // AUTOADDED
{ 0xC02A, "node_ambushing_from" },
{ 0xC031, "node_closest_to_defend_center" }, // AUTOADDED
{ 0xC037, "node_is_on_path_from_labels" },
{ 0xC038, "node_is_valid_outside_for_vanguard" }, // AUTOADDED
{ 0xC042, "node_within_use_radius_of_crate" },
{ 0xC043, "nodeath" },
{ 0xC047, "nodefiltertracesthisframe" },
{ 0xC048, "nodefiltertracestime" },
{ 0xC053, "nodes" },
{ 0xC060, "nofriendlytags" },
{ 0xC06E, "nolightfx" }, // AUTOADDED
{ 0xC087, "nopickuptime" }, // AUTOADDED
{ 0xC089, "noragdoll" },
{ 0xC08A, "noragdollents" },
{ 0xC092, "normal_revive_time" },
{ 0xC0A5, "noself_array_call" },
{ 0xC0A6, "noself_delaycall" },
{ 0xC0AB, "noself_delaycall_proc" },
{ 0xC0AC, "noself_func" },
{ 0xC0B1, "not_closing" }, // AUTOADDED
{ 0xC0B2, "not_opening" }, // AUTOADDED
{ 0xC0B6, "notargetfound" },
{ 0xC0E2, "notetrackalertnessaiming" },
{ 0xC0E3, "notetrackalertnessalert" },
{ 0xC0E4, "notetrackalertnesscasual" },
{ 0xC0E5, "notetrackbodyfall" },
{ 0xC0E6, "notetrackcodemove" },
{ 0xC0E7, "notetrackdropclip" },
{ 0xC0E8, "notetrackfaceenemy" },
{ 0xC0E9, "notetrackfacialangry" },
{ 0xC0EA, "notetrackfacialcheer" },
{ 0xC0EB, "notetrackfacialdeath" },
{ 0xC0EC, "notetrackfacialhappy" },
{ 0xC0ED, "notetrackfacialidle" },
{ 0xC0EE, "notetrackfacialpain" },
{ 0xC0EF, "notetrackfacialrun" },
{ 0xC0F0, "notetrackfacialscared" },
{ 0xC0F1, "notetrackfacialtalk" },
{ 0xC0F2, "notetrackfingerposeoffleft" },
{ 0xC0F3, "notetrackfingerposeoffright" },
{ 0xC0F4, "notetrackfingerposeonleft" },
{ 0xC0F5, "notetrackfingerposeonright" },
{ 0xC0F6, "notetrackfire" },
{ 0xC0F7, "notetrackfirespray" },
{ 0xC0F8, "notetrackfootscrape" },
{ 0xC0F9, "notetrackfootstep" },
{ 0xC0FB, "notetrackgravity" },
{ 0xC0FC, "notetrackgundrop" },
{ 0xC0FD, "notetrackgunhand" },
{ 0xC0FE, "notetrackguntoback" },
{ 0xC0FF, "notetrackguntochest" },
{ 0xC100, "notetrackhandstep" },
{ 0xC101, "notetrackland" },
{ 0xC102, "notetracklaser" },
{ 0xC103, "notetrackloadshell" },
{ 0xC104, "notetrackmovementgunposeoverride" },
{ 0xC105, "notetrackmovementrun" },
{ 0xC106, "notetrackmovementstop" },
{ 0xC107, "notetrackmovementwalk" },
{ 0xC108, "notetrackpistolpickup" },
{ 0xC109, "notetrackpistolputaway" },
{ 0xC10A, "notetrackpistolrechamber" },
{ 0xC10B, "notetrackposeback" },
{ 0xC10C, "notetrackposecrawl" },
{ 0xC10D, "notetrackposecrouch" },
{ 0xC10E, "notetrackposeprone" },
{ 0xC10F, "notetrackposestand" },
{ 0xC110, "notetrackragdollblendend" },
{ 0xC111, "notetrackragdollblendinit" },
{ 0xC112, "notetrackragdollblendrootanim" },
{ 0xC113, "notetrackragdollblendrootragdoll" },
{ 0xC114, "notetrackragdollblendstart" },
{ 0xC115, "notetrackrefillclip" },
{ 0xC116, "notetrackrocketlauncherammoattach" },
{ 0xC117, "notetrackrocketlauncherammodelete" },
{ 0xC118, "notetracks" },
{ 0xC119, "notetrackspacejet" },
{ 0xC11A, "notetrackspacejet_proc" },
{ 0xC11C, "notetrackstartragdoll" },
{ 0xC11D, "notetrackstopanim" },
{ 0xC11E, "notetrackvisorlower" },
{ 0xC11F, "notetrackvisorraise" },
{ 0xC127, "notify_activation_progress" },
{ 0xC128, "notify_after_time" },
{ 0xC131, "notify_enemy_bots_bomb_used" },
{ 0xC132, "notify_enemy_team_bomb_used" },
{ 0xC13B, "notify_moving_platform_invalid" }, // AUTOADDED
{ 0xC13D, "notify_objective" },
{ 0xC13F, "notify_on_damage" },
{ 0xC143, "notify_on_explode" },
{ 0xC148, "notify_on_whizby" },
{ 0xC14F, "notify_test" },
{ 0xC150, "notify_timeup_consumable" },
{ 0xC151, "notify_used_consumable" },
{ 0xC156, "notify_when_tag_aborted" },
{ 0xC157, "notify_when_tag_picked_up" },
{ 0xC158, "notify_when_tag_picked_up_or_unavailable" },
{ 0xC15A, "notifyafterframeend" },
{ 0xC15D, "notifyconnecting" },
{ 0xC16E, "notifyplayers" }, // AUTOADDED
{ 0xC175, "notifyteam" },
{ 0xC187, "notthrown" },
{ 0xC188, "notti" },
{ 0xC189, "noturnanims" },
{ 0xC18A, "notusableforjoiningplayers" },
{ 0xC18B, "nousebar" },
{ 0xC18C, "nousekillstreak" }, // AUTOADDED
{ 0xC19D, "npcid" },
{ 0xC1AC, "nuke_fx" },
{ 0xC1B4, "nukecapturethink" },
{ 0xC1B6, "nukecratethink" },
{ 0xC1B7, "nuked" },
{ 0xC1BB, "nukedetonated" },
{ 0xC1C3, "nukegameover" },
{ 0xC1C4, "nukeincoming" },
{ 0xC1D4, "nullownerdamagefunc" },
{ 0xC1E2, "num_crafting_drops" },
{ 0xC1E5, "num_fuse_in_possession" },
{ 0xC1E8, "num_goons_spawned" },
{ 0xC1E9, "num_goons_to_spawn" },
{ 0xC1EF, "num_marked_zombies_killed" },
{ 0xC1F0, "num_moving_target_escaped" },
{ 0xC1F2, "num_moving_target_reached_goal" },
{ 0xC1F3, "num_of_active_zombie_attacker" },
{ 0xC1F4, "num_of_clones" },
{ 0xC1F5, "num_of_ghosts_attacking_me" },
{ 0xC1F8, "num_of_quest_pieces_completed" },
{ 0xC1F9, "num_of_times_exit_afterlife_arcade" },
{ 0xC1FA, "num_of_times_stop_regen_health" },
{ 0xC1FD, "num_pipe_fx" },
{ 0xC205, "num_teleport_loner_encountered" },
{ 0xC206, "num_tickets" },
{ 0xC207, "num_times_in_afterlife" },
{ 0xC208, "num_ufo_zombies_killed" },
{ 0xC209, "num_zombies_available_to_spawn" },
{ 0xC20A, "num_zombies_marked" },
{ 0xC20F, "numagents" },
{ 0xC210, "numareas" }, // AUTOADDED
{ 0xC211, "number" },
{ 0xC213, "number_of_games_played" },
{ 0xC215, "numbermapobjs" }, // AUTOADDED
{ 0xC21D, "numcaps" }, // AUTOADDED
{ 0xC223, "numdropcrates" },
{ 0xC226, "numenemyvoices" },
{ 0xC22B, "numflares" }, // AUTOADDED
{ 0xC22C, "numfriendlyfemalevoices" },
{ 0xC22D, "numfriendlyvoices" },
{ 0xC230, "numgrabs" }, // AUTOADDED
{ 0xC231, "numgrenadesinprogresstowardsplayer" },
{ 0xC233, "numinitialinfected" },
{ 0xC234, "numkills" }, // AUTOADDED
{ 0xC236, "numlifelimited" },
{ 0xC23D, "numplayerswaitingtospawn" },
{ 0xC23F, "numrockets" },
{ 0xC240, "numrocketsleft" },
{ 0xC24F, "nx1_hint_display" },
{ 0xC270, "object" }, // AUTOADDED
{ 0xC274, "objective" },
{ 0xC293, "objective_radius" },
{ 0xC2A1, "objectivebased" },
{ 0xC2A6, "objectiveonvisuals" },
{ 0xC2A8, "objectives" }, // AUTOADDED
{ 0xC2AD, "objectivescaler" }, // AUTOADDED
{ 0xC2AE, "objectivesetorder" },
{ 0xC2AF, "objectivesettings" }, // AUTOADDED
{ 0xC2B5, "objid" }, // AUTOADDED
{ 0xC2BB, "objidfriendly" }, // AUTOADDED
{ 0xC2BC, "objidpingenemy" }, // AUTOADDED
{ 0xC2BD, "objidpingfriendly" }, // AUTOADDED
{ 0xC2BE, "objidpingenemy" }, // AUTOADDED
{ 0xC2BF, "objpingdelay" },
{ 0xC2C0, "objpoint_alpha_default" }, // AUTOADDED
{ 0xC2C1, "objpointnames" }, // AUTOADDED
{ 0xC2C2, "objpoints" },
{ 0xC2C3, "objpointscale" }, // AUTOADDED
{ 0xC2C4, "objpointsize" }, // AUTOADDED
{ 0xC2C5, "objstruct" }, // AUTOADDED
{ 0xC2C6, "objvisall" }, // AUTOADDED
{ 0xC2CF, "occupied" },
{ 0xC2D1, "occupied_positions" },
{ 0xC2D3, "odin" }, // AUTOADDED
{ 0xC2D4, "odin_airdropusetime" }, // AUTOADDED
{ 0xC2D5, "odin_ally" }, // AUTOADDED
{ 0xC2D6, "odin_animnode" }, // AUTOADDED
{ 0xC2D7, "odin_assault_get_target" }, // AUTOADDED
{ 0xC2D8, "odin_assault_perform_action" }, // AUTOADDED
{ 0xC2E9, "odin_flash_radius" }, // AUTOADDED
{ 0xC2F8, "odin_juggernautusetime" }, // AUTOADDED
{ 0xC2F9, "odin_large_rod_radius" }, // AUTOADDED
{ 0xC2FA, "odin_largerodusetime" }, // AUTOADDED
{ 0xC2FB, "odin_last_predict_position_time" }, // AUTOADDED
{ 0xC2FC, "odin_leave" }, // AUTOADDED
{ 0xC2FD, "odin_lgt_flicker" }, // AUTOADDED
{ 0xC2FE, "odin_lgt_pulsing" }, // AUTOADDED
{ 0xC2FF, "odin_marking_flash_radius_max" },
{ 0xC300, "odin_marking_flash_radius_min" },
{ 0xC301, "odin_markingusetime" }, // AUTOADDED
{ 0xC302, "odin_missile_rod" }, // AUTOADDED
{ 0xC303, "odin_onplayerconnect" }, // AUTOADDED
{ 0xC304, "odin_onplayerspawned" }, // AUTOADDED
{ 0xC305, "odin_overlay_ent" }, // AUTOADDED
{ 0xC306, "odin_precache" }, // AUTOADDED
{ 0xC307, "odin_predicted_loc_for_player" }, // AUTOADDED
{ 0xC308, "odin_predicted_loc_time_for_player" }, // AUTOADDED
{ 0xC30F, "odin_small_rod_radius" }, // AUTOADDED
{ 0xC310, "odin_smallrodusetime" }, // AUTOADDED
{ 0xC311, "odin_smokeusetime" }, // AUTOADDED
{ 0xC312, "odin_spin" }, // AUTOADDED
{ 0xC313, "odin_spin_room_logic" }, // AUTOADDED
{ 0xC314, "odin_struggle_fail_hint" }, // AUTOADDED
{ 0xC315, "odin_support_get_target" }, // AUTOADDED
{ 0xC316, "odin_support_perform_action" }, // AUTOADDED
{ 0xC322, "odintype" }, // AUTOADDED
{ 0xC32A, "offhand_count" },
{ 0xC363, "offset3d" },
{ 0xC364, "offset" },
{ 0xC365, "offset_fix" },
{ 0xC370, "offsets" }, // AUTOADDED
{ 0xC378, "og_angles" },
{ 0xC37F, "og_goalradius" },
{ 0xC38F, "og_origin" },
{ 0xC3A2, "ogorigin" },
{ 0xC3B7, "oldcontents" },
{ 0xC3F6, "oldmaxsightdistsqrd" }, // AUTOADDED
{ 0xC400, "oldprimarygun" }, // AUTOADDED
{ 0xC402, "oldradius" }, // AUTOADDED
{ 0xC40A, "oldweapon" },
{ 0xC4A0, "omausebar" }, // AUTOADDED
{ 0xC4A1, "omnvar" },
{ 0xC4A3, "omnvarnames" },
{ 0xC4A4, "on" },
{ 0xC4A7, "on_agent_generic_damaged" },
{ 0xC4A8, "on_agent_player_damaged" },
{ 0xC4A9, "on_agent_player_killed" },
{ 0xC4AA, "on_agent_squadmate_killed" }, // AUTOADDED
{ 0xC4AB, "on_alien_type_killed" }, // AUTOADDED
{ 0xC4AC, "on_bot_killed" },
{ 0xC4B3, "on_humanoid_agent_killed_common" },
{ 0xC4B6, "on_path_from" },
{ 0xC4B7, "on_path_grid" }, // AUTOADDED
{ 0xC4B8, "on_player_connect" },
{ 0xC4C4, "onassist" },
{ 0xC4C6, "onattackdelegate" }, // AUTOADDED
{ 0xC4C7, "onatv" }, // AUTOADDED
{ 0xC4C8, "onback" },
{ 0xC4C9, "onbegincarrying" }, // AUTOADDED
{ 0xC4CA, "onbeginnewmode" }, // AUTOADDED
{ 0xC4CB, "onbeginuse" }, // AUTOADDED
{ 0xC4CC, "onbombexploded" }, // AUTOADDED
{ 0xC4CE, "onbombzoneobjectivecomplete" }, // AUTOADDED
{ 0xC4D2, "oncancel" }, // AUTOADDED
{ 0xC4D3, "oncanceldelegate" }, // AUTOADDED
{ 0xC4D4, "oncantuse" }, // AUTOADDED
{ 0xC4D5, "oncarried" }, // AUTOADDED
{ 0xC4D6, "oncarrieddelegate" }, // AUTOADDED
{ 0xC4D7, "oncarrierdeath" }, // AUTOADDED
{ 0xC4D9, "oncontested" },
{ 0xC4DB, "oncranked" },
{ 0xC4E7, "ondeactivedelegate" }, // AUTOADDED
{ 0xC4E8, "ondeadevent" }, // AUTOADDED
{ 0xC4E9, "ondeath" }, // AUTOADDED
{ 0xC4EA, "ondeath_clearscriptedanim" }, // AUTOADDED
{ 0xC4EB, "ondeathdelegate" }, // AUTOADDED
{ 0xC4EF, "ondelivered" },
{ 0xC4F0, "ondeploycallback" },
{ 0xC4F4, "ondetonateexplosive" },
{ 0xC4F5, "ondisconnect" }, // AUTOADDED
{ 0xC4F7, "ondompointobjectivecomplete" }, // AUTOADDED
{ 0xC4F9, "ondrop" },
{ 0xC4FA, "ondropfn" },
{ 0xC50C, "onemanarmyweaponchangetracker" },
{ 0xC50D, "onenduse" },
{ 0xC50E, "onenter" }, // AUTOADDED
{ 0xC50F, "onenteranimstate" },
{ 0xC51A, "oneshotfxthread" },
{ 0xC524, "onexplodefunc" },
{ 0xC525, "onexplodesfx" },
{ 0xC526, "onexplodevfx" },
{ 0xC527, "onfinalsurvivor" },
{ 0xC529, "onfirehomingmissile" },
{ 0xC52A, "onfirerocket" },
{ 0xC52B, "onfirstspawnedplayer" },
{ 0xC52C, "onflagcapture" },
{ 0xC52E, "onflybycompletedelegate" }, // AUTOADDED
{ 0xC533, "ongameended" }, // AUTOADDED
{ 0xC534, "ongasgrenadeimpact" },
{ 0xC53B, "onhelisniper" },
{ 0xC542, "onjointeamblinkinglight" },
{ 0xC544, "onkill" },
{ 0xC546, "onkillstreakdamaged" }, // AUTOADDED
{ 0xC548, "onkillstreakkilled" },
{ 0xC549, "onkillstreaksplashshown" },
{ 0xC54C, "onlaunchsfx" },
{ 0xC54E, "onlethalequipmentplanted" },
{ 0xC54F, "onlinegame" },
{ 0xC550, "only_allowable_tactical_goals" }, // AUTOADDED
{ 0xC552, "only_one_player" },
{ 0xC553, "only_use_weapon" },
{ 0xC556, "onlyroundoverride" }, // AUTOADDED
{ 0xC55E, "onnormaldeath" },
{ 0xC55F, "onobjectdelivered" }, // AUTOADDED
{ 0xC560, "onobjectdrop" }, // AUTOADDED
{ 0xC561, "onobjectivecomplete" }, // AUTOADDED
{ 0xC562, "onobjectpickup" },
{ 0xC563, "onobjectreset" },
{ 0xC564, "ononeleftevent" }, // AUTOADDED
{ 0xC566, "onpickup" },
{ 0xC567, "onpickupfailed" }, // AUTOADDED
{ 0xC568, "onpickupfailfn" }, // AUTOADDED
{ 0xC569, "onpickupfn" }, // AUTOADDED
{ 0xC56A, "onpinnedstate" }, // AUTOADDED
{ 0xC56B, "onplaced" }, // AUTOADDED
{ 0xC56C, "onplaceddelegate" }, // AUTOADDED
{ 0xC56D, "onplayerchangeteams" }, // AUTOADDED
{ 0xC56E, "onplayerconnect" }, // AUTOADDED
{ 0xC56F, "onplayerconnectaudioinit" }, // AUTOADDED
{ 0xC570, "onplayerconnected" }, // AUTOADDED
{ 0xC571, "onplayerconnecthorde" }, // AUTOADDED
{ 0xC572, "onplayerconnecting" },
{ 0xC574, "onplayerdisconnected" },
{ 0xC577, "onplayerkilled" }, // AUTOADDED
{ 0xC578, "onplayerlaststand" }, // AUTOADDED
{ 0xC579, "onplayerscore" },
{ 0xC57B, "onplayerspawned" },
{ 0xC57C, "onplayerjointeam" },
{ 0xC57D, "onplayertouchkilltrigger" },
{ 0xC580, "onprecachegametype" },
{ 0xC581, "onreset" },
{ 0xC582, "onresetfn" },
{ 0xC583, "onrespawndelay" },
{ 0xC598, "onslide" },
{ 0xC59E, "onspawnfinished" },
{ 0xC59F, "onspawnplayer" },
{ 0xC5A0, "onspawnspectator" },
{ 0xC5A4, "onstartgametype" },
{ 0xC5AA, "onsuicidedeath" },
{ 0xC5AB, "onsurvivorseliminated" }, // AUTOADDED
{ 0xC5AC, "ontacticalequipmentplanted" }, // AUTOADDED
{ 0xC5AD, "ontagpickupevent" },
{ 0xC5AE, "onteamchangecallback" }, // AUTOADDED
{ 0xC5AF, "onteamchangedeath" }, // AUTOADDED
{ 0xC5B0, "onteamscore" }, // AUTOADDED
{ 0xC5B1, "onteamselection" }, // AUTOADDED
{ 0xC5B2, "ontimelimit" },
{ 0xC5B3, "ontriggeredfunc" },
{ 0xC5B4, "ontriggeredsfx" },
{ 0xC5B9, "onuncontested" },
{ 0xC5BA, "onunoccupied" },
{ 0xC5BB, "onuse" }, // AUTOADDED
{ 0xC5BC, "onusecallback" }, // AUTOADDED
{ 0xC5BD, "onusedefuseobject" }, // AUTOADDED
{ 0xC5BE, "onusedeployable" }, // AUTOADDED
{ 0xC5C6, "onuseplantobject" },
{ 0xC5C7, "onusesfx" }, // AUTOADDED
{ 0xC5C8, "onuseupdate" },
{ 0xC5CB, "onweapondamage" }, // AUTOADDED
{ 0xC5CC, "onxpevent" },
{ 0xC5CD, "onzombiedamaged" },
{ 0xC5CE, "onzombiedamagefinished" },
{ 0xC5D2, "onzombiekilled" },
{ 0xC5D3, "onzombiekilledfunc" },
{ 0xC5DA, "open_afterlife_door_for_player" },
{ 0xC5E1, "open_coaster_arm_gates" },
{ 0xC5E2, "open_coaster_door" },
{ 0xC5E7, "open_coaster_doors" },
{ 0xC5EB, "open_current_door" },
{ 0xC602, "open_gates" },
{ 0xC606, "open_inner_doors" },
{ 0xC612, "open_outer_doors" },
{ 0xC617, "open_sesame" },
{ 0xC626, "opened" },
{ 0xC636, "operationscompleted" },
{ 0xC637, "operationsmaxed" },
{ 0xC6BB, "optionalnumber" }, // AUTOADDED
{ 0xC6BC, "optionalstepeffectfunction" }, // AUTOADDED
{ 0xC6BD, "optionalstepeffects" },
{ 0xC6BE, "optionalstepeffectsmallfunction" }, // AUTOADDED
{ 0xC6BF, "optionalstepeffectssmall" }, // AUTOADDED
{ 0xC6C0, "options" },
{ 0xC6C1, "opweaponsarray" },
{ 0xC714, "origin_ent" }, // AUTOADDED
{ 0xC715, "origin_intensity" }, // AUTOADDED
{ 0xC716, "origin_is_valid_for_vanguard" }, // AUTOADDED
{ 0xC719, "origin_offset" },
{ 0xC71B, "origin_prev" },
{ 0xC726, "original_pos" },
{ 0xC731, "originalowner" }, // AUTOADDED
{ 0xC732, "originalpos" },
{ 0xC749, "otherbombzones" },
{ 0xC74B, "otherteam" },
{ 0xC74D, "out_of_order" },
{ 0xC74F, "outboundflightanim" }, // AUTOADDED
{ 0xC750, "outboundsfx" }, // AUTOADDED
{ 0xC766, "outframes" }, // AUTOADDED
{ 0xC76B, "outline_all_enemies" },
{ 0xC771, "outline_enemies" },
{ 0xC776, "outline_init" },
{ 0xC77A, "outline_monitor_think" },
{ 0xC785, "outline_weapon_watch_list" },
{ 0xC786, "outlineaddplayertoexistingallandteamoutlines" }, // AUTOADDED
{ 0xC787, "outlineaddtogloballist" }, // AUTOADDED
{ 0xC789, "outlinecolor" },
{ 0xC78D, "outlinedent" }, // AUTOADDED
{ 0xC78F, "outlinedisable" },
{ 0xC790, "outlinedisableinternal" }, // AUTOADDED
{ 0xC791, "outlinedisableinternalall" }, // AUTOADDED
{ 0xC794, "outlineenableforplayer" },
{ 0xC795, "outlineenableforteam" }, // AUTOADDED
{ 0xC796, "outlineenableinternal" }, // AUTOADDED
{ 0xC797, "outlineents" }, // AUTOADDED
{ 0xC798, "outlineequipmentforowner" },
{ 0xC79A, "outlinegenerateuniqueid" }, // AUTOADDED
{ 0xC79B, "outlinegethighestinfoforplayer" }, // AUTOADDED
{ 0xC79C, "outlinegethighestpriorityid" }, // AUTOADDED
{ 0xC79D, "outlineid" }, // AUTOADDED
{ 0xC79F, "outlineids" }, // AUTOADDED
{ 0xC7A5, "outlineonplayerjoinedteam_onfirstspawn" }, // AUTOADDED
{ 0xC7AC, "outlineremovefromgloballist" }, // AUTOADDED
{ 0xC7AD, "outlineremoveplayerfromvisibletoarrays" }, // AUTOADDED
{ 0xC7AE, "outlines" }, // AUTOADDED
{ 0xC7B0, "outlinesuperequipmentforteam" }, // AUTOADDED
{ 0xC7B1, "outlinetime" },
{ 0xC7B2, "outlinewatcher" },
{ 0xC7E0, "outside_zones" }, // AUTOADDED
{ 0xC7E9, "overcook_func" },
{ 0xC7F9, "overheated" }, // AUTOADDED
{ 0xC7FB, "overheattime" }, // AUTOADDED
{ 0xC7FE, "overlay_coords" },
    { 0xC80D, "override_box_moving_platform_death" },
    { 0xC80E, "override_class_function" },
    { 0xC81E, "overridecrateusetime" },
    { 0xC822, "overrider" },
    { 0xC826, "overrideviewkickscale" },
    { 0xC829, "overrideweaponspeed_speedscale" }, // AUTOADDED
    { 0xC82C, "overtimescorewinoverride" },
    { 0xC836, "ownerdisconnectcleanup" },
    { 0xC837, "ownerhintstring" },
    { 0xC83A, "ownersattacker" },
    { 0xC83B, "ownership" }, // AUTOADDED
    { 0xC83C, "ownershipstring" },
    { 0xC83E, "ownerteam" }, // AUTOADDED
    { 0xC840, "ownertrigger" },
    { 0xC858, "pack" },
    { 0xC859, "packboat_countdown" },
    { 0xC85A, "packboat_logic_started" },
    { 0xC85B, "packboat_path" },
    { 0xC85F, "padding_damage" },
    { 0xC881, "painted" }, // AUTOADDED
    { 0xC898, "panels" },
    { 0xC8A2, "pap" },
    { 0xC8A3, "pap_firsttime" },
    { 0xC8A4, "pap_max" },
    { 0xC8A5, "pap_repair_hint_func" },
    { 0xC8A7, "pap_test" },
    { 0xC8A8, "pap_timer_running" },
    { 0xC8A9, "pap_timer_start" },
    { 0xC8AA, "pap_upgrade_hintstring" },
    { 0xC8AB, "paping_weapon" },
    { 0xC8F0, "params" }, // AUTOADDED
    { 0xC8F1, "params_default" }, // AUTOADDED
    { 0xC8F2, "parent" }, // AUTOADDED
    { 0xC8F9, "parm1" }, // AUTOADDED
    { 0xC8FA, "parm2" }, // AUTOADDED
    { 0xC8FB, "parm3" }, // AUTOADDED
    { 0xC8FC, "parm4" }, // AUTOADDED
    { 0xC8FE, "parse_consumables_table" },
    { 0xC900, "parse_music_genre_table" },
    { 0xC901, "parse_noteworthy_values" },
    { 0xC905, "parse_weapon_table" },
    { 0xC907, "parsed" }, // AUTOADDED
    { 0xC908, "parselocationaliases" },
    { 0xC909, "part" },
    { 0xC90A, "part_1" },
    { 0xC90B, "part_2" },
    { 0xC91F, "part_3" },
    { 0xC920, "part_listener" },
    { 0xC921, "part_model" },
    { 0xC928, "participants" }, // AUTOADDED
    { 0xC92C, "partner" },
    { 0xC92D, "partnerheli" }, // AUTOADDED
    { 0xC92E, "parts" }, // AUTOADDED
    { 0xC92F, "parts_map" }, // AUTOADDED
    { 0xC930, "pass" },
    { 0xC931, "pass_dot" }, // AUTOADDED
    { 0xC932, "pass_icon" }, // AUTOADDED
    { 0xC933, "pass_or_throw_active" },
    { 0xC935, "pass_target" }, // AUTOADDED
    { 0xC943, "passivemap" }, // AUTOADDED
    { 0xC945, "passiveparsetable" }, // AUTOADDED
    { 0xC946, "passives" }, // AUTOADDED
    { 0xC947, "passivestringref" }, // AUTOADDED
    { 0xC948, "passiveuses" }, // AUTOADDED
    { 0xC949, "passivevalues" }, // AUTOADDED
    { 0xC94A, "passplayer" }, // AUTOADDED
    { 0xC94C, "passtime" }, // AUTOADDED
    { 0xC94D, "paste_ents" },
    { 0xC94E, "pastswitch" }, // AUTOADDED
    { 0xC94F, "path" }, // AUTOADDED
    { 0xC9B8, "pause_between_vo" },
    { 0xC9C1, "pause_nag_vo" },
    { 0xC9CD, "pauseballtimer" }, // AUTOADDED
    { 0xC9CE, "pausecountdowntimer" }, // AUTOADDED
    { 0xC9CF, "pauseeffect" },
    { 0xC9D0, "pauseexploder" }, // AUTOADDED
    { 0xC9D1, "pausemax" }, // AUTOADDED
    { 0xC9D2, "pausemenu_think" }, // AUTOADDED
    { 0xC9D3, "pausemin" }, // AUTOADDED
    { 0xC9D5, "pausemodetimer" },
    { 0xC9D6, "pausetimer" },
    { 0xC9D7, "pausing_bot_connect_monitor" }, // AUTOADDED
    { 0xCA01, "pelletdmg" },
    { 0xCA08, "pendingdeath" },
    { 0xCA12, "percentage" },
    { 0xCA2E, "perk" },
    { 0xCA2F, "perk_data" },
    { 0xCA32, "perk_getbulletdamagescalar" },
    { 0xCA33, "perk_getcurrencyscaleperhive" }, // AUTOADDED
    { 0xCA34, "perk_getdrillhealthscalar" }, // AUTOADDED
    { 0xCA35, "perk_getdrilltimescalar" }, // AUTOADDED
    { 0xCA36, "perk_getexplosivedamagescalar" },
    { 0xCA39, "perk_getmaxhealth" },
    { 0xCA3A, "perk_getmeleescalar" },
    { 0xCA3C, "perk_getoffhandcount" },
    { 0xCA41, "perk_getrevivetimescalar" },
    { 0xCA48, "perk_machine_top" },
    { 0xCA4C, "perk_type" },
    { 0xCA52, "perkicon" }, // AUTOADDED
    { 0xCA53, "perkname" }, // AUTOADDED
    { 0xCA54, "perknamesforgambler" }, // AUTOADDED
    { 0xCA55, "perkoutlined" },
    { 0xCA5B, "perks" },
    { 0xCA5D, "perksblocked" },
    { 0xCA5F, "perksenabled" },
    { 0xCA60, "perksetfuncs" },
    { 0xCA61, "perksperkname" },
    { 0xCA62, "perksperkpower" }, // AUTOADDED
    { 0xCA63, "perksuseslot" }, // AUTOADDED
    { 0xCA64, "perktable_add" }, // AUTOADDED
    { 0xCA65, "perktable_costs" }, // AUTOADDED
    { 0xCA66, "perkunsetfuncs" }, // AUTOADDED
    { 0xCA67, "perkusedeathtracker" }, // AUTOADDED
    { 0xCA68, "perkwatcher" }, // AUTOADDED
    { 0xCA69, "perkweaponlaseroffforswitchstart" }, // AUTOADDED
    { 0xCA6A, "perkweaponlaseron" }, // AUTOADDED
    { 0xCA6B, "perm_on" }, // AUTOADDED
    { 0xCA6C, "permanentcustommovetransition" }, // AUTOADDED
    { 0xCA6D, "persclear_stats" }, // AUTOADDED
    { 0xCA6E, "persist" }, // AUTOADDED
    { 0xCA6F, "persistence_weaponstats" },
    { 0xCA70, "persistentdatainfo" }, // AUTOADDED
    { 0xCA71, "persistentdebugline" },
    { 0xCA74, "personal_score_component_name" },
    { 0xCA79, "personality" },
    { 0xCA7A, "personality_init_function" },
    { 0xCA7B, "personality_update_function" },
    { 0xCA7C, "personalitymanuallyset" },
    { 0xCA7D, "personalradaractive" },
    { 0xCA80, "pet" },
    { 0xCAB0, "phasespeedmod" },
    { 0xCACC, "phone" },
    { 0xCAF8, "phys_sound_func" },
    { 0xCAFB, "physics_callback_monitor" },
    { 0xCAFC, "physics_impact_watch" },
    { 0xCB0B, "physicsactivated" }, // AUTOADDED
    { 0xCB10, "physicssphereforce" },
    { 0xCB11, "physicssphereradius" },
    { 0xCB14, "physicswaiter" },
    { 0xCB1C, "pick_ball_carrier" },
    { 0xCB20, "pick_up_battery" },
    { 0xCB21, "pick_up_dj_quest_part" },
    { 0xCB22, "pick_up_knocked_off_glasses" },
    { 0xCB23, "pick_up_part_1" },
    { 0xCB24, "pick_up_part_2" },
    { 0xCB25, "pick_up_part_3" },
    { 0xCB30, "picktargetingfunction" },
    { 0xCB32, "pickup_battery" },
    { 0xCB34, "pickup_firmware" },
    { 0xCB37, "pickup_head" },
    { 0xCB40, "pickupenabled" },
    { 0xCB43, "pickupicon" },
    { 0xCB48, "pickuptime" }, // AUTOADDED
    { 0xCB4B, "pickupweaponhandler" },
    { 0xCB4C, "picture" },
    { 0xCB4D, "pictures_found" },
    { 0xCB4E, "picturewaitfordamage" },
    { 0xCB59, "pillage_hint_func" },
    { 0xCB5A, "pillage_init" },
    { 0xCB5B, "pillage_item_drop_func" },
    { 0xCB65, "pillageable_attachments" },
    { 0xCB83, "pillageable_explosives" },
    { 0xCB84, "pillageable_piece_lethal_monitor" },
    { 0xCB85, "pillageable_powers" },
    { 0xCB86, "pillageinfo" },
    { 0xCB9B, "pintoscreenedge" },
    { 0xCBC9, "pipe_calc_ballistic" },
    { 0xCBCA, "pipe_calc_nofx" },
    { 0xCBCB, "pipe_calc_splash" },
    { 0xCBCC, "pipe_damage" },
    { 0xCBCD, "pipe_fx_array" },
    { 0xCBCE, "pipe_logic" },
    { 0xCBCF, "pipe_wait_loop" },
    { 0xCBD0, "pipefx" },
    { 0xCBD2, "pipes_init" },
    { 0xCBD3, "pipesdamage" },
    { 0xCBD4, "pipesetup" },
    { 0xCBDB, "pistol_overkill" },
    { 0xCBDF, "pistolarray" }, // AUTOADDED
    { 0xCBE1, "pistols_only" },
    { 0xCBFE, "place_on_standee_string" },
    { 0xCBFF, "place_part" },
    { 0xCC02, "place_tone_generator" },
    { 0xCC03, "place_tone_generator_on" },
    { 0xCC09, "placeableconfigs" }, // AUTOADDED
    { 0xCC0A, "placecancelablestring" },
    { 0xCC0B, "placed" },
    { 0xCC0C, "placed_crafted_traps" },
    { 0xCC11, "placedims" },
    { 0xCC12, "placedmodel" },
    { 0xCC13, "placedompoint" },
    { 0xCC14, "placedsentries" }, // AUTOADDED
    { 0xCC16, "placeequipmentfailed" },
    { 0xCC17, "placeequipmentfailedcleanup" },
    { 0xCC19, "placeflag" },
    { 0xCC1B, "placehinton" },
    { 0xCC1D, "placement" },
    { 0xCC1E, "placement_fx" },
    { 0xCC1F, "placement_fx_complete" },
    { 0xCC21, "placementfailed" },
    { 0xCC22, "placementheighttolerance" },
    { 0xCC25, "placementradius" },
    { 0xCC27, "placepoint" },
    { 0xCC28, "placestring" },
    { 0xCC2B, "placeuplinkgoal" },
    { 0xCC2C, "placeweaponon" },
    { 0xCC2D, "placingitemstreakname" },
    { 0xCC42, "planecleanup" }, // AUTOADDED
    { 0xCC43, "planeconfigs" }, // AUTOADDED
    { 0xCC44, "planemodel" }, // AUTOADDED
    { 0xCC45, "planemove" }, // AUTOADDED
    { 0xCC46, "planes" }, // AUTOADDED
    { 0xCC47, "planespawn" }, // AUTOADDED
    { 0xCC48, "plant_anims" }, // AUTOADDED
    { 0xCC49, "plant_set_stage" }, // AUTOADDED
    { 0xCC4A, "plant_set_stage_directional" }, // AUTOADDED
    { 0xCC4B, "planted" }, // AUTOADDED
    { 0xCC4C, "plantedlethalequip" }, // AUTOADDED
    { 0xCC4D, "plantedtacticalequip" }, // AUTOADDED
    { 0xCC51, "plants" },
    { 0xCC52, "planttime" },
    { 0xCC8F, "play_announcer_vo" },
    { 0xCC90, "play_arc_vfx_between_points" },
    { 0xCC91, "play_arcane_vo" },
    { 0xCCA5, "play_basic_pain_overlay" },
    { 0xCCA6, "play_basketball_game" },
    { 0xCCAA, "play_blood_pool" },
    { 0xCCC1, "play_char_intro_gesture" },
    { 0xCCC2, "play_char_intro_music" },
    { 0xCCCC, "play_consumable_activate_sound" },
    { 0xCCDF, "play_dj_broadcast_vo" },
    { 0xCCE0, "play_dj_parts_quest_vo" },
    { 0xCD06, "play_exit_afterlife_arcade_vo" },
    { 0xCD0D, "play_fail_sound" },
    { 0xCD19, "play_fx_for_time" },
    { 0xCD1C, "play_fx_with_delay" },
    { 0xCD1D, "play_fx_with_entity" }, // AUTOADDED
    { 0xCD40, "play_hidden_song" },
    { 0xCD55, "play_intro_gesture" },
    { 0xCD7F, "play_loop_sound_on_entity" },
    { 0xCD80, "play_loop_sound_on_entity_with_pitch" }, // AUTOADDED
    { 0xCD81, "play_loop_sound_on_tag" }, // AUTOADDED
    { 0xCD82, "play_looping_acknowlegdements" }, // AUTOADDED
    { 0xCD83, "play_looping_breath_sound" }, // AUTOADDED
    { 0xCD84, "play_looping_skit_anim" }, // AUTOADDED
    { 0xCD85, "play_looping_sound_on_ent" }, // AUTOADDED
    { 0xCD86, "play_loopsound_in_space" },
    { 0xCD8C, "play_match_tone_sequence" },
    { 0xCD98, "play_minigame_vo" },
    { 0xCDB8, "play_origin" },
    { 0xCDBE, "play_pain_photo" },
    { 0xCDC0, "play_perk_gesture" },
    { 0xCDC1, "play_perk_machine_deny_sound" },
    { 0xCDC2, "play_perk_machine_purchase_sound" },
    { 0xCDD8, "play_random_sound_in_space" },
    { 0xCDD9, "play_reactive_fx" },
    { 0xCDDC, "play_rescue_anim" },
    { 0xCDE3, "play_revive_gesture" },
    { 0xCE1D, "play_solo_vo" },
    { 0xCE2B, "play_sound_in_space" },
    { 0xCE2C, "play_sound_in_space_with_angles" },
    { 0xCE2F, "play_sound_on_entity" },
    { 0xCE31, "play_sound_on_tag" },
    { 0xCE3E, "play_spitter_pain_overlay" },
    { 0xCE3F, "play_start_grey_sequence_vo" },
    { 0xCE64, "play_time_monitor" },
    { 0xCE6B, "play_tone" },
    { 0xCE6E, "play_trigger_wmd_vo" },
    { 0xCE72, "play_ufo_start_vfx" },
    { 0xCE77, "play_vo" },
    { 0xCE7E, "play_vo_for_powerup" },
    { 0xCE7F, "play_vo_for_trap_kills" },
    { 0xCE8A, "play_vo_on_player" },
    { 0xCE8B, "play_vo_system" },
    { 0xCE96, "play_weapon_purchase_vo" },
    { 0xCE99, "play_ww_on_each_player" },
    { 0xCE9B, "play_zombie_death_vo" },
    { 0xCE9C, "play_zombie_vo" },
    { 0xCE9F, "playac130effects" },
    { 0xCEA7, "playaliasoverradio" },
    { 0xCEF1, "playbodyfx" },
    { 0xCF0B, "playdamageefx" }, // AUTOADDED
    { 0xCF14, "playdeathfx" }, // AUTOADDED
    { 0xCF16, "playdeathsound" },
    { 0xCF17, "playdeathsoundinlaststand" },
    { 0xCF2C, "played" },
    { 0xCF2E, "played_alias_ufostart" },
    { 0xCF2F, "played_dj_vos" },
    { 0xCF34, "playedstartingmusic" },
    { 0xCF35, "playeffectwhenspawned" },
    { 0xCF3E, "player_action_disabled" },
    { 0xCF90, "player_black_screen" },
    { 0xCF91, "player_bleed_out_func" },
    { 0xCFBC, "player_casualty_vo" },
    { 0xCFC3, "player_character_index" },
    { 0xCFC7, "player_cleanupongameended" },
    { 0xCFC8, "player_cleanuponteamchange" },
    { 0xCFCA, "player_clear_pass_target" }, // AUTOADDED
    { 0xCFD5, "player_connect_monitor" },
    { 0xD017, "player_delete_ball_goal_fx" }, // AUTOADDED
    { 0xD018, "player_delete_flag_goal_fx" },
    { 0xD036, "player_down_slide" },
    { 0xD04C, "player_entangled_by" },
    { 0xD052, "player_enter_transition_monitor" },
    { 0xD055, "player_escape" },
    { 0xD058, "player_exit_afterlife_monitor" },
    { 0xD095, "player_get_closest_point" },
    { 0xD096, "player_get_closest_point_static" },
    { 0xD097, "player_get_player_index" },
    { 0xD0BB, "player_has_enough_currency" },
    { 0xD0C5, "player_has_souvenir" },
    { 0xD0C6, "player_has_special_ammo" },
    { 0xD0E1, "player_hotjoin" },
    { 0xD0EF, "player_in_laststand" },
    { 0xD0F6, "player_init" },
    { 0xD0F7, "player_init_afterlife" },
    { 0xD0F9, "player_init_damageshield" },
    { 0xD0FA, "player_init_func" },
    { 0xD0FB, "player_init_health_regen" },
    { 0xD0FC, "player_init_invulnerability" },
    { 0xD103, "player_interaction_monitor" },
    { 0xD11B, "player_is_in_jackal" },
    { 0xD1A5, "player_joined_update_pass_target_hudoutline" },
    { 0xD1BE, "player_last_death_pos" },
    { 0xD1EB, "player_lua_progressbar" },
    { 0xD207, "player_no_pickup_time" }, // AUTOADDED
    { 0xD210, "player_on_disconnect" }, // AUTOADDED
    { 0xD220, "player_pain_breathing_sfx" },
    { 0xD222, "player_pain_vo" },
    { 0xD225, "player_persistence_init" },
    { 0xD229, "player_picked_team" }, // AUTOADDED
    { 0xD246, "player_pushed_kill" }, // AUTOADDED
    { 0xD261, "player_revived_or_dead" },
    { 0xD289, "player_set_pass_target" },
    { 0xD2C6, "player_spawn_monitor" },
    { 0xD2C7, "player_speed" },
    { 0xD2CB, "player_speed_hud" },
    { 0xD2FE, "player_ticket_queue" },
    { 0xD305, "player_trace" },
    { 0xD306, "player_trace_get_all_results" },
    { 0xD307, "player_trace_passed" },
    { 0xD312, "player_unresolved_collision_watch" }, // AUTOADDED
    { 0xD314, "player_update_pass_target" },
    { 0xD315, "player_update_pass_target_hudoutline" },
    { 0xD31E, "player_used_pillage_spot" },
    { 0xD336, "player_vo_playing" },
    { 0xD338, "player_volume_activation_check_init" },
    { 0xD353, "player_weaponstats_track_shots" },
    { 0xD354, "player_who_tagged" },
    { 0xD35E, "playeraffectedarray" }, // AUTOADDED
    { 0xD364, "playerarmor" },
    { 0xD36B, "playercanusetags" },
    { 0xD376, "playercontrolledstreak" }, // AUTOADDED
    { 0xD387, "playerenterarea" }, // AUTOADDED
    { 0xD388, "playerentercallback" }, // AUTOADDED
    { 0xD389, "playerentersoftlanding" }, // AUTOADDED
    { 0xD38C, "playerfields" }, // AUTOADDED
    { 0xD390, "playerforplayercard" }, // AUTOADDED
    { 0xD3A4, "playerhealth_regularregendelay" },
    { 0xD3A5, "playerhealthregen" },
    { 0xD3AB, "playerid" }, // AUTOADDED
    { 0xD3C2, "playerjoinwatcher" },
    { 0xD3C3, "playerkilled" }, // AUTOADDED
    { 0xD3C4, "playerkilled_internal" },
    { 0xD3CE, "playerleavearea" }, // AUTOADDED
    { 0xD3CF, "playerleavesoftlanding" }, // AUTOADDED
    { 0xD3D3, "playerlinked" }, // AUTOADDED
    { 0xD3D7, "playermeleestunregentime" },
    { 0xD3DF, "playeroutlinemonitor" },
    { 0xD3E1, "playerpainbreathingsound" },
    { 0xD3E7, "playerproxyagent" }, // AUTOADDED
    { 0xD3E9, "playerremoveoutline" }, // AUTOADDED
    { 0xD406, "players" },
    { 0xD407, "players_being_revived" },
    { 0xD40C, "players_waiting_to_join" }, // AUTOADDED
    { 0xD414, "playersettagcount" }, // AUTOADDED
    { 0xD424, "playerspawnpos" },
    { 0xD42A, "playersrevived" },
    { 0xD42F, "playerstreakspeedscale" },
    { 0xD432, "playersvisibleto" }, // AUTOADDED
    { 0xD437, "playerteam" },
    { 0xD453, "playertweaks" }, // AUTOADDED
    { 0xD454, "playerunlimitedammothread" },
    { 0xD458, "playerupdaterank" },
    { 0xD460, "playerviewowner" },
    { 0xD465, "playerweapon" },
    { 0xD468, "playeventvo" },
    { 0xD473, "playfacesound" }, // AUTOADDED
    { 0xD474, "playfacethread" },
    { 0xD475, "playfacialanim" },
    { 0xD47A, "playflarefx" }, // AUTOADDED
    { 0xD47B, "playflavorburstline" }, // AUTOADDED
    { 0xD47C, "playflyoveraudioline" }, // AUTOADDED
    { 0xD47D, "playfootprinteffect" }, // AUTOADDED
    { 0xD47E, "playfootstep" },
    { 0xD47F, "playfootstepeffect" },
    { 0xD482, "playfxatpoint" },
    { 0xD483, "playfxcallback" }, // AUTOADDED
    { 0xD484, "playfxnophase" },
    { 0xD48C, "playghostexplosionvfx" },
    { 0xD493, "playhardpointneutralfx" }, // AUTOADDED
    { 0xD497, "playheatfx" }, // AUTOADDED
    { 0xD4A9, "playing_sound" }, // AUTOADDED
    { 0xD4AA, "playing_stumble" }, // AUTOADDED
    { 0xD4AB, "playing_terrorist_respawn_music" }, // AUTOADDED
    { 0xD4AC, "playingburningfx" }, // AUTOADDED
    { 0xD4AD, "playinglocksound" }, // AUTOADDED
    { 0xD4B0, "playingselfvo" }, // AUTOADDED
    { 0xD4B1, "playingselfvotracking" }, // AUTOADDED
    { 0xD4B6, "playkillstreakdialogonplayer" }, // AUTOADDED
    { 0xD4BC, "playlifelinkfx" },
    { 0xD4BE, "playlinkedsmokeeffect" }, // AUTOADDED
    { 0xD4C0, "playlockerrorsound" }, // AUTOADDED
    { 0xD4C1, "playlocksound" }, // AUTOADDED
    { 0xD4C7, "playlooponent" },
    { 0xD4ED, "playovertime" }, // AUTOADDED
    { 0xD4F6, "playpainoverlay" },
    { 0xD4FA, "playplanefx" }, // AUTOADDED
    { 0xD4FB, "playplayerandnpcsounds" },
    { 0xD4FC, "playplayervo" },
    { 0xD505, "playredrepulsorfx" },
    { 0xD510, "playselfvo" },
    { 0xD511, "playsequence" },
    { 0xD51F, "playsmokefx" }, // AUTOADDED
    { 0xD520, "playsonicboom" }, // AUTOADDED
    { 0xD522, "playsound25mm" },
    { 0xD52A, "playsoundinspace" },
    { 0xD52E, "playsoundonplayers" },
    { 0xD530, "playsoundoverradio" },
    { 0xD537, "playspinnerfx" },
    { 0xD53C, "playstaticsoundinarea" },
    { 0xD548, "playteamfxforclient" },
    { 0xD54F, "playtickingsound" },
    { 0xD551, "playtonesequence" },
    { 0xD56E, "playufoeffectonplayerconnect" },
    { 0xD58B, "playvofordowned" },
    { 0xD5A5, "playvoforlaststand" },
    { 0xD5B4, "playvoforpillage" },
    { 0xD5BB, "playvoforrevived" },
    { 0xD5BD, "playvoforscriptable" },
    { 0xD5D8, "playwillardvo" },
    { 0xD5DA, "plot_points" },
    { 0xD62C, "podiumindex" },
    { 0xD63C, "point_to_ambush" },
    { 0xD644, "pointisinairstrikearea" },
    { 0xD64B, "pointvscone" },
    { 0xD64C, "poison" }, // AUTOADDED
    { 0xD64D, "pokebiasgroups" }, // AUTOADDED
    { 0xD64E, "poker_table_spooked" }, // AUTOADDED
    { 0xD64F, "poll_for_found" }, // AUTOADDED
    { 0xD650, "pollallowedstancesthread" }, // AUTOADDED
    { 0xD651, "pool" },
    { 0xD654, "poolscriptablepart" },
    { 0xD655, "pop_all_balloons_in_beginning_area" },
    { 0xD674, "portal_can_be_started" },
    { 0xD677, "portal_charging" },
    { 0xD678, "portal_close_fx" },
    { 0xD679, "portal_exit_fx_org" },
    { 0xD67A, "portal_is_open" },
    { 0xD687, "portalgeneratorinit" },
    { 0xD68B, "portalgeneratorused" },
    { 0xD699, "pos" },
    { 0xD69E, "pos_is_valid_outside_for_vanguard" }, // AUTOADDED
    { 0xD6A1, "pos_passes_sky_trace" }, // AUTOADDED
    { 0xD6A5, "pose" },
    { 0xD6A9, "position_elevators" },
    { 0xD6AF, "possessionresetcondition" },
    { 0xD6B0, "possessionresettime" },
    { 0xD6B3, "post_activate_update" },
    { 0xD6CF, "post_entity_creation_function" },
    { 0xD6D2, "post_grey_regen_func" },
    { 0xD6D7, "post_load" },
    { 0xD6DF, "post_nondeterministic_func" },
    { 0xD6F9, "postencounterscorefunc" },
    { 0xD703, "postintroscreenfunc" },
    { 0xD717, "potato" },
    { 0xD718, "potatoes_needed" },
    { 0xD719, "power" },
    { 0xD71A, "power_adjustcharges" },
    { 0xD71C, "power_area" },
    { 0xD721, "power_cooldowns" },
    { 0xD728, "power_disablepower" },
    { 0xD72E, "power_enablepower" },
    { 0xD73A, "power_hud_info" },
    { 0xD73B, "power_icon_active" },
    { 0xD73C, "power_model" },
    { 0xD740, "power_modifycooldownrate" },
    { 0xD741, "power_nag" },
    { 0xD742, "power_name" },
    { 0xD743, "power_off_func" },
    { 0xD745, "power_on" },
    { 0xD747, "power_on_arcade_machines" },
    { 0xD748, "power_on_func" },
    { 0xD749, "power_on_monitor" },
    { 0xD751, "power_setup_init" },
    { 0xD75C, "power_table" },
    { 0xD760, "power_up_drop_override" },
    { 0xD761, "power_up_drop_score" },
    { 0xD762, "power_up_func" },
    { 0xD763, "power_up_table" },
    { 0xD76A, "power_watch_hint" },
    { 0xD776, "powered_on" },
    { 0xD781, "powerprimarygrenade" },
    { 0xD782, "powers" },
    { 0xD783, "powers_active" },
    { 0xD784, "powers_before_entangler" },
    { 0xD785, "powersecondarygrenade" },
    { 0xD787, "powersetupfunctions" },
    { 0xD789, "powershud_assignpower" },
    { 0xD78A, "powershud_beginpowercooldown" },
    { 0xD78B, "powershud_beginpowerdrain" },
    { 0xD78C, "powershud_clearpower" },
    { 0xD78D, "powershud_endpowerdrain" },
    { 0xD78E, "powershud_finishpowercooldown" },
    { 0xD78F, "powershud_getslotomnvar" },
    { 0xD790, "powershud_init" },
    { 0xD791, "powershud_updatepowercharges" },
    { 0xD792, "powershud_updatepowercooldown" },
    { 0xD793, "powershud_updatepowerdisabled" },
    { 0xD794, "powershud_updatepowerdrain" },
    { 0xD795, "powershud_updatepowerdrainprogress" },
    { 0xD796, "powershud_updatepowermaxcharges" },
    { 0xD797, "powershud_updatepowermeter" },
    { 0xD798, "powershud_updatepowerstate" },
    { 0xD79D, "powerup_drop_count" },
    { 0xD79E, "powerup_drop_increment" },
    { 0xD79F, "powerup_drop_max_per_round" },
    { 0xD7A0, "powerupicons" },
    { 0xD7A1, "poweruponplayerconnect" },
    { 0xD7A6, "practicemode" },
    { 0xD7A7, "practicenotify" }, // AUTOADDED
    { 0xD7AB, "pre_arcade_game_weapon" },
    { 0xD7AC, "pre_arcade_game_weapon_clip" },
    { 0xD7AD, "pre_arcade_game_weapon_stock" },
    { 0xD7AE, "pre_arcade_primary_power" },
    { 0xD7AF, "pre_arcade_primary_power_charges" },
    { 0xD7B0, "pre_arcade_secondary_power" },
    { 0xD7B1, "pre_arcade_secondary_power_charges" },
    { 0xD7C0, "pre_ghost_currency" },
    { 0xD7C1, "pre_ghost_perks" },
    { 0xD7C2, "pre_grey_regen_func" },
    { 0xD7CD, "pre_laststand_powers" },
    { 0xD7CE, "pre_laststand_weapon" },
    { 0xD7CF, "pre_laststand_weapon_ammo_clip" },
    { 0xD7D0, "pre_laststand_weapon_stock" },
    { 0xD7DB, "pre_spectate_angles" },
    { 0xD7DC, "pre_spectate_pos" },
    { 0xD80E, "precachefx" },
    { 0xD810, "precachelb" },
    { 0xD811, "precachemodelarray" },
    { 0xD813, "precalculated_paths" },
    { 0xD814, "precappoints" },
    { 0xD81D, "predictabouttospawnplayer" },
    { 0xD81E, "predictabouttospawnplayerovertime" },
    { 0xD820, "predictedspawnpoint" },
    { 0xD821, "predictedspawnpointtime" },
    { 0xD829, "preferalliesbydistance" }, // AUTOADDED
    { 0xD82A, "preferbyteambase" }, // AUTOADDED
    { 0xD82D, "preferclosetoally" }, // AUTOADDED
    { 0xD848, "preloadandqueueclass" },
    { 0xD84A, "prematch_over" },
    { 0xD84B, "prematchfunc" },
    { 0xD84C, "prematchlook" },
    { 0xD84D, "prematchperiod" },
    { 0xD85B, "prepare_option_for_change" },
    { 0xD869, "prespawnfromspectaorfunc" },
    { 0xD875, "prestige_getdamagetakenscalar" },
    { 0xD876, "prestige_getminammo" },
    { 0xD877, "prestige_getmoneyearnedscalar" },
    { 0xD878, "prestige_getmoveslowscalar" },
    { 0xD879, "prestige_getnoabilities" },
    { 0xD87A, "prestige_getnoclassallowed" },
    { 0xD87B, "prestige_getnodeployables" },
    { 0xD87C, "prestige_getpistolsonly" },
    { 0xD87D, "prestige_getslowhealthregenscalar" },
    { 0xD87E, "prestige_getthreatbiasscalar" },
    { 0xD87F, "prestige_getwalletsizescalar" },
    { 0xD880, "prestige_getweapondamagescalar" },
    { 0xD881, "prestige_nerf_func" },
    { 0xD884, "prestigehealthregennerfscalar" },
    { 0xD888, "prev_defend_node" },
    { 0xD88E, "prev_personality" },
    { 0xD88F, "prev_role" },
    { 0xD89F, "previous_button" },
    { 0xD8A8, "previous_weapon_too_weak_for_ufo_time" },
    { 0xD8AB, "previousclosespawnent" },
    { 0xD8B3, "previousstreakpoints" }, // AUTOADDED
    { 0xD8BA, "prevownerteam" }, // AUTOADDED
    { 0xD8C3, "prevteam" },
    { 0xD8C6, "prevweapon" },
    { 0xD8C8, "prevzoneindex" },
    { 0xD8C9, "prevzonelist" },
    { 0xD8D5, "primary_weapons" },
    { 0xD8D6, "primarygrenade" },
    { 0xD8D8, "primaryprogressbarfontsize" }, // AUTOADDED
    { 0xD8D9, "primaryprogressbarheight" }, // AUTOADDED
    { 0xD8DA, "primaryprogressbartextx" }, // AUTOADDED
    { 0xD8DB, "primaryprogressbartexty" }, // AUTOADDED
    { 0xD8DC, "primaryprogressbarwidth" }, // AUTOADDED
    { 0xD8DD, "primaryprogressbarx" }, // AUTOADDED
    { 0xD8DE, "primaryprogressbary" }, // AUTOADDED
    { 0xD8DF, "primarytarget" }, // AUTOADDED
    { 0xD8E0, "primaryturretanim" }, // AUTOADDED
    { 0xD8E1, "primaryweapon" },
    { 0xD8EF, "print3drise" },
    { 0xD8F0, "print3dtime" },
    { 0xD8F8, "print_fx_options" },
    { 0xD8FD, "print_org" },
    { 0xD90B, "printandsoundoneveryone" },
    { 0xD915, "printgameaction" },
    { 0xD919, "printpredictedspawnpointcorrectness" },
    { 0xD924, "prioritize_watch_nodes_toward_enemies" }, // AUTOADDED
    { 0xD925, "priority" }, // AUTOADDED
    { 0xD95D, "process_agent_on_killed_merits" },
    { 0xD95F, "process_assist_rewards" },
    { 0xD962, "process_button_held_and_clicked" },
    { 0xD96B, "process_damage_feedback" },
    { 0xD96D, "process_damage_rewards" },
    { 0xD96E, "process_damage_score" },
    { 0xD96F, "process_damage_to_armor" },
    { 0xD971, "process_empattack" },
    { 0xD977, "process_frame_events" },
    { 0xD978, "process_fx_rotater" },
    { 0xD979, "process_grabzombie" },
    { 0xD97C, "process_kill_rewards" },
    { 0xD97F, "process_laserattack" },
    { 0xD980, "process_loot_content" },
    { 0xD981, "process_moving_platform_death" }, // AUTOADDED
    { 0xD983, "process_rangeattack" },
    { 0xD986, "process_stop_regen_health_action" },
    { 0xD98C, "processassist" }, // AUTOADDED
    { 0xD98D, "processassist_regularmp" }, // AUTOADDED
    { 0xD992, "processchallenge" },
    { 0xD99A, "processed_for_fireteam" },
    { 0xD99D, "processenemykilledfunc" },
    { 0xD99F, "processfinalkillchallenges" },
    { 0xD9A1, "processing" },
    { 0xD9AD, "processmerit" },
    { 0xD9B4, "processscoring" },
    { 0xD9B5, "processshieldassist" }, // AUTOADDED
    { 0xD9B6, "processshieldassist_regularmp" }, // AUTOADDED
    { 0xD9D9, "progress" },
    { 0xDA5A, "projectile" }, // AUTOADDED
    { 0xDA5E, "projectilearrived" },
    { 0xDA5F, "projectiledisconnectwatcher" },
    { 0xDA79, "prone_only" }, // AUTOADDED
    { 0xDA7A, "prone_rate_override" }, // AUTOADDED
    { 0xDA7B, "prone_transitionto" }, // AUTOADDED
    { 0xDA7C, "prone_visible_from" },
    { 0xDA7D, "proneaiming" },
    { 0xDA90, "prone" },
    { 0xDAA0, "protect_challenge_player_connect_monitor" },
    { 0xDAA2, "protect_head_icon" },
    { 0xDAA3, "protect_radius" }, // AUTOADDED
    { 0xDAA4, "protect_watch_allies" },
    { 0xDAAE, "proxbar" }, // AUTOADDED
    { 0xDAAF, "proxbartext" }, // AUTOADDED
    { 0xDAC9, "proximityassist" }, // AUTOADDED
    { 0xDACE, "proximitykill" }, // AUTOADDED
    { 0xDADB, "ps3game" },
    { 0xDADC, "ps4game" },
    { 0xDAF8, "pulsetime" }, // AUTOADDED
    { 0xDAFF, "purchase_laser_trap" },
    { 0xDB02, "purchasing_ammo" },
    { 0xDB04, "purge_undefined_from_moving_target_array" },
    { 0xDB09, "push_and_damage_player" },
    { 0xDB21, "put_glasses_on" },
    { 0xDB22, "put_glasses_on_player" },
    { 0xDB24, "put_gun_back_on_standee" },
    { 0xDB31, "put_tooth_in_gator_mouth" },
    { 0xDB36, "putgunaway" }, // AUTOADDED
    { 0xDB37, "putgunbackinhandonkillanimscript" }, // AUTOADDED
    { 0xDB38, "putguninhand" },
    { 0xDB40, "qafinished" }, // AUTOADDED
    { 0xDB51, "quadrantanimweights" },
    { 0xDB52, "quality" }, // AUTOADDED
    { 0xDB59, "quest_create_pillage_interaction" },
    { 0xDB5A, "quest_death_update_func" },
    { 0xDB5B, "quest_pillage_func" },
    { 0xDB5C, "quest_specific_pillage_show_func" },
    { 0xDB5E, "quest_timer" },
    { 0xDB91, "queuedvo" },
    { 0xDB92, "queuemidmatchaward" }, // AUTOADDED
    { 0xDB96, "queuescoreeventpopup" }, // AUTOADDED
    { 0xDB97, "queuescorepointspopup" }, // AUTOADDED
    { 0xDB99, "queuesplash" }, // AUTOADDED
    { 0xDB9E, "quickmessagetoall" },
    { 0xDB9F, "quicksort" },
    { 0xDBB3, "race_game_hint_logic" },
    { 0xDBBF, "radar" },
    { 0xDBD6, "radarmover" },
    { 0xDBD9, "radarviewtime" },
    { 0xDBE0, "radial_button_group" },
    { 0xDBE8, "radiationeffect" }, // AUTOADDED
    { 0xDBE9, "radiationoverlay" }, // AUTOADDED
    { 0xDBF7, "radio_in_use" },
    { 0xDBFC, "radioforcedtransmissionqueue" },
    { 0xDBFE, "radios" },
    { 0xDC05, "radius_max_sq" },
    { 0xDC06, "radius_min_sq" },
    { 0xDC09, "radiusartilleryshellshock" },
    { 0xDC0A, "radiuspathnodes" }, // AUTOADDED
    { 0xDC0B, "radiusplayerdamage" },
    { 0xDC23, "ragdolltime" },
    { 0xDC68, "rand_pos_or_neg" },
    { 0xDC6B, "random" },
    { 0xDC8E, "random_killer_update" },
    { 0xDCA4, "random_weight_sorted" },
    { 0xDCAC, "randomdrops" },
    { 0xDCB4, "randomize_areas" },
    { 0xDCB8, "randomizepassthroughchildren" }, // AUTOADDED
    { 0xDCBB, "randomjackalmovement" }, // AUTOADDED
    { 0xDCC5, "randomscore" }, // AUTOADDED
    { 0xDCC6, "randomspawnscore" }, // AUTOADDED
    { 0xDCC8, "randomvector" },
    { 0xDCC9, "randomvectorrange" },
    { 0xDCD0, "rangetrigger" }, // AUTOADDED
    { 0xDCD1, "rank_init" },
    { 0xDCD2, "rankedmatch" },
    { 0xDCD3, "rankedmatchupdates" }, // AUTOADDED
    { 0xDCD4, "rankinfo" }, // AUTOADDED
    { 0xDCD5, "rankingenabled" }, // AUTOADDED
    { 0xDCD6, "ranktable" }, // AUTOADDED
    { 0xDCD7, "rankxpmultipliers" }, // AUTOADDED
    { 0xDCE1, "rate" },
    { 0xDCE7, "rateofchange" }, // AUTOADDED
    { 0xDCEB, "rave_mode" },
    { 0xDCEC, "raw_weight" },
    { 0xDCED, "ray_trace" },
    { 0xDCEE, "ray_trace_detail" },
    { 0xDCEF, "ray_trace_detail_passed" },
    { 0xDCF0, "ray_trace_get_all_results" },
    { 0xDCF1, "ray_trace_passed" },
    { 0xDD16, "reached_entrance_goal" },
    { 0xDD56, "reactive_fx_ents" },
    { 0xDD57, "reactive_fx_thread" },
    { 0xDD5B, "reactive_sound_ents" },
    { 0xDD5C, "reactive_thread" },
    { 0xDD61, "reacttobulletchance" },
    { 0xDD64, "read_loot_table" },
    { 0xDD6A, "readweaponinfofromtable" }, // AUTOADDED
    { 0xDD6B, "ready" },
    { 0xDD8D, "realorigin" },
    { 0xDDAA, "rear_spot" },
    { 0xDDAD, "reason" },
    { 0xDDAF, "reboarding_points" },
    { 0xDDB5, "rebuild_all_windows_func" },
    { 0xDDB9, "recent_attacker" },
    { 0xDDBA, "recent_player_attackers" },
    { 0xDDBC, "recent_vo" },
    { 0xDDBF, "recentdamageamount" }, // AUTOADDED
    { 0xDDC0, "recentdamages" }, // AUTOADDED
    { 0xDDC4, "recently_used" },
    { 0xDDC9, "recentlysawenemy" },
    { 0xDDCC, "recentshieldxp" },
    { 0xDDCD, "recentsplashcount" }, // AUTOADDED
    { 0xDDCE, "recenttagcount" },
    { 0xDDD1, "recharge_power" },
    { 0xDDD5, "recipe_getkillstreak" }, // AUTOADDED
    { 0xDDDA, "reclaimedreservedobjectives" },
    { 0xDDDB, "recoilscale" }, // AUTOADDED
    { 0xDDE2, "record_bleedout" },
    { 0xDDE6, "record_entangler_progress_percent" },
    { 0xDDE9, "record_player_kills" },
    { 0xDDEA, "record_revive_success" },
    { 0xDDEC, "recordtogglescopestates" },
    { 0xDDEE, "recordfinalkillcam" },
    { 0xDDEF, "recordingenabledcount" }, // AUTOADDED
    { 0xDDF1, "recordlocation" },
    { 0xDDF2, "recordrewindlocations" },
    { 0xDDF3, "recordthrowingknifetraveldist" },
    { 0xDDF5, "recordvalidationinfraction" }, // AUTOADDED
    { 0xDE33, "reduce_money_earned" },
    { 0xDE35, "reduce_wallet_size" },
    { 0xDE36, "reduce_wallet_size_and_money_earned" },
    { 0xDE3F, "ref" }, // AUTOADDED
    { 0xDE40, "ref_col" },
    { 0xDE48, "refill_forge_weapon" },
    { 0xDE4B, "refillammo" },
    { 0xDE4D, "refillclip" },
    { 0xDE4F, "refillsinglecountammo" },
    { 0xDE5C, "reflectionprobe_hide_front" },
    { 0xDE5D, "reflectionprobe_hide_hp" },
    { 0xDE6C, "refresh_existing_bots" }, // AUTOADDED
    { 0xDE6E, "refresh_interaction" },
    { 0xDE70, "refresh_piccadilly_civs_array" }, // AUTOADDED
    { 0xDE71, "refresh_reactive_fx_ents" },
    { 0xDE74, "refreshfreecamhardpointfx" },
    { 0xDE7D, "refundsuper" }, // AUTOADDED
    { 0xDE7E, "regen_ammo_for_weapon" },
    { 0xDE82, "regen_health_internal" },
    { 0xDE83, "regen_health_sequence" },
    { 0xDE87, "regenamount" },
    { 0xDE8E, "regenspeed" },
    { 0xDE8F, "regenspeedwatcher" }, // AUTOADDED
    { 0xDE90, "register_achievement" },
    { 0xDE92, "register_afterlife_games" },
    { 0xDE99, "register_available_formation" },
    { 0xDEA1, "register_challenge" },
    { 0xDEA4, "register_consumable" },
    { 0xDEA7, "register_crafting_interactions" },
    { 0xDEAA, "register_default_achievements" },
    { 0xDEAB, "register_default_challenges" },
    { 0xDEB2, "register_encounter_score_component" },
    { 0xDEB4, "register_eog_score_component" },
    { 0xDEB5, "register_eog_to_lb_playerdata_mapping" },
    { 0xDEB7, "register_formation_movements" },
    { 0xDEBB, "register_interaction" },
    { 0xDEBC, "register_interactions" },
    { 0xDEC0, "register_lb_escape_rank" },
    { 0xDEC3, "register_moving_target_wave" },
    { 0xDEC4, "register_nerf_activated" },
    { 0xDECD, "register_perk_callback" },
    { 0xDECF, "register_physics_collision_func" },
    { 0xDED0, "register_physics_collisions" },
    { 0xDED3, "register_quest_step" },
    { 0xDED6, "register_scoring_mode" },
    { 0xDEE2, "register_zombie_perks" },
    { 0xDEE3, "register_zombie_pillageable" },
    { 0xDEEB, "registerdogtagsenableddvar" },
    { 0xDEF4, "registerhalftimedvar" },
    { 0xDEFA, "registerkill" },
    { 0xDEFB, "registerkillstreak" },
    { 0xDEFE, "registermeritcallback" },
    { 0xDF00, "registernotetracks" },
    { 0xDF01, "registernotetracks_init" },
    { 0xDF02, "registernumlivesdvar" },
    { 0xDF08, "registerroundlimitdvar" },
    { 0xDF09, "registerroundswitchdvar" },
    { 0xDF0A, "registerscoreinfo" }, // AUTOADDED
    { 0xDF0B, "registerscorelimitdvar" },
    { 0xDF0C, "registerscriptedagent" },
    { 0xDF0D, "registerspawnpoints" },
    { 0xDF11, "registertimelimitdvar" },
    { 0xDF14, "registertweakable" }, // AUTOADDED
    { 0xDF15, "registerwatchdvar" }, // AUTOADDED
    { 0xDF16, "registerwatchdvarfloat" }, // AUTOADDED
    { 0xDF17, "registerwatchdvarint" },
    { 0xDF18, "registerwinbytwoenableddvar" },
    { 0xDF19, "registerwinbytwomaxroundsdvar" },
    { 0xDF1A, "registerwinlimitdvar" },
    { 0xDF2D, "reinitializematchrulesonmigration" },
    { 0xDF2E, "reinitializethermal" }, // AUTOADDED
    { 0xDF2F, "relatedbrushmodel" }, // AUTOADDED
    { 0xDF30, "relative_ads_anims" }, // AUTOADDED
    { 0xDF31, "relativepoint" }, // AUTOADDED
    { 0xDF34, "release_attack_spot" },
    { 0xDF44, "release_zombie_on_radio_death" },
    { 0xDF45, "release_zombie_on_trap_done" },
    { 0xDF48, "releasemachineonplayerdisconnect" },
    { 0xDF50, "reload_damage_increase" },
    { 0xDF57, "reload_watcher" },
    { 0xDF69, "remapscoreeventforweapon" }, // AUTOADDED
    { 0xDF6A, "remind_calltrain" }, // AUTOADDED
    { 0xDF6B, "remind_calltrain_sethot" }, // AUTOADDED
    { 0xDF6C, "reminder_animnode" }, // AUTOADDED
    { 0xDF6D, "reminder_cooldown_timer" }, // AUTOADDED
    { 0xDF6E, "reminder_queue_cleanup" }, // AUTOADDED
    { 0xDF6F, "reminder_reaction_pointat" }, // AUTOADDED
    { 0xDF70, "reminder_vo_init" }, // AUTOADDED
    { 0xDF71, "remote_detonation_monitor" }, // AUTOADDED
    { 0xDF72, "remote_tank_armor_bulletdamage" }, // AUTOADDED
    { 0xDF73, "remote_tanks" }, // AUTOADDED
    { 0xDF74, "remote_uav" }, // AUTOADDED
    { 0xDF75, "remote_uav_ridelifeid" }, // AUTOADDED
    { 0xDF76, "remote_vehicle_setup" },
    { 0xDF77, "remotedefusecallback" }, // AUTOADDED
    { 0xDF78, "remotedefusesetup" }, // AUTOADDED
    { 0xDF79, "remotedetonatebeginuse" }, // AUTOADDED
    { 0xDF7A, "remotedetonateonset" }, // AUTOADDED
    { 0xDF7B, "remotedetonatethink" }, // AUTOADDED
    { 0xDF7C, "remoteinfo" }, // AUTOADDED
    { 0xDF7D, "remoteinteractsetup" }, // AUTOADDED
    { 0xDF7E, "remotekillstreaks" }, // AUTOADDED
    { 0xDF7F, "remotemissile_fx" }, // AUTOADDED
    { 0xDF80, "remotemissileinprogress" }, // AUTOADDED
    { 0xDF8A, "remoteuav" }, // AUTOADDED
    { 0xDF8B, "remoteuav_cantargetuav" }, // AUTOADDED
    { 0xDF8C, "remoteuav_cleanup" }, // AUTOADDED
    { 0xDF8D, "remoteuav_clear_marked_on_gameended" }, // AUTOADDED
    { 0xDF8E, "remoteuav_clearincomingwarning" }, // AUTOADDED
    { 0xDF8F, "remoteuav_clearmarkedforowner" }, // AUTOADDED
    { 0xDF90, "remoteuav_delaylaunchdialog" }, // AUTOADDED
    { 0xDF91, "remoteuav_dialog" }, // AUTOADDED
    { 0xDF92, "remoteuav_endride" }, // AUTOADDED
    { 0xDF93, "remoteuav_explode_on_changeteams" }, // AUTOADDED
    { 0xDF94, "remoteuav_explode_on_death" }, // AUTOADDED
    { 0xDF95, "remoteuav_explode_on_disconnect" }, // AUTOADDED
    { 0xDF96, "remoteuav_fire" }, // AUTOADDED
    { 0xDF97, "remoteuav_freezebuffer" }, // AUTOADDED
    { 0xDF98, "remoteuav_fx" }, // AUTOADDED
    { 0xDF99, "remoteuav_handledamage" }, // AUTOADDED
    { 0xDF9A, "remoteuav_handleincomingsam" }, // AUTOADDED
    { 0xDF9B, "remoteuav_handleincomingstinger" }, // AUTOADDED
    { 0xDF9C, "remoteuav_in_range" }, // AUTOADDED
    { 0xDF9D, "remoteuav_lastdialogtime" }, // AUTOADDED
    { 0xDF9E, "remoteuav_leave" }, // AUTOADDED
    { 0xDF9F, "remoteuav_leave_on_timeout" }, // AUTOADDED
    { 0xDFA0, "remoteuav_light_fx" }, // AUTOADDED
    { 0xDFA1, "remoteuav_markplayer" }, // AUTOADDED
    { 0xDFA2, "remoteuav_nodeployzones" }, // AUTOADDED
    { 0xDFA3, "remoteuav_operationrumble" }, // AUTOADDED
    { 0xDFA4, "remoteuav_playerexit" }, // AUTOADDED
    { 0xDFA5, "remoteuav_processtaggedassist" }, // AUTOADDED
    { 0xDFA6, "remoteuav_rangecountdown" }, // AUTOADDED
    { 0xDFA7, "remoteuav_ride" }, // AUTOADDED
    { 0xDFA8, "remoteuav_rumble" }, // AUTOADDED
    { 0xDFA9, "remoteuav_staticfade" }, // AUTOADDED
    { 0xDFB8, "remove_alien_fuse" },
    { 0xDFC7, "remove_attachment" },
    { 0xDFC8, "remove_axis_model" },
    { 0xDFCB, "remove_barrier_from_entrance" },
    { 0xDFD4, "remove_card_from_use" },
    { 0xDFD5, "remove_care_packages_in_volume" },
    { 0xDFD7, "remove_clan_tag" },
    { 0xDFDD, "remove_consumable" },
    { 0xDFE0, "remove_crafted_item_from_inventory" },
    { 0xDFE1, "remove_crafting_item" },
    { 0xDFFD, "remove_dupes" },
    { 0xE001, "remove_ends_from_path" }, // AUTOADDED
    { 0xE007, "remove_escape_entities" },
    { 0xE008, "remove_essence_interaction" },
    { 0xE00B, "remove_explosive_touch" },
    { 0xE00C, "remove_explosive_touch_on_death" },
    { 0xE019, "remove_from_current_interaction_list" },
    { 0xE01A, "remove_from_current_interaction_list_for_player" },
    { 0xE01E, "remove_from_icons_to_hide_in_afterlife" },
    { 0xE01F, "remove_from_nag_vo" },
    { 0xE026, "remove_from_owner_revive_icon_list" },
    { 0xE028, "remove_from_player_revive_icon_list" },
    { 0xE029, "remove_from_players_being_revived" },
    { 0xE02A, "remove_from_revive_icon_entity_list" },
    { 0xE02F, "remove_ghost_arcade_message" },
    { 0xE030, "remove_glasses_from_player" },
    { 0xE035, "remove_head_icon" },
    { 0xE040, "remove_ingredient" },
    { 0xE05A, "remove_moving_target" },
    { 0xE064, "remove_option" },
    { 0xE068, "remove_outline_on_death" },
    { 0xE069, "remove_padding_damage" },
    { 0xE072, "remove_perks_from_player" },
    { 0xE077, "remove_player_perks" },
    { 0xE07F, "remove_rocket_feet_failsafe" },
    { 0xE087, "remove_selected_option" },
    { 0xE09A, "remove_team_door_meters" },
    { 0xE0A0, "remove_undefined_from_moving_target_array" },
    { 0xE0AE, "remove_white_screen" },
    { 0xE0B2, "remove_zombie_from_turned_list_on_death" },
    { 0xE0B3, "remove_zombies_perk_icon_and_index" },
    { 0xE0B5, "removeac130player" },
    { 0xE0B6, "removeac130playeraftertime" },
    { 0xE0B7, "removeac130playeronchangeteams" },
    { 0xE0B8, "removeac130playeroncrash" },
    { 0xE0B9, "removeac130playerondeath" },
    { 0xE0BA, "removeac130playerondisconnect" },
    { 0xE0BB, "removeac130playerongamecleanup" },
    { 0xE0BC, "removeac130playerongameend" },
    { 0xE0BD, "removeac130playeronspectate" },
    { 0xE0C2, "removeadrenaline" },
    { 0xE0CA, "removeallfromlivescount" },
    { 0xE0D0, "removearchetype" },
    { 0xE0D2, "removeballdrone" },
    { 0xE0D7, "removebombcarrierclass" },
    { 0xE0D8, "removebombzonec" }, // AUTOADDED
    { 0xE0DA, "removeboxfromlevelarray" }, // AUTOADDED
    { 0xE0DD, "removechild" }, // AUTOADDED
    { 0xE0E6, "removedamagemodifier" },
    { 0xE0E7, "removedamagemodifieronlaststand" },
    { 0xE0E8, "removedamagemodifierontimeout" },
    { 0xE0EB, "removedestroyedchildren" }, // AUTOADDED
    { 0xE0ED, "removedisconnectedplayerfromplacement" },
    { 0xE0F2, "removedompoint" },
    { 0xE0F6, "removeexcludedattachments" },
    { 0xE0F9, "removeflag" },
    { 0xE0FA, "removeflagcarrierclass" },
    { 0xE0FB, "removeflagpickupradiuseffect" },
    { 0xE0FF, "removefromalivecount" },
    { 0xE106, "removefromcharactersarray" }, // AUTOADDED
    { 0xE110, "removefromlittlebirdlist" },
    { 0xE112, "removefromlivescount" },
    { 0xE113, "removefromparticipantsarray" }, // AUTOADDED
    { 0xE119, "removefromspawnedgrouparray" },
    { 0xE11D, "removefromteamcount" },
    { 0xE11E, "removefromtraplist" },
    { 0xE122, "removefromugvlist" }, // AUTOADDED
    { 0xE123, "removefrozentickontimeout" },
    { 0xE125, "removeglobalrankxpmultiplier" }, // AUTOADDED
    { 0xE126, "removeglobalweaponrankxpmultiplier" }, // AUTOADDED
    { 0xE127, "removegpsjammer" },
    { 0xE12B, "removeheavyarmor" }, // AUTOADDED
    { 0xE139, "removelittlebird" }, // AUTOADDED
    { 0xE13A, "removelockedontarget" }, // AUTOADDED
    { 0xE13B, "removelowermessage" },
    { 0xE13C, "removemarkfromtarget" },
    { 0xE141, "removenowyouseemeonlaststand" },
    { 0xE143, "removeoldattackersovertime" },
    { 0xE146, "removeoutline" }, // AUTOADDED
    { 0xE150, "removeperk" },
    { 0xE152, "removeperks" }, // AUTOADDED
    { 0xE157, "removeplanefromlist" },
    { 0xE159, "removeplayerdataafterleavinggame" }, // AUTOADDED
    { 0xE15B, "removeplayerondisconnect" },
    { 0xE15D, "removepoint" },
    { 0xE15E, "removepower" },
    { 0xE15F, "removerankxpmultiplier" }, // AUTOADDED
    { 0xE162, "removeremoteweapon" }, // AUTOADDED
    { 0xE167, "removeselfreviveonearlyexit" },
    { 0xE16D, "removeslowmoveonlaststand" },
    { 0xE170, "removespawnmessageshortly" },
    { 0xE171, "removespawnprotection" },
    { 0xE173, "removespeaker" },
    { 0xE178, "removetags" }, // AUTOADDED
    { 0xE179, "removetagsongameended" }, // AUTOADDED
    { 0xE17A, "removetargetmarkergroup" }, // AUTOADDED
    { 0xE17B, "removeteamheadicononnotify" }, // AUTOADDED
    { 0xE17C, "removeteamrankxpmultiplier" }, // AUTOADDED
    { 0xE17D, "removethermal" }, // AUTOADDED
    { 0xE17E, "removethinker" }, // AUTOADDED
    { 0xE17F, "removetimedoutinstructions" }, // AUTOADDED
    { 0xE180, "removetransponder" },
    { 0xE189, "removeuplinkgoal" },
    { 0xE18A, "removeweaponaftertimeout" },
    { 0xE18D, "removeweaponrankxpmultiplier" }, // AUTOADDED
    { 0xE18E, "removeweapons" }, // AUTOADDED
    { 0xE191, "repeater_headshot_ammo_passive" },
    { 0xE196, "replace_grenades_between_waves" },
    { 0xE197, "replace_grenades_on_player" },
    { 0xE1AE, "requestedturret" }, // AUTOADDED
    { 0xE1B9, "requires_power" },
    { 0xE1BA, "requireslos" },
    { 0xE1C0, "rescuedplayers" },
    { 0xE1C2, "rescues" },
    { 0xE1D2, "reset_armageddon_time" },
    { 0xE1D4, "reset_axis_of_selected_ents" },
    { 0xE1E1, "reset_death_grid_lines_and_trigger" },
    { 0xE1E6, "reset_drop_count_between_waves" },
    { 0xE1E7, "reset_encounter_performance" },
    { 0xE1E8, "reset_end_game_score" },
    { 0xE1EA, "reset_eog_stats" },
    { 0xE1EC, "reset_flags_on_death" },
    { 0xE1EF, "reset_fx_hud_colors" },
    { 0xE1F6, "reset_interaction" },
    { 0xE1F8, "reset_interaction_triggers" },
    { 0xE207, "reset_moving_target_wave_data" },
    { 0xE20C, "reset_num_moving_target_reached_goal" },
    { 0xE20D, "reset_omnvars" },
    { 0xE20F, "reset_override_visionset" },
    { 0xE215, "reset_player_encounter_lua_omnvars" },
    { 0xE216, "reset_player_encounter_performance" },
    { 0xE21A, "reset_player_performance_func" },
    { 0xE21D, "reset_player_spots" },
    { 0xE221, "reset_players_encounter_performance_and_lua" },
    { 0xE223, "reset_recent_damage_data" },
    { 0xE226, "reset_soul_power" },
    { 0xE231, "reset_team_performance_func" },
    { 0xE239, "reset_trap_kill_count" },
    { 0xE23A, "reset_trap_uses_each_round" },
    { 0xE23D, "reset_visionset_on_disconnect" },
    { 0xE23E, "reset_visionset_on_spawn" },
    { 0xE23F, "reset_visionset_on_team_change" },
    { 0xE243, "resetactionslots" },
    { 0xE247, "resetattackerlist" }, // AUTOADDED
    { 0xE248, "resetattackerlist_internal" },
    { 0xE24B, "resetc4explodethisframe" },
    { 0xE250, "resetfunctionality" },
    { 0xE259, "resetmisstime_code" },
    { 0xE264, "resetplayervariables" },
    { 0xE266, "resetrecordedlocations" },
    { 0xE26E, "resetsoundtimescalefactor" }, // AUTOADDED
    { 0xE272, "resetmissilelauncherlocking" }, // AUTOADDED
    { 0xE277, "resettags" }, // AUTOADDED
    { 0xE278, "resetuiomnvarscommon" },
    { 0xE27B, "resetuidvarsonconnect" },
    { 0xE280, "resistedstun" },
    { 0xE284, "respawn" },
    { 0xE285, "respawn_asspectator" },
    { 0xE28A, "respawn_loc_override_func" },
    { 0xE28C, "respawn_on_death" },
    { 0xE28D, "respawn_spawner_org" }, // AUTOADDED
    { 0xE28E, "respawn_test" }, // AUTOADDED
    { 0xE28F, "respawn_test_trig_setup" }, // AUTOADDED
    { 0xE290, "respawn_threshold" }, // AUTOADDED
    { 0xE291, "respawn_threshold_monitor" }, // AUTOADDED
    { 0xE292, "respawn_watcher" },
    { 0xE293, "respawn_with_launcher" },
    { 0xE294, "respawnbombcase" }, // AUTOADDED
    { 0xE299, "respawning_enemies" },
    { 0xE29A, "respawntimerstarttime" }, // AUTOADDED
    { 0xE2AB, "restart_fx_looper" },
    { 0xE2B5, "restarttimer" }, // AUTOADDED
    { 0xE2BD, "restore_all_previous_perks" },
    { 0xE2BF, "restore_currency" },
    { 0xE2C3, "restore_func" },
    { 0xE2CA, "restore_outline_settings" },
    { 0xE2CB, "restore_player_grenades_post_game" },
    { 0xE2CC, "restore_player_perk" },
    { 0xE2CD, "restore_player_status" },
    { 0xE2D1, "restore_powers" },
    { 0xE2D2, "restore_primary_weapons_only" },
    { 0xE2D4, "restore_super_weapon" },
    { 0xE2D5, "restore_weapons_status" },
    { 0xE2D6, "restore_zombie_perks" },
    { 0xE2D7, "restoreangles" },
    { 0xE2D8, "restorebasevisionset" },
    { 0xE2DC, "restorefunctionality" },
    { 0xE2DF, "restoreperk" }, // AUTOADDED
    { 0xE2E0, "restoreperks" }, // AUTOADDED
    { 0xE2E6, "restoreweapon" },
    { 0xE2E7, "restoreweaponclipammo" }, // AUTOADDED
    { 0xE2E8, "restoreweapons" }, // AUTOADDED
    { 0xE2EB, "restrictfunctionality" },
    { 0xE2EC, "restrictfunctionalitycleanup" },
    { 0xE2FD, "resumeballtimer" }, // AUTOADDED
    { 0xE2FE, "resumecountdowntimer" },
    { 0xE2FF, "resumetimer" }, // AUTOADDED
    { 0xE467, "return_triggerer" }, // AUTOADDED
    { 0xE469, "return_weapon_name_with_like_attachments" },
    { 0xE46B, "returnaftertime" }, // AUTOADDED
    { 0xE46C, "returnclosestcrystal" },
    { 0xE471, "returnflag" },
    { 0xE472, "returnobjectiveid" },
    { 0xE476, "returns" },
    { 0xE479, "returntime" }, // AUTOADDED
    { 0xE48E, "revengeparams" },
    { 0xE48F, "reverb" }, // AUTOADDED
    { 0xE490, "reverb_settings" }, // AUTOADDED
    { 0xE498, "revive_door" },
    { 0xE49A, "revive_from_spectator_weapon_setup" },
    { 0xE49B, "revive_icon_color_management" },
    { 0xE49C, "revive_icon_entities" },
    { 0xE49E, "revive_icon_player_connect_monitor" },
    { 0xE49F, "revive_icons" },
    { 0xE4A0, "revive_player" },
    { 0xE4A1, "revive_players_between_waves_monitor" },
    { 0xE4A2, "revive_power_on_func" },
    { 0xE4A3, "revive_progress_bar_id" },
    { 0xE4A4, "revive_success_analytics_func" },
    { 0xE4A5, "revive_time_scalar" },
    { 0xE4A6, "revive_use_hold_think" },
    { 0xE4A7, "revive_watch_for_finished" },
    { 0xE4A8, "revived" },
    { 0xE4A9, "reviveent" },
    { 0xE4AA, "reviveiconcleanup" },
    { 0xE4AB, "reviveiconent" },
    { 0xE4AC, "reviveiconentcleanup" },
    { 0xE4AD, "reviver" },
    { 0xE4AE, "revivesetup" },
    { 0xE4AF, "revivetriggerthink" },
    { 0xE4BB, "revocatorkills" },
    { 0xE4BC, "revocatorkills" },
    { 0xE4BD, "revocatorownercount" },
    { 0xE4C8, "rewindangles" },
    { 0xE4D7, "rewindorigins" },
    { 0xE4D8, "rewindpositionstartindex" },
    { 0xE4D9, "rewindrestrictedfunctionality" },
    { 0xE4DA, "rewindvelocities" },
    { 0xE4DD, "ricochetdamage" },
    { 0xE4EA, "ride_countdown" },
    { 0xE4F7, "ride_starting" },
    { 0xE4FF, "riding" },
    { 0xE536, "rim" },
    { 0xE54A, "riot_shield_damage_adjustment" },
    { 0xE54C, "riotblock" },
    { 0xE54D, "riotshield_attach" },
    { 0xE54E, "riotshield_clear" },
    { 0xE54F, "riotshield_detach" },
    { 0xE550, "riotshield_getmodel" },
    { 0xE551, "riotshield_hastwo" }, // AUTOADDED
    { 0xE552, "riotshield_hasweapon" },
    { 0xE553, "riotshield_lock_orientation" }, // AUTOADDED
    { 0xE554, "riotshield_move" },
    { 0xE555, "riotshield_unlock_orientation" }, // AUTOADDED
    { 0xE556, "riotshieldammo" },
    { 0xE55A, "riotshieldmodel" },
    { 0xE55B, "riotshieldmodelstowed" },
    { 0xE55C, "riotshieldname" },
    { 0xE55D, "riotshieldxpbullets" },
    { 0xE5C5, "rocket_cleanupondeath" }, // AUTOADDED
    { 0xE5C9, "rocket_feet" },
    { 0xE5CE, "rocket_mini_ufo" },
    { 0xE5D7, "rocket_trap_kills" },
    { 0xE5DC, "rocketlauncherammo" },
    { 0xE5DD, "rocketmodelname" }, // AUTOADDED
    { 0xE5DE, "rockets" }, // AUTOADDED
    { 0xE5E2, "rockettrapuses" },
    { 0xE5E3, "rocketvisible" },
    { 0xE5E7, "rodeo" },
    { 0xE5FF, "rodeorequested" },
    { 0xE603, "rofweaponslist" },
    { 0xE67C, "role" },
    { 0xE67F, "roller_coast_back" },
    { 0xE681, "roller_coasters" },
    { 0xE6D9, "room_europa" },
    { 0xE6F9, "rotate_center_portal_sun" },
    { 0xE70F, "rotate_over_time" },
    { 0xE723, "rotate_weapon_model" },
    { 0xE725, "rotate_wor_piece" },
    { 0xE72F, "rotateplane" },
    { 0xE73E, "rotation_is_occuring" },
    { 0xE759, "round_up_to_nearest" },
    { 0xE762, "roundlimit" }, // AUTOADDED
    { 0xE763, "roundscorelimit" }, // AUTOADDED
    { 0xE76A, "roundup" },
    { 0xE7B9, "rules" }, // AUTOADDED
    { 0xE7DC, "run_ball" },
    { 0xE7DD, "run_battery_logic" },
    { 0xE7E8, "run_double_tap_perk" },
    { 0xE7F4, "run_fast_travel_logic" },
    { 0xE7F5, "run_fire_pool" },
    { 0xE7FA, "run_fwoosh_perk" },
    { 0xE7FD, "run_if_last_zombie" },
    { 0xE804, "run_mini_ufo_logic" },
    { 0xE807, "run_moving_target_wave" },
    { 0xE82A, "run_toy_logic" },
    { 0xE82F, "run_zap_perk" },
    { 0xE832, "runadsawareness" },
    { 0xE839, "runaonrules" },
    { 0xE84B, "runequipmentping" },
    { 0xE850, "runfrontlinespawntrapchecks" }, // AUTOADDED
    { 0xE859, "runhover" },
    { 0xE866, "runner_count" },
    { 0xE87A, "running" },
    { 0xE882, "runobjectivecam" },
    { 0xE897, "runrewind" },
    { 0xE8AB, "runtranspondersickness" },
    { 0xE8DD, "runzonethink" },
    { 0xE8DF, "rushtimer" },
    { 0xE8E0, "rushtimeramount" }, // AUTOADDED
    { 0xE8E1, "rushtimerteam" },
    { 0xEA26, "safemod" },
    { 0xEA28, "safeorigin" },
    { 0xEB08, "sam_acquiretarget" }, // AUTOADDED
    { 0xEB09, "sam_attacktargets" }, // AUTOADDED
    { 0xEB0C, "sam_fireontarget" }, // AUTOADDED
    { 0xEB0D, "sam_watchcrashing" },
    { 0xEB0E, "sam_watchlaser" },
    { 0xEB0F, "sam_watchleaving" },
    { 0xEB10, "sam_watchlineofsight" },
    { 0xEB11, "samdamagescale" },
    { 0xEB15, "sammissilegroup" },
    { 0xEB16, "sammissilegroups" }, // AUTOADDED
    { 0xEB19, "samtargetent" }, // AUTOADDED
    { 0xEB1A, "samturret" },
    { 0xEB50, "satellitecount" }, // AUTOADDED
    { 0xEB53, "save" },
    { 0xEB61, "save_items_to_lost_and_found" },
    { 0xEB64, "save_outline_settings" },
    { 0xEB6A, "saved_actionslotdata" },
    { 0xEB6B, "saved_lastweapon" },
    { 0xEB6D, "saved_lastweaponhack" },
    { 0xEB76, "saveplayerpregameweapon" },
    { 0xEB83, "saygenericdialogue" },
    { 0xEB84, "saylocalsound" }, // AUTOADDED
    { 0xEB85, "saylocalsounddelayed" }, // AUTOADDED
    { 0xEB86, "sayspecificdialogue" },
    { 0xEB87, "saytoself" },
    { 0xEB9D, "scale_alien_damage_by_perks" },
    { 0xEB9E, "scale_alien_damage_by_prestige" },
    { 0xEB9F, "scale_alien_damage_by_weapon_type" },
    { 0xEBA5, "scale_earned_cash" },
    { 0xEBAC, "scale_ww_damage" },
    { 0xEC1B, "score_fx" }, // AUTOADDED
    { 0xEC1C, "score_goal" },
    { 0xEC1E, "score_multiplier_init" },
    { 0xEC1F, "score_progress_bar" },
    { 0xEC22, "score_to_drop" },
    { 0xEC23, "scoreamount" },
    { 0xEC24, "scorebuddyspawn" }, // AUTOADDED
    { 0xEC25, "scorecarry" }, // AUTOADDED
    { 0xEC26, "scoreconfirm" }, // AUTOADDED
    { 0xEC27, "scoredeny" }, // AUTOADDED
    { 0xEC28, "scoreeventalwaysshowassplash" }, // AUTOADDED
    { 0xEC29, "scoreeventcount" }, // AUTOADDED
    { 0xEC2A, "scoreeventhastext" }, // AUTOADDED
    { 0xEC2B, "scoreeventlistindex" }, // AUTOADDED
    { 0xEC2C, "scoreeventlistsize" }, // AUTOADDED
    { 0xEC2D, "scoreeventpopup" },
    { 0xEC30, "scoreeventqueue" }, // AUTOADDED
    { 0xEC39, "scorefrozenuntil" }, // AUTOADDED
    { 0xEC3A, "scoreinfo" }, // AUTOADDED
    { 0xEC3B, "scorelimit" },
    { 0xEC3D, "scoremod" },
    { 0xEC40, "scoreperplayer" },
    { 0xEC41, "scorepertick" }, // AUTOADDED
    { 0xEC42, "scorepointspopup" }, // AUTOADDED
    { 0xEC43, "scorepointsqueue" }, // AUTOADDED
    { 0xEC44, "scorepopup" },
    { 0xEC4F, "scorethrow" },
    { 0xEC54, "scoringtime" }, // AUTOADDED
    { 0xEC80, "scoutpingmod" }, // AUTOADDED
    { 0xEC81, "scoutpingpreviousstage" }, // AUTOADDED
    { 0xEC82, "scoutpingradius" }, // AUTOADDED
    { 0xEC83, "scoutsweeptime" }, // AUTOADDED
    { 0xEC94, "scr_sound" },
    { 0xEC96, "scramble_acquiretarget" }, // AUTOADDED
    { 0xEC97, "scramble_watchcrashing" }, // AUTOADDED
    { 0xEC98, "scramble_watchlaser" }, // AUTOADDED
    { 0xEC99, "scramble_watchleaving" }, // AUTOADDED
    { 0xEC9A, "scramble_watchlineofsight" }, // AUTOADDED
    { 0xEC9B, "scrambled" }, // AUTOADDED
    { 0xEC9C, "scrambler" }, // AUTOADDED
    { 0xECA0, "scrambletarget" }, // AUTOADDED
    { 0xECA1, "scrambletargetent" }, // AUTOADDED
    { 0xECA2, "scrambletrapuses" },
    { 0xECA3, "scrambleturretattacktargets" }, // AUTOADDED
    { 0xECE2, "script_accel" }, // AUTOADDED
    { 0xECE3, "script_accel_fraction" }, // AUTOADDED
    { 0xECE4, "script_accumulate" }, // AUTOADDED
    { 0xECEA, "script_airspeed" }, // AUTOADDED
    { 0xECF3, "script_angles" },
    { 0xECF4, "script_anglevehicle" }, // AUTOADDED
    { 0xECF5, "script_animation" }, // AUTOADDED
    { 0xECF6, "script_animation_exit" }, // AUTOADDED
    { 0xECF7, "script_animation_type" },
    { 0xECFA, "script_area" },
    { 0xED06, "script_audio_parameters" },
    { 0xED28, "script_chance" }, // AUTOADDED
    { 0xED29, "script_char_group" },
    { 0xED2A, "script_char_index" },
    { 0xED3C, "script_count" },
    { 0xED3D, "script_count_max" }, // AUTOADDED
    { 0xED3E, "script_count_min" }, // AUTOADDED
    { 0xED3F, "script_crashtype" }, // AUTOADDED
    { 0xED40, "script_crashtypeoverride" }, // AUTOADDED
    { 0xED41, "script_damage" },
    { 0xED4F, "script_delay_max" },
    { 0xED50, "script_delay_min" },
    { 0xED51, "script_delay_post" },
    { 0xED59, "script_destructable_area" }, // AUTOADDED
    { 0xED5D, "script_disconnectpaths" },
    { 0xED76, "script_earthquake" },
    { 0xED77, "script_emptyspawner" }, // AUTOADDED
    { 0xED78, "script_ender" },
    { 0xED84, "script_exploder" },
    { 0xED93, "script_firefx" },
    { 0xED94, "script_firefxdelay" },
    { 0xED95, "script_firefxsound" },
    { 0xED9D, "script_flag_false" },
    { 0xED9F, "script_flag_true" },
    { 0xEDB1, "script_forcegrenade" },
    { 0xEDBA, "script_fxcommand" }, // AUTOADDED
    { 0xEDBB, "script_fxid" },
    { 0xEDBF, "script_gameobjectname" }, // AUTOADDED
    { 0xEDC0, "script_gametype_ctf" }, // AUTOADDED
    { 0xEDC1, "script_gametype_dm" }, // AUTOADDED
    { 0xEDC2, "script_gametype_hq" }, // AUTOADDED
    { 0xEDC3, "script_gametype_koth" }, // AUTOADDED
    { 0xEDC4, "script_gametype_sd" }, // AUTOADDED
    { 0xEDC5, "script_gametype_tdm" }, // AUTOADDED
    { 0xEDC9, "script_goal_radius" },
    { 0xEDCA, "script_goal_type" },
    { 0xEDCC, "script_goal_yaw" },
    { 0xEDE8, "script_index" },
    { 0xEDED, "script_intensity_01" },
    { 0xEDF9, "script_label" },
    { 0xEE01, "script_linkto" },
    { 0xEE04, "script_location" },
    { 0xEE24, "script_modelname" },
    { 0xEE2D, "script_mover" }, // AUTOADDED
    { 0xEE2E, "script_mover_add_hintstring" }, // AUTOADDED
    { 0xEE2F, "script_mover_add_parameters" }, // AUTOADDED
    { 0xEE30, "script_mover_agent_spawn_watch" }, // AUTOADDED
    { 0xEE31, "script_mover_allow_usable" }, // AUTOADDED
    { 0xEE32, "script_mover_apply_move_parameters" }, // AUTOADDED
    { 0xEE33, "script_mover_call_func_on_notify" }, // AUTOADDED
    { 0xEE34, "script_mover_classnames" }, // AUTOADDED
    { 0xEE35, "script_mover_connect_watch" }, // AUTOADDED
    { 0xEE36, "script_mover_defaults" }, // AUTOADDED
    { 0xEE37, "script_mover_func_on_notify" }, // AUTOADDED
    { 0xEE38, "script_mover_get_top_parent" }, // AUTOADDED
    { 0xEE39, "script_mover_has_parent_moved" }, // AUTOADDED
    { 0xEE3A, "script_mover_hintstrings" }, // AUTOADDED
    { 0xEE3B, "script_mover_init_move_parameters" }, // AUTOADDED
    { 0xEE3C, "script_mover_int" }, // AUTOADDED
    { 0xEE3D, "script_mover_is_script_mover" }, // AUTOADDED
    { 0xEE3E, "script_mover_link_to_use_object" }, // AUTOADDED
    { 0xEE3F, "script_mover_move_to_named_goal" }, // AUTOADDED
    { 0xEE40, "script_mover_move_to_target" }, // AUTOADDED
    { 0xEE41, "script_mover_named_goals" }, // AUTOADDED
    { 0xEE42, "script_mover_parameters" }, // AUTOADDED
    { 0xEE43, "script_mover_parse_move_parameters" }, // AUTOADDED
    { 0xEE44, "script_mover_parse_range" }, // AUTOADDED
    { 0xEE45, "script_mover_parse_targets" }, // AUTOADDED
    { 0xEE46, "script_mover_run_notify" }, // AUTOADDED
    { 0xEE47, "script_mover_save_default_move_parameters" }, // AUTOADDED
    { 0xEE48, "script_mover_set_defaults" }, // AUTOADDED
    { 0xEE49, "script_mover_set_param" }, // AUTOADDED
    { 0xEE4A, "script_mover_set_usable" }, // AUTOADDED
    { 0xEE4B, "script_mover_start_use" }, // AUTOADDED
    { 0xEE4C, "script_mover_trigger_on" }, // AUTOADDED
    { 0xEE4D, "script_mover_unlink_from_use_object" }, // AUTOADDED
    { 0xEE4E, "script_mover_use_can_link" }, // AUTOADDED
    { 0xEE4F, "script_mover_use_trigger" }, // AUTOADDED
    { 0xEE67, "script_objective" },
    { 0xEE79, "script_parameters" }, // AUTOADDED
    { 0xEE82, "script_physics" },
    { 0xEE89, "script_prefab_exploder" },
    { 0xEE8A, "script_presound" }, // AUTOADDED
    { 0xEE8B, "script_print_fx" }, // AUTOADDED
    { 0xEE8F, "script_radius" },
    { 0xEE94, "script_repeat" },
    { 0xEE9B, "script_rotation_amount" },
    { 0xEE9C, "script_rotation_max" }, // AUTOADDED
    { 0xEE9D, "script_rotation_platform" }, // AUTOADDED
    { 0xEE9E, "script_rotation_speed" },
    { 0xEEA0, "script_rumble" },
    { 0xEEA9, "script_side" },
    { 0xEEB0, "script_sound" },
    { 0xEEB1, "script_soundalias" },
    { 0xEEBE, "script_speed" },
    { 0xEECB, "script_startname" },
    { 0xEEDE, "script_team" },
    { 0xEEE3, "script_threshold" }, // AUTOADDED
    { 0xEEEB, "script_translation_amount" },
    { 0xEEEC, "script_translation_time" },
    { 0xEEFA, "script_type" },
    { 0xEF2F, "scriptable_notify_test" },
    { 0xEF35, "scriptable_vo_handler" },
    { 0xEF36, "scriptable_vo_played" },
    { 0xEF3B, "scriptableparts" },
    { 0xEF43, "scriptablestatefunc" },
    { 0xEF47, "scripted" },
    { 0xEF64, "scripted_mode" },
    { 0xEF69, "scripted_path_style" },
    { 0xEF7F, "scriptedgoalwaitforarrival" },
    { 0xEF86, "scriptperks" },
    { 0xEF89, "scrnfx" },
    { 0xEFF7, "scu_use_func" },
    { 0xEFF8, "scu_vfx_manager" },
    { 0xEFFA, "sd_bomb_just_planted" },
    { 0xEFFD, "sd_endgame" }, // AUTOADDED
    { 0xF004, "sd_loadout" },
    { 0xF007, "sd_onbombtimerend" },
    { 0xF008, "sd_press_use" },
    { 0xF013, "sdbomb" },
    { 0xF014, "sdbombmodel" },
    { 0xF084, "seat" },
    { 0xF0B8, "secondary_power" },
    { 0xF0BB, "secondarygrenade" },
    { 0xF0C3, "secondarytarget" }, // AUTOADDED
    { 0xF0C4, "secondaryweapon" },
    { 0xF0C5, "secondowner" }, // AUTOADDED
    { 0xF108, "seekenemy" },
    { 0xF18B, "segments" },
    { 0xF18C, "segmentvssphere" },
    { 0xF190, "select_all_exploders_of_currently_selected" },
    { 0xF191, "select_by_name" },
    { 0xF192, "select_by_name_list" },
    { 0xF193, "select_by_substring" },
    { 0xF197, "select_entity" },
    { 0xF19B, "select_index_array" },
    { 0xF19C, "select_jugg_node" }, // AUTOADDED
    { 0xF19D, "select_last_entity" },
    { 0xF19E, "select_moving_target_player_pair" },
    { 0xF1A0, "select_player_to_shoot_at" },
    { 0xF1A1, "select_speaker_defense_locations" },
    { 0xF1A8, "selectableattachmentlist" },
    { 0xF1A9, "selectableattachmentmap" },
    { 0xF1AA, "selectairstrikelocation" }, // AUTOADDED
    { 0xF1AB, "selectbestspawnpoint" }, // AUTOADDED
    { 0xF1AE, "selected" },
    { 0xF1AF, "selected_dj_door" },
    { 0xF1B0, "selected_dj_parts" },
    { 0xF1B1, "selected_ent_buttons" },
    { 0xF1B2, "selected_fx" },
    { 0xF1B3, "selected_fx_ents" },
    { 0xF1B4, "selected_fx_option_index" },
    { 0xF1B7, "selected_speaker_defense_locations" },
    { 0xF1BA, "selectedclass" }, // AUTOADDED
    { 0xF1BC, "selectedmove_forward" },
    { 0xF1BD, "selectedmove_right" },
    { 0xF1BE, "selectedmove_up" },
    { 0xF1C0, "selectedrotate_pitch" },
    { 0xF1C1, "selectedrotate_roll" },
    { 0xF1C2, "selectedrotate_yaw" },
    { 0xF1C3, "selectedweapons" },
    { 0xF1C7, "selectinglocation" },
    { 0xF1CA, "selectlocationvo" }, // AUTOADDED
    { 0xF1CC, "selectonemanarmyclass" },
    { 0xF1E4, "self_func" },
    { 0xF1E5, "self_revive" },
    { 0xF1E6, "self_revive_activated" },
    { 0xF1E7, "self_revives_purchased" },
    { 0xF1E8, "selfdamaging" },
    { 0xF1EB, "selfdestruct" }, // AUTOADDED
    { 0xF1FF, "selfdestructnow" },
    { 0xF211, "selfvodelay" },
    { 0xF212, "selfvodelaycomplete" },
    { 0xF213, "selfvohistory" }, // AUTOADDED
    { 0xF214, "selfvoinfo" }, // AUTOADDED
    { 0xF215, "selfvomap" }, // AUTOADDED
    { 0xF21A, "semtexused" },
    { 0xF22B, "sendagentweaponnotify" },
    { 0xF22C, "sendcodcastermatchdata" }, // AUTOADDED
    { 0xF22F, "sendgameendedfrozennotify" }, // AUTOADDED
    { 0xF231, "sendzombietospeaker" },
    { 0xF232, "sensor" },
    { 0xF239, "sentry_attacktargets" }, // AUTOADDED
    { 0xF23A, "sentry_beepsounds" }, // AUTOADDED
    { 0xF23B, "sentry_burstfirestart" }, // AUTOADDED
    { 0xF23C, "sentry_burstfirestop" }, // AUTOADDED
    { 0xF23E, "sentry_createbombsquadmodel" },
    { 0xF241, "sentry_handledamage" },
    { 0xF242, "sentry_handledeath" },
    { 0xF243, "sentry_handleownerdisconnect" }, // AUTOADDED
    { 0xF244, "sentry_handleuse" },
    { 0xF245, "sentry_heatmonitor" }, // AUTOADDED
    { 0xF246, "sentry_initsentry" },
    { 0xF248, "sentry_laser_burstfirestart" }, // AUTOADDED
    { 0xF249, "sentry_makenotsolid" }, // AUTOADDED
    { 0xF24A, "sentry_makesolid" }, // AUTOADDED
    { 0xF24B, "sentry_moving_platform_death" }, // AUTOADDED
    { 0xF24C, "sentry_oncarrierchangedteam" }, // AUTOADDED
    { 0xF24D, "sentry_oncarrierdeathoremp" }, // AUTOADDED
    { 0xF24E, "sentry_oncarrierdisconnect" }, // AUTOADDED
    { 0xF24F, "sentry_ongameended" }, // AUTOADDED
    { 0xF250, "sentry_place_delay" }, // AUTOADDED
    { 0xF252, "sentry_setactive" },
    { 0xF253, "sentry_setcancelled" }, // AUTOADDED
    { 0xF254, "sentry_setcancelled_func" }, // AUTOADDED
    { 0xF255, "sentry_setcarried" }, // AUTOADDED
    { 0xF256, "sentry_setcarried_func" }, // AUTOADDED
    { 0xF257, "sentry_setinactive" }, // AUTOADDED
    { 0xF258, "sentry_setowner" }, // AUTOADDED
    { 0xF259, "sentry_setplaced" }, // AUTOADDED
    { 0xF25A, "sentry_setteamheadicon" }, // AUTOADDED
    { 0xF25B, "sentry_spindown" }, // AUTOADDED
    { 0xF25C, "sentry_spinup" }, // AUTOADDED
    { 0xF260, "sentry_targetlocksound" }, // AUTOADDED
    { 0xF261, "sentry_timeout" }, // AUTOADDED
    { 0xF263, "sentry_watchdisabled" },
    { 0xF264, "sentrycratethink" },
    { 0xF265, "sentrygun" }, // AUTOADDED
    { 0xF266, "sentryhandledeathdamage" },
    { 0xF267, "sentrymode" },
    { 0xF268, "sentrymodeoff" }, // AUTOADDED
    { 0xF269, "sentrymodeon" }, // AUTOADDED
    { 0xF26A, "sentrymodifydamage" }, // AUTOADDED
    { 0xF26B, "sentrysettings" }, // AUTOADDED
    { 0xF26C, "sentryshocktargetent" }, // AUTOADDED
    { 0xF26D, "sentryshocktargets" },
    { 0xF26E, "sentrytype" }, // AUTOADDED
    { 0xF26F, "sentryusetracker" },
    { 0xF27D, "server_culled_sounds" },
    { 0xF282, "session_stats_init" },
    { 0xF283, "set2dicon" },
    { 0xF284, "set3dicon" },
    { 0xF286, "set" },
    { 0xF28B, "set_adjacent_volume_from_door_struct" },
    { 0xF28C, "set_agent_health" },
    { 0xF28D, "set_agent_model" }, // AUTOADDED
    { 0xF28E, "set_agent_spawn_health" }, // AUTOADDED
    { 0xF28F, "set_agent_species" }, // AUTOADDED
    { 0xF290, "set_agent_team" }, // AUTOADDED
    { 0xF291, "set_agent_traversal_unit_type" },
    { 0xF29D, "set_alien_emissive" },
    { 0xF2A3, "set_aliensession_stat" },
    { 0xF2AD, "set_anglemod_move_vector" },
    { 0xF2C7, "set_arcade_game_award_type" },
    { 0xF2D5, "set_axis_model" },
    { 0xF2F1, "set_can_do_teleport_attack" },
    { 0xF2F2, "set_can_do_teleport_dash" },
    { 0xF2F3, "set_can_do_teleport_summon" },
    { 0xF2F4, "set_can_do_teleport_to_loner" },
    { 0xF305, "set_console_type" },
    { 0xF306, "set_consumable" },
    { 0xF313, "set_crafted_inventory_item" },
    { 0xF315, "set_createfx_enabled" },
    { 0xF31E, "set_current_score_value" },
    { 0xF327, "set_damage_by_weapon_type" },
    { 0xF32C, "set_death_grid_lines_and_trigger_y_pos" },
    { 0xF34A, "set_defense_sequence_active_flag" },
    { 0xF35B, "set_dj_state" },
    { 0xF367, "set_doublejumpenergy" },
    { 0xF368, "set_doublejumpenergyrestorerate" },
    { 0xF3B9, "set_force_sprint" },
    { 0xF3BD, "set_forward_and_up_vectors" },
    { 0xF3C4, "set_fx_hudelement" },
    { 0xF3C5, "set_game_data" },
    { 0xF3CE, "set_ghost_attack_records" },
    { 0xF3E7, "set_grey_clone" },
    { 0xF3EF, "set_gun_slot_from_part_num" },
    { 0xF3F8, "set_has_seen_perm_tutorial" },
    { 0xF3F9, "set_has_seen_tutorial" },
    { 0xF3FA, "set_has_self_revive_token" },
    { 0xF418, "set_in_afterlife_arcade" },
    { 0xF41C, "set_initial_rush_goal" },
    { 0xF421, "set_interaction_point" },
    { 0xF427, "set_is_playing_pain_breathing_sfx" },
    { 0xF443, "set_join_in_progress" },
    { 0xF446, "set_kill_trigger_event_processed" },
    { 0xF44A, "set_last_stand_count" },
    { 0xF44B, "set_last_stand_timer" },
    { 0xF44C, "set_laststand_stats" },
    { 0xF45C, "set_lightbar" }, // AUTOADDED
    { 0xF45D, "set_lightbar_color" }, // AUTOADDED
    { 0xF45E, "set_lightbar_endon_death" }, // AUTOADDED
    { 0xF45F, "set_lightbar_for_time" }, // AUTOADDED
    { 0xF460, "set_lightbar_for_time_endon_death" }, // AUTOADDED
    { 0xF461, "set_lightbar_off" }, // AUTOADDED
    { 0xF462, "set_lightbar_on" }, // AUTOADDED
    { 0xF463, "set_lightbar_perm" }, // AUTOADDED
    { 0xF464, "set_lightbar_perm_endon_death" }, // AUTOADDED
    { 0xF465, "set_lightbar_pulse_time" }, // AUTOADDED
    { 0xF476, "set_lua_encounter_score_row" },
    { 0xF477, "set_lua_eog_score_row" },
    { 0xF478, "set_magic_wheel_starting_location" },
    { 0xF494, "set_nerf_scalar" },
    { 0xF495, "set_new_bomber" },
    { 0xF499, "set_next_teleport_attack_time" },
    { 0xF49A, "set_next_teleport_dash_time" },
    { 0xF49B, "set_next_teleport_summon_time" },
    { 0xF49C, "set_next_teleport_time" },
    { 0xF49D, "set_next_teleport_to_loner_time" },
    { 0xF4A1, "set_nonstick" },
    { 0xF4A9, "set_off_exploders" },
    { 0xF4AC, "set_option_index" },
    { 0xF4AD, "set_origin_and_angles" },
    { 0xF4AE, "set_outline" },
    { 0xF4AF, "set_outline_for_player" },
    { 0xF4CA, "set_perk" },
    { 0xF524, "set_player_consumables" },
    { 0xF525, "set_player_currency" },
    { 0xF52B, "set_player_game_data" },
    { 0xF53A, "set_player_max_currency" },
    { 0xF53F, "set_player_photo_status" },
    { 0xF543, "set_player_prestige" },
    { 0xF545, "set_player_rank" },
    { 0xF548, "set_player_session_rankup" },
    { 0xF549, "set_player_session_tokens" },
    { 0xF54A, "set_player_session_xp" },
    { 0xF54D, "set_player_speed_hud" },
    { 0xF552, "set_player_xp" },
    { 0xF55F, "set_quest_icon" },
    { 0xF560, "set_quest_icon_internal" },
    { 0xF565, "set_rave_vision" },
    { 0xF578, "set_revive_icon_color" },
    { 0xF579, "set_revive_time" },
    { 0xF588, "set_score_goal_value" },
    { 0xF589, "set_score_progress_bar_scale" },
    { 0xF593, "set_scripted_pathing_style" },
    { 0xF59E, "set_single_value_stats" },
    { 0xF5A8, "set_spawn_loc" },
    { 0xF5AC, "set_split_screen" },
    { 0xF5CF, "set_tool_hudelem" },
    { 0xF5D6, "set_trigger_flag_permissions" },
    { 0xF5DC, "set_ui_omnvar_for_perks" },
    { 0xF5DD, "set_ui_omnvar_for_powerups" },
    { 0xF5E1, "set_up_and_start_speaker" },
    { 0xF5E6, "set_up_defense_sequence_zombie_model" },
    { 0xF5E8, "set_up_grey" },
    { 0xF607, "set_visionset_for_watching_players" }, // AUTOADDED
    { 0xF60B, "set_vo_currently_playing" },
    { 0xF60C, "set_vo_system_busy" },
    { 0xF60D, "set_vo_system_playing" },
    { 0xF617, "set_weapon_purchase_disabled" },
    { 0xF62A, "setac130player" },
    { 0xF62C, "setactivereload" },
    { 0xF62D, "setactivespawnlogic" },
    { 0xF631, "setadsawareness" },
    { 0xF632, "setaffinityextralauncher" },
    { 0xF633, "setaffinityspeedboost" }, // AUTOADDED
    { 0xF634, "setafterburner" }, // AUTOADDED
    { 0xF635, "setagentteam" }, // AUTOADDED
    { 0xF638, "setairdropcratecollision" },
    { 0xF63A, "setalltonestructstoneutralstate" },
    { 0xF63B, "setalltonestructstostate" },
    { 0xF63E, "setaltsceneobj" },
    { 0xF63F, "setandremoveinvulnerability" },
    { 0xF640, "setandunsetmeleekill" },
    { 0xF64B, "setassists" },
    { 0xF650, "setautospot" }, // AUTOADDED
    { 0xF652, "setaxeidlescriptablestate" },
    { 0xF653, "setaxescriptablestate" },
    { 0xF654, "setback" },
    { 0xF655, "setbacks" },
    { 0xF656, "setbackstreak" },
    { 0xF65B, "setbattleslide" },
    { 0xF65C, "setbattleslideoffense" },
    { 0xF65D, "setbattleslideshield" }, // AUTOADDED
    { 0xF65F, "setbeingentangledscriptable" },
    { 0xF662, "setbestscore" }, // AUTOADDED
    { 0xF663, "setblackbox" },
    { 0xF667, "setblastshield" },
    { 0xF668, "setblindeye" },
    { 0xF669, "setblockhealthregen" },
    { 0xF66F, "setbombtimeromnvars" }, // AUTOADDED
    { 0xF670, "setboom" },
    { 0xF671, "setboominternal" },
    { 0xF674, "setbucketval" }, // AUTOADDED
    { 0xF675, "setbulletoutline" }, // AUTOADDED
    { 0xF67B, "setcamoelite" },
    { 0xF67E, "setcarepackage" }, // AUTOADDED
    { 0xF67F, "setcarrier" }, // AUTOADDED
    { 0xF682, "setcarryingboombox" },
    { 0xF685, "setcarryingims" },
    { 0xF688, "setcarryingsentry" }, // AUTOADDED
    { 0xF68D, "setcharactermodels" }, // AUTOADDED
    { 0xF68F, "setcinematiccamerastyle" }, // AUTOADDED
    { 0xF690, "setclaimteam" }, // AUTOADDED
    { 0xF691, "setclass" }, // AUTOADDED
    { 0xF693, "setcloak" },
    { 0xF694, "setcloakaerial" },
    { 0xF695, "setcodcasterplayervalue" },
    { 0xF696, "setcombathigh" },
    { 0xF698, "setcombatspeed" },
    { 0xF699, "setcombatspeedscalar" },
    { 0xF69A, "setcombatstandmoveanimweights" }, // AUTOADDED
    { 0xF69B, "setcomexp" },
    { 0xF69D, "setcommonrulesfrommatchdata" },
    { 0xF69F, "setcontestedicons" }, // AUTOADDED
    { 0xF6A0, "setcoopplayerdata_for_everyone" },
    { 0xF6A1, "setphasespeed" },
    { 0xF6A6, "setcrankedbombtimer" }, // AUTOADDED
    { 0xF6A8, "setcrankedplayerbombtimer" },
    { 0xF6A9, "setcrankedtimerdomflag" },
    { 0xF6AA, "setcrankedtimerzonecap" },
    { 0xF6B2, "setddlfieldsforplayer" }, // AUTOADDED
    { 0xF6B6, "setdefaultammoclip" }, // AUTOADDED
    { 0xF6B7, "setdefaultcallbacks" },
    { 0xF6C1, "setdelaymine" },
    { 0xF6C6, "setdischordglasses" },
    { 0xF6CC, "setdodge" },
    { 0xF6CE, "setdodgedefense" },
    { 0xF6CF, "setdodgewave" },
    { 0xF6D7, "setdoubleload" },
    { 0xF6D8, "setdropped" },
    { 0xF6DA, "setduplicatingattackdata" },
    { 0xF6DC, "setempimmune" },
    { 0xF6DD, "setemptydvar" }, // AUTOADDED
    { 0xF6DE, "setendgame" }, // AUTOADDED
    { 0xF6DF, "setendofroundsoundtimescalefactor" }, // AUTOADDED
    { 0xF6E4, "setengineer" },
    { 0xF6EB, "setequipmentping" },
    { 0xF6F4, "setextraammo" },
    { 0xF6F6, "setextradeadly" },
    { 0xF6F7, "setextradodge" }, // AUTOADDED
    { 0xF6F8, "setextraequipment" },
    { 0xF6FA, "setextrascore0" },
    { 0xF6FB, "setextrascore1" },
    { 0xF707, "setfirstinfected" },
    { 0xF70C, "setflagcaptured" },
    { 0xF70E, "setflagpositions" }, // AUTOADDED
    { 0xF70F, "setflashbangimmunity" }, // AUTOADDED
    { 0xF710, "setflashfrac" }, // AUTOADDED
    { 0xF719, "setfreefall" },
    { 0xF71B, "setfriendlyfire" }, // AUTOADDED
    { 0xF71D, "setftlslide" },
    { 0xF721, "setghost" },
    { 0xF722, "setghostnavmode" },
    { 0xF723, "setghosttarget" },
    { 0xF72D, "setgroundpound" },
    { 0xF72E, "setgroundpoundboost" },
    { 0xF72F, "setgroundpoundshield" },
    { 0xF730, "setgroundpoundshock" },
    { 0xF733, "setgunladder" },
    { 0xF736, "setgunsfinal" },
    { 0xF73A, "sethardshell" }, // AUTOADDED
    { 0xF73B, "sethasdonecombat" },
    { 0xF73C, "setheadgear" },
    { 0xF73D, "setheadicon" },
    { 0xF73E, "setheadicon_factionimage" },
    { 0xF747, "sethover" },
    { 0xF74C, "seticonshader" }, // AUTOADDED
    { 0xF74D, "seticonsize" }, // AUTOADDED
    { 0xF752, "setimprovedmelee" },
    { 0xF754, "setincog" },
    { 0xF756, "setinfectedmodels" },
    { 0xF757, "setinfectedmsg" }, // AUTOADDED
    { 0xF759, "setinflictorstat" }, // AUTOADDED
    { 0xF75B, "setinitialtonormalinfected" },
    { 0xF75F, "setisentangled" },
    { 0xF769, "setjuiced" },
    { 0xF76A, "setkeyobject" },
    { 0xF76D, "setkillcamkilledbyitemomnvars" }, // AUTOADDED
    { 0xF780, "setlevelmlgcam" }, // AUTOADDED
    { 0xF781, "setlevelobjectivetext" }, // AUTOADDED
    { 0xF782, "setlifepack" }, // AUTOADDED
    { 0xF783, "setlifepackoutlinestate" }, // AUTOADDED
    { 0xF784, "setlifepackvisualforplayer" }, // AUTOADDED
    { 0xF785, "setlightarmor" }, // AUTOADDED
    { 0xF786, "setlightarmorvalue" }, // AUTOADDED
    { 0xF788, "setlightweight" }, // AUTOADDED
    { 0xF789, "setlittlebirdsupport" }, // AUTOADDED
    { 0xF78A, "setlocaljammer" },
    { 0xF78C, "setlowermessage" },
    { 0xF78D, "setmanatarms" },
    { 0xF78E, "setmapcenterfordev" }, // AUTOADDED
    { 0xF78F, "setmarksman" }, // AUTOADDED
    { 0xF793, "setmeleekill" },
    { 0xF796, "setmenu" },
    { 0xF79D, "setmisttrailscriptable" },
    { 0xF79E, "setmlgannouncement" },
    { 0xF7A0, "setmlgspectatorclientloadoutdata" },
    { 0xF7A1, "setmodelfromarray" }, // AUTOADDED
    { 0xF7A2, "setmodelfromcustomization" }, // AUTOADDED
    { 0xF7A3, "setmodelvisibility" }, // AUTOADDED
    { 0xF7A4, "setmomentum" },
    { 0xF7AD, "setneutral" }, // AUTOADDED
    { 0xF7AE, "setneutralicons" }, // AUTOADDED
    { 0xF7BE, "setobjectivehinttext" },
    { 0xF7BF, "setobjectiveicons" }, // AUTOADDED
    { 0xF7C0, "setobjectivescoretext" },
    { 0xF7C1, "setobjectivetext" },
    { 0xF7C6, "setonemanarmy" },
    { 0xF7CA, "setoriginbyname" }, // AUTOADDED
    { 0xF7CF, "setoverkill" },
    { 0xF7D0, "setoverridearchetype" },
    { 0xF7D1, "setoverridewatchdvar" },
    { 0xF7D4, "setownerteam" },
    { 0xF7D5, "setpainted" },
    { 0xF7D6, "setparent" }, // AUTOADDED
    { 0xF7D7, "setpassivevalue" }, // AUTOADDED
    { 0xF7E4, "setphaseslashrephase" },
    { 0xF7E5, "setphaseslide" },
    { 0xF7E6, "setphasespeed" },
    { 0xF7E8, "setpickedup" },
    { 0xF7E9, "setpitcher" },
    { 0xF7EA, "setpitcherinternal" },
    { 0xF7EC, "setplaybacktimer" },
    { 0xF7EF, "setplayercalloutarea" }, // AUTOADDED
    { 0xF7F2, "setplayerheadicon" },
    { 0xF7F3, "setplayerinside" }, // AUTOADDED
    { 0xF7F4, "setplayerloadout" },
    { 0xF801, "setpoint" }, // AUTOADDED
    { 0xF802, "setpointbar" }, // AUTOADDED
    { 0xF803, "setpose" },
    { 0xF804, "setposemovement" }, // AUTOADDED
    { 0xF805, "setposemovementfnarray" }, // AUTOADDED
    { 0xF806, "setposition" },
    { 0xF807, "setpowercell" },
    { 0xF810, "setquickswap" },
    { 0xF815, "setrearguard" },
    { 0xF817, "setrecoilscale" }, // AUTOADDED
    { 0xF818, "setrefillammo" },
    { 0xF819, "setrefillgrenades" },
    { 0xF81B, "setregenfaster" },
    { 0xF81C, "setrestxpgoal" }, // AUTOADDED
    { 0xF81D, "setrevenge" },
    { 0xF81E, "setrewind" },
    { 0xF821, "setrshieldradar" }, // AUTOADDED
    { 0xF822, "setrshieldradar_cleanup" }, // AUTOADDED
    { 0xF823, "setrshieldscrambler" }, // AUTOADDED
    { 0xF824, "setrshieldscrambler_cleanup" }, // AUTOADDED
    { 0xF825, "setruggedeqp" }, // AUTOADDED
    { 0xF826, "setrush" }, // AUTOADDED
    { 0xF827, "setsaboteur" }, // AUTOADDED
    { 0xF829, "setscavengereqp" },
    { 0xF82C, "setscorestreakpack" },
    { 0xF82D, "setscoutping" },
    { 0xF82E, "setscrambled" }, // AUTOADDED
    { 0xF831, "setscriptablestateflag" },
    { 0xF838, "setselfusable" },
    { 0xF839, "setselfvoinfo" }, // AUTOADDED
    { 0xF83C, "setsharpfocus" },
    { 0xF846, "setsixthsense" },
    { 0xF847, "setsize" }, // AUTOADDED
    { 0xF84F, "setspawncloak" },
    { 0xF850, "setspawnnotifyomnvar" },
    { 0xF851, "setspawnpoint" },
    { 0xF852, "setspawnradar" },
    { 0xF853, "setspawnvariables" },
    { 0xF854, "setspawnview" },
    { 0xF855, "setspecialloadout" },
    { 0xF856, "setspecialloadouts" }, // AUTOADDED
    { 0xF857, "setspectatepermissions" }, // AUTOADDED
    { 0xF859, "setspectator" },
    { 0xF85C, "setstackvalues" }, // AUTOADDED
    { 0xF85D, "setstate" }, // AUTOADDED
    { 0xF85E, "setstatelocked" }, // AUTOADDED
    { 0xF85F, "setstaticuicircles" }, // AUTOADDED
    { 0xF860, "setsteadyaimpro" }, // AUTOADDED
    { 0xF862, "setsteelnerves" },
    { 0xF867, "setstreakpoints" }, // AUTOADDED
    { 0xF869, "setstunresistance" },
    { 0xF86B, "setsuperpack" },
    { 0xF86D, "setsupportkillstreaks" },
    { 0xF86E, "setsurvivaltime" }, // AUTOADDED
    { 0xF870, "settacticalinsertion" },
    { 0xF871, "settagger" },
    { 0xF872, "settaggerinternal" },
    { 0xF874, "settarget" },
    { 0xF876, "setteam" },
    { 0xF877, "setteamheadicon" },
    { 0xF878, "setteamicons" }, // AUTOADDED
    { 0xF87C, "setteamusetext" },
    { 0xF87D, "setteamusetime" }, // AUTOADDED
    { 0xF880, "setteleslide" },
    { 0xF885, "setthermal" },
    { 0xF886, "setthief" },
    { 0xF887, "setthirdpersondof" },
    { 0xF888, "setthruster" }, // AUTOADDED
    { 0xF88C, "settimetobeat" }, // AUTOADDED
    { 0xF88D, "settings" }, // AUTOADDED
    { 0xF890, "settonestructtostate" },
    { 0xF891, "settoughenup" }, // AUTOADDED
    { 0xF892, "settoughenupmodel" }, // AUTOADDED
    { 0xF893, "settoughenupvisiblestate" }, // AUTOADDED
    { 0xF896, "settransponder" },
    { 0xF897, "settriggerhappy" },
    { 0xF898, "settriggerhappyinternal" },
    { 0xF89D, "settweakablevalue" }, // AUTOADDED
    { 0xF89E, "settweakabledvar" }, // AUTOADDED
    { 0xF89F, "setuav" }, // AUTOADDED
    { 0xF8A0, "setuipostgamefade" },
    { 0xF8A9, "setup_agent" }, // AUTOADDED
    { 0xF8C9, "setup_basketball_game" },
    { 0xF8D6, "setup_bot_ball" },
    { 0xF8D8, "setup_bot_conf" },
    { 0xF8D9, "setup_bot_ctf" },
    { 0xF8DA, "setup_bot_dd" },
    { 0xF8DB, "setup_bot_dom" },
    { 0xF8DC, "setup_bot_grnd" },
    { 0xF8DD, "setup_bot_infect" },
    { 0xF8DF, "setup_bot_sd" },
    { 0xF8E0, "setup_bot_siege" },
    { 0xF8E1, "setup_bot_sotf" },
    { 0xF8E2, "setup_bot_war" },
    { 0xF8F4, "setup_callbacks" },
    { 0xF93E, "setup_dj_booth" },
    { 0xF93F, "setup_dj_doors" },
    { 0xF942, "setup_door" },
    { 0xF949, "setup_dpad_slots" },
    { 0xF963, "setup_escape_hud" },
    { 0xF97F, "setup_flag_exploders" },
    { 0xF98F, "setup_ghost_wave_specific_power" },
    { 0xF998, "setup_bot_koth" },
    { 0xF99D, "setup_hints" },
    { 0xF9A6, "setup_individual_exploder" },
    { 0xF9A7, "setup_infil_lights" }, // AUTOADDED
    { 0xF9A8, "setup_informant" }, // AUTOADDED
    { 0xF9A9, "setup_initial_entities" }, // AUTOADDED
    { 0xF9AA, "setup_interact" }, // AUTOADDED
    { 0xF9AB, "setup_interaction_head" }, // AUTOADDED
    { 0xF9AC, "setup_interrogate" }, // AUTOADDED
    { 0xF9AD, "setup_intro_idles" }, // AUTOADDED
    { 0xF9AE, "setup_investigate_location" }, // AUTOADDED
    { 0xF9F9, "setup_pa_speakers" },
    { 0xF9FD, "setup_personalities" },
    { 0xFA27, "setup_revive_icon_ent" },
    { 0xFA46, "setup_slide" },
    { 0xFA51, "setup_standee_data" },
    { 0xFA73, "setup_tutorial_requirements" },
    { 0xFA74, "setup_ufo" },
    { 0xFA75, "setup_ufo_tone_array" },
    { 0xFA76, "setup_ufo_turret" },
    { 0xFA8A, "setupagent" },
    { 0xFA91, "setupbases" }, // AUTOADDED
    { 0xFA97, "setupc6agent" },
    { 0xFA99, "setupcallbacks" },
    { 0xFA9A, "setupcaptureflares" }, // AUTOADDED
    { 0xFA9B, "setupchallengelocales" }, // AUTOADDED
    { 0xFA9C, "setupcommoncallbacks" },
    { 0xFA9D, "setupconfigs" },
    { 0xFAA2, "setupdamageflags" },
    { 0xFAA3, "setupdamagetriggers" }, // AUTOADDED
    { 0xFAA4, "setupdestructibledoors" }, // AUTOADDED
    { 0xFAA5, "setupdestructiblekillcaments" }, // AUTOADDED
    { 0xFAA6, "setupdestructibleparts" }, // AUTOADDED
    { 0xFAA7, "setupdevguientries" }, // AUTOADDED
    { 0xFAA8, "setupdynamicladders" }, // AUTOADDED
    { 0xFAA9, "setupendzones" }, // AUTOADDED
    { 0xFAAA, "setupexploders" },
    { 0xFAC5, "setuphudelements" }, // AUTOADDED
    { 0xFAC9, "setupkillcament" },
    { 0xFACC, "setupminesettings" },
    { 0xFACD, "setupminimap" },
    { 0xFAD4, "setupnextobjective" }, // AUTOADDED
    { 0xFAD5, "setupobjective" },
    { 0xFADA, "setuppingwatcher" }, // AUTOADDED
    { 0xFAE7, "setupsavedactionslots" },
    { 0xFAE9, "setupselfvo" }, // AUTOADDED
    { 0xFAEA, "setupsfxobjs" }, // AUTOADDED
    { 0xFAED, "setup_spawn_struct" }, // AUTOADDED
    { 0xFAF4, "setupvfxobjs" },
    { 0xFAF5, "setupvisuals" }, // AUTOADDED
    { 0xFAFF, "setupzoneareabrushes" },
    { 0xFB00, "setupzonecallouts" },
    { 0xFB01, "setupzones" },
    { 0xFB02, "setusablebyotherteams" },
    { 0xFB03, "setusablebyteam" },
    { 0xFB04, "setuseanimgoalweight" }, // AUTOADDED
    { 0xFB05, "setuseanimgoalweight_wait" }, // AUTOADDED
    { 0xFB06, "setusehinttext" }, // AUTOADDED
    { 0xFB07, "setusetext" }, // AUTOADDED
    { 0xFB08, "setusetime" }, // AUTOADDED
    { 0xFB09, "setusingremote" }, // AUTOADDED
    { 0xFB0D, "setviewkickoverride" },
    { 0xFB0E, "setvisibleteam" },
    { 0xFB14, "setwaitweaponchangeonuse" },
    { 0xFB15, "setwalllock" },
    { 0xFB17, "setweaponlaser" }, // AUTOADDED
    { 0xFB18, "setweaponlaser_internal" }, // AUTOADDED
    { 0xFB19, "setweaponlaser_monitorads" },
    { 0xFB1A, "setweaponlaser_monitorweaponswitchstart" }, // AUTOADDED
    { 0xFB1B, "setweaponlaser_onweaponswitchstart" }, // AUTOADDED
    { 0xFB1C, "setweaponlaser_waitforlaserweapon" },
    { 0xFB1D, "setweaponstat" }, // AUTOADDED
    { 0xFB20, "setwinner" },
    { 0xFB23, "setxenonranks" }, // AUTOADDED
    { 0xFC35, "sfxcannonbulletimpact" },
    { 0xFC36, "sfxcannonfireburplong_3p" },
    { 0xFC37, "sfxcannonfireburpshort_3p" },
    { 0xFC38, "sfxcannonfireburptime" },
    { 0xFC39, "sfxcannonfireloop_1p" },
    { 0xFC3A, "sfxcannonfireloop_3p" },
    { 0xFC3B, "sfxcannonfirestop_1p" },
    { 0xFC3C, "sfxcannonfirestop_3p" },
    { 0xFC3D, "sfxengine_1p" },
    { 0xFC3E, "sfxengine_3p" },
    { 0xFC40, "sfxmissile" },
    { 0xFC41, "sfxmissilefire_1p" },
    { 0xFC42, "sfxmissilefire_3p" },
    { 0xFC44, "shader" }, // AUTOADDED
    { 0xFC47, "shadername" },
    { 0xFC52, "shakeplayershud" },
    { 0xFC5F, "sharedrushtimer" },
    { 0xFC6A, "shellshockondamage" },
    { 0xFC6B, "shellshockreduction" }, // AUTOADDED
    { 0xFC9B, "shieldhealth" },
    { 0xFE38, "shitloc" },
    { 0xFE39, "shitloc_mods" },
    { 0xFE4B, "shocked" },
    { 0xFE4F, "shocktarget" },
    { 0xFE54, "shoot_8bit_lasers" },
    { 0xFE6C, "shoot_ice_monster_eye_during_coaster_ride" },
    { 0xFE6D, "shoot_ice_monster_eyes_monitor" },
    { 0xFE81, "shoot_slow_projectiles" },
    { 0xFE94, "shootanimtime" },
    { 0xFE95, "shootastold" }, // AUTOADDED
    { 0xFE96, "shootatshootentorpos" }, // AUTOADDED
    { 0xFE97, "shootblankorrpg" }, // AUTOADDED
    { 0xFE98, "shootenemytarget_bullets" }, // AUTOADDED
    { 0xFE99, "shootenemytarget_bullets_debugline" }, // AUTOADDED
    { 0xFE9A, "shootenemywrapper" },
    { 0xFE9B, "shootenemywrapper_func" }, // AUTOADDED
    { 0xFEC8, "shootnotetrack" },
    { 0xFECD, "shootparams" },
    { 0xFED0, "shootposwrapper_func" },
    { 0xFED6, "shootstate" }, // AUTOADDED
    { 0xFEF1, "shot_by_player" },
    { 0xFEF6, "shotfired" },
    { 0xFEF7, "shotfiredphysicssphere" },
    { 0xFEFA, "shotgun_scaling" },
    { 0xFEFD, "shotgundamagemod" },
    { 0xFF09, "shotsfiredwithweapon" },
    { 0xFF0A, "shotsontargetwithweapon" },
    { 0xFF0D, "should_abort" }, // AUTOADDED
    { 0xFF11, "should_allow_far_search_dist_func" },
    { 0xFF12, "should_append_player_prefix" },
    { 0xFF13, "should_apply_dot" },
    { 0xFF14, "should_attack_nearby_player" },
    { 0xFF18, "should_be_affected_by_trap" },
    { 0xFF22, "should_continue_progress_bar_think" },
    { 0xFF25, "should_delay_flag_decision" },
    { 0xFF2E, "should_do_damage_checks" },
    { 0xFF32, "should_do_immediate_ragdoll" },
    { 0xFF3A, "should_do_stun_damage" },
    { 0xFF3B, "should_drop_crafting_item" },
    { 0xFF3C, "should_drop_pillage" },
    { 0xFF4B, "should_get_currency_from_kill" },
    { 0xFF5A, "should_interaction_fill_consumable_meter" },
    { 0xFF6B, "should_mutilate_perk_check" },
    { 0xFF75, "should_play_melee_blood_vfx" },
    { 0xFF76, "should_play_melee_blood_vfx_func" },
    { 0xFF78, "should_play_transformation_anim" },
    { 0xFF7F, "should_put_player_outline_on" },
    { 0xFF82, "should_record_final_score_cam" },
    { 0xFF83, "should_regen_summon" },
    { 0xFF85, "should_revive_continue" },
    { 0xFF87, "should_select_new_ambush_point" }, // AUTOADDED
    { 0xFF88, "should_shock_wave" },
    { 0xFF8C, "should_show_tutorial_func" },
    { 0xFF9A, "should_start_cautious_approach_default" }, // AUTOADDED
    { 0xFF9B, "should_start_cautious_approach_dom" },
    { 0xFF9C, "should_start_cautious_approach_sd" },
    { 0xFF9F, "should_stop_intro_anim" },
    { 0xFFA0, "should_stop_seeking_weapon" }, // AUTOADDED
    { 0xFFA6, "should_take_players_current_weapon" },
    { 0xFFA9, "should_track_weapon_fired" },
    { 0xFFAD, "should_update_func" },
    { 0xFFB1, "should_use_alt_machine" },
    { 0xFFB9, "shouldaffectclaymore" },
    { 0xFFBB, "shouldallowinstantclassswap" },
    { 0xFFBC, "shouldapplycrotchdamagemultiplier" },
    { 0xFFED, "shoulddoempattack" },
    { 0x10011, "shouldfade" },
    { 0x1002C, "shouldignoreent" },
    { 0x10036, "shouldlogcodcasterclientmatchdata" },
    { 0x10039, "shouldmelee" },
    { 0x10040, "shouldpingobject" }, // AUTOADDED
    { 0x10041, "shouldplayarenaintro" }, // AUTOADDED
    { 0x10042, "shouldplaybalconydeath" }, // AUTOADDED
    { 0x10043, "shouldplaybalconyraildeath" }, // AUTOADDED
    { 0x10044, "shouldplayerlogevents" }, // AUTOADDED
    { 0x10050, "shouldplaypainbreathingsound" },
    { 0x1005D, "shouldplaywinbytwo" }, // AUTOADDED
    { 0x10064, "shouldqueuemidmatchaward" },
    { 0x10065, "shouldreacttolight" }, // AUTOADDED
    { 0x10066, "shouldreacttonewenemy" }, // AUTOADDED
    { 0x10067, "shouldrefundsuper" }, // AUTOADDED
    { 0x10068, "shouldreload" }, // AUTOADDED
    { 0x10069, "shouldreloadwhilemoving" }, // AUTOADDED
    { 0x1006A, "shouldremovefromarbitraryuptrigger" }, // AUTOADDED
    { 0x1006B, "shouldresetgiveuponsuppressiontimer" },
    { 0x10071, "shouldrunserversideeffects" },
    { 0x10076, "shouldshoot" },
    { 0x10077, "shouldshootenemyent" },
    { 0x1007A, "shouldshowcompassduetoradar" }, // AUTOADDED
    { 0x1007B, "shouldshowtutorial" },
    { 0x10082, "shouldspawnbots" },
    { 0x10083, "shouldspawntags" }, // AUTOADDED
    { 0x10085, "shouldsplash" },
    { 0x100AA, "shouldtakedamage" },
    { 0x100B9, "shoulduseprecomputedlos" }, // AUTOADDED
    { 0x100BA, "shoulduseteamstartspawn" },
    { 0x100C2, "show_all_revive_icons" },
    { 0x100D5, "show_encounter_scores" },
    { 0x100DB, "show_exploder_models_proc" },
    { 0x100DF, "show_ghost_arcade_scores" },
    { 0x100E3, "show_help" },
    { 0x100EA, "show_introscreen_text" },
    { 0x100F3, "show_player_score_tally" },
    { 0x100F5, "show_rave_objects" },
    { 0x100F6, "show_revive_icon_to_player" },
    { 0x100FA, "show_score_tally" },
    { 0x10101, "show_ticket_machine" },
    { 0x1010F, "showballbaseeffecttoplayer" }, // AUTOADDED
    { 0x10110, "showbaseeffecttoplayer" }, // AUTOADDED
    { 0x10114, "showcapturedhardpointeffecttoplayer" },
    { 0x10117, "showchallengesplash" },
    { 0x1011A, "showcratesplash" }, // AUTOADDED
    { 0x1011F, "showelem" }, // AUTOADDED
    { 0x10120, "showenemycarrier" },
    { 0x10121, "showenemydeathloc" }, // AUTOADDED
    { 0x10122, "showerrormessage" }, // AUTOADDED
    { 0x10123, "showerrormessagetoallplayers" }, // AUTOADDED
    { 0x10125, "showfakeloadout" },
    { 0x10127, "showflagradiuseffecttoplayers" }, // AUTOADDED
    { 0x10128, "showfriendicon" }, // AUTOADDED
    { 0x1012A, "showfxarray" }, // AUTOADDED
    { 0x1012C, "showheadicon" },
    { 0x10130, "showingfinalkillcam" },
    { 0x10134, "showkillstreaksplash" },
    { 0x1013D, "showmiscmessage" }, // AUTOADDED
    { 0x1013F, "showninfected" }, // AUTOADDED
    { 0x10142, "showonscreenbloodeffects" },
    { 0x10146, "showplacedmodel" }, // AUTOADDED
    { 0x10151, "showsplash" },
    { 0x10152, "showsplashinternal" },
    { 0x10157, "showtimer" },
    { 0x10158, "showto" },
    { 0x10159, "showtoteam" },
    { 0x1015A, "showuidamageflash" }, // AUTOADDED
    { 0x1015C, "showzonecontestedbrush" },
    { 0x1015D, "showzoneenemybrush" },
    { 0x1015E, "showzonefriendlybrush" },
    { 0x1015F, "showzoneneutralbrush" },
    { 0x10161, "shredder_battery" },
    { 0x10162, "shredder_battery_dropped" },
    { 0x10163, "shredder_battery_spawn" },
    { 0x10164, "shredder_crafting_list" },
    { 0x10166, "shredder_death" },
    { 0x10167, "shredder_death_logic" },
    { 0x10171, "shufflenode" }, // AUTOADDED
    { 0x101B9, "sidelinedbycommander" },
    { 0x101BC, "siege_a_xpos" }, // AUTOADDED
    { 0x101BD, "siege_a_ypos" }, // AUTOADDED
    { 0x101BE, "siege_a_zpos" }, // AUTOADDED
    { 0x101BF, "siege_activated" }, // AUTOADDED
    { 0x101C0, "siege_b_xpos" }, // AUTOADDED
    { 0x101C1, "siege_b_ypos" }, // AUTOADDED
    { 0x101C2, "siege_b_zpos" }, // AUTOADDED
    { 0x101C3, "siege_bot_team_need_flags" }, // AUTOADDED
    { 0x101C4, "siege_c_xpos" }, // AUTOADDED
    { 0x101C5, "siege_c_ypos" }, // AUTOADDED
    { 0x101C6, "siege_c_zpos" }, // AUTOADDED
    { 0x101D3, "siege_speedscale" },
    { 0x101D7, "siegeflagcapturing" }, // AUTOADDED
    { 0x101D8, "siegegameinactive" },
    { 0x101D9, "siegelatecomer" },
    { 0x101DC, "siegetimeleft" }, // AUTOADDED
    { 0x101DD, "siegetimerstate" },
    { 0x101E3, "sight_trace_succeed" },
    { 0x101EA, "sign" },
    { 0x101F2, "signs_kepler" },
    { 0x101F3, "signs_mainst" },
    { 0x101F4, "signs_triton" },
    { 0x101F7, "silentplant" },
    { 0x1020C, "single_value_stats" },
    { 0x10211, "singularitydisconnectwatcher" },
    { 0x10212, "singularityexplode" },
    { 0x10213, "singularityquake" },
    { 0x10248, "skip_battery_logic" },
    { 0x10249, "skip_crystal_logic" },
    { 0x102C6, "slam_delent" },
    { 0x102C7, "slam_execute" },
    { 0x102C8, "slam_executeinternal" },
    { 0x102CA, "slam_physicspulse" },
    { 0x102CD, "slappymelee" },
    { 0x102E0, "slide_anim" },
    { 0x102F8, "sliding_power_door" },
    { 0x10307, "slot" },
    { 0x1030B, "slot_array" },
    { 0x10315, "slow_health_regen" },
    { 0x1031A, "slowed" },
    { 0x1032D, "slowmotionendofgame" }, // AUTOADDED
    { 0x10356, "smartglass_commander" },
    { 0x10367, "smeansofdeath" },
    { 0x1036D, "smoke_grenade_late_death" }, // AUTOADDED
    { 0x10376, "smoked" },
    { 0x10378, "smokegrenadegiveblindeye" }, // AUTOADDED
    { 0x10379, "smokegrenademonitorblindeyerecipients" }, // AUTOADDED
    { 0x10386, "snap2angle" },
    { 0x10387, "snap2anglesnaps" },
    { 0x10388, "snap2normal" },
    { 0x103B4, "sniperdustwatcher" },
    { 0x103B8, "sniperglint_remove" }, // AUTOADDED
    { 0x103E8, "softlanding" }, // AUTOADDED
    { 0x103E9, "softlandingtriggers" },
    { 0x103EA, "softlandingwaiter" }, // AUTOADDED
    { 0x103EB, "softlink" }, // AUTOADDED
    { 0x103EC, "softsighttest" }, // AUTOADDED
    { 0x103F2, "soldier" },
    { 0x103FF, "solo_gameshouldend" },
    { 0x10400, "solo_maydolaststand" },
    { 0x10405, "song_skip_time" },
    { 0x10406, "songname" },
    { 0x10407, "sonicboomsfx" }, // AUTOADDED
    { 0x1042F, "sort_reactive_ents" },
    { 0x10434, "sortandcullanimstructarray" },
    { 0x10435, "sortballarray" }, // AUTOADDED
    { 0x10436, "sortbyhvtkills" }, // AUTOADDED
    { 0x10437, "sortbyweight" }, // AUTOADDED
    { 0x1043D, "sortlowermessages" },
    { 0x10440, "sotf" }, // AUTOADDED
    { 0x10441, "sotf_bot_think_seek_dropped_weapons" }, // AUTOADDED
    { 0x10442, "sotf_crate_can_use" }, // AUTOADDED
    { 0x10443, "sotf_crate_in_range" }, // AUTOADDED
    { 0x10444, "sotf_crate_low_ammo_check" }, // AUTOADDED
    { 0x10445, "sotf_crate_should_claim" }, // AUTOADDED
    { 0x10446, "sotf_crate_wait_use" }, // AUTOADDED
    { 0x10447, "sotf_loadouts" },
    { 0x10448, "sotf_should_stop_seeking_weapon" },
    { 0x10449, "sotfcratecontents" },
    { 0x1044A, "sotfcratethink" },
    { 0x1044D, "soul_claimed" },
    { 0x1044E, "soul_key_pick_up_monitor" },
    { 0x1044F, "soul_power_displayed" },
    { 0x10450, "soul_power_earned" },
    { 0x10451, "soul_power_goal" },
    { 0x10452, "soulkey_quest_vo" },
    { 0x10453, "sound" },
    { 0x1045A, "sound_effect" },
    { 0x1045F, "sound_explode" },
    { 0x10465, "sound_lockon" },
    { 0x1046D, "sound_prefix" },
    { 0x1046E, "sound_ramp" }, // AUTOADDED
    { 0x1046F, "sound_reset_time" }, // AUTOADDED
    { 0x10470, "sound_suffix" },
    { 0x10472, "sound_targeting" },
    { 0x10474, "sound_weapon" },
    { 0x10475, "soundalias" },
    { 0x10478, "soundent" }, // AUTOADDED
    { 0x10479, "soundevents" }, // AUTOADDED
    { 0x1047A, "soundfx" }, // AUTOADDED
    { 0x1047B, "soundfxdelete" }, // AUTOADDED
    { 0x1047D, "sounds" },
    { 0x10481, "soundwatcher" }, // AUTOADDED
    { 0x10485, "souvenir" },
    { 0x10486, "souvenir_fx" },
    { 0x10488, "souvenir_impact_sounds" },
    { 0x10489, "souvenir_model" },
    { 0x1048A, "souvenir_origin" },
    { 0x1048C, "souvenir_station" },
    { 0x1048D, "souvenir_team_splash" },
    { 0x1048E, "souvenir_toy" },
    { 0x1048F, "souvenir_vo" },
    { 0x10490, "souvenircointype" },
    { 0x104AC, "sp" },
    { 0x1056C, "spaceland_powernode_damage_monitor" },
    { 0x10607, "spam_points_popup" }, // AUTOADDED
    { 0x10618, "spawn_agent_player" },
    { 0x10632, "spawn_and_beam_down_zombie" },
    { 0x10633, "spawn_and_beam_down_zombies" },
    { 0x10655, "spawn_bot_latent" },
    { 0x10656, "spawn_bots" },
    { 0x1068B, "spawn_coaster_zombies" },
    { 0x10697, "spawn_crafting_item" },
    { 0x106A7, "spawn_dj" },
    { 0x106D7, "spawn_escape_entities" },
    { 0x106E2, "spawn_event_running" },
    { 0x106F6, "spawn_fire_trail_fx" },
    { 0x1070B, "spawn_fx" },
    { 0x1070C, "spawn_fx_func" },
    { 0x10714, "spawn_ghost_group" },
    { 0x10715, "spawn_ghost_group_internal" },
    { 0x10717, "spawn_ghosts" },
    { 0x1071F, "spawn_grenade" },
    { 0x10725, "spawn_group" },
    { 0x10757, "spawn_lasers" },
    { 0x10774, "spawn_moving_target" },
    { 0x10776, "spawn_moving_target_group" },
    { 0x1077C, "spawn_new_care_package" },
    { 0x1077D, "spawn_next_weapon" },
    { 0x1077E, "spawn_next_zone" },
    { 0x107AA, "spawn_power_up" },
    { 0x107B2, "spawn_regular_agent" }, // AUTOADDED
    { 0x107CA, "spawn_score_distance" },
    { 0x107CE, "spawn_script_origin" },
    { 0x107CF, "spawn_scripted_agent" },
    { 0x107E6, "spawn_tag_origin" },
    { 0x107EB, "spawn_targets" },
    { 0x107F7, "spawn_time" }, // AUTOADDED
    { 0x107FE, "spawn_type" },
    { 0x10815, "spawn_vo_func" },
    { 0x10816, "spawn_volume_array" },
    { 0x1081B, "spawn_wave_enemy" },
    { 0x10822, "spawn_zombie" },
    { 0x10824, "spawn_zombie_ghost" },
    { 0x10829, "spawnaircraft" },
    { 0x10833, "spawnblackholephysicsvolume" },
    { 0x10836, "spawnbomb" },
    { 0x10839, "spawnchests" },
    { 0x1083A, "spawnclient" },
    { 0x10841, "spawncount" }, // AUTOADDED
    { 0x10846, "spawndelay" }, // AUTOADDED
    { 0x10847, "spawndelayoverride" },
    { 0x10849, "spawndogtags" },
    { 0x1084F, "spawned_enemies" },
    { 0x10850, "spawned_grey" },
    { 0x10851, "spawned_group" },
    { 0x10857, "spawnendofgame" },
    { 0x1087B, "spawners" },
    { 0x108CC, "spawnfxarray" }, // AUTOADDED
    { 0x108CD, "spawnfxdelay" }, // AUTOADDED
    { 0x108D1, "spawnglobals" }, // AUTOADDED
    { 0x108D8, "spawnidstobeinstrumented" }, // AUTOADDED
    { 0x108DB, "spawningafterremotedeath" }, // AUTOADDED
    { 0x108DC, "spawningclientthisframereset" },
    { 0x108DD, "spawnintermission" },
    { 0x108E1, "spawnloopupdatefunc" },
    { 0x108E2, "spawnmaxs" },
    { 0x108E3, "spawnmine" },
    { 0x108E4, "spawnmins" },
    { 0x108E8, "spawnnewagent" },
    { 0x108EB, "spawnnodetype" },
    { 0x108F2, "spawnplayer" },
    { 0x108FB, "spawnpoints" },
    { 0x108FD, "spawnpointslist" },
    { 0x108FF, "spawnpos" },
    { 0x10902, "spawnprotection" },
    { 0x10903, "spawnprotectiontimer" },
    { 0x10911, "spawnspectator" }, // AUTOADDED
    { 0x10912, "spawnspectatormapcam" },
    { 0x10914, "spawnswitchblade" }, // AUTOADDED
    { 0x10915, "spawntag" }, // AUTOADDED
    { 0x10916, "spawntime" }, // AUTOADDED
    { 0x10919, "spawntype" },
    { 0x1091A, "spawnuniversaldangerzone" }, // AUTOADDED
    { 0x1091B, "spawnusedbyenemies" }, // AUTOADDED
    { 0x1091E, "spawnviewpathnodes" }, // AUTOADDED
    { 0x10922, "spawnweaponobj" },
    { 0x10924, "spawnwithplayersecondary" },
    { 0x10929, "speaker_defend_hint_func" },
    { 0x1092A, "speaker_defense_length" },
    { 0x1092B, "speaker_hint_func" },
    { 0x1092C, "speaker_icon_timer" },
    { 0x1092F, "speakers" },
    { 0x10932, "special_ammo_type" },
    { 0x10935, "special_ammocount" },
    { 0x10937, "special_ammocount_comb" },
    { 0x10942, "special_event" },
    { 0x1094A, "special_vo_notify_watcher" },
    { 0x1094D, "special_weapon_logic" },
    { 0x10967, "specialoffhandgrenade" },
    { 0x1096B, "specialroundcounter" },
    { 0x1096F, "species" }, // AUTOADDED
    { 0x10970, "species_funcs" }, // AUTOADDED
    { 0x10971, "species_pre_spawn_init" },
    { 0x10972, "speciesfunc" },
    { 0x10978, "spectateoverride" },
    { 0x1097A, "spectating" },
    { 0x1097B, "spectating_actively" }, // AUTOADDED
    { 0x1097D, "spectator_revive_time" },
    { 0x1097E, "spectator_takeover_other" },
    { 0x10992, "speedadjust" },
    { 0x109AE, "speedmod" }, // AUTOADDED
    { 0x109BB, "speedstripmod" },
    { 0x109D8, "spell_the_word_ghost" },
    { 0x109DA, "spend_type" },
    { 0x109DC, "sphere_get_closest_point" },
    { 0x109DD, "sphere_trace" },
    { 0x109DE, "sphere_trace_get_all_results" },
    { 0x109DF, "sphere_trace_passed" },
    { 0x109FF, "spin_toy" },
    { 0x10A04, "spinner_trap_kills" },
    { 0x10A11, "spinsoundshortly" }, // AUTOADDED
    { 0x10A13, "spinuptime" }, // AUTOADDED
    { 0x10A32, "splash_grenade_victim_scriptable_state_func" },
    { 0x10A34, "splashgrenadeinit" },
    { 0x10A35, "splashgrenadeused" },
    { 0x10A37, "splashlisttoggle" },
    { 0x10A3E, "splashqueuehead" }, // AUTOADDED
    { 0x10A3F, "splashqueuetail" }, // AUTOADDED
    { 0x10A40, "splashshownthink" },
    { 0x10A56, "splitscreen" }, // AUTOADDED
    { 0x10AA6, "sprimaryweapon" },
    { 0x10AC4, "sprinttracking" },
    { 0x10AEA, "squadmate_agent_think" },
    { 0x10AEC, "squadmemberbufferedstats" }, // AUTOADDED
    { 0x10B28, "sr_ally_near_tag" },
    { 0x10B29, "sr_camp_tag" },
    { 0x10B2C, "sr_pick_up_tag" },
    { 0x10B39, "stabs" },
    { 0x10B3E, "stackscurrent" }, // AUTOADDED
    { 0x10B3F, "stacksmax" }, // AUTOADDED
    { 0x10B40, "stackvalues" }, // AUTOADDED
    { 0x10B51, "stalemate" },
    { 0x10B5E, "stancerecoiladjuster" },
    { 0x10B5F, "stancerecoilupdate" },
    { 0x10B67, "standardmaxhealth" },
    { 0x10B6C, "standee" },
    { 0x10B6D, "standee_activate_logic" },
    { 0x10B6E, "standee_hint_logic" },
    { 0x10B72, "standingdotdamage" },
    { 0x10B83, "stand" },
    { 0x10B89, "start" },
    { 0x10B95, "start_afterlife_arcade_music" },
    { 0x10BA5, "start_armageddon" },
    { 0x10BBB, "start_being_launched" },
    { 0x10BF1, "start_coaster" },
    { 0x10C09, "start_crystal_path" },
    { 0x10C0C, "start_death_trigger_monitor" },
    { 0x10C10, "start_defense_sequence" },
    { 0x10C5A, "start_game_type" },
    { 0x10C60, "start_ghost_portal_vfx" },
    { 0x10C61, "start_ghost_wave" },
    { 0x10C62, "start_ghosts_spawning" },
    { 0x10C6B, "start_grey_fight_blocker_vfx" },
    { 0x10C6C, "start_grey_sequence" },
    { 0x10C81, "start_hot_potato" },
    { 0x10CA8, "start_match_tone_sequence" },
    { 0x10CE2, "start_pos" },
    { 0x10CEE, "start_quest_line" },
    { 0x10D29, "start_slow_projectile_sequence" },
    { 0x10D46, "start_thread" },
    { 0x10D57, "start_ufo_zombie_spawn_sequence" },
    { 0x10D6E, "startballdrone" },
    { 0x10D73, "startbroshot" },
    { 0x10D78, "startcament" },
    { 0x10D7E, "startcontrol" }, // AUTOADDED
    { 0x10D82, "startdamageovertime" },
    { 0x10D93, "startedplasmalinger" },
    { 0x10D94, "startedplasmastand" },
    { 0x10D9B, "startflashing" }, // AUTOADDED
    { 0x10DA5, "starthoveranim" }, // AUTOADDED
    { 0x10DA7, "starting_currency" },
    { 0x10DA8, "starting_currency_after_revived_from_spectator" },
    { 0x10DAF, "starting_move_structs" },
    { 0x10DB3, "starting_vo" },
    { 0x10DB8, "startingstruct" },
    { 0x10DD0, "startnpcbombusesound" },
    { 0x10DEC, "startrotationwhenneargoal" },
    { 0x10DF0, "startspawnchest" },
    { 0x10DF2, "startspeakereventspawning" },
    { 0x10DF5, "startstrafesequence" },
    { 0x10DFF, "starttime" }, // AUTOADDED
    { 0x10E00, "starttimefrommatchstart" }, // AUTOADDED
    { 0x10E02, "starttrackingplane" }, // AUTOADDED
    { 0x10E06, "startusemover" }, // AUTOADDED
    { 0x10E07, "startuseorigin" }, // AUTOADDED
    { 0x10E12, "statadd" },
    { 0x10E13, "stataddbuffered" }, // AUTOADDED
    { 0x10E14, "stataddbufferedwithmax" }, // AUTOADDED
    { 0x10E15, "stataddchild" }, // AUTOADDED
    { 0x10E16, "stataddchildbuffered" }, // AUTOADDED
    { 0x10E17, "stataddchildbufferedwithmax" }, // AUTOADDED
    { 0x10E19, "state" }, // AUTOADDED
    { 0x10E26, "statecurr" }, // AUTOADDED
    { 0x10E2E, "stateprev" }, // AUTOADDED
    { 0x10E2F, "states" }, // AUTOADDED
    { 0x10E33, "statget" },
    { 0x10E34, "statgetbuffered" }, // AUTOADDED
    { 0x10E35, "statgetchild" }, // AUTOADDED
    { 0x10E36, "statgetchildbuffered" }, // AUTOADDED
    { 0x10E3C, "static_enemy_types" },
    { 0x10E47, "staticdata" }, // AUTOADDED
    { 0x10E48, "staticeffect" },
    { 0x10E56, "statsetchild" },
    { 0x10E57, "statsetchildbuffered" }, // AUTOADDED
    { 0x10E5A, "statstable" },
    { 0x10E5B, "status" },
    { 0x10E60, "statusdialog" },
    { 0x10F72, "steel_dragon_mini_ufo" },
    { 0x10FAF, "stock" },
    { 0x10FBA, "stop_and_drop_players" },
    { 0x10FBB, "stop_and_wait_for_boat_use" },
    { 0x10FD2, "stop_death_trigger_monitor" },
    { 0x10FED, "stop_exploder_proc" },
    { 0x10FEE, "stop_far_cars" }, // AUTOADDED
    { 0x10FEF, "stop_fighting_with_player" }, // AUTOADDED
    { 0x10FF0, "stop_final_speech" }, // AUTOADDED
    { 0x10FF1, "stop_firing" }, // AUTOADDED
    { 0x10FF2, "stop_firing_turret" }, // AUTOADDED
    { 0x10FF3, "stop_following_all_players" }, // AUTOADDED
    { 0x10FF4, "stop_following_ent" }, // AUTOADDED
    { 0x10FF5, "stop_func" }, // AUTOADDED
    { 0x10FF6, "stop_fx_idle" }, // AUTOADDED
    { 0x10FF7, "stop_fx_looper" },
    { 0x10FFA, "stop_ghost_portal_vfx" },
    { 0x10FFB, "stop_ghosts_attack_logic" },
    { 0x10FFC, "stop_ghosts_spawning" },
    { 0x10FFD, "stop_grey_fight_blocker_sfx" },
    { 0x10FFE, "stop_grey_fight_blocker_vfx" },
    { 0x11001, "stop_handling_moving_platforms" }, // AUTOADDED
    { 0x11018, "stop_loop_sound_on_entity" },
    { 0x11019, "stop_looping_sound_on_ent" }, // AUTOADDED
    { 0x1101A, "stop_loopsound" },
    { 0x1101F, "stop_moving_targets_sequence" },
    { 0x11030, "stop_player_pushed_kill" }, // AUTOADDED
    { 0x11038, "stop_revive_gesture" },
    { 0x11039, "stop_reviving" }, // AUTOADDED
    { 0x11046, "stop_spawning" },
    { 0x11052, "stop_using_crate" }, // AUTOADDED
    { 0x11053, "stop_using_entangler" },
    { 0x11061, "stopblinkinglight" },
    { 0x11066, "stopcontrol" }, // AUTOADDED
    { 0x11070, "stopflashing" }, // AUTOADDED
    { 0x1107A, "stoploopafter" },
    { 0x11082, "stoponback" },
    { 0x1108F, "stopsuspensemusic" }, // AUTOADDED
    { 0x11094, "stoptickingsound" }, // AUTOADDED
    { 0x11098, "stoptrackingplane" }, // AUTOADDED
    { 0x1109A, "stopuse" },
    { 0x1109B, "stopusingremote" },
    { 0x110A0, "stopwavefromprogressing" },
    { 0x110A2, "store_and_reset_currency" },
    { 0x110A4, "store_attacker_info" },
    { 0x110A6, "store_player_status" },
    { 0x110AA, "store_weapons_status" },
    { 0x110AD, "storechallengetime" },
    { 0x110AF, "storecompletedmerit" },
    { 0x110B0, "storecompletedoperation" },
    { 0x110B1, "stored_ammo" }, // AUTOADDED
    { 0x110B2, "stored_ents" },
    { 0x110B8, "stored_zombies_perks" },
    { 0x110D7, "strafeifwithindist" },
    { 0x110DC, "strategy_level" },
    { 0x110E8, "streakinfo" }, // AUTOADDED
    { 0x110EA, "streakname" }, // AUTOADDED
    { 0x110EE, "streakpoints" }, // AUTOADDED
    { 0x110EF, "streaks" }, // AUTOADDED
    { 0x110F0, "streaksetupinfo" }, // AUTOADDED
    { 0x110F1, "streakshouldchain" }, // AUTOADDED
    { 0x110F2, "streakstate" }, // AUTOADDED
    { 0x110F3, "streaktable" }, // AUTOADDED
    { 0x110F4, "streaktype" }, // AUTOADDED
    { 0x110F5, "streaktyperesetsondeath" }, // AUTOADDED
    { 0x1110F, "streamweaponsonzonechange" },
    { 0x11145, "string" },
    { 0x11148, "string_starts_with" },
    { 0x11149, "string_to_bool" }, // AUTOADDED
    { 0x11150, "strip_suffix" }, // AUTOADDED
    { 0x11153, "stripweapsuffix" }, // AUTOADDED
    { 0x11158, "struct" },
    { 0x1115B, "struct_class_init" },
    { 0x1115C, "struct_class_names" },
    { 0x1115F, "struct_wait_for_damage" },
    { 0x11180, "stuckenemyentity" },
    { 0x1118F, "stun_hit" },
    { 0x11190, "stun_hit_time" },
    { 0x11192, "stun_struct" },
    { 0x11193, "stun_zap" },
    { 0x11195, "stunenemiesinrange" },
    { 0x11196, "stunned" },
    { 0x111A4, "subclass" },
    { 0x111AB, "subtractheavyarmor" }, // AUTOADDED
    { 0x111AE, "success" },
    { 0x111AF, "successfully_escaped" },
    { 0x111B0, "suck_zombie" },
    { 0x111BA, "suicider_avoidance_radius" },
    { 0x111BB, "suicides" },
    { 0x111BC, "suit" },
    { 0x111BF, "sum_of_recent_damage" },
    { 0x111C0, "summon_a_zombie_at" },
    { 0x11234, "super" }, // AUTOADDED
    { 0x11237, "superabilitywatcher" },
    { 0x11262, "superkill" }, // AUTOADDED
    { 0x11265, "supershutdown" }, // AUTOADDED
    { 0x11267, "supertrophy" },
    { 0x112A6, "superusefinished" }, // AUTOADDED
    { 0x112A9, "superweapons" },
    { 0x112BF, "supportbuddyspawn" },
    { 0x112C0, "supportcranked" },
    { 0x112C1, "supportdoublejump_MAYBE" },
    { 0x112C2, "supportintel" },
    { 0x112C4, "supportnuke" },
    { 0x112C5, "supportturret" }, // AUTOADDED
    { 0x112C6, "supportwallrun_MAYBE" },
    { 0x112CC, "suppressingfiretracking" },
    { 0x112CD, "suppressionstart" }, // AUTOADDED
    { 0x112CE, "suppressionthreshold" },
    { 0x112CF, "suppressiontime" }, // AUTOADDED
    { 0x112D0, "suppresstimeout" }, // AUTOADDED
    { 0x112D1, "suppresswaiter" },
    { 0x112D2, "suppressdamageflash" }, // AUTOADDED
    { 0x112E1, "survivalstarttime" }, // AUTOADDED
    { 0x112E6, "survivoralivescore" },
    { 0x112E7, "survivorlethal" },
    { 0x112E8, "survivorprimaryweapon" },
    { 0x112E9, "survivorscoreevent" },
    { 0x112EA, "survivorscorepertick" }, // AUTOADDED
    { 0x112EB, "survivorscoretime" }, // AUTOADDED
    { 0x112EC, "survivorsecondaryweapon" },
    { 0x112ED, "survivorsuper" },
    { 0x112EE, "survivortactical" },
    { 0x112FD, "suspend_sd_role" },
    { 0x112FE, "suspensemusic" }, // AUTOADDED
    { 0x11303, "swamp_stage" },
    { 0x11329, "sweapon" },
    { 0x11370, "switchaircraft" },
    { 0x11372, "switchblade_handle_awareness" }, // AUTOADDED
    { 0x11377, "switching_teams" },
    { 0x1138B, "synch_attack_setup" },
    { 0x1138C, "synch_directions" },
    { 0x113B3, "table_getarchetype" }, // AUTOADDED
    { 0x113B6, "table_getextrapowerprimary_MAYBE" },
    { 0x113B7, "table_getextrapowersecondary_MAYBE" },
    { 0x113B8, "table_getgesture" }, // AUTOADDED
    { 0x113B9, "table_getkillstreak" }, // AUTOADDED
    { 0x113BA, "table_getloadoutname" }, // AUTOADDED
    { 0x113BB, "table_getperk" }, // AUTOADDED
    { 0x113BC, "table_getpowerprimary_MAYBE" },
    { 0x113BD, "table_getpowersecondary_MAYBE" },
    { 0x113BE, "table_getsuper" }, // AUTOADDED
    { 0x113C0, "table_getweapon" }, // AUTOADDED
    { 0x113C1, "table_getweaponattachment" }, // AUTOADDED
    { 0x113C2, "table_getweaponbuff" }, // AUTOADDED
    { 0x113C3, "table_getweaponcamo" }, // AUTOADDED
    { 0x113C4, "table_getweaponreticle" }, // AUTOADDED
    { 0x113C5, "table_look_up" },
    { 0x113CF, "tactic_notifies" },
    { 0x113D0, "tactical_goals" }, // AUTOADDED
    { 0x113DD, "tag_getting" }, // AUTOADDED
    { 0x113E0, "tag_name" },
    { 0x113E3, "tag_pile_watcher" },
    { 0x113E7, "tag_stowed_hip" }, // AUTOADDED
    { 0x113ED, "tag_watcher" },
    { 0x113EF, "tagavailable" },
    { 0x11417, "tagmarkedplayer" },
    { 0x1141D, "tags_carried" }, // AUTOADDED
    { 0x1141F, "tags_seen" },
    { 0x11420, "tags_seen_by_owner" }, // AUTOADDED
    { 0x11421, "tags_to_bank" }, // AUTOADDED
    { 0x11422, "tagscarried" }, // AUTOADDED
    { 0x11423, "tagteamupdater" }, // AUTOADDED
    { 0x11426, "take_all_currency" },
    { 0x1142A, "take_away_special_ammo" },
    { 0x1142B, "take_boom_perk" },
    { 0x11437, "take_flash_perk" },
    { 0x11438, "take_fwoosh_perk" },
    { 0x1143A, "take_glasses_off" },
    { 0x1143C, "take_laststand" },
    { 0x11441, "take_more_perk" },
    { 0x11445, "take_player_currency" },
    { 0x11447, "take_player_grenades_pre_game" },
    { 0x11449, "take_player_money" },
    { 0x1144D, "take_rat_a_tat_perk" },
    { 0x1144F, "take_revive_perk" },
    { 0x11451, "take_run_perk" },
    { 0x11453, "take_smack_perk" },
    { 0x11458, "take_tough_perk" },
    { 0x1145B, "take_zap_perk" },
    { 0x1145C, "take_zombies_perk" },
    { 0x11471, "takeobject" }, // AUTOADDED
    { 0x1148C, "takeover_flash" },
    { 0x1148D, "takeoverflashoverlay" },
    { 0x11494, "takeweaponwhensafe" },
    { 0x11495, "takeweaponwhensafegungame" },
    { 0x114D6, "tank_watchfiring" }, // AUTOADDED
    { 0x114E4, "tanksettings" }, // AUTOADDED
    { 0x114E8, "tanktype" }, // AUTOADDED
    { 0x11539, "target_player" },
    { 0x11548, "target_smoke" },
    { 0x11553, "target_wait_for_damage" },
    { 0x11561, "targetgetdist" },
    { 0x11566, "targeting" },
    { 0x1156A, "targeting_marker" }, // AUTOADDED
    { 0x1156D, "targetisclose" },
    { 0x1156E, "targetisinfront" },
    { 0x11571, "targetlist" },
    { 0x1157A, "targetpos" },
    { 0x1157E, "targets" },
    { 0x11580, "targets_hit" },
    { 0x1158F, "taskid" },
    { 0x1159E, "tdef" },
    { 0x1159F, "tdef_flagtime" }, // AUTOADDED
    { 0x115A0, "tdefsuit" },
    { 0x115B3, "team_encounter_performance" },
    { 0x115B9, "team_score_component_name" },
    { 0x115C0, "teamairdenied" },
    { 0x115C1, "teambalance" }, // AUTOADDED
    { 0x115C2, "teambase" }, // AUTOADDED
    { 0x115C3, "teambased" },
    { 0x115C4, "teamchallenge" }, // AUTOADDED
    { 0x115C5, "teamchangedthisframe" }, // AUTOADDED
    { 0x115C6, "teamcount" },
    { 0x115C7, "teamdiffyaw" },
    { 0x115C9, "teamemped" },
    { 0x115CA, "teamfallbackspawnpoints" }, // AUTOADDED
    { 0x115CB, "teamflagbases" }, // AUTOADDED
    { 0x115CC, "teamflags" },
    { 0x115D4, "teamkilldelay" },
    { 0x115D5, "teamkillsthisround" },
    { 0x115D8, "teamlist" },
    { 0x115D9, "teammates_react" }, // AUTOADDED
    { 0x115DA, "teamnamelist" }, // AUTOADDED
    { 0x115DB, "teamnukeemped" }, // AUTOADDED
    { 0x115DC, "teamobjids" }, // AUTOADDED
    { 0x115DD, "teamoutcomenotify" }, // AUTOADDED
    { 0x115DE, "teamplayercardsplash" },
    { 0x115E5, "teamrankxpmultipliers" }, // AUTOADDED
    { 0x115E6, "teamrespawn" },
    { 0x115E9, "teamsmatch" }, // AUTOADDED
    { 0x115EA, "teamspawnpoints" },
    { 0x115EB, "teamsplash" },
    { 0x115F0, "teamtweaks" }, // AUTOADDED
    { 0x115F1, "teamusetexts" }, // AUTOADDED
    { 0x115F2, "teamusetimes" }, // AUTOADDED
    { 0x1161F, "teleport_dom_finished_initializing" },
    { 0x11627, "teleport_from_hidden_room_before_time_up" },
    { 0x1162C, "teleport_into_arcade_console" },
    { 0x11630, "teleport_loner_target_player" },
    { 0x11631, "teleport_out_of_arcade_console" },
    { 0x11648, "teleport_to_hidden_room" },
    { 0x1164E, "teleport_to_safe_spot" },
    { 0x11651, "teleport_zone" },
    { 0x11658, "teleportdisableflags" },
    { 0x1165C, "teleportgetactivenodesfunc" },
    { 0x1165D, "teleportgetactivepathnodezonesfunc" },
    { 0x1165E, "teleporting" }, // AUTOADDED
    { 0x1166D, "temp" },
    { 0x1168C, "temp_ent" },
    { 0x116BD, "temp_tag" }, // AUTOADDED
    { 0x116CC, "template_script" },
    { 0x116D4, "ten_percent_of_max_health" },
    { 0x116D7, "ter_op" },
    { 0x116E9, "terminate_empattack" },
    { 0x116EA, "terminate_grabzombie" },
    { 0x116ED, "terminate_laserattack" },
    { 0x116EE, "terminate_rangeattack" },
    { 0x11713, "tesla_type" },
    { 0x11743, "test_win_condition" },
    { 0x1174E, "testforsuccess" },
    { 0x11750, "testmiscmessage" }, // AUTOADDED
    { 0x11751, "testpassivemessage" }, // AUTOADDED
    { 0x1175C, "text" },
    { 0x11763, "textalpha" },
    { 0x11768, "thawzombiefunc" },
    { 0x1176A, "the_hoff" },
    { 0x1177A, "thermal_vision" },
    { 0x1177C, "thermalvision" },
    { 0x117B7, "threadedsetweaponstatbyname" }, // AUTOADDED
    { 0x117B8, "threads" },
    { 0x117E9, "threatlevel" }, // AUTOADDED
    { 0x117F3, "threwback" },
    { 0x117FB, "throw_basketball" },
    { 0x117FC, "throw_battery_out_of_portal" },
    { 0x117FD, "throw_grenade_back" },
    { 0x117FE, "throw_linked_care_packages" },
    { 0x11815, "throwgrenadetarget" },
    { 0x11817, "throwinggrenade" },
    { 0x11818, "throwingknifec4detonate" },
    { 0x11819, "throwingknifec4init" },
    { 0x1181A, "throwingknifedamagedvictim" },
    { 0x1181F, "throwingknifeteleport" },
    { 0x11820, "throwingknifeteleport_fxendburst" },
    { 0x11823, "throwingknifeteleport_fxstartburst" },
    { 0x11824, "throwingknifeused" },
    { 0x11826, "throwingknifeused_recordownerinvalid" },
    { 0x11827, "throwingknifeused_trygiveknife" },
    { 0x1182A, "throwndyinggrenade" },
    { 0x11832, "throwtime" }, // AUTOADDED
    { 0x11870, "thrusterdamageloop" },
    { 0x11878, "thrusterloop" },
    { 0x11885, "thrusterstopfx" },
    { 0x11886, "thrusterwatchdoublejump" }, // AUTOADDED
    { 0x1188A, "thrustfxent" }, // AUTOADDED
    { 0x1189A, "ti_spawn" },
    { 0x1189C, "ticket_counter_slot_activation" },
    { 0x1189D, "ticket_counter_slot_hint_func" },
    { 0x1189E, "tickets" },
    { 0x1189F, "tickets_earned" },
    { 0x118A0, "tickingobject" },
    { 0x118A1, "tickpercent" },
    { 0x118A2, "ticks" },
    { 0x118A4, "tier_1_challenges" },
    { 0x118A5, "tier_2_challenges" },
    { 0x118A6, "tier_3_challenges" },
    { 0x118C7, "time" },
    { 0x118D7, "time_remaining" },
    { 0x118D8, "time_since_last_attack" },
    { 0x118D9, "time_since_last_ghost_attack" },
    { 0x118DB, "time_survived" },
    { 0x118DE, "time_to_give_next_tickets" },
    { 0x118EE, "timeenteringafterlife" },
    { 0x118EF, "timehack" },
    { 0x118F8, "timelimitclock_intermission" }, // AUTOADDED
    { 0x118F9, "timelimitmusic" }, // AUTOADDED
    { 0x118FA, "timelimitoverride" }, // AUTOADDED
    { 0x118FB, "timelimitthread" }, // AUTOADDED
    { 0x118FC, "timelineevents" }, // AUTOADDED
    { 0x118FD, "timeoff" }, // AUTOADDED
    { 0x118FE, "timeoffset" }, // AUTOADDED
    { 0x118FF, "timeoflaststatechange" }, // AUTOADDED
    { 0x11900, "timeon" }, // AUTOADDED
    { 0x11901, "timeout" },
    { 0x11902, "timeout_crystal" },
    { 0x11906, "timeoutregenfaster" }, // AUTOADDED
    { 0x11907, "timeouttransponder" },
    { 0x11908, "timeoutvofunction" },
    { 0x11909, "timepaused" }, // AUTOADDED
    { 0x1190A, "timepausestart" }, // AUTOADDED
    { 0x1190B, "timepercentagecutoff" }, // AUTOADDED
    { 0x1190C, "timeperiod" },
    { 0x1190D, "timeplacedinstack" }, // AUTOADDED
    { 0x1190E, "timeplayed" }, // AUTOADDED
    { 0x11911, "timer_active" },
    { 0x11913, "timer_cancel" }, // AUTOADDED
    { 0x11918, "timer_run" }, // AUTOADDED
    { 0x1191A, "timername" },
    { 0x11920, "timerstoppedforgamemode" }, // AUTOADDED
    { 0x11921, "times" }, // AUTOADDED
    { 0x11922, "times_coaster_ridden" },
    { 0x11924, "times_self_revived" },
    { 0x11925, "times_used" },
    { 0x11929, "timesinafterlife" },
    { 0x1192A, "timesincelastspawn" }, // AUTOADDED
    { 0x1192B, "timesitemspicked" },
    { 0x1192C, "timesitemstimedout" },
    { 0x1192D, "timeslfused" },
    { 0x1192E, "timespapused" },
    { 0x1192F, "timespentinafterlife" },
    { 0x1193A, "timeuntilspawn" },
    { 0x1193B, "timeuntilwavespawn" }, // AUTOADDED
    { 0x1193C, "timeupnotify" },
    { 0x11946, "tispawndelay" },
    { 0x119A9, "tivalidationcheck" },
    { 0x119B0, "toggle_axismode" },
    { 0x119B1, "toggle_cockpit_lights" }, // AUTOADDED
    { 0x119B2, "toggle_convoy_wheel_outlines" }, // AUTOADDED
    { 0x119B3, "toggle_createfx_axis" },
    { 0x119B4, "toggle_createfx_drawing" },
    { 0x119B8, "toggle_entity_selection" },
    { 0x119CC, "toggle_snap2angle" },
    { 0x119CD, "toggle_snap2normal" },
    { 0x119D4, "tokenreward" },
    { 0x119D9, "tone" },
    { 0x119DA, "tone_array" },
    { 0x119DF, "tookweaponfrom" },
    { 0x119E0, "tool_hud" },
    { 0x119E1, "tool_hud_visible" },
    { 0x119E2, "tool_hudelems" },
    { 0x11A20, "total_cryo_kills" },
    { 0x11A21, "total_currency_earned" },
    { 0x11A22, "total_damage" },
    { 0x11A25, "total_match_headshots" },
    { 0x11A2F, "total_tags_banked" }, // AUTOADDED
    { 0x11A39, "totalplayers" }, // AUTOADDED
    { 0x11A3B, "totalscore" },
    { 0x11A3C, "totalscorelimit" }, // AUTOADDED
    { 0x11A3D, "totalxpearned" },
    { 0x11A3E, "touchdowns" },
    { 0x11A42, "touchingbadtrigger" },
    { 0x11A43, "touchingnozonetrigger" }, // AUTOADDED
    { 0x11A45, "touchlist" },
    { 0x11A46, "touchtriggers" },
    { 0x11A47, "toughenedup" },
    { 0x11A74, "toy_damage_monitor" },
    { 0x11A75, "toy_model" },
    { 0x11A76, "toy_model_state" },
    { 0x11A77, "toy_picture_damage_monitor" },
    { 0x11A78, "toys_found" },
    { 0x11A87, "tracegroundpoint" }, // AUTOADDED
    { 0x11A8A, "tracenewpoint" }, // AUTOADDED
    { 0x11AB9, "track_ride_time" },
    { 0x11AC9, "trackbuffassist" }, // AUTOADDED
    { 0x11ACB, "trackcarepackages" }, // AUTOADDED
    { 0x11ACC, "trackcarrier" }, // AUTOADDED
    { 0x11ADB, "trackgametypevips" },
    { 0x11ADC, "trackgrenades" }, // AUTOADDED
    { 0x11AEC, "trackingweapondeaths" },
    { 0x11AED, "trackingweaponheadshots" },
    { 0x11AEE, "trackingweaponhits" },
    { 0x11AEF, "trackingweaponkills" },
    { 0x11AF0, "trackingweapon" },
    { 0x11AF1, "trackingweaponshots" },
    { 0x11B00, "trackmissiles" }, // AUTOADDED
    { 0x11B03, "trackplayersworammo" },
    { 0x11B05, "trackriotshield_ontrophystow" },
    { 0x11B0A, "trackteamchanges" },
    { 0x11B0F, "trail_fx" }, // AUTOADDED
    { 0x11B2C, "trait" }, // AUTOADDED
    { 0x12631, "transactionid" },
    { 0x12639, "transform_wave_zombies_to_suicide_bombers" },
    { 0x1263B, "transformed_gun_model" },
    { 0x12676, "transitionfadein" }, // AUTOADDED
    { 0x12677, "transitionfadeout" }, // AUTOADDED
    { 0x12678, "transitionlightcolor" }, // AUTOADDED
    { 0x12679, "transitionpulsefxin" }, // AUTOADDED
    { 0x1267A, "transitionreset" }, // AUTOADDED
    { 0x1267B, "transitions" }, // AUTOADDED
    { 0x1267C, "transitionslidein" }, // AUTOADDED
    { 0x1267D, "transitionslideout" }, // AUTOADDED
    { 0x1267E, "transitiontime" }, // AUTOADDED
    { 0x1267F, "transitionto" }, // AUTOADDED
    { 0x12680, "transitiontocombat" }, // AUTOADDED
    { 0x12681, "transitiontoidle" }, // AUTOADDED
    { 0x12682, "transitiontostance" }, // AUTOADDED
    { 0x12683, "transitionzoomin" }, // AUTOADDED
    { 0x12684, "transitionzoomout" }, // AUTOADDED
    { 0x12685, "translate_direction_to_vector" },
    { 0x1268C, "transponder_place" },
    { 0x1268D, "transponder_teleportplayer" },
    { 0x1268E, "transponder_throw" },
    { 0x1268F, "transponder_use" },
    { 0x12690, "transponderactivate" },
    { 0x12692, "transponderdamage" },
    { 0x12693, "transponderdetonateallcharges" },
    { 0x12696, "transponderrangefinder" },
    { 0x12698, "transponderwatchfordisuse" },
    { 0x126A3, "trap_killed_by" },
    { 0x126A4, "trap_kills" },
    { 0x126B0, "trapkills" },
    { 0x126BE, "travel_through_hidden_tube" },
    { 0x126C2, "traveltonode" }, // AUTOADDED
    { 0x126CB, "traversalvector" },
    { 0x126E5, "traversehandler" },
    { 0x126E8, "traverseratescale" },
    { 0x1272C, "trigger_clone_health" },
    { 0x12745, "trigger_flags" },
    { 0x12746, "trigger_fog" }, // AUTOADDED
    { 0x12747, "trigger_friendly_respawn" }, // AUTOADDED
    { 0x12748, "trigger_friendly_stop_respawn" }, // AUTOADDED
    { 0x12749, "trigger_func" },
    { 0x12778, "trigger_off" },
    { 0x12779, "trigger_off_proc" },
    { 0x1277A, "trigger_on" },
    { 0x1277B, "trigger_on_proc" },
    { 0x1277D, "trigger_parse_parameters" }, // AUTOADDED
    { 0x127B8, "trigger_wmd" },
    { 0x127BA, "triggered" },
    { 0x127CB, "triggertype" }, // AUTOADDED
    { 0x127CE, "trigunderwater" }, // AUTOADDED
    { 0x127E3, "tripmine_init" },
    { 0x127F2, "tripmine_used" },
    { 0x127FE, "triton_donations" },
    { 0x12801, "trophies" },
    { 0x12816, "trophy_name" },
    { 0x12839, "trophyremainingammo" },
    { 0x12846, "try_advance_death_grid_lines_and_trigger" },
    { 0x1284E, "try_clear_hide_goal" }, // AUTOADDED
    { 0x12850, "try_collect_from_lost_and_found" },
    { 0x12857, "try_drop_max_ammo" },
    { 0x12859, "try_exit_afterlife_arcade" },
    { 0x1285E, "try_give_player_weapon_xp" },
    { 0x12861, "try_give_weapon_xp_zombie_killed" },
    { 0x12865, "try_kill_off_zombies" },
    { 0x12868, "try_merge_clones" },
    { 0x1286B, "try_place_global_badplace" }, // AUTOADDED
    { 0x12870, "try_regen_health" },
    { 0x12871, "try_request_fly_type" },
    { 0x12872, "try_restore_zombie_perks" },
    { 0x12873, "try_take_player_currency" },
    { 0x12885, "try_to_play_vo" },
    { 0x12886, "try_to_play_vo_on_all_players" },
    { 0x12887, "try_update_lb_playerdata" },
    { 0x12888, "try_update_mobile_shield" },
    { 0x1288F, "tryuseairdrop" },
    { 0x12896, "trydodamage" },
    { 0x128A2, "trygrenadethrow" },
    { 0x128AC, "trysetqueuedselfvo" },
    { 0x128D0, "tryuseaamissile" },
    { 0x128D1, "tryuseaastrike" },
    { 0x128D2, "tryuseac130" },
    { 0x128D9, "tryuseautosentry" },
    { 0x128DB, "tryuseballdrone" },
    { 0x128E3, "tryusedronehive" }, // AUTOADDED
    { 0x128E4, "tryuseescortairdrop" }, // AUTOADDED
    { 0x128E5, "tryusehashimamissiles" }, // AUTOADDED
    { 0x128E6, "tryusehelicopter" }, // AUTOADDED
    { 0x128F4, "tryuseperkstreak" },
    { 0x128F5, "tryuseplaceable" }, // AUTOADDED
    { 0x128F6, "tryusepredatormissile" }, // AUTOADDED
    { 0x128F8, "tryusereconsquadmate" },
    { 0x12900, "tryuseremoteuav" }, // AUTOADDED
    { 0x12901, "tryusesam" },
    { 0x12902, "tryuseshocksentry" },
    { 0x12905, "tryusesquadmate" },
    { 0x1294C, "turn_off_consumable" },
    { 0x12952, "turn_off_exit_portal_fx" },
    { 0x12953, "turn_off_ghost_arcade_hud" },
    { 0x12954, "turn_off_ghost_arcade_scores" },
    { 0x12955, "turn_off_grenade_cooldown" },
    { 0x1295C, "turn_off_interaction_for_time" },
    { 0x1295E, "turn_off_light_and_power" },
    { 0x1295F, "turn_off_light_bar_on_death" }, // AUTOADDED
    { 0x12962, "turn_off_machine_after_uses" },
    { 0x1296D, "turn_off_sign" },
    { 0x1296F, "turn_off_states_on_death" },
    { 0x12971, "turn_off_timer" },
    { 0x12976, "turn_off_zapper_fx" },
    { 0x1297A, "turn_on_cards" },
    { 0x1297B, "turn_on_coaster_anims" },
    { 0x1297F, "turn_on_exit_portal_fx" },
    { 0x12980, "turn_on_ghost_arcade_hud" },
    { 0x12981, "turn_on_ghost_arcade_scores" },
    { 0x12982, "turn_on_global_light" },
    { 0x12986, "turn_on_light" },
    { 0x12987, "turn_on_light_and_power" },
    { 0x12989, "turn_on_main_gate" },
    { 0x1298D, "turn_on_room_exit_portal" },
    { 0x1298E, "turn_on_scriptable" },
    { 0x12990, "turn_on_sign" },
    { 0x12991, "turn_on_soul_power_progress_bar" },
    { 0x1299C, "turn_zombie" },
    { 0x1299F, "turned_zombies" },
    { 0x129A3, "turnintosuicidebomber" },
    { 0x129B9, "turret" }, // AUTOADDED
    { 0x129D7, "turret_coolmonitor" }, // AUTOADDED
    { 0x129FD, "turret_handlepickup" },
    { 0x129FF, "turret_handleuse" }, // AUTOADDED
    { 0x12A00, "turret_heatmonitor" }, // AUTOADDED
    { 0x12A13, "turret_monitoruse" },
    { 0x12A1A, "turret_overheat_bar" }, // AUTOADDED
    { 0x12A1F, "turret_playerthread" },
    { 0x12A31, "turret_shotmonitor" }, // AUTOADDED
    { 0x12A58, "turretattachpoint" },
    { 0x12A7B, "turretname" },
    { 0x12A83, "turrets" },
    { 0x12A95, "turrettarget" }, // AUTOADDED
    { 0x12AA2, "tutorial" },
    { 0x12AA3, "tutorial_activated" },
    { 0x12AAE, "tutorial_lookup_func" },
    { 0x12AB0, "tutorial_message_table" },
    { 0x12ACA, "tweakfile" },
    { 0x12ACD, "twitching" },
    { 0x12AE4, "type_specific" },
    { 0x12AF0, "uavblocktime" },
    { 0x12AF3, "uavmodels" },
    { 0x12AF7, "uavsettings" },
    { 0x12AFA, "uavtype" }, // AUTOADDED
    { 0x12B01, "ufo" },
    { 0x12B02, "ufo_beam_down_zombies" },
    { 0x12B03, "ufo_damage_monitor" },
    { 0x12B04, "ufo_earthquake" },
    { 0x12B05, "ufo_fly_to_pos" },
    { 0x12B06, "ufo_intro_fly_to_center_portal" },
    { 0x12B07, "ufo_player_vo" },
    { 0x12B08, "ufo_post_grey_regen_func" },
    { 0x12B09, "ufo_pre_grey_regen_func" },
    { 0x12B0A, "ufo_projectile_attack" },
    { 0x12B0C, "ufo_suicide_bomber" },
    { 0x12B0D, "ufo_suicide_bomber_sequence" },
    { 0x12B0F, "ufo_turret_fire_monitor" },
    { 0x12B10, "ufo_zombie_death_monitor" },
    { 0x12B12, "ufostopwavefromprogressing" },
    { 0x12B13, "ufotones" },
    { 0x12B14, "ugvs" }, // AUTOADDED
    { 0x12B1A, "ui_bomb_planting_defusing" },
    { 0x12B1D, "ui_dom_securing" },
    { 0x12B1E, "ui_dom_stalemate" },
    { 0x12B25, "ui_searching" },
    { 0x12B26, "ui_securing" },
    { 0x12B29, "uiparent" }, // AUTOADDED
    { 0x12B81, "unblockarea" }, // AUTOADDED
    { 0x12B83, "unblockperkfunction" },
    { 0x12B90, "underwater" },
    { 0x12B9A, "unfreeze_zombie" },
    { 0x12B9B, "unfreezecontrols" }, // AUTOADDED
    { 0x12BA3, "unique_id" },
    { 0x12BA4, "unittype" },
    { 0x12BA6, "unlimited_ammo" },
    { 0x12BB0, "unlink_players_from_coaster" },
    { 0x12BB4, "unlinknextframe" },
    { 0x12BD1, "unlock" },
    { 0x12BDC, "unlock_thread" },
    { 0x12BE6, "unresolved_collision_damage" }, // AUTOADDED
    { 0x12BE7, "unresolved_collision_func" }, // AUTOADDED
    { 0x12BE8, "unresolved_collision_kill" }, // AUTOADDED
    { 0x12BE9, "unresolved_collision_mover" }, // AUTOADDED
    { 0x12BEA, "unresolved_collision_nearest_node" }, // AUTOADDED
    { 0x12BEB, "unresolved_collision_nodes" }, // AUTOADDED
    { 0x12BEC, "unresolved_collision_notify_min" }, // AUTOADDED
    { 0x12BED, "unresolved_collision_owner_damage" }, // AUTOADDED
    { 0x12BF4, "unset" },
    { 0x12BF6, "unset_consumable" },
    { 0x12BF9, "unset_flag_if_not_picked_up" },
    { 0x12C01, "unset_outline" },
    { 0x12C02, "unset_outline_for_player" },
    { 0x12C11, "unset_perk" },
    { 0x12C5E, "unset_player_flung" },
    { 0x12C61, "unset_rave_vision" },
    { 0x12C63, "unset_vo_currently_playing" },
    { 0x12C66, "unsetactivereload" },
    { 0x12C6B, "unsetadsawareness" },
    { 0x12C6C, "unsetaffinityextralauncher" },
    { 0x12C6D, "unsetaffinityspeedboost" }, // AUTOADDED
    { 0x12C6E, "unsetafterburner" },
    { 0x12C71, "unsetassists" },
    { 0x12C76, "unsetautospot" }, // AUTOADDED
    { 0x12C7B, "unsetbattleslide" },
    { 0x12C7C, "unsetbattleslideoffense" },
    { 0x12C7D, "unsetbattleslideshield" }, // AUTOADDED
    { 0x12C7F, "unsetblackbox" },
    { 0x12C82, "unsetblastshield" },
    { 0x12C83, "unsetblindeye" },
    { 0x12C84, "unsetblockhealthregen" },
    { 0x12C87, "unsetboom" },
    { 0x12C88, "unsetbulletoutline" }, // AUTOADDED
    { 0x12C8C, "unsetcamoelite" },
    { 0x12C8D, "unsetcarepackage" },
    { 0x12C90, "unsetcloak" },
    { 0x12C91, "unsetcloakaerial" },
    { 0x12C92, "unsetcombathigh" }, // AUTOADDED
    { 0x12C93, "unsetcombathighondeath" }, // AUTOADDED
    { 0x12C94, "unsetcombathighonride" }, // AUTOADDED
    { 0x12C95, "unsetcombatspeed" }, // AUTOADDED
    { 0x12C96, "unsetcombatspeedscalar" }, // AUTOADDED
    { 0x12C97, "unsetcomexp" }, // AUTOADDED
    { 0x12C98, "unsetcomlink" }, // AUTOADDED
    { 0x12C99, "unsetcooldown" }, // AUTOADDED
    { 0x12C9A, "unsetcritchance" }, // AUTOADDED
    { 0x12C9B, "unsetcustomjuiced" }, // AUTOADDED
    { 0x12C9C, "unsetcustomjuicedondeath" }, // AUTOADDED
    { 0x12C9D, "unsetcustomjuicedonmatchend" }, // AUTOADDED
    { 0x12C9E, "unsetcustomjuicedonride" },
    { 0x12CA1, "unsetdelaymine" },
    { 0x12CA2, "unsetdischordglasses" },
    { 0x12CA4, "unsetdodge" },
    { 0x12CA5, "unsetdodgedefense" },
    { 0x12CA6, "unsetdodgewave" },
    { 0x12CA8, "unsetdoubleload" }, // AUTOADDED
    { 0x12CA9, "unsetempimmune" }, // AUTOADDED
    { 0x12CAA, "unsetendgame" }, // AUTOADDED
    { 0x12CAB, "unsetengineer" },
    { 0x12CAE, "unsetequipmentping" },
    { 0x12CB3, "unsetextraammo" }, // AUTOADDED
    { 0x12CB5, "unsetextradeadly" }, // AUTOADDED
    { 0x12CB6, "unsetextradodge" }, // AUTOADDED
    { 0x12CB7, "unsetextraequipment" }, // AUTOADDED
    { 0x12CC1, "unsetfreefall" },
    { 0x12CC3, "unsetftlslide" },
    { 0x12CC6, "unsetghost" },
    { 0x12CC7, "unsetgroundpound" },
    { 0x12CC8, "unsetgroundpoundboost" }, // AUTOADDED
    { 0x12CC9, "unsetgroundpoundshield" }, // AUTOADDED
    { 0x12CCA, "unsetgroundpoundshock" }, // AUTOADDED
    { 0x12CCC, "unsethardshell" },
    { 0x12CCD, "unsetheadgear" },
    { 0x12CD2, "unsethover" },
    { 0x12CD5, "unsetimprovedmelee" },
    { 0x12CD7, "unsetincog" },
    { 0x12CDC, "unsetjuiced" }, // AUTOADDED
    { 0x12CDD, "unsetjuicedondeath" }, // AUTOADDED
    { 0x12CDE, "unsetjuicedonmatchend" }, // AUTOADDED
    { 0x12CDF, "unsetjuicedonride" }, // AUTOADDED
    { 0x12CE0, "unsetkillstreaktoscorestreak" }, // AUTOADDED
    { 0x12CE1, "unsetkineticpulse" }, // AUTOADDED
    { 0x12CE2, "unsetkineticwave" }, // AUTOADDED
    { 0x12CE3, "unsetladder" }, // AUTOADDED
    { 0x12CE4, "unsetlifepack" }, // AUTOADDED
    { 0x12CE5, "unsetlightarmor" }, // AUTOADDED
    { 0x12CE6, "unsetlightweight" },
    { 0x12CE9, "unsetlocaljammer" },
    { 0x12CEB, "unsetmanatarms" },
    { 0x12CEC, "unsetmarksman" }, // AUTOADDED
    { 0x12CEE, "unsetmeleekill" },
    { 0x12CF2, "unsetmomentum" },
    { 0x12CF9, "unsetonemanarmy" }, // AUTOADDED
    { 0x12CFE, "unsetoverclock" },
    { 0x12D00, "unsetoverkill" },
    { 0x12D01, "unsetoverridearchetype" },
    { 0x12D02, "unsetoverrideweaponspeed" },
    { 0x12D08, "unsetphaseslashrephase" },
    { 0x12D09, "unsetphaseslide" },
    { 0x12D0A, "unsetphasespeed" },
    { 0x12D0F, "unsetpowercell" },
    { 0x12D13, "unsetquickswap" },
    { 0x12D14, "unsetrearguard" },
    { 0x12D16, "unsetrefillammo" },
    { 0x12D17, "unsetrefillgrenades" },
    { 0x12D19, "unsetregenfaster" },
    { 0x12D1A, "unsetrevenge" }, // AUTOADDED
    { 0x12D1B, "unsetrewind" },
    { 0x12D1E, "unsetrshieldscrambler" }, // AUTOADDED
    { 0x12D1F, "unsetruggedeqp" },
    { 0x12D20, "unsetrush" },
    { 0x12D21, "unsetsaboteur" },
    { 0x12D22, "unsetscavengereqp" },
    { 0x12D25, "unsetscorestreakpack" },
    { 0x12D26, "unsetscoutping" },
    { 0x12D29, "unsetsharpfocus" }, // AUTOADDED
    { 0x12D2E, "unsetsixthsense" },
    { 0x12D32, "unsetspawncloak" },
    { 0x12D33, "unsetspawnradar" },
    { 0x12D34, "unsetspawnview" }, // AUTOADDED
    { 0x12D35, "unsetspeedboost" }, // AUTOADDED
    { 0x12D36, "unsetspotter" }, // AUTOADDED
    { 0x12D37, "unsetsteadyaimpro" }, // AUTOADDED
    { 0x12D39, "unsetsteelnerves" },
    { 0x12D3C, "unsetstunresistance" },
    { 0x12D3E, "unsetsuperpack" },
    { 0x12D40, "unsetsupportkillstreaks" },
    { 0x12D41, "unsettacticalinsertion" },
    { 0x12D42, "unsettagger" }, // AUTOADDED
    { 0x12D46, "unsetteleslide" },
    { 0x12D49, "unsetthermal" },
    { 0x12D4A, "unsetthief" },
    { 0x12D4B, "unsetthruster" }, // AUTOADDED
    { 0x12D4D, "unsettoughenup" }, // AUTOADDED
    { 0x12D50, "unsettransponder" },
    { 0x12D51, "unsettriggerhappy" }, // AUTOADDED
    { 0x12D53, "unsetuav" },
    { 0x12D64, "unsetviewkickoverride" },
    { 0x12D66, "unsetwalllock" },
    { 0x12D68, "unsetweaponlaser" }, // AUTOADDED
    { 0x12D6C, "unstowsuperweapon" }, // AUTOADDED
    { 0x12D6E, "untrackbuffassist" }, // AUTOADDED
    { 0x12D6F, "untrackdebuffassist" },
    { 0x12D77, "upangles" },
    { 0x12D7C, "update_achievement" },
    { 0x12D7D, "update_achievement_all_players" },
    { 0x12D7E, "update_achievement_arcade" },
    { 0x12D7F, "update_achievement_braindead" },
    { 0x12D84, "update_agent_damage_performance" },
    { 0x12D87, "update_zombie_damage_challenge" },
    { 0x12D8D, "update_alien_kill_sessionstats" },
    { 0x12D96, "update_bcs_locations" },
    { 0x12D9C, "update_challenge" },
    { 0x12D9D, "update_challenge_percent" }, // AUTOADDED
    { 0x12D9E, "update_challenge_progress" },
    { 0x12D9F, "update_challenges_status" },
    { 0x12DA5, "update_current_challenge_timer" },
    { 0x12DA6, "update_current_money_earned" },
    { 0x12DA7, "update_current_score" },
    { 0x12DA8, "update_damage_score" },
    { 0x12DA9, "update_death_challenges" },
    { 0x12DAF, "update_deployable_box_performance" },
    { 0x12DB0, "update_deployable_box_performance_func" },
    { 0x12DB7, "update_encounter_performance_internal" },
    { 0x12DB8, "update_enemy_killed_event" },
    { 0x12DBA, "update_entangler_progress" },
    { 0x12DC7, "update_humanoid_death_challenges" },
    { 0x12DD7, "update_kill_nodamage" },
    { 0x12DD8, "update_kill_order_on_dance_floor" },
    { 0x12DDB, "update_lb_aliensession_challenge" },
    { 0x12DDC, "update_lb_aliensession_escape" },
    { 0x12DDE, "update_lb_aliensession_wave" },
    { 0x12DE5, "update_lua_consumable_slot" },
    { 0x12DEC, "update_money_earned_performance" },
    { 0x12DED, "update_money_performance" },
    { 0x12DF1, "update_next_hide_time" },
    { 0x12DF3, "update_no_bleedout" },
    { 0x12DF4, "update_no_laststand" },
    { 0x12DF8, "update_num_of_coin_inserted" },
    { 0x12DF9, "update_num_targets_escaped_hud" },
    { 0x12DFC, "update_on_ghost_killed" },
    { 0x12E01, "update_performance_zombie_damage" },
    { 0x12E02, "update_perk_machines_based_on_num_players" },
    { 0x12E04, "update_personal_encounter_performance" },
    { 0x12E07, "update_personality_camper" },
    { 0x12E08, "update_personality_default" },
    { 0x12E0E, "update_player_revives_every_ten_waves" },
    { 0x12E0F, "update_player_session_rankup" },
    { 0x12E10, "update_player_threat" }, // AUTOADDED
    { 0x12E11, "update_player_tickets_earned" },
    { 0x12E12, "update_player_tickets_func" },
    { 0x12E13, "update_players_encounter_performance" },
    { 0x12E14, "update_players_escape_hud" },
    { 0x12E15, "update_players_revive_progress_bar" },
    { 0x12E16, "update_power_up_drop_time" },
    { 0x12E17, "update_progress" },
    { 0x12E19, "update_protect_a_player" },
    { 0x12E1D, "update_revive_perks" },
    { 0x12E21, "update_selected_entities" },
    { 0x12E22, "update_self_vo_cooldown_list" },
    { 0x12E2E, "update_spending_type" },
    { 0x12E38, "update_team_encounter_performance" },
    { 0x12E39, "update_team_multiplier" },
    { 0x12E3B, "update_tickets_earned_performance" },
    { 0x12E3F, "update_trap_placement_internal" },
    { 0x12E40, "update_trigger_based_on_flags" },
    { 0x12E41, "update_ufo_angles" },
    { 0x12E45, "update_vo_cooldown_list" },
    { 0x12E4C, "update_weaponstats" },
    { 0x12E4D, "update_weaponstats_hits" },
    { 0x12E4E, "update_weaponstats_kills" },
    { 0x12E4F, "update_weaponstats_shots" },
    { 0x12E52, "update_zombie_damage_challenge" },
    { 0x12E55, "updateactiveperks" },
    { 0x12E57, "updateaimingcoords" },
    { 0x12E58, "updatematchstatushintonspawn" },
    { 0x12E5C, "updatesavedaltstate" },
    { 0x12E60, "updateareanodes" }, // AUTOADDED
    { 0x12E62, "updateballtimerpausedness" },
    { 0x12E63, "updatebar" }, // AUTOADDED
    { 0x12E64, "updatebarscale" }, // AUTOADDED
    { 0x12E66, "updateblinkinglight" },
    { 0x12E67, "updatebombplantedomnvar" }, // AUTOADDED
    { 0x12E69, "updatebpm" }, // AUTOADDED
    { 0x12E6C, "updatecamoeliteoverlay" },
    { 0x12E6D, "updatecannonshake" },
    { 0x12E6E, "updatecapsperminute" }, // AUTOADDED
    { 0x12E72, "updatechatter" },
    { 0x12E73, "updatechevrons" }, // AUTOADDED
    { 0x12E74, "updatechildren" }, // AUTOADDED
    { 0x12E7B, "updatecompassicons" }, // AUTOADDED
    { 0x12E7F, "updatecpm" }, // AUTOADDED
    { 0x12E80, "updatecraftingomnvars" }, // AUTOADDED
    { 0x12E81, "updatecurorigin" }, // AUTOADDED
    { 0x12E82, "updatecurrentobjective" }, // AUTOADDED
    { 0x12E83, "updatecurrentoutput" }, // AUTOADDED
    { 0x12E84, "updatedamagefeedback" },
    { 0x12E85, "updatedeathdetails" },
    { 0x12E88, "updatedomscores" },
    { 0x12E8A, "updateenemy" },
    { 0x12E96, "updatefriendicons" }, // AUTOADDED
    { 0x12E97, "updatefriendiconsettings" }, // AUTOADDED
    { 0x12E98, "updatefrontline" }, // AUTOADDED
    { 0x12E99, "updatefrontlinedebug" }, // AUTOADDED
    { 0x12E9B, "updatefrontlineposition" }, // AUTOADDED
    { 0x12E9D, "updategameevents" },
    { 0x12E9E, "updategameskill" }, // AUTOADDED
    { 0x12E9F, "updategametypedvars" },
    { 0x12EA1, "updateghostanimplaybackrate" },
    { 0x12EA2, "updategiveuponsuppressiontimer" },
    { 0x12EA3, "updategpsjammer" },
    { 0x12EA6, "updatehelmet" },
    { 0x12EA8, "updatehitmarker" },
    { 0x12EB3, "updateinflictorstat" }, // AUTOADDED
    { 0x12EBC, "updatekillstreakselectedui" }, // AUTOADDED
    { 0x12EBD, "updatelaserstatus" },
    { 0x12EBE, "updatelaststandpistol" },
    { 0x12EC4, "updatelowermessage" },
    { 0x12EC5, "updatemaghits" },
    { 0x12EC8, "updatemainmenu" },
    { 0x12ECA, "updatematchbonusscores" }, // AUTOADDED
    { 0x12ED0, "updatemerits" },
    { 0x12ED5, "updatemovespeedscale" },
    { 0x12EDC, "updateobjectivetext" },
    { 0x12EDE, "updateondamagepassivesfunc" },
    { 0x12EE0, "updateonkillpassivesfunc" },
    { 0x12EE2, "updateonusepassivesfunc" },
    { 0x12EE3, "updateorigin" }, // AUTOADDED
    { 0x12EE8, "updatepersratio" },
    { 0x12EEC, "updateplacement" }, // AUTOADDED
    { 0x12EED, "updateplanemodelcoords" },
    { 0x12EF1, "updateplayerpositioncoords" },
    { 0x12EFF, "updaterecentkills_func" },
    { 0x12F07, "updateroundendreasontext" }, // AUTOADDED
    { 0x12F0A, "updatesavedlastweapon" },
    { 0x12F0C, "updatescores" },
    { 0x12F0D, "updatescoutping" },
    { 0x12F0E, "updatescoutpingvalues" }, // AUTOADDED
    { 0x12F14, "updateselfvobonuschance" },
    { 0x12F15, "updateselfvohistory" }, // AUTOADDED
    { 0x12F16, "updatesentryplacement" }, // AUTOADDED
    { 0x12F17, "updateservericons" }, // AUTOADDED
    { 0x12F18, "updateserversettings" }, // AUTOADDED
    { 0x12F19, "updatesessionstate" },
    { 0x12F1A, "updatesharpfocus" },
    { 0x12F1B, "updatesixthsensevfx" },
    { 0x12F21, "updatespectatesettings" }, // AUTOADDED
    { 0x12F2F, "updatestreakcount" }, // AUTOADDED
    { 0x12F35, "updatetarget" },
    { 0x12F38, "updateteambalancedvar" }, // AUTOADDED
    { 0x12F39, "updateteamcallback" }, // AUTOADDED
    { 0x12F3A, "updateteamplacement" }, // AUTOADDED
    { 0x12F3B, "updateteamscore" }, // AUTOADDED
    { 0x12F3C, "updateteamscores" }, // AUTOADDED
    { 0x12F3E, "updateteamtime" }, // AUTOADDED
    { 0x12F46, "updatetimers" },
    { 0x12F48, "updatetogglescopestate" },
    { 0x12F4C, "updatetrigger" }, // AUTOADDED
    { 0x12F4D, "updatetriggerposition" },
    { 0x12F53, "updateuiprogress" },
    { 0x12F56, "updateusablebyteam" },
    { 0x12F58, "updateviewkickscale" }, // AUTOADDED
    { 0x12F59, "updatevisibilityaccordingtoradar" }, // AUTOADDED
    { 0x12F60, "updateweaponpassivesondamage" },
    { 0x12F62, "updateweaponpassivesonuse" },
    { 0x12F65, "updatewinlossstats" }, // AUTOADDED
    { 0x12F69, "updatezombietarget" },
    { 0x12F6A, "updating" },
    { 0x12F6F, "upgrade_pap" },
    { 0x12F74, "upgrade_weapons_func" },
    { 0x12F76, "upgraded" },
    { 0x12F77, "upgraded_dischord_spin" },
    { 0x12F81, "uplinks" },
    { 0x12F87, "upper_body" },
    { 0x12F9A, "usageperiod" },
    { 0x12F9D, "use_adjacent_volumes" },
    { 0x12FA2, "use_anywhere_but_here" },
    { 0x12FA3, "use_arcade_game" },
    { 0x12FA6, "use_atomizer_gun" },
    { 0x12FA8, "use_basketball_game" },
    { 0x12FAA, "use_beam_trap" },
    { 0x12FAB, "use_bfp_game" },
    { 0x12FAC, "use_bh_gun" },
    { 0x12FAE, "use_blackhole_trap" },
    { 0x12FAF, "use_box" }, // AUTOADDED
    { 0x12FB0, "use_bsp_nodes" }, // AUTOADDED
    { 0x12FB1, "use_button_stopped_notify" }, // AUTOADDED
    { 0x12FB4, "use_cant_miss" },
    { 0x12FBB, "use_claw_gun" },
    { 0x12FBC, "use_clowntooth_game" },
    { 0x12FBD, "use_coaster" },
    { 0x12FBE, "use_crafting_station" },
    { 0x12FBF, "use_crate" },
    { 0x12FC2, "use_discoball_trap" },
    { 0x12FC4, "use_dj_door" },
    { 0x12FC5, "use_dj_door_after_fail_speaker_defense" },
    { 0x12FC6, "use_dj_door_after_getting_tone_generator" },
    { 0x12FC7, "use_dj_door_during_speaker_defense" },
    { 0x12FC8, "use_dj_door_func" },
    { 0x12FC9, "use_dj_door_to_get_tone_generator" },
    { 0x12FCA, "use_dj_door_to_pick_up_analyzer" },
    { 0x12FCB, "use_dj_door_to_request_defense" },
    { 0x12FE5, "use_electric_trap" },
    { 0x12FE9, "use_entangler" },
    { 0x12FEA, "use_ephemeral_enhancement" },
    { 0x12FED, "use_force_push_near_death" },
    { 0x12FF1, "use_grenade_cooldown" },
    { 0x12FF2, "use_headshot_reload" },
    { 0x12FF5, "use_increased_team_efficiency" },
    { 0x12FF6, "use_killing_time" },
    { 0x12FF7, "use_knife_throw" },
    { 0x12FF8, "use_life_link" },
    { 0x12FFB, "use_masochist" },
    { 0x12FFF, "use_now_you_see_me" },
    { 0x13000, "use_packboat" },
    { 0x13001, "use_penetration_gun" },
    { 0x13002, "use_phoenix_up" },
    { 0x13003, "use_race_game" },
    { 0x13006, "use_reload_damage_increase" },
    { 0x1300A, "use_rocket_trap" },
    { 0x1300B, "use_scrambler" },
    { 0x1300C, "use_scu" },
    { 0x1300E, "use_self_revive" },
    { 0x1300F, "use_selfrevive_door" },
    { 0x13012, "use_slow_enemy_movement" },
    { 0x13017, "use_spawn_double_money" },
    { 0x13018, "use_spawn_fire_sale" },
    { 0x13019, "use_spawn_infinite_ammo" },
    { 0x1301A, "use_spawn_instakill" },
    { 0x1301B, "use_spawn_max_ammo" },
    { 0x1301C, "use_spawn_nuke" },
    { 0x1301D, "use_spawn_reboard_windows" },
    { 0x1301F, "use_spectate_door" },
    { 0x1302A, "use_steel_dragon" },
    { 0x1302F, "use_team_door_switch" },
    { 0x13031, "use_time" }, // AUTOADDED
    { 0x13032, "use_toggle" }, // AUTOADDED
    { 0x13033, "use_trigger" }, // AUTOADDED
    { 0x13034, "use_triggers" }, // AUTOADDED
    { 0x13036, "use_use_trigger" },
    { 0x13038, "use_welfare" },
    { 0x1303C, "useadrenaline" },
    { 0x1303E, "useairstrike" },
    { 0x13043, "usearmageddon" },
    { 0x13047, "useballdrone" },
    { 0x1305B, "used" },
    { 0x1305C, "used_an_mg42" }, // AUTOADDED
    { 0x1305D, "used_by" },
    { 0x13068, "used_once" },
    { 0x13071, "usedadrenalineatfullhp" },
    { 0x13074, "usedby" },
    { 0x13076, "usedischordglasses" },
    { 0x1307A, "usedlocations" }, // AUTOADDED
    { 0x1307B, "usednotify" },
    { 0x1307F, "usedronehive" }, // AUTOADDED
    { 0x13089, "usefunc" },
    { 0x1308C, "usegrenadegesture" },
    { 0x13090, "usehelicopter" }, // AUTOADDED
    { 0x13091, "usehighvaluetarget" }, // AUTOADDED
    { 0x13092, "usehintstring" }, // AUTOADDED
    { 0x13093, "useholdthink" }, // AUTOADDED
    { 0x13094, "useholdthinkloop" }, // AUTOADDED
    { 0x13095, "usehpzonebrushes" },
    { 0x13097, "usehqrules" },
    { 0x1309B, "useinvulnerability" },
    { 0x1309F, "uselaststandparams" },
    { 0x130AB, "usenormalscorelimit" }, // AUTOADDED
    { 0x130AC, "useobj" }, // AUTOADDED
    { 0x130AD, "useobject" },
    { 0x130AE, "useobjectdecay" }, // AUTOADDED
    { 0x130B7, "useoutline" }, // AUTOADDED
    { 0x130B8, "useovercharge" }, // AUTOADDED
    { 0x130B9, "useownerobj" }, // AUTOADDED
    { 0x130BA, "useperbullethitmarkers" }, // AUTOADDED
    { 0x130BB, "usepercent" }, // AUTOADDED
    { 0x130BC, "usephaseshift" }, // AUTOADDED
    { 0x130BD, "usephasesplit" }, // AUTOADDED
    { 0x130BE, "usephysics" }, // AUTOADDED
    { 0x130BF, "useplayeruav" }, // AUTOADDED
    { 0x130C0, "usepowerweapon" }, // AUTOADDED
    { 0x130C1, "useprompt" }, // AUTOADDED
    { 0x130C2, "usequickrope" }, // AUTOADDED
    { 0x130C3, "usequickslothealitem" }, // AUTOADDED
    { 0x130C4, "user_triggered" }, // AUTOADDED
    { 0x130C5, "userallypointvehicles" }, // AUTOADDED
    { 0x130C6, "userange" }, // AUTOADDED
    { 0x130C7, "userate" }, // AUTOADDED
    { 0x130CC, "useremoteuav" }, // AUTOADDED
    { 0x130CD, "userepulsor" },
    { 0x130CE, "userewind" },
    { 0x130D1, "uses" },
    { 0x130DB, "usesquadmate" },
    { 0x130DC, "usesremaining" }, // AUTOADDED
    { 0x130DD, "usestartspawns" },
    { 0x130EC, "usetextenemy" },
    { 0x130ED, "usetextfriendly" },
    { 0x130EE, "usetime" }, // AUTOADDED
    { 0x130F8, "useweapon" },
    { 0x130FC, "usexp" },
    { 0x13105, "using_remote_a10" },
    { 0x13106, "using_remote_tank" }, // AUTOADDED
    { 0x13107, "using_remote_turret" },
    { 0x1310F, "usingautomaticweapon" },
    { 0x13112, "usingmg" },
    { 0x13113, "usingnvfx" }, // AUTOADDED
    { 0x13114, "usingonlinedataoffline" }, // AUTOADDED
    { 0x13115, "usingpistol" },
    { 0x13116, "usingplayer" }, // AUTOADDED
    { 0x13117, "usingplayergrenadetimer" }, // AUTOADDED
    { 0x13118, "usingremote" }, // AUTOADDED
    { 0x13119, "usingremoteandwillbelowhealth" }, // AUTOADDED
    { 0x1311A, "usingriflelikeweapon" },
    { 0x1311B, "usingrocketlauncher" },
    { 0x1311C, "usingsecondary" }, // AUTOADDED
    { 0x1311D, "usingsemiautoweapon" },
    { 0x1311E, "usingsidearm" }, // AUTOADDED
    { 0x1311F, "usingturret" }, // AUTOADDED
    { 0x13120, "usingvest" }, // AUTOADDED
    { 0x13121, "usingworldspacehitmarkers" }, // AUTOADDED
    { 0x13122, "utility_trigger_deleter" }, // AUTOADDED
    { 0x13123, "utility_trigger_demeanoroverride" }, // AUTOADDED
    { 0x13124, "utility_triggers" }, // AUTOADDED
    { 0x13125, "v" },
    { 0x1312D, "valid_ball_pickup_weapon" },
    { 0x1312E, "valid_ball_super_pickup" },
    { 0x13130, "valid_for_vanguard" }, // AUTOADDED
    { 0x13134, "validate_byte" },
    { 0x13135, "validate_int" },
    { 0x13136, "validate_short" },
    { 0x13137, "validate_value" },
    { 0x1313A, "validatearchetype" }, // AUTOADDED
    { 0x1313B, "validateattachments" }, // AUTOADDED
    { 0x1313C, "validateattacker" }, // AUTOADDED
    { 0x1313D, "validatefalldirection" }, // AUTOADDED
    { 0x1313E, "validatehighpriorityflag" }, // AUTOADDED
    { 0x1313F, "validatelistener" }, // AUTOADDED
    { 0x13140, "validateloadout" },
    { 0x13142, "validatenotetracks" }, // AUTOADDED
    { 0x13143, "validateopenconditions" },
    { 0x13147, "validatestreaks" }, // AUTOADDED
    { 0x1314D, "validationerror" }, // AUTOADDED
    { 0x13153, "value" }, // AUTOADDED
    { 0x13154, "value_hudelem" },
    { 0x13155, "value_type" },
    { 0x1315D, "vanguard_allowed" }, // AUTOADDED
    { 0x1315E, "vanguard_control_aiming" }, // AUTOADDED
    { 0x1315F, "vanguard_endride" }, // AUTOADDED
    { 0x13160, "vanguard_firemissile" }, // AUTOADDED
    { 0x13161, "vanguard_freezecontrolsbuffer" }, // AUTOADDED
    { 0x13162, "vanguard_fx" }, // AUTOADDED
    { 0x13163, "vanguard_get_node_origin" },
    { 0x13164, "vanguard_handledamage" }, // AUTOADDED
    { 0x13165, "vanguard_in_range" }, // AUTOADDED
    { 0x13166, "vanguard_is_outside" }, // AUTOADDED
    { 0x13167, "vanguard_lastdialogtime" }, // AUTOADDED
    { 0x13168, "vanguard_missile_radius" }, // AUTOADDED
    { 0x13170, "vanguard_num" },
    { 0x13171, "vanguard_origin" }, // AUTOADDED
    { 0x13172, "vanguard_pick_node" }, // AUTOADDED
    { 0x1318B, "variantid" }, // AUTOADDED
    { 0x13190, "vdir" },
    { 0x13191, "vdronestrikeheight" }, // AUTOADDED
    { 0x13192, "vec_multiply" }, // AUTOADDED
    { 0x13193, "vecscale" }, // AUTOADDED
    { 0x13194, "vector2d" },
    { 0x131A0, "vehicle" },
    { 0x131A1, "vehicle_addcovernodetemplate" }, // AUTOADDED
    { 0x131A2, "vehicle_ai_avoidance_heli" }, // AUTOADDED
    { 0x131A3, "vehicle_ai_avoidance_logic" }, // AUTOADDED
    { 0x131A4, "vehicle_ai_can_shoot_after_reload" }, // AUTOADDED
    { 0x131A5, "vehicle_ai_spawn_funcs" }, // AUTOADDED
    { 0x131A6, "vehicle_all_stop_func" }, // AUTOADDED
    { 0x131A7, "vehicle_allows_driver_death" }, // AUTOADDED
    { 0x131A8, "vehicle_allows_rider_death" }, // AUTOADDED
    { 0x131A9, "vehicle_animate" }, // AUTOADDED
    { 0x131AA, "vehicle_anims" }, // AUTOADDED
    { 0x131AB, "vehicle_badplace" }, // AUTOADDED
    { 0x131AC, "vehicle_becomes_crashable" }, // AUTOADDED
    { 0x131AD, "vehicle_bridge_stage_five_music" }, // AUTOADDED
    { 0x131AE, "vehicle_build" }, // AUTOADDED
    { 0x131AF, "vehicle_builds" }, // AUTOADDED
    { 0x131B0, "vehicle_caps" }, // AUTOADDED
    { 0x131B1, "vehicle_caps_counter" }, // AUTOADDED
    { 0x131B2, "vehicle_cleanup_handler" }, // AUTOADDED
    { 0x131B3, "vehicle_cleanupexitboundinginfo" }, // AUTOADDED
    { 0x131B4, "vehicle_clearpreventcollisiondamagefortimeafterexit" }, // AUTOADDED
    { 0x131B5, "vehicle_controlling" }, // AUTOADDED
    { 0x131D8, "vehicle_fired_from" },
    { 0x1325A, "vehicle_would_exceed_limit" }, // AUTOADDED
    { 0x13260, "vehicleinfo" },
    { 0x13264, "vehicleoverride" },
    { 0x1329E, "verify_effects_assignment" },
    { 0x1329F, "verify_effects_assignment_print" },
    { 0x1336F, "vfxradius" },
    { 0x13370, "vfxtag" },
    { 0x13372, "victim" },
    { 0x1337E, "victimonground" },
    { 0x13383, "victimteam" },
    { 0x13433, "visen" },
    { 0x13434, "visfr" },
    { 0x1343B, "visibleteam" },
    { 0x13445, "vision_set_override" },
    { 0x13484, "visited" }, // AUTOADDED
    { 0x1349E, "visual_range_sq" },
    { 0x1349F, "visualgroundoffset" },
    { 0x134A0, "visuals" },
    { 0x134B4, "vo_alias_data" },
    { 0x134C6, "vo_currently_playing" },
    { 0x134CA, "vo_dialogue_prefix" },
    { 0x134DC, "vo_functions" },
    { 0x134DF, "vo_is_playing" },
    { 0x134FD, "vo_prefix" },
    { 0x134FE, "vo_priority_level" },
    { 0x134FF, "vo_queue" },
    { 0x13516, "vo_system" },
    { 0x13517, "vo_system_busy" },
    { 0x13518, "vo_system_playing_vo" },
    { 0x13523, "vodestroyed" },
    { 0x13524, "vogone" }, // AUTOADDED
    { 0x13525, "voice" },
    { 0x1352A, "void" },
    { 0x13538, "volume" },
    { 0x13539, "volume_activation_check_init" },
    { 0x13550, "voprefix" },
    { 0x13552, "votestokick" },
    { 0x13553, "votimedout" },
    { 0x13554, "votimeout" }, // AUTOADDED
    { 0x13555, "votimer" }, // AUTOADDED
    { 0x13556, "voxelrootnodesize" }, // AUTOADDED
    { 0x13557, "vpoint" },
    { 0x13589, "wait_and_delete" }, // AUTOADDED
    { 0x1358C, "wait_and_give_player_xp" },
    { 0x13594, "wait_between_group_move" },
    { 0x1359A, "wait_commander_takeover_bot" },
    { 0x135A5, "wait_for_all_arks_deposited" },
    { 0x135AC, "wait_for_ark_placed" },
    { 0x135BD, "wait_for_crystal_to_charge" },
    { 0x135D0, "wait_for_escape_exit" },
    { 0x135D1, "wait_for_exit_revive_use_hold_think" },
    { 0x135D3, "wait_for_first_player_connect" },
    { 0x135D4, "wait_for_flag_or_time_elapses" },
    { 0x135DE, "wait_for_impact" },
    { 0x135E6, "wait_for_last_stand" },
    { 0x135EC, "wait_for_marked_zombies" },
    { 0x135F6, "wait_for_player_activation" },
    { 0x135F7, "wait_for_player_approach" },
    { 0x135F8, "wait_for_player_damage" },
    { 0x13600, "wait_for_player_pickup" },
    { 0x1360B, "wait_for_player_to_take_weapon" },
    { 0x13612, "wait_for_pre_game_period" },
    { 0x13626, "wait_for_self_revive" },
    { 0x1363B, "wait_for_tutorial_unpause" },
    { 0x1363C, "wait_for_ufo_quest_completion" },
    { 0x13642, "wait_for_weapon_switch_done" },
    { 0x13650, "wait_one_wave" },
    { 0x1365D, "wait_restore_player_perk" },
    { 0x13663, "wait_set_initial_player_count" },
    { 0x13666, "wait_some_wave" },
    { 0x13672, "wait_till_agent_funcs_defined" }, // AUTOADDED
    { 0x13679, "wait_to_be_revived" },
    { 0x1367D, "wait_to_drop_headcutter_battery" },
    { 0x13681, "wait_to_knock_off_glasses" },
    { 0x13683, "wait_to_set_player_currency" },
    { 0x13685, "wait_to_spawn_facemelter_battery" },
    { 0x13693, "wait_use_pap_portal" },
    { 0x13697, "waitaftershot" },
    { 0x13698, "waitandanimate" }, // AUTOADDED
    { 0x13699, "waitanddelete" }, // AUTOADDED
    { 0x1369A, "waitanddetonate" },
    { 0x1369D, "waitandspawnclient" },
    { 0x1369F, "waitattachflag" },
    { 0x136A0, "waitballlongdurationwithgameendtimeupdate" }, // AUTOADDED
    { 0x136A8, "waitforairstrikecancel" },
    { 0x136A9, "waitforallplayerstriggered" },
    { 0x136AD, "waitforbombreset" },
    { 0x136B1, "waitforclassselect" },
    { 0x136B5, "waitfordamage" },
    { 0x136B7, "waitfordetonateexplosive" },
    { 0x136BB, "waitfordropcratemsg" },
    { 0x136BD, "waitforfacesound" },
    { 0x136D3, "waitforplayerinput" },
    { 0x136D5, "waitforplayerping" }, // AUTOADDED
    { 0x136D7, "waitforplayers" },
    { 0x136D9, "waitforplayertrigger" },
    { 0x136DA, "waitforplayertriggered" },
    { 0x136E1, "waitforreset" }, // AUTOADDED
    { 0x136EF, "waitfortimeornotify" },
    { 0x136F0, "waitfortimeouttomove" },
    { 0x136F7, "waitframe" },
    { 0x136FD, "waitingtodeactivate" }, // AUTOADDED
    { 0x136FE, "waitingtoselectclass" }, // AUTOADDED
    { 0x136FF, "waitingtospawn" },
    { 0x13700, "waitingtospawnamortize" },
    { 0x13701, "waitinlaststand" },
    { 0x13703, "waitinspectator" },
    { 0x13706, "waitloadoutdone" }, // AUTOADDED
    { 0x13707, "waitlongdurationwithgameendtimeupdate" }, // AUTOADDED
    { 0x13708, "waitlongdurationwithhostmigrationpause" },
    { 0x1370A, "waitontargetordeath" }, // AUTOADDED
    { 0x1370C, "waitreplaysmokefxfornewplayer" },
    { 0x1370D, "waitrequirevisibility" }, // AUTOADDED
    { 0x1370E, "waitrespawnbutton" }, // AUTOADDED
    { 0x1370F, "waitrestoreperks" }, // AUTOADDED
    { 0x13714, "waitsetthermal" },
    { 0x13718, "waitsmoketime" },
    { 0x13719, "waitspread_code" }, // AUTOADDED
    { 0x1371A, "waitspread_insert" }, // AUTOADDED
    { 0x1371B, "waitsuppresstimeout" }, // AUTOADDED
    { 0x1372A, "waittill_any" },
    { 0x1372B, "waittill_any_ents" },
    { 0x1372C, "waittill_any_ents_or_timeout_return" },
    { 0x1372D, "waittill_any_ents_return" },
    { 0x1372E, "waittill_any_in_array_or_timeout" },
    { 0x1372F, "waittill_any_in_array_or_timeout_no_endon_death" },
    { 0x13730, "waittill_any_in_array_return" },
    { 0x13731, "waittill_any_in_array_return_no_endon_death" },
    { 0x13734, "waittill_any_return" },
    { 0x13735, "waittill_any_return_no_endon_death" },
    { 0x13736, "waittill_any_timeout" },
    { 0x13737, "waittill_any_timeout_no_endon_death" },
    { 0x13738, "waittill_any_timeout_pause_on_death_and_prematch" }, // AUTOADDED
    { 0x13739, "waittill_any_triggered_return_triggerer" }, // AUTOADDED
    { 0x13762, "waittill_either" },
    { 0x1376F, "waittill_finish_moving" },
    { 0x1377A, "waittill_grenade_fire" },
    { 0x137A6, "waittill_missile_fire" },
    { 0x137AC, "waittill_multiple" },
    { 0x137AD, "waittill_multiple_ents" }, // AUTOADDED
    { 0x137AE, "waittill_near_struct" }, // AUTOADDED
    { 0x137AF, "waittill_nodialogueplaying" }, // AUTOADDED
    { 0x137B0, "waittill_nonagsplaying" }, // AUTOADDED
    { 0x137B1, "waittill_nonai_isnt_blocking_tank" }, // AUTOADDED
    { 0x137B2, "waittill_notetrack_or_damage" }, // AUTOADDED
    { 0x137B3, "waittill_notify" }, // AUTOADDED
    { 0x137B4, "waittill_notify_and_time" },
    { 0x137B7, "waittill_notify_or_timeout" },
    { 0x137B8, "waittill_notify_or_timeout_hostmigration_pause" }, // AUTOADDED
    { 0x137B9, "waittill_notify_or_timeout_return" },
    { 0x137C0, "waittill_or_timeout" },
    { 0x13806, "waittill_string" },
    { 0x13807, "waittill_string_no_endon_death" },
    { 0x1380A, "waittill_tag_calculated_on_path_grid" },
    { 0x13829, "waittillballhostmigrationstarts" }, // AUTOADDED
    { 0x1382F, "waittillenabled" },
    { 0x13830, "waittillend_of_anim_set_walk" }, // AUTOADDED
    { 0x13831, "waittillfinalkillcamdone" }, // AUTOADDED
    { 0x13832, "waittillgrenadedrops" }, // AUTOADDED
    { 0x13833, "waittillhelisdead" }, // AUTOADDED
    { 0x13834, "waittillhostmigrationdone" },
    { 0x13835, "waittillhostmigrationstarts" }, // AUTOADDED
    { 0x13836, "waittillkillcamover" }, // AUTOADDED
    { 0x13837, "waittillmatch_any_return" },
    { 0x13838, "waittillmatch_notify" },
    { 0x13839, "waittillmatch_string" },
    { 0x1383E, "waittillrecoveredhealth" },
    { 0x13846, "waittimebetweenregen" },
    { 0x138DD, "wantsafespawn" },
    { 0x13906, "wasaliveatmatchstart" },
    { 0x13907, "wasallowingpain" }, // AUTOADDED
    { 0x13908, "waschained" },
    { 0x13909, "wascooked" }, // AUTOADDED
    { 0x1390A, "wascqb" }, // AUTOADDED
    { 0x1390B, "wasdamaged" },
    { 0x1390D, "wasdamagedbyoffhandshield" },
    { 0x1390E, "wasdamagedfrombulletpenetration" },
    { 0x1390F, "wasdamagedfrombulletricochet" },
    { 0x13916, "waslastround" },
    { 0x13917, "wasleftunoccupied" },
    { 0x13918, "wasonlyround" }, // AUTOADDED
    { 0x13919, "waspartjustdismembered" },
    { 0x1391E, "wasti" },
    { 0x1391F, "waswinning" }, // AUTOADDED
    { 0x13928, "watch_basketball_landing" },
    { 0x13929, "watch_basketball_throw" },
    { 0x1392B, "watch_bot_died_during_crate" }, // AUTOADDED
    { 0x1392C, "watch_bot_died_during_revive" },
    { 0x13932, "watch_dpad" },
    { 0x13938, "watch_end_switchblade" }, // AUTOADDED
    { 0x13950, "watch_for_super_button" },
    { 0x13956, "watch_goal_aborted" }, // AUTOADDED
    { 0x13958, "watch_laser_target_damage" },
    { 0x1395D, "watch_node_chance" }, // AUTOADDED
    { 0x1395E, "watch_nodes" }, // AUTOADDED
    { 0x1395F, "watch_nodes_aborted" },
    { 0x13960, "watch_nodes_stop" },
    { 0x13961, "watch_out_of_ammo" },
    { 0x13966, "watch_player_landing" },
    { 0x13968, "watch_players_connecting" }, // AUTOADDED
    { 0x1397F, "watch_tag_destination" },
    { 0x13981, "watch_target_player" },
    { 0x139B4, "watchbombtimer" }, // AUTOADDED
    { 0x139B6, "watchbulletoutline" }, // AUTOADDED
    { 0x139B7, "watchbulletoutlinecleanup" }, // AUTOADDED
    { 0x139C3, "watchc4altdetonate" },
    { 0x139C4, "watchc4altdetonation" },
    { 0x139C5, "watchc4detonation" },
    { 0x139C6, "watchc4implode" },
    { 0x139C7, "watchc4stuck" },
    { 0x139CC, "watchcarryobjectweaponswitch" }, // AUTOADDED
    { 0x139D2, "watchcombatspeedscaler" },
    { 0x139D3, "watchconcussiongrenadeexplode" },
    { 0x139D6, "watchconnectedplayfx" },
    { 0x139E2, "watchcrankedhostmigration" }, // AUTOADDED
    { 0x139EB, "watchdeployablemarkerplacement" },
    { 0x13A0D, "watchearlyexit" }, // AUTOADDED
    { 0x13A10, "watchempdamage" },
    { 0x13A15, "watchendgame" }, // AUTOADDED
    { 0x13A23, "watchexplosiveusable" }, // AUTOADDED
    { 0x13A26, "watchflagenduse" },
    { 0x13A27, "watchflagtimerpause" },
    { 0x13A30, "watchforattachmentremoved" },
    { 0x13A31, "watchforbasicplayerevents" }, // AUTOADDED
    { 0x13A32, "watchforclasschange" },
    { 0x13A33, "watchforconnectedplayers" }, // AUTOADDED
    { 0x13A35, "watchfordeath" },
    { 0x13A38, "watchfordirectplayerdamage" },
    { 0x13A3A, "watchforearlyexit" },
    { 0x13A3C, "watchforendgame" }, // AUTOADDED
    { 0x13A45, "watchforincidentalplayerdamage" },
    { 0x13A4A, "watchforleavegame" },
    { 0x13A56, "watchforperkremoval" }, // AUTOADDED
    { 0x13A59, "watchforplayerdeath" },
    { 0x13A5A, "watchforplayerdisconnect" },
    { 0x13A5C, "watchforplayermovementevents" }, // AUTOADDED
    { 0x13A5D, "watchforpowerremoved" },
    { 0x13A6C, "watchforslide" },
    { 0x13A72, "watchforteamchange" },
    { 0x13A7E, "watchforusermessageevents" }, // AUTOADDED
    { 0x13A7F, "watchforweaponchange" },
    { 0x13A82, "watchforweaponremoved" },
    { 0x13A86, "watchgameendleave" }, // AUTOADDED
    { 0x13A87, "watchgameinactive" },
    { 0x13A88, "watchgamestart" }, // AUTOADDED
    { 0x13A89, "watchgametimer" }, // AUTOADDED
    { 0x13A8A, "watchgasgrenadeexplode" },
    { 0x13A8B, "watchglobstick" },
    { 0x13A8E, "watchglproxy" },
    { 0x13A90, "watchgrenadedeath" }, // AUTOADDED
    { 0x13A91, "watchgrenadedotend" },
    { 0x13A97, "watchgrenadethrows" }, // AUTOADDED
    { 0x13A9B, "watchgrenadeusage" }, // AUTOADDED
    { 0x13AA1, "watchhostmigration" }, // AUTOADDED
    { 0x13AA2, "watchhostmigrationfinishedinit" },
    { 0x13AA5, "watchhoverend" },
    { 0x13AA8, "watchintrocleared" },
    { 0x13AAA, "watchinvalidweaponswitchduringdisableweapon" }, // AUTOADDED
    { 0x13AAB, "watchistouchingtrigger" },
    { 0x13AAD, "watchjoinedteamplayfx" },
    { 0x13AB3, "watchlethaldelaycancel" }, // AUTOADDED
    { 0x13ABB, "watchlifepackboostlifetime" }, // AUTOADDED
    { 0x13ABC, "watchlifepackdeath" },
    { 0x13ABD, "watchlifepackkills" },
    { 0x13ABE, "watchlifepacklifetime" }, // AUTOADDED
    { 0x13ABF, "watchlifepackoutlinestate" }, // AUTOADDED
    { 0x13AC0, "watchlifepackowner" }, // AUTOADDED
    { 0x13AC1, "watchlifepackuse" }, // AUTOADDED
    { 0x13AC2, "watchlifepackuserdeath" }, // AUTOADDED
    { 0x13AD5, "watchmissileusage" },
    { 0x13ADB, "watchoffhandcancel" },
    { 0x13AE8, "watchpainted" }, // AUTOADDED
    { 0x13AE9, "watchpaintedagain" }, // AUTOADDED
    { 0x13AED, "watchphasespeedendshift" },
    { 0x13AEE, "watchphasespeedshift" },
    { 0x13AF1, "watchpickup" },
    { 0x13AF9, "watchplayerconnect" }, // AUTOADDED
    { 0x13AFA, "watchplayerconnected" }, // AUTOADDED
    { 0x13B02, "watchplayerkillstreakdisconnect" }, // AUTOADDED
    { 0x13B03, "watchplayerkillstreakearlyexit" }, // AUTOADDED
    { 0x13B04, "watchplayerkillstreakemp" }, // AUTOADDED
    { 0x13B05, "watchplayerkillstreakend" }, // AUTOADDED
    { 0x13B06, "watchplayerkillstreakswitchteam" }, // AUTOADDED
    { 0x13B07, "watchplayerkillstreaktimeout" }, // AUTOADDED
    { 0x13B08, "watchplayerleavingcalloutarea" },
    { 0x13B09, "watchplayermelee" }, // AUTOADDED
    { 0x13B0A, "watchplayeronground" },
    { 0x13B0D, "watchplayersspawning" }, // AUTOADDED
    { 0x13B0E, "watchplayerstouchingpool" },
    { 0x13B1C, "watchrapidtagpickup" },
    { 0x13B2A, "watchrevengedeath" },
    { 0x13B2B, "watchrevengedisconnected" }, // AUTOADDED
    { 0x13B2C, "watchrevengekill" }, // AUTOADDED
    { 0x13B2D, "watchrevengevictimdisconnected" }, // AUTOADDED
    { 0x13B2F, "watchroundend" },
    { 0x13B30, "watchsamproximity" }, // AUTOADDED
    { 0x13B37, "watchsentryshockpickup" }, // AUTOADDED
    { 0x13B3C, "watchshockdamage" }, // AUTOADDED
    { 0x13B46, "watchslowmo" }, // AUTOADDED
    { 0x13B48, "watchsmokeexplode" },
    { 0x13B4B, "watchsniperboltactionkills_ondeath" }, // AUTOADDED
    { 0x13B5A, "watchstartlingerdamage" },
    { 0x13B5F, "watchstingerproximity" }, // AUTOADDED
    { 0x13B64, "watchstoprevenge" }, // AUTOADDED
    { 0x13B69, "watchstuckinnozone" }, // AUTOADDED
    { 0x13B6C, "watchsuperdelaycancel" }, // AUTOADDED
    { 0x13B7E, "watchtimeout" },
    { 0x13B80, "watchtimerpause" },
    { 0x13B87, "watchtoughenup" }, // AUTOADDED
    { 0x13B88, "watchtoughenupgameend" }, // AUTOADDED
    { 0x13B89, "watchtoughenuplifetime" }, // AUTOADDED
    { 0x13B8A, "watchtoughenuplightarmorend" }, // AUTOADDED
    { 0x13B8B, "watchtoughenupplayer" },
    { 0x13B8C, "watchtoughenupplayerbegin" },
    { 0x13B8D, "watchtoughenupplayerend" }, // AUTOADDED
    { 0x13B8E, "watchtransponderaltdetonate" },
    { 0x13B8F, "watchtransponderaltdetonation" },
    { 0x13B90, "watchtransponderdetonation" },
    { 0x13BA5, "watchweaponchange" },
    { 0x13BA6, "watchweaponchanged" },
    { 0x13BA8, "watchweaponfired" },
    { 0x13BAE, "watchweaponusage" },
    { 0x13BBA, "waterdeletez" }, // AUTOADDED
    { 0x13BC4, "wave_check_init" },
    { 0x13BC6, "wave_complete_dialogues" },
    { 0x13BD3, "wave_num" },
    { 0x13BD4, "wave_num_at_start_of_game" },
    { 0x13BD5, "wave_num_loop" },
    { 0x13BD6, "wave_num_override" },
    { 0x13BD7, "wave_num_timer_loop" },
    { 0x13BDE, "wavedelay" }, // AUTOADDED
    { 0x13BE0, "waveplayerspawnindex" },
    { 0x13BE3, "wavesheldwithweapon" },
    { 0x13BE5, "wavespawnindex" }, // AUTOADDED
    { 0x13BE7, "wavessurvivedthroughweapon" },
    { 0x13BFF, "weapon_before_entangler" },
    { 0x13C00, "weapon_build_models" },
    { 0x13C01, "weapon_can_damage_ufo" },
    { 0x13C07, "weaponclass" },
    { 0x13C09, "weapon_col" },
    { 0x13C19, "weapon_has_ranks" },
    { 0x13C1B, "weapon_hint_func" },
    { 0x13C1C, "weapon_in_inventory" },
    { 0x13C21, "weapon_is_crafted_turret" },
    { 0x13C24, "weapon_levels" },
    { 0x13C2E, "weapon_name" }, // AUTOADDED
    { 0x13C2F, "weapon_name_log" },
    { 0x13C30, "weapon_no_unlimited_check" },
    { 0x13C31, "weapon_not_on_wall" },
    { 0x13C37, "weapon_passive_xp_multiplier" },
    { 0x13C3D, "weapon_progression" },
    { 0x13C3E, "weapon_progression_enabled" },
    { 0x13C40, "weapon_pump_action_shotgun" },
    { 0x13C41, "weapon_purchase_disabled" },
    { 0x13C48, "weapon_should_get_xp" },
    { 0x13C4C, "weapon_stats_override_name_func" },
    { 0x13C62, "weapon_upgrade" },
    { 0x13C64, "weapon_upgrade_hint_logic" },
    { 0x13C66, "weapon_watch_hint" },
    { 0x13C6E, "weaponaffinityextralauncher" },
    { 0x13C70, "weaponaffinityspeedboost" }, // AUTOADDED
    { 0x13C73, "weaponarray" }, // AUTOADDED
    { 0x13C74, "weaponasset" }, // AUTOADDED
    { 0x13C76, "weaponattachdefaultmap" },
    { 0x13C79, "weaponattachments" },
    { 0x13C7A, "weaponattachremoveextraattachments" },
    { 0x13C7C, "weaponcategories" },
    { 0x13C7D, "weaponconfigs" },
    { 0x13C82, "weapondropfunction" },
    { 0x13C88, "weaponfiredthread" },
    { 0x13C8F, "weapongroupmap" },
    { 0x13C90, "weaponhasattachment" },
    { 0x13C96, "weaponhaspassive" }, // AUTOADDED
    { 0x13C99, "weaponhasvariants" },
    { 0x13C9D, "weaponkills" },
    { 0x13C9E, "weaponlasercalls" },
    { 0x13C9F, "weaponlevelforexperience" }, // AUTOADDED
    { 0x13CA0, "weaponlist" }, // AUTOADDED
    { 0x13CA2, "weaponmap_toattachdefaults" },
    { 0x13CA3, "weaponmap_toperk" },
    { 0x13CA4, "weaponmap_tospeed" },
    { 0x13CA5, "weaponmapdata" },
    { 0x13CA6, "weaponmapfunc" },
    { 0x13CA7, "weaponmaxval" }, // AUTOADDED
    { 0x13CAD, "weaponobtained" },
    { 0x13CB0, "weaponpassives" }, // AUTOADDED
    { 0x13CB1, "weaponpassivesinit" },
    { 0x13CB2, "weaponpassivespeedmod" },
    { 0x13CB3, "weaponpassivespeedonkillmod" },
    { 0x13CBA, "weaponpos" },
    { 0x13CBB, "weaponposdropping" }, // AUTOADDED
    { 0x13CBC, "weaponpromotionsplashnotify" }, // AUTOADDED
    { 0x13CBD, "weaponranktable" }, // AUTOADDED
    { 0x13CBE, "weaponrankxpmultipliers" }, // AUTOADDED
    { 0x13CBF, "weaponrefs" },
    { 0x13CC0, "weaponreload" },
    { 0x13CC1, "weaponreloadtime" },
    { 0x13CC2, "weaponrequest" },
    { 0x13CC6, "weapons_tracking_init" },
    { 0x13CCB, "weaponsinit" },
    { 0x13CCF, "weaponspeed" },
    { 0x13CD0, "weaponstate" }, // AUTOADDED
    { 0x13CD1, "weaponstats_reset" },
    { 0x13CD5, "weaponsused" }, // AUTOADDED
    { 0x13CD6, "weaponswapwatcher" }, // AUTOADDED
    { 0x13CD7, "weaponswitchendedairstrike" }, // AUTOADDED
    { 0x13CD8, "weaponswitchendednuke" }, // AUTOADDED
    { 0x13CD9, "weaponswitchendedsupportbox" }, // AUTOADDED
    { 0x13CDA, "weaponswitchendedtomastrike" }, // AUTOADDED
    { 0x13CDB, "weapontouse" }, // AUTOADDED
    { 0x13CDC, "weapontracking_init" }, // AUTOADDED
    { 0x13CDD, "weapontweaks" }, // AUTOADDED
    { 0x13CE0, "weaponuse" },
    { 0x13CE2, "weaponxpearned" }, // AUTOADDED
    { 0x13CE5, "wearing_dischord_glasses" },
    { 0x13CE7, "wearing_rat_king_eye" }, // AUTOADDED
    { 0x13CE8, "weight" },
    { 0x13CFC, "what_power_is_in_slot" },
    { 0x13D04, "whereami" },
    { 0x13D0C, "white_screen_overlay" },
    { 0x13D14, "whizbyevent" },
    { 0x13D1F, "willard_intro_vo" },
    { 0x13D36, "window_attack_ent" },
    { 0x13D38, "window_boards_logic" },
    { 0x13D59, "window_entrances" },
    { 0x13D7C, "wingamebytype" }, // AUTOADDED
    { 0x13D89, "winlimit" }, // AUTOADDED
    { 0x13D8D, "winrule" }, // AUTOADDED
    { 0x13D90, "within_fov" },
    { 0x13DAC, "wor_change_portal" },
    { 0x13DAD, "wor_give_weapon" },
    { 0x13DAE, "wor_glasses" },
    { 0x13DAF, "wor_init" },
    { 0x13DB1, "wor_items_picked_up" },
    { 0x13DB2, "wor_items_placed" },
    { 0x13DB4, "wor_phase_shift" },
    { 0x13DB5, "wor_portal_change_time" },
    { 0x13DB6, "wor_quest_crafting_func" },
    { 0x13DB7, "wor_quest_create_pillage_interaction" },
    { 0x13DB8, "wor_quest_death_update_func" },
    { 0x13DB9, "wor_quest_pillage_func" },
    { 0x13DBA, "wor_quest_specific_pillage_show_func" },
    { 0x13DCE, "worthydamageratio" },
    { 0x13DEE, "wristrocket_cleanuponownerdisconnect" },
    { 0x13DEF, "wristrocket_cleanuponparentdeath" },
    { 0x13DF0, "wristrocket_createrocket" },
    { 0x13DF1, "wristrocket_delete" },
    { 0x13DF2, "wristrocket_explode" },
    { 0x13DF4, "wristrocket_set" },
    { 0x13DF5, "wristrocket_unset" },
    { 0x13DF8, "wristrocket_watchfuse" },
    { 0x13DF9, "wristrocket_watchstuck" },
    { 0x13DFA, "wristrocketcooksuicideexplodecheck" },
    { 0x13DFB, "wristrocketinit" },
    { 0x13DFC, "wristrocketused" },
    { 0x13DFD, "write_clientmatchdata_for_player" }, // AUTOADDED
    { 0x13DFE, "write_consumable_used" }, // AUTOADDED
    { 0x13DFF, "write_global_clientmatchdata" }, // AUTOADDED
    { 0x13E00, "write_global_clientmatchdata_func" }, // AUTOADDED
    { 0x13E01, "write_log" },
    { 0x13E02, "write_struct_to_map" }, // AUTOADDED
    { 0x13E03, "writebestscores" }, // AUTOADDED
    { 0x13E04, "writebufferedstats" }, // AUTOADDED
    { 0x13E09, "ww_hintstrings" },
    { 0x13E0C, "ww_vo" },
    { 0x13E0E, "xb3game" },
    { 0x13E0F, "xenongame" },
    { 0x13E19, "xoffset" }, // AUTOADDED
    { 0x13E1A, "xp" },
    { 0x13E26, "xpscale" },
    { 0x13E28, "xpscoreevent" }, // AUTOADDED
    { 0x13E29, "xptonextrank" }, // AUTOADDED
    { 0x13E48, "yaw" }, // AUTOADDED
    { 0x13E5A, "yoffset" }, // AUTOADDED
    { 0x13E61, "zap_model" },
    { 0x13E63, "zap_over_time" },
    { 0x13F01, "zmb_crafting_item_debug_drop" },
    { 0x13F02, "zmb_crafting_item_drop_func" },
    { 0x13F03, "zmb_last_stand_handler" },
    { 0x13F04, "zmb_last_stand_weapon_handler" },
    { 0x13F05, "zmb_main_entrance_gate" },
    { 0x13F06, "zmb_power_gate_handler" },
    { 0x13F08, "zmb_vo_callouts" },
    { 0x13F09, "zmb_vo_init" },
    { 0x13F0A, "zoffset" }, // AUTOADDED
    { 0x13F0B, "zom_matchdata" },
    { 0x13F0C, "zom_player_damage_flash" },
    { 0x13F0D, "zom_player_health_overlay_watcher" },
    { 0x13F0E, "zombie" },
    { 0x13F11, "zombie_behind_vo" },
    { 0x13F12, "zombie_boat_melee_func" },
    { 0x13F15, "zombie_callbackplayerkilled" },
    { 0x13F16, "zombie_challenge_table" },
    { 0x13F17, "zombie_clown_init" },
    { 0x13F19, "zombie_cop_init" },
    { 0x13F26, "zombie_get_player_respawn_loc" },
    { 0x13F27, "zombie_geyser_fling" },
    { 0x13F28, "zombie_ghost_hide_nodes" },
    { 0x13F29, "zombie_ghost_hover_nodes" },
    { 0x13F2B, "zombie_ghost_spawn_nodes" },
    { 0x13F2C, "zombie_ghost_target" },
    { 0x13F2D, "zombie_ghosts" },
    { 0x13F36, "zombie_killed_loot_func" },
    { 0x13F37, "zombie_laststand_currency_penalth_amount" },
    { 0x13F3E, "zombie_max_rank" },
    { 0x13F43, "zombie_near_equipment" },
    { 0x13F45, "zombie_onprecachegametype" },
    { 0x13F46, "zombie_onspawnplayer" },
    { 0x13F47, "zombie_onstartgametype" },
    { 0x13F4A, "zombie_player_connect_black_screen" },
    { 0x13F4B, "zombie_prespawnfromspectatorfunc" },
    { 0x13F4E, "zombie_ranks" },
    { 0x13F4F, "zombie_ranks_table" },
    { 0x13F56, "zombie_xp" },
    { 0x13F58, "zombieattachfunction" },
    { 0x13F5B, "zombiedlclevel" },
    { 0x13F5D, "zombieenterplayspace" },
    { 0x13F62, "zombieghost_constantanglesadjust" },
    { 0x13F7B, "zombiegreycheckhealthregen" },
    { 0x13F7C, "zombiegreydoduplicatingattack" },
    { 0x13F7D, "zombiegreydoteleportattack" },
    { 0x13F7E, "zombiegreydoteleportdash" },
    { 0x13F7F, "zombiegreydoteleportsummon" },
    { 0x13F80, "zombiegreydoteleporttoloner" },
    { 0x13F83, "zombiegreyhasweapon" },
    { 0x13F84, "zombiegreyinitduplicatingattack" },
    { 0x13F85, "zombiegreyinithealthregen" },
    { 0x13F86, "zombiegreyinitmelee" },
    { 0x13F88, "zombiegreyinitteleportattack" },
    { 0x13F89, "zombiegreyinitteleportdash" },
    { 0x13F8A, "zombiegreyinitteleportsummon" },
    { 0x13F8B, "zombiegreyinitteleporttoloner" },
    { 0x13F8D, "zombiegreymayshoot" },
    { 0x13F8F, "zombiegreyshouldduplicatingattack" },
    { 0x13F90, "zombiegreyshouldmelee" },
    { 0x13F95, "zombiegreyshouldteleportattack" },
    { 0x13F96, "zombiegreyshouldteleportdash" },
    { 0x13F97, "zombiegreyshouldteleportsummon" },
    { 0x13F98, "zombiegreyshouldteleporttoloner" },
    { 0x13F9D, "zombiepiece" },
    { 0x13F9E, "zombiepiecetarget" },
    { 0x13FA3, "zombies_paused" },
    { 0x13FA4, "zombies_perks" },
    { 0x13FA5, "zombies_should_mutilate" },
    { 0x13FA6, "zombies_spawn_score_func" },
    { 0x13FA9, "zombieshouldenterplayspace" },
    { 0x13FAB, "zombietograb" },
    { 0x13FB0, "zone" },
    { 0x13FB3, "zone_oncontested" }, // AUTOADDED
    { 0x13FB4, "zone_onuncontested" }, // AUTOADDED
    { 0x13FB5, "zone_onunoccupied" }, // AUTOADDED
    { 0x13FB6, "zone_onuse" },
    { 0x13FB7, "zone_onusebegin" }, // AUTOADDED
    { 0x13FB8, "zone_onuseupdate" }, // AUTOADDED
    { 0x13FB9, "zone_stompprogressreward" }, // AUTOADDED
    { 0x13FBA, "zoneactivationdelay" }, // AUTOADDED
    { 0x13FBB, "zoneadditivescoring" }, // AUTOADDED
    { 0x13FBC, "zonecapturetime" }, // AUTOADDED
    { 0x13FBD, "zonecount" }, // AUTOADDED
    { 0x13FBE, "zonedestroyedbytimer" }, // AUTOADDED
    { 0x13FBF, "zoneduration" },
    { 0x13FC1, "zoneobjectives" },
    { 0x13FC2, "zonemovetime" }, // AUTOADDED
    { 0x13FC3, "zonerandomlocationorder" }, // AUTOADDED
    { 0x13FC4, "zones" }, // AUTOADDED
    { 0x13FC7, "zonetimerwait" }, // AUTOADDED
    }};
}