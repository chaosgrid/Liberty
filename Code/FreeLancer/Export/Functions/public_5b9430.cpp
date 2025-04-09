#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c2b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9438 _public_5b9438

PROC_DECLARE(0x5b9430, internal_5b9430, public_5b9430);
/* CHUNK of public_43c330 */
extern "C" NAKED register_t __cdecl internal_5b9430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_43c2b0
        public_5b9438 : nop
        mov eax, offset public_5f33ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9430)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9438, public_5b9438)
    }
}

#undef public_5b9438

#pragma init_seg(compiler)
extern "C" void const* const public_5b9438 = __AsmFindLabelExport(&internal_5b9430, 0x5b9438);
