#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8928 _public_5b8928
#define public_5b8930 _public_5b8930

PROC_DECLARE(0x5b8920, internal_5b8920, public_5b8920);
/* CHUNK of public_417f10 */
extern "C" NAKED register_t __cdecl internal_5b8920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_405840
        public_5b8928 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_405840
        public_5b8930 : nop
        mov eax, offset public_5f2790
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8920)
        ASM_EXPORT_ENTRY_FIRST(0x5b8928, public_5b8928)
        ASM_EXPORT_ENTRY_LAST(0x5b8930, public_5b8930)
    }
}

#undef public_5b8928
#undef public_5b8930

#pragma init_seg(compiler)
extern "C" void const* const public_5b8928 = __AsmFindLabelExport(&internal_5b8920, 0x5b8928);
extern "C" void const* const public_5b8930 = __AsmFindLabelExport(&internal_5b8920, 0x5b8930);
