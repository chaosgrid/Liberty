#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3560);
CLANG_FORWARD_PROC_SYMBOL(public_62a3810);
CLANG_FORWARD_PROC_SYMBOL(public_62a67c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393df8 _public_6393df8
#define public_6393e03 _public_6393e03
#define public_6393e0e _public_6393e0e
#define public_6393e16 _public_6393e16

PROC_DECLARE(0x6393df0, internal_6393df0, public_6393df0);
/* CHUNK of public_62a47a0 */
extern "C" NAKED register_t __cdecl internal_6393df0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62a3560
        public_6393df8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x14
        jmp public_62a3810
        public_6393e03 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x34
        jmp public_62a68e0
        public_6393e0e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62a67c0
        public_6393e16 : nop
        mov eax, offset public_63ad288
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393df0)
        ASM_EXPORT_ENTRY_FIRST(0x6393df8, public_6393df8)
        ASM_EXPORT_ENTRY(0x6393e03, public_6393e03)
        ASM_EXPORT_ENTRY(0x6393e0e, public_6393e0e)
        ASM_EXPORT_ENTRY_LAST(0x6393e16, public_6393e16)
    }
}

#undef public_6393df8
#undef public_6393e03
#undef public_6393e0e
#undef public_6393e16

#pragma init_seg(compiler)
extern "C" void const* const public_6393df8 = __AsmFindLabelExport(&internal_6393df0, 0x6393df8);
extern "C" void const* const public_6393e03 = __AsmFindLabelExport(&internal_6393df0, 0x6393e03);
extern "C" void const* const public_6393e0e = __AsmFindLabelExport(&internal_6393df0, 0x6393e0e);
extern "C" void const* const public_6393e16 = __AsmFindLabelExport(&internal_6393df0, 0x6393e16);
