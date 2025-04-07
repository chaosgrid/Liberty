#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb580);
CLANG_FORWARD_PROC_SYMBOL(public_6315710);
CLANG_FORWARD_PROC_SYMBOL(public_6316730);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395d8c _public_6395d8c
#define public_6395d98 _public_6395d98
#define public_6395da0 _public_6395da0
#define public_6395da8 _public_6395da8
#define public_6395db0 _public_6395db0

PROC_DECLARE(0x6395d80, internal_6395d80, public_6395d80);
/* CHUNK of public_62ffc50 */
extern "C" NAKED register_t __cdecl internal_6395d80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x8C]
        jmp dword ptr ds : [public_63991ac]
        public_6395d8c : nop
        lea ecx, ss:[ebp-0x9C]
        jmp dword ptr ds : [public_63991ac]
        public_6395d98 : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_6315710
        public_6395da0 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6316730
        public_6395da8 : nop
        lea ecx, ss:[ebp-0x54]
        jmp public_62bb580
        public_6395db0 : nop
        mov eax, offset public_63afb74
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395d80)
        ASM_EXPORT_ENTRY_FIRST(0x6395d8c, public_6395d8c)
        ASM_EXPORT_ENTRY(0x6395d98, public_6395d98)
        ASM_EXPORT_ENTRY(0x6395da0, public_6395da0)
        ASM_EXPORT_ENTRY(0x6395da8, public_6395da8)
        ASM_EXPORT_ENTRY_LAST(0x6395db0, public_6395db0)
    }
}

#undef public_6395d8c
#undef public_6395d98
#undef public_6395da0
#undef public_6395da8
#undef public_6395db0

#pragma init_seg(compiler)
extern "C" void const* const public_6395d8c = __AsmFindLabelExport(&internal_6395d80, 0x6395d8c);
extern "C" void const* const public_6395d98 = __AsmFindLabelExport(&internal_6395d80, 0x6395d98);
extern "C" void const* const public_6395da0 = __AsmFindLabelExport(&internal_6395d80, 0x6395da0);
extern "C" void const* const public_6395da8 = __AsmFindLabelExport(&internal_6395d80, 0x6395da8);
extern "C" void const* const public_6395db0 = __AsmFindLabelExport(&internal_6395d80, 0x6395db0);
