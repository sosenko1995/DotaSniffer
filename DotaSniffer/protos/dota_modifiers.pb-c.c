/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: dota_modifiers.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "dota_modifiers.pb-c.h"
void   cdotamodifier_buff_table_entry__init
                     (CDOTAModifierBuffTableEntry         *message)
{
  static CDOTAModifierBuffTableEntry init_value = CDOTAMODIFIER_BUFF_TABLE_ENTRY__INIT;
  *message = init_value;
}
size_t cdotamodifier_buff_table_entry__get_packed_size
                     (const CDOTAModifierBuffTableEntry *message)
{
  assert(message->base.descriptor == &cdotamodifier_buff_table_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cdotamodifier_buff_table_entry__pack
                     (const CDOTAModifierBuffTableEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cdotamodifier_buff_table_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cdotamodifier_buff_table_entry__pack_to_buffer
                     (const CDOTAModifierBuffTableEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cdotamodifier_buff_table_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CDOTAModifierBuffTableEntry *
       cdotamodifier_buff_table_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CDOTAModifierBuffTableEntry *)
     protobuf_c_message_unpack (&cdotamodifier_buff_table_entry__descriptor,
                                allocator, len, data);
}
void   cdotamodifier_buff_table_entry__free_unpacked
                     (CDOTAModifierBuffTableEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &cdotamodifier_buff_table_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cdotalua_modifier_entry__init
                     (CDOTALuaModifierEntry         *message)
{
  static CDOTALuaModifierEntry init_value = CDOTALUA_MODIFIER_ENTRY__INIT;
  *message = init_value;
}
size_t cdotalua_modifier_entry__get_packed_size
                     (const CDOTALuaModifierEntry *message)
{
  assert(message->base.descriptor == &cdotalua_modifier_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cdotalua_modifier_entry__pack
                     (const CDOTALuaModifierEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cdotalua_modifier_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cdotalua_modifier_entry__pack_to_buffer
                     (const CDOTALuaModifierEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cdotalua_modifier_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CDOTALuaModifierEntry *
       cdotalua_modifier_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CDOTALuaModifierEntry *)
     protobuf_c_message_unpack (&cdotalua_modifier_entry__descriptor,
                                allocator, len, data);
}
void   cdotalua_modifier_entry__free_unpacked
                     (CDOTALuaModifierEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &cdotalua_modifier_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const DOTAMODIFIERENTRYTYPE cdotamodifier_buff_table_entry__entry_type__default_value = DOTA__MODIFIER__ENTRY__TYPE__DOTA_MODIFIER_ENTRY_TYPE_ACTIVE;
static const float cdotamodifier_buff_table_entry__duration__default_value = -1;
static const ProtobufCFieldDescriptor cdotamodifier_buff_table_entry__field_descriptors[32] =
{
  {
    "entry_type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, entry_type),
    &dota__modifier__entry__type__descriptor,
    &cdotamodifier_buff_table_entry__entry_type__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "parent",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, parent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "index",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "serial_num",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, serial_num),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "modifier_class",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_modifier_class),
    offsetof(CDOTAModifierBuffTableEntry, modifier_class),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ability_level",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_ability_level),
    offsetof(CDOTAModifierBuffTableEntry, ability_level),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "stack_count",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_stack_count),
    offsetof(CDOTAModifierBuffTableEntry, stack_count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "creation_time",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(CDOTAModifierBuffTableEntry, has_creation_time),
    offsetof(CDOTAModifierBuffTableEntry, creation_time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "duration",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(CDOTAModifierBuffTableEntry, has_duration),
    offsetof(CDOTAModifierBuffTableEntry, duration),
    NULL,
    &cdotamodifier_buff_table_entry__duration__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "caster",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_caster),
    offsetof(CDOTAModifierBuffTableEntry, caster),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ability",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_ability),
    offsetof(CDOTAModifierBuffTableEntry, ability),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "armor",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_armor),
    offsetof(CDOTAModifierBuffTableEntry, armor),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fade_time",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(CDOTAModifierBuffTableEntry, has_fade_time),
    offsetof(CDOTAModifierBuffTableEntry, fade_time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "subtle",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(CDOTAModifierBuffTableEntry, has_subtle),
    offsetof(CDOTAModifierBuffTableEntry, subtle),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "channel_time",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(CDOTAModifierBuffTableEntry, has_channel_time),
    offsetof(CDOTAModifierBuffTableEntry, channel_time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "v_start",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, v_start),
    &cmsg_vector__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "v_end",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, v_end),
    &cmsg_vector__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "portal_loop_appear",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, portal_loop_appear),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "portal_loop_disappear",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, portal_loop_disappear),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hero_loop_appear",
    20,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, hero_loop_appear),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hero_loop_disappear",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, hero_loop_disappear),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "movement_speed",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_movement_speed),
    offsetof(CDOTAModifierBuffTableEntry, movement_speed),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "aura",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(CDOTAModifierBuffTableEntry, has_aura),
    offsetof(CDOTAModifierBuffTableEntry, aura),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "activity",
    24,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_activity),
    offsetof(CDOTAModifierBuffTableEntry, activity),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "damage",
    25,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_damage),
    offsetof(CDOTAModifierBuffTableEntry, damage),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "range",
    26,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_range),
    offsetof(CDOTAModifierBuffTableEntry, range),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dd_modifier_index",
    27,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_dd_modifier_index),
    offsetof(CDOTAModifierBuffTableEntry, dd_modifier_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dd_ability_index",
    28,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(CDOTAModifierBuffTableEntry, has_dd_ability_index),
    offsetof(CDOTAModifierBuffTableEntry, dd_ability_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "illusion_label",
    29,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, illusion_label),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "active",
    30,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(CDOTAModifierBuffTableEntry, has_active),
    offsetof(CDOTAModifierBuffTableEntry, active),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "player_ids",
    31,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, player_ids),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lua_name",
    32,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CDOTAModifierBuffTableEntry, lua_name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cdotamodifier_buff_table_entry__field_indices_by_name[] = {
  10,   /* field[10] = ability */
  5,   /* field[5] = ability_level */
  29,   /* field[29] = active */
  23,   /* field[23] = activity */
  11,   /* field[11] = armor */
  22,   /* field[22] = aura */
  9,   /* field[9] = caster */
  14,   /* field[14] = channel_time */
  7,   /* field[7] = creation_time */
  24,   /* field[24] = damage */
  27,   /* field[27] = dd_ability_index */
  26,   /* field[26] = dd_modifier_index */
  8,   /* field[8] = duration */
  0,   /* field[0] = entry_type */
  12,   /* field[12] = fade_time */
  19,   /* field[19] = hero_loop_appear */
  20,   /* field[20] = hero_loop_disappear */
  28,   /* field[28] = illusion_label */
  2,   /* field[2] = index */
  31,   /* field[31] = lua_name */
  4,   /* field[4] = modifier_class */
  21,   /* field[21] = movement_speed */
  1,   /* field[1] = parent */
  30,   /* field[30] = player_ids */
  17,   /* field[17] = portal_loop_appear */
  18,   /* field[18] = portal_loop_disappear */
  25,   /* field[25] = range */
  3,   /* field[3] = serial_num */
  6,   /* field[6] = stack_count */
  13,   /* field[13] = subtle */
  16,   /* field[16] = v_end */
  15,   /* field[15] = v_start */
};
static const ProtobufCIntRange cdotamodifier_buff_table_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 32 }
};
const ProtobufCMessageDescriptor cdotamodifier_buff_table_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "CDOTAModifierBuffTableEntry",
  "CDOTAModifierBuffTableEntry",
  "CDOTAModifierBuffTableEntry",
  "",
  sizeof(CDOTAModifierBuffTableEntry),
  32,
  cdotamodifier_buff_table_entry__field_descriptors,
  cdotamodifier_buff_table_entry__field_indices_by_name,
  1,  cdotamodifier_buff_table_entry__number_ranges,
  (ProtobufCMessageInit) cdotamodifier_buff_table_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor cdotalua_modifier_entry__field_descriptors[2] =
{
  {
    "modifier_type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(CDOTALuaModifierEntry, modifier_type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "modifier_filename",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CDOTALuaModifierEntry, modifier_filename),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cdotalua_modifier_entry__field_indices_by_name[] = {
  1,   /* field[1] = modifier_filename */
  0,   /* field[0] = modifier_type */
};
static const ProtobufCIntRange cdotalua_modifier_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor cdotalua_modifier_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "CDOTALuaModifierEntry",
  "CDOTALuaModifierEntry",
  "CDOTALuaModifierEntry",
  "",
  sizeof(CDOTALuaModifierEntry),
  2,
  cdotalua_modifier_entry__field_descriptors,
  cdotalua_modifier_entry__field_indices_by_name,
  1,  cdotalua_modifier_entry__number_ranges,
  (ProtobufCMessageInit) cdotalua_modifier_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue dota__modifier__entry__type__enum_values_by_number[2] =
{
  { "DOTA_MODIFIER_ENTRY_TYPE_ACTIVE", "DOTA__MODIFIER__ENTRY__TYPE__DOTA_MODIFIER_ENTRY_TYPE_ACTIVE", 1 },
  { "DOTA_MODIFIER_ENTRY_TYPE_REMOVED", "DOTA__MODIFIER__ENTRY__TYPE__DOTA_MODIFIER_ENTRY_TYPE_REMOVED", 2 },
};
static const ProtobufCIntRange dota__modifier__entry__type__value_ranges[] = {
{1, 0},{0, 2}
};
static const ProtobufCEnumValueIndex dota__modifier__entry__type__enum_values_by_name[2] =
{
  { "DOTA_MODIFIER_ENTRY_TYPE_ACTIVE", 0 },
  { "DOTA_MODIFIER_ENTRY_TYPE_REMOVED", 1 },
};
const ProtobufCEnumDescriptor dota__modifier__entry__type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "DOTA_MODIFIER_ENTRY_TYPE",
  "DOTA_MODIFIER_ENTRY_TYPE",
  "DOTAMODIFIERENTRYTYPE",
  "",
  2,
  dota__modifier__entry__type__enum_values_by_number,
  2,
  dota__modifier__entry__type__enum_values_by_name,
  1,
  dota__modifier__entry__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
