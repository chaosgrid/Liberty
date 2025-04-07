#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624828b _public_624828b

PROC_DECLARE(0x6248280, internal_6248280, public_6248280);
/* CHUNK of public_6215e80 */
extern "C" NAKED register_t __cdecl internal_6248280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624828b : nop
        mov eax, offset public_62510fc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248280)
        ASM_EXPORT_ENTRY_SINGLE(0x624828b, public_624828b)
    }
}

#undef public_624828b

#pragma init_seg(compiler)
extern "C" void const* const public_624828b = __AsmFindLabelExport(&internal_6248280, 0x624828b);
