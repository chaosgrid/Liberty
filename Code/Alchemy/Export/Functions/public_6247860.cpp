#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247868 _public_6247868
#define public_6247870 _public_6247870

PROC_DECLARE(0x6247860, internal_6247860, public_6247860);
/* CHUNK of public_620bda0 */
extern "C" NAKED register_t __cdecl internal_6247860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_620b6f0
        public_6247868 : nop
        lea ecx, ss:[ebp+4]
        jmp public_620b6f0
        public_6247870 : nop
        mov eax, offset public_6250678
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247860)
        ASM_EXPORT_ENTRY_FIRST(0x6247868, public_6247868)
        ASM_EXPORT_ENTRY_LAST(0x6247870, public_6247870)
    }
}

#undef public_6247868
#undef public_6247870

#pragma init_seg(compiler)
extern "C" void const* const public_6247868 = __AsmFindLabelExport(&internal_6247860, 0x6247868);
extern "C" void const* const public_6247870 = __AsmFindLabelExport(&internal_6247860, 0x6247870);
