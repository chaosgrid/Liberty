#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5098 _public_5c5098
#define public_5c50a0 _public_5c50a0
#define public_5c50a8 _public_5c50a8
#define public_5c50b0 _public_5c50b0
#define public_5c50bb _public_5c50bb

PROC_DECLARE(0x5c5090, internal_5c5090, public_5c5090);
/* CHUNK of public_5a46c0 */
extern "C" NAKED register_t __cdecl internal_5c5090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5c5098 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_444ee0
        public_5c50a0 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5c50a8 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        jmp public_444e20
        public_5c50b0 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        add ecx, 0xC
        jmp public_445d70
        public_5c50bb : nop
        mov eax, offset public_5feed0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5090)
        ASM_EXPORT_ENTRY_FIRST(0x5c5098, public_5c5098)
        ASM_EXPORT_ENTRY(0x5c50a0, public_5c50a0)
        ASM_EXPORT_ENTRY(0x5c50a8, public_5c50a8)
        ASM_EXPORT_ENTRY(0x5c50b0, public_5c50b0)
        ASM_EXPORT_ENTRY_LAST(0x5c50bb, public_5c50bb)
    }
}

#undef public_5c5098
#undef public_5c50a0
#undef public_5c50a8
#undef public_5c50b0
#undef public_5c50bb

#pragma init_seg(compiler)
extern "C" void const* const public_5c5098 = __AsmFindLabelExport(&internal_5c5090, 0x5c5098);
extern "C" void const* const public_5c50a0 = __AsmFindLabelExport(&internal_5c5090, 0x5c50a0);
extern "C" void const* const public_5c50a8 = __AsmFindLabelExport(&internal_5c5090, 0x5c50a8);
extern "C" void const* const public_5c50b0 = __AsmFindLabelExport(&internal_5c5090, 0x5c50b0);
extern "C" void const* const public_5c50bb = __AsmFindLabelExport(&internal_5c5090, 0x5c50bb);
