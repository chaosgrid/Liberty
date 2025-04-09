#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438f10);
CLANG_FORWARD_PROC_SYMBOL(public_43bcd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b92b8 _public_5b92b8
#define public_5b92c3 _public_5b92c3

PROC_DECLARE(0x5b92b0, internal_5b92b0, public_5b92b0);
/* CHUNK of public_438df0 */
extern "C" NAKED register_t __cdecl internal_5b92b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_43bcd0
        public_5b92b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_438f10
        public_5b92c3 : nop
        mov eax, offset public_5f3230
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b92b0)
        ASM_EXPORT_ENTRY_FIRST(0x5b92b8, public_5b92b8)
        ASM_EXPORT_ENTRY_LAST(0x5b92c3, public_5b92c3)
    }
}

#undef public_5b92b8
#undef public_5b92c3

#pragma init_seg(compiler)
extern "C" void const* const public_5b92b8 = __AsmFindLabelExport(&internal_5b92b0, 0x5b92b8);
extern "C" void const* const public_5b92c3 = __AsmFindLabelExport(&internal_5b92b0, 0x5b92c3);
