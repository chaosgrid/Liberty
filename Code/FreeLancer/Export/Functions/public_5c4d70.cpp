#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4d7b _public_5c4d7b

PROC_DECLARE(0x5c4d70, internal_5c4d70, public_5c4d70);
/* CHUNK of public_59c6f0 */
extern "C" NAKED register_t __cdecl internal_5c4d70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4d7b : nop
        mov eax, offset public_5fea8c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4d70)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4d7b, public_5c4d7b)
    }
}

#undef public_5c4d7b

#pragma init_seg(compiler)
extern "C" void const* const public_5c4d7b = __AsmFindLabelExport(&internal_5c4d70, 0x5c4d7b);
