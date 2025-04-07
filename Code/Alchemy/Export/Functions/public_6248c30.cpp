#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248c3b _public_6248c3b

PROC_DECLARE(0x6248c30, internal_6248c30, public_6248c30);
/* CHUNK of public_6222180 */
extern "C" NAKED register_t __cdecl internal_6248c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248c3b : nop
        mov eax, offset public_6251b20
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248c30)
        ASM_EXPORT_ENTRY_SINGLE(0x6248c3b, public_6248c3b)
    }
}

#undef public_6248c3b

#pragma init_seg(compiler)
extern "C" void const* const public_6248c3b = __AsmFindLabelExport(&internal_6248c30, 0x6248c3b);
