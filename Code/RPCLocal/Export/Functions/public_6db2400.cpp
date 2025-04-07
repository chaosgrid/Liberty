#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2409 _public_6db2409

PROC_DECLARE(0x6db2400, internal_6db2400, public_6db2400);
/* CHUNK of public_6d84c60 */
extern "C" NAKED register_t __cdecl internal_6db2400()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6db301c]
        public_6db2409 : nop
        mov eax, offset public_6db6ae4
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2400)
        ASM_EXPORT_ENTRY_SINGLE(0x6db2409, public_6db2409)
    }
}

#undef public_6db2409

#pragma init_seg(compiler)
extern "C" void const* const public_6db2409 = __AsmFindLabelExport(&internal_6db2400, 0x6db2409);
