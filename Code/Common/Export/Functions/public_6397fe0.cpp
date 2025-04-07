#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6350560);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397feb _public_6397feb
#define public_6397ff6 _public_6397ff6
#define public_6398001 _public_6398001

PROC_DECLARE(0x6397fe0, internal_6397fe0, public_6397fe0);
/* CHUNK of public_634ebd0 */
extern "C" NAKED register_t __cdecl internal_6397fe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA14]
        jmp public_63449d0
        public_6397feb : nop
        lea ecx, ss:[ebp-0xC48]
        jmp public_6350560
        public_6397ff6 : nop
        lea ecx, ss:[ebp-0xC1C]
        jmp public_63449d0
        public_6398001 : nop
        mov eax, offset public_63b23a0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397fe0)
        ASM_EXPORT_ENTRY_FIRST(0x6397feb, public_6397feb)
        ASM_EXPORT_ENTRY(0x6397ff6, public_6397ff6)
        ASM_EXPORT_ENTRY_LAST(0x6398001, public_6398001)
    }
}

#undef public_6397feb
#undef public_6397ff6
#undef public_6398001

#pragma init_seg(compiler)
extern "C" void const* const public_6397feb = __AsmFindLabelExport(&internal_6397fe0, 0x6397feb);
extern "C" void const* const public_6397ff6 = __AsmFindLabelExport(&internal_6397fe0, 0x6397ff6);
extern "C" void const* const public_6398001 = __AsmFindLabelExport(&internal_6397fe0, 0x6398001);
