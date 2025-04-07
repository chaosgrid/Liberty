#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397bab _public_6397bab

PROC_DECLARE(0x6397ba0, internal_6397ba0, public_6397ba0);
/* CHUNK of public_6347c80 */
extern "C" NAKED register_t __cdecl internal_6397ba0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397bab : nop
        mov eax, offset public_63b1e90
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397ba0)
        ASM_EXPORT_ENTRY_SINGLE(0x6397bab, public_6397bab)
    }
}

#undef public_6397bab

#pragma init_seg(compiler)
extern "C" void const* const public_6397bab = __AsmFindLabelExport(&internal_6397ba0, 0x6397bab);
