#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247cbb _public_6247cbb
#define public_6247cc3 _public_6247cc3

PROC_DECLARE(0x6247cb0, internal_6247cb0, public_6247cb0);
/* CHUNK of public_6210900 */
extern "C" NAKED register_t __cdecl internal_6247cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247cbb : nop
        lea ecx, ss:[ebp-0x10]
        jmp public_6207470
        public_6247cc3 : nop
        mov eax, offset public_6250af0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247cb0)
        ASM_EXPORT_ENTRY_FIRST(0x6247cbb, public_6247cbb)
        ASM_EXPORT_ENTRY_LAST(0x6247cc3, public_6247cc3)
    }
}

#undef public_6247cbb
#undef public_6247cc3

#pragma init_seg(compiler)
extern "C" void const* const public_6247cbb = __AsmFindLabelExport(&internal_6247cb0, 0x6247cbb);
extern "C" void const* const public_6247cc3 = __AsmFindLabelExport(&internal_6247cb0, 0x6247cc3);
