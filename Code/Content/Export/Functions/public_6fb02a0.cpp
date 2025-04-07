#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb02ab _public_6fb02ab
#define public_6fb02b6 _public_6fb02b6

PROC_DECLARE(0x6fb02a0, internal_6fb02a0, public_6fb02a0);
/* CHUNK of public_6f75f80 */
extern "C" NAKED register_t __cdecl internal_6fb02a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x130]
        jmp public_6f75d10
        public_6fb02ab : nop
        lea ecx, ss:[ebp-0x258]
        jmp public_6f2f5c0
        public_6fb02b6 : nop
        mov eax, offset public_6fc5594
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb02a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb02ab, public_6fb02ab)
        ASM_EXPORT_ENTRY_LAST(0x6fb02b6, public_6fb02b6)
    }
}

#undef public_6fb02ab
#undef public_6fb02b6

#pragma init_seg(compiler)
extern "C" void const* const public_6fb02ab = __AsmFindLabelExport(&internal_6fb02a0, 0x6fb02ab);
extern "C" void const* const public_6fb02b6 = __AsmFindLabelExport(&internal_6fb02a0, 0x6fb02b6);
