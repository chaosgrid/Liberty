#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9998 _public_5b9998
#define public_5b99a3 _public_5b99a3

PROC_DECLARE(0x5b9990, internal_5b9990, public_5b9990);
/* CHUNK of public_446fb0 */
extern "C" NAKED register_t __cdecl internal_5b9990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_5594b0
        public_5b9998 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x74
        jmp public_457dc0
        public_5b99a3 : nop
        mov eax, offset public_5f3a04
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9990)
        ASM_EXPORT_ENTRY_FIRST(0x5b9998, public_5b9998)
        ASM_EXPORT_ENTRY_LAST(0x5b99a3, public_5b99a3)
    }
}

#undef public_5b9998
#undef public_5b99a3

#pragma init_seg(compiler)
extern "C" void const* const public_5b9998 = __AsmFindLabelExport(&internal_5b9990, 0x5b9998);
extern "C" void const* const public_5b99a3 = __AsmFindLabelExport(&internal_5b9990, 0x5b99a3);
