#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624952b _public_624952b
#define public_6249536 _public_6249536

PROC_DECLARE(0x6249520, internal_6249520, public_6249520);
/* CHUNK of public_622c500 */
extern "C" NAKED register_t __cdecl internal_6249520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x168]
        jmp public_622d2d0
        public_624952b : nop
        lea ecx, ss:[ebp-0x134]
        jmp public_622d2d0
        public_6249536 : nop
        mov eax, offset public_62524b8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249520)
        ASM_EXPORT_ENTRY_FIRST(0x624952b, public_624952b)
        ASM_EXPORT_ENTRY_LAST(0x6249536, public_6249536)
    }
}

#undef public_624952b
#undef public_6249536

#pragma init_seg(compiler)
extern "C" void const* const public_624952b = __AsmFindLabelExport(&internal_6249520, 0x624952b);
extern "C" void const* const public_6249536 = __AsmFindLabelExport(&internal_6249520, 0x6249536);
