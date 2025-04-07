#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639631b _public_639631b

PROC_DECLARE(0x6396310, internal_6396310, public_6396310);
/* CHUNK of public_630d6c0 */
extern "C" NAKED register_t __cdecl internal_6396310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639631b : nop
        mov eax, offset public_63b0168
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396310)
        ASM_EXPORT_ENTRY_SINGLE(0x639631b, public_639631b)
    }
}

#undef public_639631b

#pragma init_seg(compiler)
extern "C" void const* const public_639631b = __AsmFindLabelExport(&internal_6396310, 0x639631b);
