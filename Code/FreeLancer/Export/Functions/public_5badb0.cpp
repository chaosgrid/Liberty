#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5badb9 _public_5badb9
#define public_5badc1 _public_5badc1
#define public_5badca _public_5badca
#define public_5badd2 _public_5badd2

PROC_DECLARE(0x5badb0, internal_5badb0, public_5badb0);
/* CHUNK of public_4632f0 */
extern "C" NAKED register_t __cdecl internal_5badb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62b4]
        public_5badb9 : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5badc1 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62c8]
        public_5badca : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5badd2 : nop
        mov eax, offset public_5f5030
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5badb0)
        ASM_EXPORT_ENTRY_FIRST(0x5badb9, public_5badb9)
        ASM_EXPORT_ENTRY(0x5badc1, public_5badc1)
        ASM_EXPORT_ENTRY(0x5badca, public_5badca)
        ASM_EXPORT_ENTRY_LAST(0x5badd2, public_5badd2)
    }
}

#undef public_5badb9
#undef public_5badc1
#undef public_5badca
#undef public_5badd2

#pragma init_seg(compiler)
extern "C" void const* const public_5badb9 = __AsmFindLabelExport(&internal_5badb0, 0x5badb9);
extern "C" void const* const public_5badc1 = __AsmFindLabelExport(&internal_5badb0, 0x5badc1);
extern "C" void const* const public_5badca = __AsmFindLabelExport(&internal_5badb0, 0x5badca);
extern "C" void const* const public_5badd2 = __AsmFindLabelExport(&internal_5badb0, 0x5badd2);
