#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62494ab _public_62494ab
#define public_62494b3 _public_62494b3

PROC_DECLARE(0x62494a0, internal_62494a0, public_62494a0);
/* CHUNK of public_622bbc0 */
extern "C" NAKED register_t __cdecl internal_62494a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62494ab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_62494b3 : nop
        mov eax, offset public_6252410
        jmp public_6246126
        UNREACHABLE_TRAP(0x62494a0)
        ASM_EXPORT_ENTRY_FIRST(0x62494ab, public_62494ab)
        ASM_EXPORT_ENTRY_LAST(0x62494b3, public_62494b3)
    }
}

#undef public_62494ab
#undef public_62494b3

#pragma init_seg(compiler)
extern "C" void const* const public_62494ab = __AsmFindLabelExport(&internal_62494a0, 0x62494ab);
extern "C" void const* const public_62494b3 = __AsmFindLabelExport(&internal_62494a0, 0x62494b3);
