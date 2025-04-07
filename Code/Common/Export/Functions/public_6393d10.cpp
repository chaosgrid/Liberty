#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a67c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393d18 _public_6393d18

PROC_DECLARE(0x6393d10, internal_6393d10, public_6393d10);
/* CHUNK of public_62a3560 */
extern "C" NAKED register_t __cdecl internal_6393d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62a67c0
        public_6393d18 : nop
        mov eax, offset public_63ad140
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393d10)
        ASM_EXPORT_ENTRY_SINGLE(0x6393d18, public_6393d18)
    }
}

#undef public_6393d18

#pragma init_seg(compiler)
extern "C" void const* const public_6393d18 = __AsmFindLabelExport(&internal_6393d10, 0x6393d18);
