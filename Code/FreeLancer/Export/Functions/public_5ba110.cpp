#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba11b _public_5ba11b

PROC_DECLARE(0x5ba110, internal_5ba110, public_5ba110);
/* CHUNK of public_457f10 */
extern "C" NAKED register_t __cdecl internal_5ba110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5ba11b : nop
        mov eax, offset public_5f44c4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba110)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba11b, public_5ba11b)
    }
}

#undef public_5ba11b

#pragma init_seg(compiler)
extern "C" void const* const public_5ba11b = __AsmFindLabelExport(&internal_5ba110, 0x5ba11b);
