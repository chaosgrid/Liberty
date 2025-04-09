#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c14de _public_5c14de

PROC_DECLARE(0x5c14d0, internal_5c14d0, public_5c14d0);
/* CHUNK of public_556fd0 */
extern "C" NAKED register_t __cdecl internal_5c14d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x9C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c14de : nop
        mov eax, offset public_5fb83c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c14d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c14de, public_5c14de)
    }
}

#undef public_5c14de

#pragma init_seg(compiler)
extern "C" void const* const public_5c14de = __AsmFindLabelExport(&internal_5c14d0, 0x5c14de);
