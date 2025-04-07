#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed37d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab1ab _public_6fab1ab
#define public_6fab1b6 _public_6fab1b6

PROC_DECLARE(0x6fab1a0, internal_6fab1a0, public_6fab1a0);
/* CHUNK of public_6ed3710 */
extern "C" NAKED register_t __cdecl internal_6fab1a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6ed37d0
        public_6fab1ab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_6f28e10
        public_6fab1b6 : nop
        mov eax, offset public_6fbf6d0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab1a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fab1ab, public_6fab1ab)
        ASM_EXPORT_ENTRY_LAST(0x6fab1b6, public_6fab1b6)
    }
}

#undef public_6fab1ab
#undef public_6fab1b6

#pragma init_seg(compiler)
extern "C" void const* const public_6fab1ab = __AsmFindLabelExport(&internal_6fab1a0, 0x6fab1ab);
extern "C" void const* const public_6fab1b6 = __AsmFindLabelExport(&internal_6fab1a0, 0x6fab1b6);
