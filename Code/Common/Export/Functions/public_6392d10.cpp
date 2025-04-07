#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392d18 _public_6392d18

PROC_DECLARE(0x6392d10, internal_6392d10, public_6392d10);
/* CHUNK of public_627d8a0 */
extern "C" NAKED register_t __cdecl internal_6392d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627e5e0
        public_6392d18 : nop
        mov eax, offset public_63abb78
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392d10)
        ASM_EXPORT_ENTRY_SINGLE(0x6392d18, public_6392d18)
    }
}

#undef public_6392d18

#pragma init_seg(compiler)
extern "C" void const* const public_6392d18 = __AsmFindLabelExport(&internal_6392d10, 0x6392d18);
