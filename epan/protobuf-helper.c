/* protobuf-helper.c
 *
 * Wrapper of Protocol Buffers Language library which generated by protobuf_lang.y and protobuf_lang_scanner.l.
 * Copyright 2019, Huang Qiangxiong <qiangxiong.huang@qq.com>
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

/* The packet-protobuf dissector needs get information from *.proto files for dissecting
 * protobuf packet correctly. The information includes:
 *   - The names of MESSAGE, ENUM, FIELD, ENUM_VALUE;
 *   - The data type of FIELD which assuring the value of protobuf field of packet can be dissected correctly.
 *
 * At present, we use C Protocol Buffers Language Parser which generated by protobuf_lang.y and protobuf_lang_scanner.l.
 * Because wireshark is mainly implemented in plain ANSI C but the offical protobuf library is implemented in C++ language.
 *
 * One day, if C++ library is allowd, we can create a protobuf-helper.cpp file, that invoking offical protobuf C++ library directly,
 * to replace protobuf-helper.c. The packet-protobuf.c can keep unchanged.
 */

#include "config.h"

#include "protobuf-helper.h"
#include "protobuf_lang_tree.h"

VALUE_STRING_ARRAY_GLOBAL_DEF(protobuf_field_type);

void
pbw_reinit_DescriptorPool(PbwDescriptorPool** pool, const char** directories, pbw_report_error_cb_t error_cb)
{
    pbl_reinit_descriptor_pool((pbl_descriptor_pool_t**) pool, directories, (pbl_report_error_cb_t) error_cb);
}

/* load a proto file, return 0 if successed */
int
pbw_load_proto_file(PbwDescriptorPool* pool, const char* filename) {
    if (pbl_add_proto_file_to_be_parsed((pbl_descriptor_pool_t*) pool, filename)) {
        return run_pbl_parser((pbl_descriptor_pool_t*) pool, FALSE);
    } else {
        return 2;
    }
}

/* like DescriptorPool::FindMethodByName */
const PbwMethodDescriptor*
pbw_DescriptorPool_FindMethodByName(const PbwDescriptorPool* pool, const char* name) {
    return (const PbwMethodDescriptor*)pbl_message_descriptor_pool_FindMethodByName((pbl_descriptor_pool_t*) pool, name);
}

/* like MethodDescriptor::name() */
const char*
pbw_MethodDescriptor_name(const PbwMethodDescriptor* method) {
    return pbl_method_descriptor_name((const pbl_method_descriptor_t*) method);
}

/* like MethodDescriptor::full_name() */
const char*
pbw_MethodDescriptor_full_name(const PbwMethodDescriptor* method) {
    return pbl_method_descriptor_full_name((const pbl_method_descriptor_t*) method);
}

/* like MethodDescriptor::input_type() */
const PbwDescriptor*
pbw_MethodDescriptor_input_type(const PbwMethodDescriptor* method) {
    return (const PbwDescriptor*)pbl_method_descriptor_input_type((const pbl_method_descriptor_t*) method);
}

/* like MethodDescriptor::output_type() */
const PbwDescriptor*
pbw_MethodDescriptor_output_type(const PbwMethodDescriptor* method) {
    return (const PbwDescriptor*)pbl_method_descriptor_output_type((const pbl_method_descriptor_t*) method);
}

/* like DescriptorPool::FindMessageTypeByName() */
const PbwDescriptor*
pbw_DescriptorPool_FindMessageTypeByName(const PbwDescriptorPool* pool, const char* name) {
    return (const PbwDescriptor*)pbl_message_descriptor_pool_FindMessageTypeByName((const pbl_descriptor_pool_t*) pool, name);
}

/* like Descriptor::full_name() */
const char*
pbw_Descriptor_full_name(const PbwDescriptor* message) {
    return pbl_message_descriptor_full_name((const pbl_message_descriptor_t*) message);
}

/* like Descriptor::name() */
const char*
pbw_Descriptor_name(const PbwDescriptor* message) {
    return pbl_message_descriptor_name((const pbl_message_descriptor_t*) message);
}

/* like Descriptor::field_count() */
int
pbw_Descriptor_field_count(const PbwDescriptor* message) {
    return pbl_message_descriptor_field_count((const pbl_message_descriptor_t*) message);
}

/* like Descriptor::field() */
const PbwFieldDescriptor*
pbw_Descriptor_field(const PbwDescriptor* message, int field_index) {
    return (const PbwFieldDescriptor*)pbl_message_descriptor_field((const pbl_message_descriptor_t*) message, field_index);
}

/* like Descriptor::FindFieldByNumber() */
const PbwFieldDescriptor*
pbw_Descriptor_FindFieldByNumber(const PbwDescriptor* message, int number) {
    return (const PbwFieldDescriptor*)pbl_message_descriptor_FindFieldByNumber((const pbl_message_descriptor_t*) message, number);
}

