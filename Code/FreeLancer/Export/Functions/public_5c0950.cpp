#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_534ff0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0958 _public_5c0958

PROC_DECLARE(0x5c0950, internal_5c0950, public_5c0950);
/* CHUNK of public_534e60 */
extern "C" NAKED register_t __cdecl internal_5c0950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_534ff0
        public_5c0958 : nop
        mov eax, offset public_5fab68
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0950)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0958, public_5c0958)
    }
}

#undef public_5c0958

#pragma init_seg(compiler)
extern "C" void const* const public_5c0958 = __AsmFindLabelExport(&internal_5c0950, 0x5c0958);
