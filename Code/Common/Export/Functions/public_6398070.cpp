#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639807b _public_639807b

PROC_DECLARE(0x6398070, internal_6398070, public_6398070);
/* CHUNK of public_6352b90 */
extern "C" NAKED register_t __cdecl internal_6398070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x828]
        jmp public_62a8920
        public_639807b : nop
        mov eax, offset public_63b2478
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398070)
        ASM_EXPORT_ENTRY_SINGLE(0x639807b, public_639807b)
    }
}

#undef public_639807b

#pragma init_seg(compiler)
extern "C" void const* const public_639807b = __AsmFindLabelExport(&internal_6398070, 0x639807b);
