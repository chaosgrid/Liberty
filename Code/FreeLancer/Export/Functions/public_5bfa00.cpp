#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_504bb0);
CLANG_FORWARD_PROC_SYMBOL(public_504be0);
CLANG_FORWARD_PROC_SYMBOL(public_504c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfa08 _public_5bfa08
#define public_5bfa13 _public_5bfa13
#define public_5bfa1e _public_5bfa1e
#define public_5bfa2c _public_5bfa2c
#define public_5bfa3a _public_5bfa3a
#define public_5bfa48 _public_5bfa48

PROC_DECLARE(0x5bfa00, internal_5bfa00, public_5bfa00);
/* CHUNK of public_504cf0 */
extern "C" NAKED register_t __cdecl internal_5bfa00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_504bb0
        public_5bfa08 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_41dc50
        public_5bfa13 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x38
        jmp public_504c30
        public_5bfa1e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xE4
        jmp public_502d90
        public_5bfa2c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xF4
        jmp public_4a2d30
        public_5bfa3a : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x100
        jmp public_504be0
        public_5bfa48 : nop
        mov eax, offset public_5f9974
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfa00)
        ASM_EXPORT_ENTRY_FIRST(0x5bfa08, public_5bfa08)
        ASM_EXPORT_ENTRY(0x5bfa13, public_5bfa13)
        ASM_EXPORT_ENTRY(0x5bfa1e, public_5bfa1e)
        ASM_EXPORT_ENTRY(0x5bfa2c, public_5bfa2c)
        ASM_EXPORT_ENTRY(0x5bfa3a, public_5bfa3a)
        ASM_EXPORT_ENTRY_LAST(0x5bfa48, public_5bfa48)
    }
}

#undef public_5bfa08
#undef public_5bfa13
#undef public_5bfa1e
#undef public_5bfa2c
#undef public_5bfa3a
#undef public_5bfa48

#pragma init_seg(compiler)
extern "C" void const* const public_5bfa08 = __AsmFindLabelExport(&internal_5bfa00, 0x5bfa08);
extern "C" void const* const public_5bfa13 = __AsmFindLabelExport(&internal_5bfa00, 0x5bfa13);
extern "C" void const* const public_5bfa1e = __AsmFindLabelExport(&internal_5bfa00, 0x5bfa1e);
extern "C" void const* const public_5bfa2c = __AsmFindLabelExport(&internal_5bfa00, 0x5bfa2c);
extern "C" void const* const public_5bfa3a = __AsmFindLabelExport(&internal_5bfa00, 0x5bfa3a);
extern "C" void const* const public_5bfa48 = __AsmFindLabelExport(&internal_5bfa00, 0x5bfa48);
