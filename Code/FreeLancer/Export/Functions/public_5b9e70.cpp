#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9e7b _public_5b9e7b

PROC_DECLARE(0x5b9e70, internal_5b9e70, public_5b9e70);
/* CHUNK of public_452fa0 */
extern "C" NAKED register_t __cdecl internal_5b9e70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0xD0]
        jmp public_44fd80
        public_5b9e7b : nop
        mov eax, offset public_5f419c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9e70)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9e7b, public_5b9e7b)
    }
}

#undef public_5b9e7b

#pragma init_seg(compiler)
extern "C" void const* const public_5b9e7b = __AsmFindLabelExport(&internal_5b9e70, 0x5b9e7b);
