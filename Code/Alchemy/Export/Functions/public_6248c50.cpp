#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248c5b _public_6248c5b

PROC_DECLARE(0x6248c50, internal_6248c50, public_6248c50);
/* CHUNK of public_62224e0 */
extern "C" NAKED register_t __cdecl internal_6248c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248c5b : nop
        mov eax, offset public_6251b44
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248c50)
        ASM_EXPORT_ENTRY_SINGLE(0x6248c5b, public_6248c5b)
    }
}

#undef public_6248c5b

#pragma init_seg(compiler)
extern "C" void const* const public_6248c5b = __AsmFindLabelExport(&internal_6248c50, 0x6248c5b);
