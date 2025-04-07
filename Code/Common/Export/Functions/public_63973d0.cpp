#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6325d90);
CLANG_FORWARD_PROC_SYMBOL(public_632c340);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63973d8 _public_63973d8
#define public_63973e0 _public_63973e0
#define public_63973e8 _public_63973e8

PROC_DECLARE(0x63973d0, internal_63973d0, public_63973d0);
/* CHUNK of public_632c190 */
extern "C" NAKED register_t __cdecl internal_63973d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_6325d90
        public_63973d8 : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        jmp public_6325d90
        public_63973e0 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_632c340
        public_63973e8 : nop
        mov eax, offset public_63b1530
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63973d0)
        ASM_EXPORT_ENTRY_FIRST(0x63973d8, public_63973d8)
        ASM_EXPORT_ENTRY(0x63973e0, public_63973e0)
        ASM_EXPORT_ENTRY_LAST(0x63973e8, public_63973e8)
    }
}

#undef public_63973d8
#undef public_63973e0
#undef public_63973e8

#pragma init_seg(compiler)
extern "C" void const* const public_63973d8 = __AsmFindLabelExport(&internal_63973d0, 0x63973d8);
extern "C" void const* const public_63973e0 = __AsmFindLabelExport(&internal_63973d0, 0x63973e0);
extern "C" void const* const public_63973e8 = __AsmFindLabelExport(&internal_63973d0, 0x63973e8);
