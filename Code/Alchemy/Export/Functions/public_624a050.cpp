#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a05b _public_624a05b

PROC_DECLARE(0x624a050, internal_624a050, public_624a050);
/* CHUNK of public_6238150 */
extern "C" NAKED register_t __cdecl internal_624a050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a05b : nop
        mov eax, offset public_625309c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a050)
        ASM_EXPORT_ENTRY_SINGLE(0x624a05b, public_624a05b)
    }
}

#undef public_624a05b

#pragma init_seg(compiler)
extern "C" void const* const public_624a05b = __AsmFindLabelExport(&internal_624a050, 0x624a05b);
