#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4979 _public_5c4979

PROC_DECLARE(0x5c4970, internal_5c4970, public_5c4970);
/* CHUNK of public_5919f0 */
extern "C" NAKED register_t __cdecl internal_5c4970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7090]
        public_5c4979 : nop
        mov eax, offset public_5fe670
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4970)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4979, public_5c4979)
    }
}

#undef public_5c4979

#pragma init_seg(compiler)
extern "C" void const* const public_5c4979 = __AsmFindLabelExport(&internal_5c4970, 0x5c4979);
