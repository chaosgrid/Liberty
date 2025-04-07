#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab3cb _public_6fab3cb

PROC_DECLARE(0x6fab3c0, internal_6fab3c0, public_6fab3c0);
/* CHUNK of public_6ede9b0 */
extern "C" NAKED register_t __cdecl internal_6fab3c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x238]
        jmp public_6ed61d0
        public_6fab3cb : nop
        mov eax, offset public_6fbfdec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab3c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab3cb, public_6fab3cb)
    }
}

#undef public_6fab3cb

#pragma init_seg(compiler)
extern "C" void const* const public_6fab3cb = __AsmFindLabelExport(&internal_6fab3c0, 0x6fab3cb);
