#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f84d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1b48 _public_6fb1b48
#define public_6fb1b50 _public_6fb1b50
#define public_6fb1b5b _public_6fb1b5b

PROC_DECLARE(0x6fb1b40, internal_6fb1b40, public_6fb1b40);
/* CHUNK of public_6f9e770 */
extern "C" NAKED register_t __cdecl internal_6fb1b40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6fa0330
        public_6fb1b48 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6f84d20
        public_6fb1b50 : nop
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb1b5b : nop
        mov eax, offset public_6fc71cc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1b40)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1b48, public_6fb1b48)
        ASM_EXPORT_ENTRY(0x6fb1b50, public_6fb1b50)
        ASM_EXPORT_ENTRY_LAST(0x6fb1b5b, public_6fb1b5b)
    }
}

#undef public_6fb1b48
#undef public_6fb1b50
#undef public_6fb1b5b

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1b48 = __AsmFindLabelExport(&internal_6fb1b40, 0x6fb1b48);
extern "C" void const* const public_6fb1b50 = __AsmFindLabelExport(&internal_6fb1b40, 0x6fb1b50);
extern "C" void const* const public_6fb1b5b = __AsmFindLabelExport(&internal_6fb1b40, 0x6fb1b5b);
