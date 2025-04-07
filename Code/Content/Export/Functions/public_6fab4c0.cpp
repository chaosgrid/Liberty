#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab4cb _public_6fab4cb

PROC_DECLARE(0x6fab4c0, internal_6fab4c0, public_6fab4c0);
/* CHUNK of public_6ee1830 */
extern "C" NAKED register_t __cdecl internal_6fab4c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1AC]
        jmp public_6ed61d0
        public_6fab4cb : nop
        mov eax, offset public_6fc007c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab4c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab4cb, public_6fab4cb)
    }
}

#undef public_6fab4cb

#pragma init_seg(compiler)
extern "C" void const* const public_6fab4cb = __AsmFindLabelExport(&internal_6fab4c0, 0x6fab4cb);
