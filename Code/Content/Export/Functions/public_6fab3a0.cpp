#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab3ab _public_6fab3ab
#define public_6fab3b6 _public_6fab3b6

PROC_DECLARE(0x6fab3a0, internal_6fab3a0, public_6fab3a0);
/* CHUNK of public_6ede6c0 */
extern "C" NAKED register_t __cdecl internal_6fab3a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1FC]
        jmp public_6ed61d0
        public_6fab3ab : nop
        lea ecx, ss:[ebp-0x1F8]
        jmp public_6eec8d0
        public_6fab3b6 : nop
        mov eax, offset public_6fbfdc8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab3a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fab3ab, public_6fab3ab)
        ASM_EXPORT_ENTRY_LAST(0x6fab3b6, public_6fab3b6)
    }
}

#undef public_6fab3ab
#undef public_6fab3b6

#pragma init_seg(compiler)
extern "C" void const* const public_6fab3ab = __AsmFindLabelExport(&internal_6fab3a0, 0x6fab3ab);
extern "C" void const* const public_6fab3b6 = __AsmFindLabelExport(&internal_6fab3a0, 0x6fab3b6);
