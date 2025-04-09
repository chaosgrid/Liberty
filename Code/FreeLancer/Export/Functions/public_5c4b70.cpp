#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4b7b _public_5c4b7b

PROC_DECLARE(0x5c4b70, internal_5c4b70, public_5c4b70);
/* CHUNK of public_5992c0 */
extern "C" NAKED register_t __cdecl internal_5c4b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4b7b : nop
        mov eax, offset public_5fe88c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4b70)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4b7b, public_5c4b7b)
    }
}

#undef public_5c4b7b

#pragma init_seg(compiler)
extern "C" void const* const public_5c4b7b = __AsmFindLabelExport(&internal_5c4b70, 0x5c4b7b);
