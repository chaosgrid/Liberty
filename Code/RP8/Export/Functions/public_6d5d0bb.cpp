#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d0c5 _public_6d5d0c5
#define public_6d5d0cf _public_6d5d0cf
#define public_6d5d0d9 _public_6d5d0d9

PROC_DECLARE(0x6d5d0bb, internal_6d5d0bb, public_6d5d0bb);
/* CHUNK of public_6d36656 */
extern "C" NAKED register_t __cdecl internal_6d5d0bb()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x40]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d0c5 : nop
        push dword ptr ss : [ebp-0x3C]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d0cf : nop
        push dword ptr ss : [ebp-0x40]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d0d9 : nop
        mov eax, offset public_6d62ad4
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d0bb)
        ASM_EXPORT_ENTRY_FIRST(0x6d5d0c5, public_6d5d0c5)
        ASM_EXPORT_ENTRY(0x6d5d0cf, public_6d5d0cf)
        ASM_EXPORT_ENTRY_LAST(0x6d5d0d9, public_6d5d0d9)
    }
}

#undef public_6d5d0c5
#undef public_6d5d0cf
#undef public_6d5d0d9

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d0c5 = __AsmFindLabelExport(&internal_6d5d0bb, 0x6d5d0c5);
extern "C" void const* const public_6d5d0cf = __AsmFindLabelExport(&internal_6d5d0bb, 0x6d5d0cf);
extern "C" void const* const public_6d5d0d9 = __AsmFindLabelExport(&internal_6d5d0bb, 0x6d5d0d9);
