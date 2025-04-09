#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c014b _public_5c014b

PROC_DECLARE(0x5c0140, internal_5c0140, public_5c0140);
/* CHUNK of public_524cb0 */
extern "C" NAKED register_t __cdecl internal_5c0140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c014b : nop
        mov eax, offset public_5fa104
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0140)
        ASM_EXPORT_ENTRY_SINGLE(0x5c014b, public_5c014b)
    }
}

#undef public_5c014b

#pragma init_seg(compiler)
extern "C" void const* const public_5c014b = __AsmFindLabelExport(&internal_5c0140, 0x5c014b);
