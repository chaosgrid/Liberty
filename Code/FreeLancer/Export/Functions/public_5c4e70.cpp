#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4e78 _public_5c4e78

PROC_DECLARE(0x5c4e70, internal_5c4e70, public_5c4e70);
/* CHUNK of public_59e980 */
extern "C" NAKED register_t __cdecl internal_5c4e70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x60]
        jmp public_526a20
        public_5c4e78 : nop
        mov eax, offset public_5fec30
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4e70)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4e78, public_5c4e78)
    }
}

#undef public_5c4e78

#pragma init_seg(compiler)
extern "C" void const* const public_5c4e78 = __AsmFindLabelExport(&internal_5c4e70, 0x5c4e78);
