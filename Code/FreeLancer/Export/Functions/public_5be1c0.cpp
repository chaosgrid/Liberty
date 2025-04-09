#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_4d7400);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be1c8 _public_5be1c8
#define public_5be1e0 _public_5be1e0
#define public_5be1e7 _public_5be1e7
#define public_5be1ef _public_5be1ef
#define public_5be1fd _public_5be1fd
#define public_5be20b _public_5be20b
#define public_5be219 _public_5be219
#define public_5be221 _public_5be221
#define public_5be229 _public_5be229
#define public_5be231 _public_5be231
#define public_5be239 _public_5be239

PROC_DECLARE(0x5be1c0, internal_5be1c0, public_5be1c0);
/* CHUNK of public_4d64c0 */
extern "C" NAKED register_t __cdecl internal_5be1c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4c8630
        public_5be1c8 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_5be1e0
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x38
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_5be1e7
        public_5be1e0 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_5be1e7 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_59fa50
        public_5be1ef : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x364
        jmp public_4d7400
        public_5be1fd : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x390
        jmp public_4d7400
        public_5be20b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3BC
        jmp public_4d7400
        public_5be219 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59ef20
        public_5be221 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59ef20
        public_5be229 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59ef20
        public_5be231 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59ef20
        public_5be239 : nop
        mov eax, offset public_5f8584
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be1c0)
        ASM_EXPORT_ENTRY_FIRST(0x5be1c8, public_5be1c8)
        ASM_EXPORT_ENTRY(0x5be1e0, public_5be1e0)
        ASM_EXPORT_ENTRY(0x5be1e7, public_5be1e7)
        ASM_EXPORT_ENTRY(0x5be1ef, public_5be1ef)
        ASM_EXPORT_ENTRY(0x5be1fd, public_5be1fd)
        ASM_EXPORT_ENTRY(0x5be20b, public_5be20b)
        ASM_EXPORT_ENTRY(0x5be219, public_5be219)
        ASM_EXPORT_ENTRY(0x5be221, public_5be221)
        ASM_EXPORT_ENTRY(0x5be229, public_5be229)
        ASM_EXPORT_ENTRY(0x5be231, public_5be231)
        ASM_EXPORT_ENTRY_LAST(0x5be239, public_5be239)
    }
}

#undef public_5be1c8
#undef public_5be1e0
#undef public_5be1e7
#undef public_5be1ef
#undef public_5be1fd
#undef public_5be20b
#undef public_5be219
#undef public_5be221
#undef public_5be229
#undef public_5be231
#undef public_5be239

#pragma init_seg(compiler)
extern "C" void const* const public_5be1c8 = __AsmFindLabelExport(&internal_5be1c0, 0x5be1c8);
extern "C" void const* const public_5be1e0 = __AsmFindLabelExport(&internal_5be1c0, 0x5be1e0);
extern "C" void const* const public_5be1e7 = __AsmFindLabelExport(&internal_5be1c0, 0x5be1e7);
extern "C" void const* const public_5be1ef = __AsmFindLabelExport(&internal_5be1c0, 0x5be1ef);
extern "C" void const* const public_5be1fd = __AsmFindLabelExport(&internal_5be1c0, 0x5be1fd);
extern "C" void const* const public_5be20b = __AsmFindLabelExport(&internal_5be1c0, 0x5be20b);
extern "C" void const* const public_5be219 = __AsmFindLabelExport(&internal_5be1c0, 0x5be219);
extern "C" void const* const public_5be221 = __AsmFindLabelExport(&internal_5be1c0, 0x5be221);
extern "C" void const* const public_5be229 = __AsmFindLabelExport(&internal_5be1c0, 0x5be229);
extern "C" void const* const public_5be231 = __AsmFindLabelExport(&internal_5be1c0, 0x5be231);
extern "C" void const* const public_5be239 = __AsmFindLabelExport(&internal_5be1c0, 0x5be239);
