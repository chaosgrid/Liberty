#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6135e _public_6d6135e

PROC_DECLARE(0x6d61350, internal_6d61350, public_6d61350);
/* CHUNK of public_6d08ef0 */
extern "C" NAKED register_t __cdecl internal_6d61350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xD8]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6135e : nop
        mov eax, offset public_6d71f58
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61350)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6135e, public_6d6135e)
    }
}

#undef public_6d6135e

#pragma init_seg(compiler)
extern "C" void const* const public_6d6135e = __AsmFindLabelExport(&internal_6d61350, 0x6d6135e);
