#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_448e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9a88 _public_5b9a88

PROC_DECLARE(0x5b9a80, internal_5b9a80, public_5b9a80);
/* CHUNK of public_4488f0 */
extern "C" NAKED register_t __cdecl internal_5b9a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_448e90
        public_5b9a88 : nop
        mov eax, offset public_5f3b20
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9a80)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9a88, public_5b9a88)
    }
}

#undef public_5b9a88

#pragma init_seg(compiler)
extern "C" void const* const public_5b9a88 = __AsmFindLabelExport(&internal_5b9a80, 0x5b9a88);
