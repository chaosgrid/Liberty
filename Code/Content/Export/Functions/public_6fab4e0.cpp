#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab4eb _public_6fab4eb

PROC_DECLARE(0x6fab4e0, internal_6fab4e0, public_6fab4e0);
/* CHUNK of public_6ed97e0 */
extern "C" NAKED register_t __cdecl internal_6fab4e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x234]
        jmp public_6ed61d0
        public_6fab4eb : nop
        mov eax, offset public_6fc00a0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab4e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab4eb, public_6fab4eb)
    }
}

#undef public_6fab4eb

#pragma init_seg(compiler)
extern "C" void const* const public_6fab4eb = __AsmFindLabelExport(&internal_6fab4e0, 0x6fab4eb);
