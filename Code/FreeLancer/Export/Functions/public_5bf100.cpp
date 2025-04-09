#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf10b _public_5bf10b

PROC_DECLARE(0x5bf100, internal_5bf100, public_5bf100);
/* CHUNK of public_4f28a0 */
extern "C" NAKED register_t __cdecl internal_5bf100()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf10b : nop
        mov eax, offset public_5f9060
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf100)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf10b, public_5bf10b)
    }
}

#undef public_5bf10b

#pragma init_seg(compiler)
extern "C" void const* const public_5bf10b = __AsmFindLabelExport(&internal_5bf100, 0x5bf10b);
