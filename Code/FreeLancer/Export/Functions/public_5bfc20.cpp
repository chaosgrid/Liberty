#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfc2b _public_5bfc2b

PROC_DECLARE(0x5bfc20, internal_5bfc20, public_5bfc20);
/* CHUNK of public_50c630 */
extern "C" NAKED register_t __cdecl internal_5bfc20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfc2b : nop
        mov eax, offset public_5f9b50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfc20)
        ASM_EXPORT_ENTRY_SINGLE(0x5bfc2b, public_5bfc2b)
    }
}

#undef public_5bfc2b

#pragma init_seg(compiler)
extern "C" void const* const public_5bfc2b = __AsmFindLabelExport(&internal_5bfc20, 0x5bfc2b);
