#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420cb0);
CLANG_FORWARD_PROC_SYMBOL(public_426de0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8bdb _public_5b8bdb
#define public_5b8be3 _public_5b8be3

PROC_DECLARE(0x5b8bd0, internal_5b8bd0, public_5b8bd0);
/* CHUNK of public_426e20 */
extern "C" NAKED register_t __cdecl internal_5b8bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x88]
        jmp public_426de0
        public_5b8bdb : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_420cb0
        public_5b8be3 : nop
        mov eax, offset public_5f2a88
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8bd0)
        ASM_EXPORT_ENTRY_FIRST(0x5b8bdb, public_5b8bdb)
        ASM_EXPORT_ENTRY_LAST(0x5b8be3, public_5b8be3)
    }
}

#undef public_5b8bdb
#undef public_5b8be3

#pragma init_seg(compiler)
extern "C" void const* const public_5b8bdb = __AsmFindLabelExport(&internal_5b8bd0, 0x5b8bdb);
extern "C" void const* const public_5b8be3 = __AsmFindLabelExport(&internal_5b8bd0, 0x5b8be3);
