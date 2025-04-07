#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf418 _public_5bf418
#define public_5bf420 _public_5bf420

PROC_DECLARE(0x5bf410, internal_5bf410, public_5bf410);
/* CHUNK of public_4f6970 */
extern "C" NAKED register_t __cdecl internal_5bf410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_405840
        public_5bf418 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_405840
        public_5bf420 : nop
        mov eax, offset public_5f936c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf410)
        ASM_EXPORT_ENTRY_FIRST(0x5bf418, public_5bf418)
        ASM_EXPORT_ENTRY_LAST(0x5bf420, public_5bf420)
    }
}

#undef public_5bf418
#undef public_5bf420

#pragma init_seg(compiler)
extern "C" void const* const public_5bf418 = __AsmFindLabelExport(&internal_5bf410, 0x5bf418);
extern "C" void const* const public_5bf420 = __AsmFindLabelExport(&internal_5bf410, 0x5bf420);
