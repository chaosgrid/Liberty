#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331950);
CLANG_FORWARD_PROC_SYMBOL(public_6331a90);
CLANG_FORWARD_PROC_SYMBOL(public_63320a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63974c8 _public_63974c8
#define public_63974d0 _public_63974d0
#define public_63974d8 _public_63974d8
#define public_63974e0 _public_63974e0
#define public_63974e8 _public_63974e8

PROC_DECLARE(0x63974c0, internal_63974c0, public_63974c0);
/* CHUNK of public_632e850 */
extern "C" NAKED register_t __cdecl internal_63974c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_63320a0
        public_63974c8 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6331a90
        public_63974d0 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp public_63320a0
        public_63974d8 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp public_6331a90
        public_63974e0 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp public_6331950
        public_63974e8 : nop
        mov eax, offset public_63b1674
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63974c0)
        ASM_EXPORT_ENTRY_FIRST(0x63974c8, public_63974c8)
        ASM_EXPORT_ENTRY(0x63974d0, public_63974d0)
        ASM_EXPORT_ENTRY(0x63974d8, public_63974d8)
        ASM_EXPORT_ENTRY(0x63974e0, public_63974e0)
        ASM_EXPORT_ENTRY_LAST(0x63974e8, public_63974e8)
    }
}

#undef public_63974c8
#undef public_63974d0
#undef public_63974d8
#undef public_63974e0
#undef public_63974e8

#pragma init_seg(compiler)
extern "C" void const* const public_63974c8 = __AsmFindLabelExport(&internal_63974c0, 0x63974c8);
extern "C" void const* const public_63974d0 = __AsmFindLabelExport(&internal_63974c0, 0x63974d0);
extern "C" void const* const public_63974d8 = __AsmFindLabelExport(&internal_63974c0, 0x63974d8);
extern "C" void const* const public_63974e0 = __AsmFindLabelExport(&internal_63974c0, 0x63974e0);
extern "C" void const* const public_63974e8 = __AsmFindLabelExport(&internal_63974c0, 0x63974e8);
