#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348be0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397c58 _public_6397c58

PROC_DECLARE(0x6397c50, internal_6397c50, public_6397c50);
/* CHUNK of public_634aef0 */
extern "C" NAKED register_t __cdecl internal_6397c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6348be0
        public_6397c58 : nop
        mov eax, offset public_63b1f70
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397c50)
        ASM_EXPORT_ENTRY_SINGLE(0x6397c58, public_6397c58)
    }
}

#undef public_6397c58

#pragma init_seg(compiler)
extern "C" void const* const public_6397c58 = __AsmFindLabelExport(&internal_6397c50, 0x6397c58);
