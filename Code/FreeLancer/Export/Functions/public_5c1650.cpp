#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c165b _public_5c165b
#define public_5c1666 _public_5c1666
#define public_5c1671 _public_5c1671
#define public_5c167c _public_5c167c
#define public_5c1684 _public_5c1684
#define public_5c168f _public_5c168f

PROC_DECLARE(0x5c1650, internal_5c1650, public_5c1650);
/* CHUNK of public_55bde0 */
extern "C" NAKED register_t __cdecl internal_5c1650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x9C]
        jmp public_444e20
        public_5c165b : nop
        lea ecx, ss:[ebp-0x94]
        jmp public_444e50
        public_5c1666 : nop
        lea ecx, ss:[ebp-0xA4]
        jmp public_444ee0
        public_5c1671 : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_444e20
        public_5c167c : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        jmp public_444e20
        public_5c1684 : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0xC
        jmp public_445d70
        public_5c168f : nop
        mov eax, offset public_5fba30
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1650)
        ASM_EXPORT_ENTRY_FIRST(0x5c165b, public_5c165b)
        ASM_EXPORT_ENTRY(0x5c1666, public_5c1666)
        ASM_EXPORT_ENTRY(0x5c1671, public_5c1671)
        ASM_EXPORT_ENTRY(0x5c167c, public_5c167c)
        ASM_EXPORT_ENTRY(0x5c1684, public_5c1684)
        ASM_EXPORT_ENTRY_LAST(0x5c168f, public_5c168f)
    }
}

#undef public_5c165b
#undef public_5c1666
#undef public_5c1671
#undef public_5c167c
#undef public_5c1684
#undef public_5c168f

#pragma init_seg(compiler)
extern "C" void const* const public_5c165b = __AsmFindLabelExport(&internal_5c1650, 0x5c165b);
extern "C" void const* const public_5c1666 = __AsmFindLabelExport(&internal_5c1650, 0x5c1666);
extern "C" void const* const public_5c1671 = __AsmFindLabelExport(&internal_5c1650, 0x5c1671);
extern "C" void const* const public_5c167c = __AsmFindLabelExport(&internal_5c1650, 0x5c167c);
extern "C" void const* const public_5c1684 = __AsmFindLabelExport(&internal_5c1650, 0x5c1684);
extern "C" void const* const public_5c168f = __AsmFindLabelExport(&internal_5c1650, 0x5c168f);
