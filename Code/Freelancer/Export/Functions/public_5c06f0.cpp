#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c06fb _public_5c06fb

PROC_DECLARE(0x5c06f0, internal_5c06f0, public_5c06f0);
/* CHUNK of public_531cf0 */
extern "C" NAKED register_t __cdecl internal_5c06f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x94]
        jmp public_502d90
        public_5c06fb : nop
        mov eax, offset public_5fa864
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c06f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c06fb, public_5c06fb)
    }
}

#undef public_5c06fb

#pragma init_seg(compiler)
extern "C" void const* const public_5c06fb = __AsmFindLabelExport(&internal_5c06f0, 0x5c06fb);
