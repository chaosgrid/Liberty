#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639869b _public_639869b
#define public_63986a6 _public_63986a6
#define public_63986b1 _public_63986b1
#define public_63986bc _public_63986bc
#define public_63986c7 _public_63986c7

PROC_DECLARE(0x6398690, internal_6398690, public_6398690);
/* CHUNK of public_6369f20 */
extern "C" NAKED register_t __cdecl internal_6398690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_63449d0
        public_639869b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_63449d0
        public_63986a6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_63449d0
        public_63986b1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp public_63449d0
        public_63986bc : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_63449d0
        public_63986c7 : nop
        mov eax, offset public_63b2ca8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398690)
        ASM_EXPORT_ENTRY_FIRST(0x639869b, public_639869b)
        ASM_EXPORT_ENTRY(0x63986a6, public_63986a6)
        ASM_EXPORT_ENTRY(0x63986b1, public_63986b1)
        ASM_EXPORT_ENTRY(0x63986bc, public_63986bc)
        ASM_EXPORT_ENTRY_LAST(0x63986c7, public_63986c7)
    }
}

#undef public_639869b
#undef public_63986a6
#undef public_63986b1
#undef public_63986bc
#undef public_63986c7

#pragma init_seg(compiler)
extern "C" void const* const public_639869b = __AsmFindLabelExport(&internal_6398690, 0x639869b);
extern "C" void const* const public_63986a6 = __AsmFindLabelExport(&internal_6398690, 0x63986a6);
extern "C" void const* const public_63986b1 = __AsmFindLabelExport(&internal_6398690, 0x63986b1);
extern "C" void const* const public_63986bc = __AsmFindLabelExport(&internal_6398690, 0x63986bc);
extern "C" void const* const public_63986c7 = __AsmFindLabelExport(&internal_6398690, 0x63986c7);
