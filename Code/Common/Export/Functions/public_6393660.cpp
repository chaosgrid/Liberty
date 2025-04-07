#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_629ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393668 _public_6393668
#define public_6393670 _public_6393670

PROC_DECLARE(0x6393660, internal_6393660, public_6393660);
/* CHUNK of public_6294460 */
extern "C" NAKED register_t __cdecl internal_6393660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629ed10
        public_6393668 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6293160
        public_6393670 : nop
        mov eax, offset public_63ac7f4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393660)
        ASM_EXPORT_ENTRY_FIRST(0x6393668, public_6393668)
        ASM_EXPORT_ENTRY_LAST(0x6393670, public_6393670)
    }
}

#undef public_6393668
#undef public_6393670

#pragma init_seg(compiler)
extern "C" void const* const public_6393668 = __AsmFindLabelExport(&internal_6393660, 0x6393668);
extern "C" void const* const public_6393670 = __AsmFindLabelExport(&internal_6393660, 0x6393670);
