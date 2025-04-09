#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc33b _public_5bc33b

PROC_DECLARE(0x5bc330, internal_5bc330, public_5bc330);
/* CHUNK of public_48b1c0 */
extern "C" NAKED register_t __cdecl internal_5bc330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bc33b : nop
        mov eax, offset public_5f6758
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc330)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc33b, public_5bc33b)
    }
}

#undef public_5bc33b

#pragma init_seg(compiler)
extern "C" void const* const public_5bc33b = __AsmFindLabelExport(&internal_5bc330, 0x5bc33b);
