#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629abd0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394808 _public_6394808

PROC_DECLARE(0x6394800, internal_6394800, public_6394800);
/* CHUNK of public_62b7d90 */
extern "C" NAKED register_t __cdecl internal_6394800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_629abd0
        public_6394808 : nop
        mov eax, offset public_63addc4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394800)
        ASM_EXPORT_ENTRY_SINGLE(0x6394808, public_6394808)
    }
}

#undef public_6394808

#pragma init_seg(compiler)
extern "C" void const* const public_6394808 = __AsmFindLabelExport(&internal_6394800, 0x6394808);
