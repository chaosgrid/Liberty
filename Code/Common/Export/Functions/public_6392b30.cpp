#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392b3b _public_6392b3b
#define public_6392b46 _public_6392b46

PROC_DECLARE(0x6392b30, internal_6392b30, public_6392b30);
/* CHUNK of public_6278b30 */
extern "C" NAKED register_t __cdecl internal_6392b30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6392b3b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x34
        jmp public_627b1d0
        public_6392b46 : nop
        mov eax, offset public_63ab940
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392b30)
        ASM_EXPORT_ENTRY_FIRST(0x6392b3b, public_6392b3b)
        ASM_EXPORT_ENTRY_LAST(0x6392b46, public_6392b46)
    }
}

#undef public_6392b3b
#undef public_6392b46

#pragma init_seg(compiler)
extern "C" void const* const public_6392b3b = __AsmFindLabelExport(&internal_6392b30, 0x6392b3b);
extern "C" void const* const public_6392b46 = __AsmFindLabelExport(&internal_6392b30, 0x6392b46);
