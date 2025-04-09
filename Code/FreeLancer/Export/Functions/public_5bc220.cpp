#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc22b _public_5bc22b

PROC_DECLARE(0x5bc220, internal_5bc220, public_5bc220);
/* CHUNK of public_488d10 */
extern "C" NAKED register_t __cdecl internal_5bc220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bc22b : nop
        mov eax, offset public_5f6608
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc220)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc22b, public_5bc22b)
    }
}

#undef public_5bc22b

#pragma init_seg(compiler)
extern "C" void const* const public_5bc22b = __AsmFindLabelExport(&internal_5bc220, 0x5bc22b);
