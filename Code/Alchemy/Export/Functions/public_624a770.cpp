#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a77b _public_624a77b
#define public_624a786 _public_624a786

PROC_DECLARE(0x624a770, internal_624a770, public_624a770);
/* CHUNK of public_6240ad0 */
extern "C" NAKED register_t __cdecl internal_624a770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a77b : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 4
        jmp public_620b300
        public_624a786 : nop
        mov eax, offset public_6253800
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a770)
        ASM_EXPORT_ENTRY_FIRST(0x624a77b, public_624a77b)
        ASM_EXPORT_ENTRY_LAST(0x624a786, public_624a786)
    }
}

#undef public_624a77b
#undef public_624a786

#pragma init_seg(compiler)
extern "C" void const* const public_624a77b = __AsmFindLabelExport(&internal_624a770, 0x624a77b);
extern "C" void const* const public_624a786 = __AsmFindLabelExport(&internal_624a770, 0x624a786);
