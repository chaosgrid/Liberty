#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0ca8 _public_6fb0ca8
#define public_6fb0cbe _public_6fb0cbe
#define public_6fb0cbf _public_6fb0cbf

PROC_DECLARE(0x6fb0ca0, internal_6fb0ca0, public_6fb0ca0);
/* CHUNK of public_6f86ae0 */
extern "C" NAKED register_t __cdecl internal_6fb0ca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f867a0
        public_6fb0ca8 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        and eax, 1
        test eax, eax
        je public_6fb0cbe
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6f867a0
        public_6fb0cbe : nop
        ret 
        public_6fb0cbf : nop
        mov eax, offset public_6fc618c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0ca0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0ca8, public_6fb0ca8)
        ASM_EXPORT_ENTRY(0x6fb0cbe, public_6fb0cbe)
        ASM_EXPORT_ENTRY_LAST(0x6fb0cbf, public_6fb0cbf)
    }
}

#undef public_6fb0ca8
#undef public_6fb0cbe
#undef public_6fb0cbf

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0ca8 = __AsmFindLabelExport(&internal_6fb0ca0, 0x6fb0ca8);
extern "C" void const* const public_6fb0cbe = __AsmFindLabelExport(&internal_6fb0ca0, 0x6fb0cbe);
extern "C" void const* const public_6fb0cbf = __AsmFindLabelExport(&internal_6fb0ca0, 0x6fb0cbf);
