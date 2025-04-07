#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcadb _public_5bcadb

PROC_DECLARE(0x5bcad0, internal_5bcad0, public_5bcad0);
/* CHUNK of public_49c260 */
extern "C" NAKED register_t __cdecl internal_5bcad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x12C]
        jmp public_405840
        public_5bcadb : nop
        mov eax, offset public_5f6cf8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcad0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcadb, public_5bcadb)
    }
}

#undef public_5bcadb

#pragma init_seg(compiler)
extern "C" void const* const public_5bcadb = __AsmFindLabelExport(&internal_5bcad0, 0x5bcadb);
