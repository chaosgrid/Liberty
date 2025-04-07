#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624766b _public_624766b
#define public_6247676 _public_6247676

PROC_DECLARE(0x6247660, internal_6247660, public_6247660);
/* CHUNK of public_6208bc0 */
extern "C" NAKED register_t __cdecl internal_6247660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624766b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 8
        jmp public_6209bb0
        public_6247676 : nop
        mov eax, offset public_6250444
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247660)
        ASM_EXPORT_ENTRY_FIRST(0x624766b, public_624766b)
        ASM_EXPORT_ENTRY_LAST(0x6247676, public_6247676)
    }
}

#undef public_624766b
#undef public_6247676

#pragma init_seg(compiler)
extern "C" void const* const public_624766b = __AsmFindLabelExport(&internal_6247660, 0x624766b);
extern "C" void const* const public_6247676 = __AsmFindLabelExport(&internal_6247660, 0x6247676);
