#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627be50);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392c1b _public_6392c1b

PROC_DECLARE(0x6392c10, internal_6392c10, public_6392c10);
/* CHUNK of public_627bf70 */
extern "C" NAKED register_t __cdecl internal_6392c10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_627be50
        public_6392c1b : nop
        mov eax, offset public_63aba1c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392c10)
        ASM_EXPORT_ENTRY_SINGLE(0x6392c1b, public_6392c1b)
    }
}

#undef public_6392c1b

#pragma init_seg(compiler)
extern "C" void const* const public_6392c1b = __AsmFindLabelExport(&internal_6392c10, 0x6392c1b);
