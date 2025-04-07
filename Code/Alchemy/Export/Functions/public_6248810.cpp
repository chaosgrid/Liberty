#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624881b _public_624881b
#define public_6248823 _public_6248823

PROC_DECLARE(0x6248810, internal_6248810, public_6248810);
/* CHUNK of public_621c540 */
extern "C" NAKED register_t __cdecl internal_6248810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624881b : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_620b710
        public_6248823 : nop
        mov eax, offset public_62516e8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248810)
        ASM_EXPORT_ENTRY_FIRST(0x624881b, public_624881b)
        ASM_EXPORT_ENTRY_LAST(0x6248823, public_6248823)
    }
}

#undef public_624881b
#undef public_6248823

#pragma init_seg(compiler)
extern "C" void const* const public_624881b = __AsmFindLabelExport(&internal_6248810, 0x624881b);
extern "C" void const* const public_6248823 = __AsmFindLabelExport(&internal_6248810, 0x6248823);
