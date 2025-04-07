#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6350560);
CLANG_FORWARD_PROC_SYMBOL(public_635bff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397f8b _public_6397f8b
#define public_6397f96 _public_6397f96
#define public_6397fa1 _public_6397fa1
#define public_6397fac _public_6397fac
#define public_6397fba _public_6397fba
#define public_6397fc8 _public_6397fc8

PROC_DECLARE(0x6397f80, internal_6397f80, public_6397f80);
/* CHUNK of public_634e0b0 */
extern "C" NAKED register_t __cdecl internal_6397f80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xC18]
        jmp public_635bff0
        public_6397f8b : nop
        lea ecx, ss:[ebp-0x1024]
        jmp public_635bff0
        public_6397f96 : nop
        lea ecx, ss:[ebp-0x1258]
        jmp public_6350560
        public_6397fa1 : nop
        lea ecx, ss:[ebp-0x122C]
        jmp public_63449d0
        public_6397fac : nop
        mov eax, dword ptr ss : [ebp-0x1270]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397fba : nop
        mov eax, dword ptr ss : [ebp-0x1270]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397fc8 : nop
        mov eax, offset public_63b2350
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397f80)
        ASM_EXPORT_ENTRY_FIRST(0x6397f8b, public_6397f8b)
        ASM_EXPORT_ENTRY(0x6397f96, public_6397f96)
        ASM_EXPORT_ENTRY(0x6397fa1, public_6397fa1)
        ASM_EXPORT_ENTRY(0x6397fac, public_6397fac)
        ASM_EXPORT_ENTRY(0x6397fba, public_6397fba)
        ASM_EXPORT_ENTRY_LAST(0x6397fc8, public_6397fc8)
    }
}

#undef public_6397f8b
#undef public_6397f96
#undef public_6397fa1
#undef public_6397fac
#undef public_6397fba
#undef public_6397fc8

#pragma init_seg(compiler)
extern "C" void const* const public_6397f8b = __AsmFindLabelExport(&internal_6397f80, 0x6397f8b);
extern "C" void const* const public_6397f96 = __AsmFindLabelExport(&internal_6397f80, 0x6397f96);
extern "C" void const* const public_6397fa1 = __AsmFindLabelExport(&internal_6397f80, 0x6397fa1);
extern "C" void const* const public_6397fac = __AsmFindLabelExport(&internal_6397f80, 0x6397fac);
extern "C" void const* const public_6397fba = __AsmFindLabelExport(&internal_6397f80, 0x6397fba);
extern "C" void const* const public_6397fc8 = __AsmFindLabelExport(&internal_6397f80, 0x6397fc8);
