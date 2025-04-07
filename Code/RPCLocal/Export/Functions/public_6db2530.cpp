#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2539 _public_6db2539
#define public_6db2542 _public_6db2542

PROC_DECLARE(0x6db2530, internal_6db2530, public_6db2530);
/* CHUNK of public_6d89190 */
extern "C" NAKED register_t __cdecl internal_6db2530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6db3094]
        public_6db2539 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_6db3094]
        public_6db2542 : nop
        mov eax, offset public_6db6cbc
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2530)
        ASM_EXPORT_ENTRY_FIRST(0x6db2539, public_6db2539)
        ASM_EXPORT_ENTRY_LAST(0x6db2542, public_6db2542)
    }
}

#undef public_6db2539
#undef public_6db2542

#pragma init_seg(compiler)
extern "C" void const* const public_6db2539 = __AsmFindLabelExport(&internal_6db2530, 0x6db2539);
extern "C" void const* const public_6db2542 = __AsmFindLabelExport(&internal_6db2530, 0x6db2542);
