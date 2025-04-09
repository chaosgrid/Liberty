#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf32b _public_5bf32b

PROC_DECLARE(0x5bf320, internal_5bf320, public_5bf320);
/* CHUNK of public_4f4da0 */
extern "C" NAKED register_t __cdecl internal_5bf320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf32b : nop
        mov eax, offset public_5f9250
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf320)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf32b, public_5bf32b)
    }
}

#undef public_5bf32b

#pragma init_seg(compiler)
extern "C" void const* const public_5bf32b = __AsmFindLabelExport(&internal_5bf320, 0x5bf32b);
