#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5d70);
CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d03740);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60fb8 _public_6d60fb8
#define public_6d60fc0 _public_6d60fc0
#define public_6d60fc8 _public_6d60fc8
#define public_6d60fd3 _public_6d60fd3

PROC_DECLARE(0x6d60fb0, internal_6d60fb0, public_6d60fb0);
/* CHUNK of public_6d03500 */
extern "C" NAKED register_t __cdecl internal_6d60fb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp public_6d03740
        public_6d60fb8 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_6ce5d70
        public_6d60fc0 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6cecb50
        public_6d60fc8 : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d60fd3 : nop
        mov eax, offset public_6d71b2c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60fb0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60fb8, public_6d60fb8)
        ASM_EXPORT_ENTRY(0x6d60fc0, public_6d60fc0)
        ASM_EXPORT_ENTRY(0x6d60fc8, public_6d60fc8)
        ASM_EXPORT_ENTRY_LAST(0x6d60fd3, public_6d60fd3)
    }
}

#undef public_6d60fb8
#undef public_6d60fc0
#undef public_6d60fc8
#undef public_6d60fd3

#pragma init_seg(compiler)
extern "C" void const* const public_6d60fb8 = __AsmFindLabelExport(&internal_6d60fb0, 0x6d60fb8);
extern "C" void const* const public_6d60fc0 = __AsmFindLabelExport(&internal_6d60fb0, 0x6d60fc0);
extern "C" void const* const public_6d60fc8 = __AsmFindLabelExport(&internal_6d60fb0, 0x6d60fc8);
extern "C" void const* const public_6d60fd3 = __AsmFindLabelExport(&internal_6d60fb0, 0x6d60fd3);
