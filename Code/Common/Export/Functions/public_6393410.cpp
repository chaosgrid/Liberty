#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393418 _public_6393418

PROC_DECLARE(0x6393410, internal_6393410, public_6393410);
/* CHUNK of public_628a510 */
extern "C" NAKED register_t __cdecl internal_6393410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_6348710
        public_6393418 : nop
        mov eax, offset public_63ac490
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393410)
        ASM_EXPORT_ENTRY_SINGLE(0x6393418, public_6393418)
    }
}

#undef public_6393418

#pragma init_seg(compiler)
extern "C" void const* const public_6393418 = __AsmFindLabelExport(&internal_6393410, 0x6393418);
