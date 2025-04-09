#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c153b _public_5c153b

PROC_DECLARE(0x5c1530, internal_5c1530, public_5c1530);
/* CHUNK of public_558310 */
extern "C" NAKED register_t __cdecl internal_5c1530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x7C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c153b : nop
        mov eax, offset public_5fb8a8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1530)
        ASM_EXPORT_ENTRY_SINGLE(0x5c153b, public_5c153b)
    }
}

#undef public_5c153b

#pragma init_seg(compiler)
extern "C" void const* const public_5c153b = __AsmFindLabelExport(&internal_5c1530, 0x5c153b);
