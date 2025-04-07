#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248dcb _public_6248dcb

PROC_DECLARE(0x6248dc0, internal_6248dc0, public_6248dc0);
/* CHUNK of public_6224a90 */
extern "C" NAKED register_t __cdecl internal_6248dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248dcb : nop
        mov eax, offset public_6251ce0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248dc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6248dcb, public_6248dcb)
    }
}

#undef public_6248dcb

#pragma init_seg(compiler)
extern "C" void const* const public_6248dcb = __AsmFindLabelExport(&internal_6248dc0, 0x6248dcb);
