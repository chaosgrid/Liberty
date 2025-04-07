#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab48b _public_6fab48b
#define public_6fab496 _public_6fab496

PROC_DECLARE(0x6fab480, internal_6fab480, public_6fab480);
/* CHUNK of public_6ee0e10 */
extern "C" NAKED register_t __cdecl internal_6fab480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x174]
        jmp public_6ed61d0
        public_6fab48b : nop
        lea ecx, ss:[ebp-0x170]
        jmp public_6eec8d0
        public_6fab496 : nop
        mov eax, offset public_6fbffec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab480)
        ASM_EXPORT_ENTRY_FIRST(0x6fab48b, public_6fab48b)
        ASM_EXPORT_ENTRY_LAST(0x6fab496, public_6fab496)
    }
}

#undef public_6fab48b
#undef public_6fab496

#pragma init_seg(compiler)
extern "C" void const* const public_6fab48b = __AsmFindLabelExport(&internal_6fab480, 0x6fab48b);
extern "C" void const* const public_6fab496 = __AsmFindLabelExport(&internal_6fab480, 0x6fab496);
