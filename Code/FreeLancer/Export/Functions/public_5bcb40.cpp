#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcb4b _public_5bcb4b

PROC_DECLARE(0x5bcb40, internal_5bcb40, public_5bcb40);
/* CHUNK of public_4a2e40 */
extern "C" NAKED register_t __cdecl internal_5bcb40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bcb4b : nop
        mov eax, offset public_5f6dd4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcb40)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcb4b, public_5bcb4b)
    }
}

#undef public_5bcb4b

#pragma init_seg(compiler)
extern "C" void const* const public_5bcb4b = __AsmFindLabelExport(&internal_5bcb40, 0x5bcb4b);
