#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfbdb _public_5bfbdb
#define public_5bfbe6 _public_5bfbe6
#define public_5bfbf1 _public_5bfbf1

PROC_DECLARE(0x5bfbd0, internal_5bfbd0, public_5bfbd0);
/* CHUNK of public_50b510 */
extern "C" NAKED register_t __cdecl internal_5bfbd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA0]
        jmp public_405840
        public_5bfbdb : nop
        lea ecx, ss:[ebp-0xAC]
        jmp public_405840
        public_5bfbe6 : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_405840
        public_5bfbf1 : nop
        mov eax, offset public_5f9b08
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfbd0)
        ASM_EXPORT_ENTRY_FIRST(0x5bfbdb, public_5bfbdb)
        ASM_EXPORT_ENTRY(0x5bfbe6, public_5bfbe6)
        ASM_EXPORT_ENTRY_LAST(0x5bfbf1, public_5bfbf1)
    }
}

#undef public_5bfbdb
#undef public_5bfbe6
#undef public_5bfbf1

#pragma init_seg(compiler)
extern "C" void const* const public_5bfbdb = __AsmFindLabelExport(&internal_5bfbd0, 0x5bfbdb);
extern "C" void const* const public_5bfbe6 = __AsmFindLabelExport(&internal_5bfbd0, 0x5bfbe6);
extern "C" void const* const public_5bfbf1 = __AsmFindLabelExport(&internal_5bfbd0, 0x5bfbf1);
