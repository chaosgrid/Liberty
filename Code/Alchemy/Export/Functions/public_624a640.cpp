#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a64b _public_624a64b

PROC_DECLARE(0x624a640, internal_624a640, public_624a640);
/* CHUNK of public_623d960 */
extern "C" NAKED register_t __cdecl internal_624a640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a64b : nop
        mov eax, offset public_6253698
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a640)
        ASM_EXPORT_ENTRY_SINGLE(0x624a64b, public_624a64b)
    }
}

#undef public_624a64b

#pragma init_seg(compiler)
extern "C" void const* const public_624a64b = __AsmFindLabelExport(&internal_624a640, 0x624a64b);
