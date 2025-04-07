#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393a6b _public_6393a6b

PROC_DECLARE(0x6393a60, internal_6393a60, public_6393a60);
/* CHUNK of public_629dbd0 */
extern "C" NAKED register_t __cdecl internal_6393a60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_62881d0
        public_6393a6b : nop
        mov eax, offset public_63acd64
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393a60)
        ASM_EXPORT_ENTRY_SINGLE(0x6393a6b, public_6393a6b)
    }
}

#undef public_6393a6b

#pragma init_seg(compiler)
extern "C" void const* const public_6393a6b = __AsmFindLabelExport(&internal_6393a60, 0x6393a6b);