/* like Descriptor::FindFieldByName() */
const PbwFieldDescriptor*
pbw_Descriptor_FindFieldByName(const PbwDescriptor* message, const char* name) {
    return (const PbwFieldDescriptor*)pbl_message_descriptor_FindFieldByName((const pbl_message_descriptor_t*) message, name);
}

/* like FieldDescriptor::full_name() */
const char*
pbw_FieldDescriptor_full_name(const PbwFieldDescriptor* field) {
    return pbl_field_descriptor_full_name((const pbl_field_descriptor_t*) field);
}

/* like FieldDescriptor::name() */
const char*
pbw_FieldDescriptor_name(const PbwFieldDescriptor* field) {
    return pbl_field_descriptor_name((const pbl_field_descriptor_t*) field);
}

/* like FieldDescriptor::number() */
int
pbw_FieldDescriptor_number(const PbwFieldDescriptor* field) {
    return pbl_field_descriptor_number((const pbl_field_descriptor_t*) field);
}

/* like FieldDescriptor::type() */
int
pbw_FieldDescriptor_type(const PbwFieldDescriptor* field) {
    return pbl_field_descriptor_type((const pbl_field_descriptor_t*) field);
}

/* like FieldDescriptor::is_repeated() */
int
pbw_FieldDescriptor_is_repeated(const PbwFieldDescriptor* field) {
    return pbl_field_descriptor_is_repeated((const pbl_field_descriptor_t*) field);;
}

/* like FieldDescriptor::is_packed() */
int
pbw_FieldDescriptor_is_packed(const PbwFieldDescriptor* field) {
    return pbl_field_descriptor_is_packed((const pbl_field_descriptor_t*) field);;
}

/* like FieldDescriptor::typeName() */
const char*
pbw_FieldDescriptor_typeName(int field_type) {
    return pbl_field_descriptor_TypeName(field_type);
}

/* like FieldDescriptor::message_type() */
const PbwDescriptor*
pbw_FieldDescriptor_message_type(const PbwFieldDescriptor* field) {
    return (const PbwDescriptor*)pbl_field_descriptor_message_type((const pbl_field_descriptor_t*) field);
}

/* like FieldDescriptor::enum_type() */
const PbwEnumDescriptor*
pbw_FieldDescriptor_enum_type(const PbwFieldDescriptor* field) {
    return (const PbwEnumDescriptor*)pbl_field_descriptor_enum_type((const pbl_field_descriptor_t*) field);
}

/* like EnumDescriptor::name() */
const char*
pbw_EnumDescriptor_name(const PbwEnumDescriptor* anEnum) {
    return pbl_enum_descriptor_name((const pbl_enum_descriptor_t*) anEnum);
}

/* like EnumDescriptor::full_name() */
const char*
pbw_EnumDescriptor_full_name(const PbwEnumDescriptor* anEnum) {
    return pbl_enum_descriptor_full_name((const pbl_enum_descriptor_t*) anEnum);
}

/* like EnumDescriptor::value_count() */
int
pbw_EnumDescriptor_value_count(const PbwEnumDescriptor* anEnum) {
    return pbl_enum_descriptor_value_count((const pbl_enum_descriptor_t*) anEnum);
}

/* like EnumDescriptor::value() */
const PbwEnumValueDescriptor*
pbw_EnumDescriptor_value(const PbwEnumDescriptor* anEnum, int value_index) {
    return (const PbwEnumValueDescriptor*) pbl_enum_descriptor_value((const pbl_enum_descriptor_t*) anEnum, value_index);
}

/* like EnumDescriptor::FindValueByNumber() */
const PbwEnumValueDescriptor*
pbw_EnumDescriptor_FindValueByNumber(const PbwEnumDescriptor* anEnum, int number) {
    return (const PbwEnumValueDescriptor*)pbl_enum_descriptor_FindValueByNumber((const pbl_enum_descriptor_t*) anEnum, number);
}

/* like EnumValueDescriptor::name() */
const char*
pbw_EnumValueDescriptor_name(const PbwEnumValueDescriptor* enumValue) {
    return pbl_enum_value_descriptor_name((const pbl_enum_value_descriptor_t*) enumValue);
}

/* like EnumValueDescriptor::full_name() */
const char*
pbw_EnumValueDescriptor_full_name(const PbwEnumValueDescriptor* enumValue) {
    return pbl_enum_value_descriptor_full_name((const pbl_enum_value_descriptor_t*) enumValue);
}

/* like EnumValueDescriptor::number() */
int
pbw_EnumValueDescriptor_number(const PbwEnumValueDescriptor* enumValue) {
    return pbl_enum_value_descriptor_number((const pbl_enum_value_descriptor_t*) enumValue);
}

/* visit all messages of this pool */
void
pbw_foreach_message(const PbwDescriptorPool* pool, void (*cb)(const PbwDescriptor* message, void* userdata), void* userdata)
{
    pbl_foreach_message((const pbl_descriptor_pool_t*) pool, (void (*)(const pbl_message_descriptor_t*, void*)) cb, userdata);
}

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 4
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=4 tabstop=8 expandtab:
 * :indentSize=4:tabSize=8:noTabs=true:
 */
