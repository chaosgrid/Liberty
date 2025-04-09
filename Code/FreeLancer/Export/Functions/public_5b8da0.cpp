#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42dd70);
CLANG_FORWARD_PROC_SYMBOL(public_42edb0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8dab _public_5b8dab
#define public_5b8db3 _public_5b8db3
#define public_5b8dbe _public_5b8dbe
#define public_5b8dc9 _public_5b8dc9
#define public_5b8dd1 _public_5b8dd1
#define public_5b8dd9 _public_5b8dd9

PROC_DECLARE(0x5b8da0, internal_5b8da0, public_5b8da0);
/* CHUNK of public_42eaa0 */
extern "C" NAKED register_t __cdecl internal_5b8da0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x8C]
        jmp public_42dd70
        public_5b8dab : nop
        lea ecx, ss:[ebp-0x48]
        jmp public_42edb0
        public_5b8db3 : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0xC
        jmp public_4de730
        public_5b8dbe : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0x28
        jmp public_4de730
        public_5b8dc9 : nop
        lea ecx, ss:[ebp-0x80]
        jmp public_4de730
        public_5b8dd1 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_4de730
        public_5b8dd9 : nop
        mov eax, offset public_5f2cb4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8da0)
        ASM_EXPORT_ENTRY_FIRST(0x5b8dab, public_5b8dab)
        ASM_EXPORT_ENTRY(0x5b8db3, public_5b8db3)
        ASM_EXPORT_ENTRY(0x5b8dbe, public_5b8dbe)
        ASM_EXPORT_ENTRY(0x5b8dc9, public_5b8dc9)
        ASM_EXPORT_ENTRY(0x5b8dd1, public_5b8dd1)
        ASM_EXPORT_ENTRY_LAST(0x5b8dd9, public_5b8dd9)
    }
}

#undef public_5b8dab
#undef public_5b8db3
#undef public_5b8dbe
#undef public_5b8dc9
#undef public_5b8dd1
#undef public_5b8dd9

#pragma init_seg(compiler)
extern "C" void const* const public_5b8dab = __AsmFindLabelExport(&internal_5b8da0, 0x5b8dab);
extern "C" void const* const public_5b8db3 = __AsmFindLabelExport(&internal_5b8da0, 0x5b8db3);
extern "C" void const* const public_5b8dbe = __AsmFindLabelExport(&internal_5b8da0, 0x5b8dbe);
extern "C" void const* const public_5b8dc9 = __AsmFindLabelExport(&internal_5b8da0, 0x5b8dc9);
extern "C" void const* const public_5b8dd1 = __AsmFindLabelExport(&internal_5b8da0, 0x5b8dd1);
extern "C" void const* const public_5b8dd9 = __AsmFindLabelExport(&internal_5b8da0, 0x5b8dd9);
