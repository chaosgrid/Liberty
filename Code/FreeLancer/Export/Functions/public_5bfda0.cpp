#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfdab _public_5bfdab
#define public_5bfdb6 _public_5bfdb6
#define public_5bfdc1 _public_5bfdc1

PROC_DECLARE(0x5bfda0, internal_5bfda0, public_5bfda0);
/* CHUNK of public_515730 */
extern "C" NAKED register_t __cdecl internal_5bfda0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_4a2d30
        public_5bfdab : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_5154f0
        public_5bfdb6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x30
        jmp public_502d90
        public_5bfdc1 : nop
        mov eax, offset public_5f9d10
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfda0)
        ASM_EXPORT_ENTRY_FIRST(0x5bfdab, public_5bfdab)
        ASM_EXPORT_ENTRY(0x5bfdb6, public_5bfdb6)
        ASM_EXPORT_ENTRY_LAST(0x5bfdc1, public_5bfdc1)
    }
}

#undef public_5bfdab
#undef public_5bfdb6
#undef public_5bfdc1

#pragma init_seg(compiler)
extern "C" void const* const public_5bfdab = __AsmFindLabelExport(&internal_5bfda0, 0x5bfdab);
extern "C" void const* const public_5bfdb6 = __AsmFindLabelExport(&internal_5bfda0, 0x5bfdb6);
extern "C" void const* const public_5bfdc1 = __AsmFindLabelExport(&internal_5bfda0, 0x5bfdc1);
