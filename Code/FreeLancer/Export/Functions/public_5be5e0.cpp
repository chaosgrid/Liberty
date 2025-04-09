#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dde70);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_4de750);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be5e8 _public_5be5e8
#define public_5be5f1 _public_5be5f1
#define public_5be5f9 _public_5be5f9
#define public_5be604 _public_5be604
#define public_5be60d _public_5be60d
#define public_5be615 _public_5be615

PROC_DECLARE(0x5be5e0, internal_5be5e0, public_5be5e0);
/* CHUNK of public_4dd9e0 */
extern "C" NAKED register_t __cdecl internal_5be5e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x80]
        jmp public_4de750
        public_5be5e8 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c7090]
        public_5be5f1 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_4dde70
        public_5be5f9 : nop
        lea ecx, ss:[ebp-0x90]
        jmp public_4de730
        public_5be604 : nop
        lea ecx, ss:[ebp-0x60]
        jmp dword ptr ds : [public_5c7090]
        public_5be60d : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_4dde70
        public_5be615 : nop
        mov eax, offset public_5f8830
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be5e0)
        ASM_EXPORT_ENTRY_FIRST(0x5be5e8, public_5be5e8)
        ASM_EXPORT_ENTRY(0x5be5f1, public_5be5f1)
        ASM_EXPORT_ENTRY(0x5be5f9, public_5be5f9)
        ASM_EXPORT_ENTRY(0x5be604, public_5be604)
        ASM_EXPORT_ENTRY(0x5be60d, public_5be60d)
        ASM_EXPORT_ENTRY_LAST(0x5be615, public_5be615)
    }
}

#undef public_5be5e8
#undef public_5be5f1
#undef public_5be5f9
#undef public_5be604
#undef public_5be60d
#undef public_5be615

#pragma init_seg(compiler)
extern "C" void const* const public_5be5e8 = __AsmFindLabelExport(&internal_5be5e0, 0x5be5e8);
extern "C" void const* const public_5be5f1 = __AsmFindLabelExport(&internal_5be5e0, 0x5be5f1);
extern "C" void const* const public_5be5f9 = __AsmFindLabelExport(&internal_5be5e0, 0x5be5f9);
extern "C" void const* const public_5be604 = __AsmFindLabelExport(&internal_5be5e0, 0x5be604);
extern "C" void const* const public_5be60d = __AsmFindLabelExport(&internal_5be5e0, 0x5be60d);
extern "C" void const* const public_5be615 = __AsmFindLabelExport(&internal_5be5e0, 0x5be615);
