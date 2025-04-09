#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bca99 _public_5bca99
#define public_5bcaa2 _public_5bcaa2
#define public_5bcaaa _public_5bcaaa
#define public_5bcab3 _public_5bcab3
#define public_5bcabc _public_5bcabc
#define public_5bcac4 _public_5bcac4

PROC_DECLARE(0x5bca90, internal_5bca90, public_5bca90);
/* CHUNK of public_49a580 */
extern "C" NAKED register_t __cdecl internal_5bca90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62c4]
        public_5bca99 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c62b4]
        public_5bcaa2 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_45eeb0
        public_5bcaaa : nop
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5bcab3 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c62b4]
        public_5bcabc : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_45eeb0
        public_5bcac4 : nop
        mov eax, offset public_5f6cd4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bca90)
        ASM_EXPORT_ENTRY_FIRST(0x5bca99, public_5bca99)
        ASM_EXPORT_ENTRY(0x5bcaa2, public_5bcaa2)
        ASM_EXPORT_ENTRY(0x5bcaaa, public_5bcaaa)
        ASM_EXPORT_ENTRY(0x5bcab3, public_5bcab3)
        ASM_EXPORT_ENTRY(0x5bcabc, public_5bcabc)
        ASM_EXPORT_ENTRY_LAST(0x5bcac4, public_5bcac4)
    }
}

#undef public_5bca99
#undef public_5bcaa2
#undef public_5bcaaa
#undef public_5bcab3
#undef public_5bcabc
#undef public_5bcac4

#pragma init_seg(compiler)
extern "C" void const* const public_5bca99 = __AsmFindLabelExport(&internal_5bca90, 0x5bca99);
extern "C" void const* const public_5bcaa2 = __AsmFindLabelExport(&internal_5bca90, 0x5bcaa2);
extern "C" void const* const public_5bcaaa = __AsmFindLabelExport(&internal_5bca90, 0x5bcaaa);
extern "C" void const* const public_5bcab3 = __AsmFindLabelExport(&internal_5bca90, 0x5bcab3);
extern "C" void const* const public_5bcabc = __AsmFindLabelExport(&internal_5bca90, 0x5bcabc);
extern "C" void const* const public_5bcac4 = __AsmFindLabelExport(&internal_5bca90, 0x5bcac4);
