#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c10);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624830b _public_624830b
#define public_6248316 _public_6248316

PROC_DECLARE(0x6248300, internal_6248300, public_6248300);
/* CHUNK of public_6216f20 */
extern "C" NAKED register_t __cdecl internal_6248300()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x9C]
        jmp public_6217c10
        public_624830b : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_6217c10
        public_6248316 : nop
        mov eax, offset public_62511ac
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248300)
        ASM_EXPORT_ENTRY_FIRST(0x624830b, public_624830b)
        ASM_EXPORT_ENTRY_LAST(0x6248316, public_6248316)
    }
}

#undef public_624830b
#undef public_6248316

#pragma init_seg(compiler)
extern "C" void const* const public_624830b = __AsmFindLabelExport(&internal_6248300, 0x624830b);
extern "C" void const* const public_6248316 = __AsmFindLabelExport(&internal_6248300, 0x6248316);
