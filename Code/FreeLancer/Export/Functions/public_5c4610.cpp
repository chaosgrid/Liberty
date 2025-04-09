#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4618 _public_5c4618

PROC_DECLARE(0x5c4610, internal_5c4610, public_5c4610);
/* CHUNK of public_58bcb0 */
extern "C" NAKED register_t __cdecl internal_5c4610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_444e20
        public_5c4618 : nop
        mov eax, offset public_5fe290
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4610)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4618, public_5c4618)
    }
}

#undef public_5c4618

#pragma init_seg(compiler)
extern "C" void const* const public_5c4618 = __AsmFindLabelExport(&internal_5c4610, 0x5c4618);
