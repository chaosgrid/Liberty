#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab9fb _public_6fab9fb

PROC_DECLARE(0x6fab9f0, internal_6fab9f0, public_6fab9f0);
/* CHUNK of public_6ee5c20 */
extern "C" NAKED register_t __cdecl internal_6fab9f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x280]
        jmp public_6ed61d0
        public_6fab9fb : nop
        mov eax, offset public_6fc04ac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab9f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab9fb, public_6fab9fb)
    }
}

#undef public_6fab9fb

#pragma init_seg(compiler)
extern "C" void const* const public_6fab9fb = __AsmFindLabelExport(&internal_6fab9f0, 0x6fab9fb);
