#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab3eb _public_6fab3eb

PROC_DECLARE(0x6fab3e0, internal_6fab3e0, public_6fab3e0);
/* CHUNK of public_6edf7a0 */
extern "C" NAKED register_t __cdecl internal_6fab3e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x98]
        jmp public_6ed61d0
        public_6fab3eb : nop
        mov eax, offset public_6fbfea0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab3e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab3eb, public_6fab3eb)
    }
}

#undef public_6fab3eb

#pragma init_seg(compiler)
extern "C" void const* const public_6fab3eb = __AsmFindLabelExport(&internal_6fab3e0, 0x6fab3eb);
