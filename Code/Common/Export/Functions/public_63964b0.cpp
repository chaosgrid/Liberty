#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627be50);
CLANG_FORWARD_PROC_SYMBOL(public_627c930);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63964b8 _public_63964b8
#define public_63964ce _public_63964ce
#define public_63964cf _public_63964cf
#define public_63964d7 _public_63964d7

PROC_DECLARE(0x63964b0, internal_63964b0, public_63964b0);
/* CHUNK of public_6313330 */
extern "C" NAKED register_t __cdecl internal_63964b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_627be50
        public_63964b8 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        and eax, 1
        test eax, eax
        je public_63964ce
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_627be50
        public_63964ce : nop
        ret 
        public_63964cf : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_627c930
        public_63964d7 : nop
        mov eax, offset public_63b03d0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63964b0)
        ASM_EXPORT_ENTRY_FIRST(0x63964b8, public_63964b8)
        ASM_EXPORT_ENTRY(0x63964ce, public_63964ce)
        ASM_EXPORT_ENTRY(0x63964cf, public_63964cf)
        ASM_EXPORT_ENTRY_LAST(0x63964d7, public_63964d7)
    }
}

#undef public_63964b8
#undef public_63964ce
#undef public_63964cf
#undef public_63964d7

#pragma init_seg(compiler)
extern "C" void const* const public_63964b8 = __AsmFindLabelExport(&internal_63964b0, 0x63964b8);
extern "C" void const* const public_63964ce = __AsmFindLabelExport(&internal_63964b0, 0x63964ce);
extern "C" void const* const public_63964cf = __AsmFindLabelExport(&internal_63964b0, 0x63964cf);
extern "C" void const* const public_63964d7 = __AsmFindLabelExport(&internal_63964b0, 0x63964d7);
