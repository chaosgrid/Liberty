#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb18eb _public_6fb18eb
#define public_6fb18f3 _public_6fb18f3

PROC_DECLARE(0x6fb18e0, internal_6fb18e0, public_6fb18e0);
/* CHUNK of public_6f9b790 */
extern "C" NAKED register_t __cdecl internal_6fb18e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x68]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb18eb : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_6fa0330
        public_6fb18f3 : nop
        mov eax, offset public_6fc6f60
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb18e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb18eb, public_6fb18eb)
        ASM_EXPORT_ENTRY_LAST(0x6fb18f3, public_6fb18f3)
    }
}

#undef public_6fb18eb
#undef public_6fb18f3

#pragma init_seg(compiler)
extern "C" void const* const public_6fb18eb = __AsmFindLabelExport(&internal_6fb18e0, 0x6fb18eb);
extern "C" void const* const public_6fb18f3 = __AsmFindLabelExport(&internal_6fb18e0, 0x6fb18f3);
