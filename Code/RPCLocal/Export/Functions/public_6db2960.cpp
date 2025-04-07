#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2968 _public_6db2968
#define public_6db2970 _public_6db2970

PROC_DECLARE(0x6db2960, internal_6db2960, public_6db2960);
/* CHUNK of public_6da1730 */
extern "C" NAKED register_t __cdecl internal_6db2960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x74]
        jmp public_6da36f0
        public_6db2968 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6da36f0
        public_6db2970 : nop
        mov eax, offset public_6db7240
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2960)
        ASM_EXPORT_ENTRY_FIRST(0x6db2968, public_6db2968)
        ASM_EXPORT_ENTRY_LAST(0x6db2970, public_6db2970)
    }
}

#undef public_6db2968
#undef public_6db2970

#pragma init_seg(compiler)
extern "C" void const* const public_6db2968 = __AsmFindLabelExport(&internal_6db2960, 0x6db2968);
extern "C" void const* const public_6db2970 = __AsmFindLabelExport(&internal_6db2960, 0x6db2970);
