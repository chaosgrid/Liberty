#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9630);
CLANG_FORWARD_PROC_SYMBOL(public_6ee99d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabd18 _public_6fabd18
#define public_6fabd23 _public_6fabd23
#define public_6fabd2e _public_6fabd2e

PROC_DECLARE(0x6fabd10, internal_6fabd10, public_6fabd10);
/* CHUNK of public_6ee9aa0 */
extern "C" NAKED register_t __cdecl internal_6fabd10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ee9630
        public_6fabd18 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_6ee99d0
        public_6fabd23 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_6f15350
        public_6fabd2e : nop
        mov eax, offset public_6fc090c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabd10)
        ASM_EXPORT_ENTRY_FIRST(0x6fabd18, public_6fabd18)
        ASM_EXPORT_ENTRY(0x6fabd23, public_6fabd23)
        ASM_EXPORT_ENTRY_LAST(0x6fabd2e, public_6fabd2e)
    }
}

#undef public_6fabd18
#undef public_6fabd23
#undef public_6fabd2e

#pragma init_seg(compiler)
extern "C" void const* const public_6fabd18 = __AsmFindLabelExport(&internal_6fabd10, 0x6fabd18);
extern "C" void const* const public_6fabd23 = __AsmFindLabelExport(&internal_6fabd10, 0x6fabd23);
extern "C" void const* const public_6fabd2e = __AsmFindLabelExport(&internal_6fabd10, 0x6fabd2e);
