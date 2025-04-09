#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e6bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be918 _public_5be918

PROC_DECLARE(0x5be910, internal_5be910, public_5be910);
/* CHUNK of public_4e6270 */
extern "C" NAKED register_t __cdecl internal_5be910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_4e6bf0
        public_5be918 : nop
        mov eax, offset public_5f8adc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be910)
        ASM_EXPORT_ENTRY_SINGLE(0x5be918, public_5be918)
    }
}

#undef public_5be918

#pragma init_seg(compiler)
extern "C" void const* const public_5be918 = __AsmFindLabelExport(&internal_5be910, 0x5be918);
