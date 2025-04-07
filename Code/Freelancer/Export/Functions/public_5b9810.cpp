#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b981b _public_5b981b
#define public_5b9826 _public_5b9826
#define public_5b9831 _public_5b9831
#define public_5b983c _public_5b983c
#define public_5b9847 _public_5b9847
#define public_5b9855 _public_5b9855

PROC_DECLARE(0x5b9810, internal_5b9810, public_5b9810);
/* CHUNK of public_4449d0 */
extern "C" NAKED register_t __cdecl internal_5b9810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x8C]
        jmp public_444e20
        public_5b981b : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_444e50
        public_5b9826 : nop
        lea ecx, ss:[ebp-0x94]
        jmp public_444ee0
        public_5b9831 : nop
        lea ecx, ss:[ebp-0x8C]
        jmp public_444e20
        public_5b983c : nop
        mov ecx, dword ptr ss : [ebp-0xA8]
        jmp public_444e20
        public_5b9847 : nop
        mov ecx, dword ptr ss : [ebp-0xA8]
        add ecx, 0xC
        jmp public_445d70
        public_5b9855 : nop
        mov eax, offset public_5f387c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9810)
        ASM_EXPORT_ENTRY_FIRST(0x5b981b, public_5b981b)
        ASM_EXPORT_ENTRY(0x5b9826, public_5b9826)
        ASM_EXPORT_ENTRY(0x5b9831, public_5b9831)
        ASM_EXPORT_ENTRY(0x5b983c, public_5b983c)
        ASM_EXPORT_ENTRY(0x5b9847, public_5b9847)
        ASM_EXPORT_ENTRY_LAST(0x5b9855, public_5b9855)
    }
}

#undef public_5b981b
#undef public_5b9826
#undef public_5b9831
#undef public_5b983c
#undef public_5b9847
#undef public_5b9855

#pragma init_seg(compiler)
extern "C" void const* const public_5b981b = __AsmFindLabelExport(&internal_5b9810, 0x5b981b);
extern "C" void const* const public_5b9826 = __AsmFindLabelExport(&internal_5b9810, 0x5b9826);
extern "C" void const* const public_5b9831 = __AsmFindLabelExport(&internal_5b9810, 0x5b9831);
extern "C" void const* const public_5b983c = __AsmFindLabelExport(&internal_5b9810, 0x5b983c);
extern "C" void const* const public_5b9847 = __AsmFindLabelExport(&internal_5b9810, 0x5b9847);
extern "C" void const* const public_5b9855 = __AsmFindLabelExport(&internal_5b9810, 0x5b9855);
