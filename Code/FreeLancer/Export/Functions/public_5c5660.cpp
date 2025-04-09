#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c566c _public_5c566c
#define public_5c5677 _public_5c5677
#define public_5c5683 _public_5c5683
#define public_5c568f _public_5c568f
#define public_5c569b _public_5c569b
#define public_5c56a6 _public_5c56a6

PROC_DECLARE(0x5c5660, internal_5c5660, public_5c5660);
/* CHUNK of public_5ab590 */
extern "C" NAKED register_t __cdecl internal_5c5660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x528]
        jmp dword ptr ds : [public_5c7058]
        public_5c566c : nop
        lea ecx, ss:[ebp-0x510]
        jmp public_4de730
        public_5c5677 : nop
        lea ecx, ss:[ebp-0x4E4]
        jmp dword ptr ds : [public_5c7058]
        public_5c5683 : nop
        lea ecx, ss:[ebp-0x4D4]
        jmp dword ptr ds : [public_5c7058]
        public_5c568f : nop
        lea ecx, ss:[ebp-0x4C4]
        jmp dword ptr ds : [public_5c7090]
        public_5c569b : nop
        lea ecx, ss:[ebp-0x528]
        jmp public_5686b0
        public_5c56a6 : nop
        mov eax, offset public_5ff484
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5660)
        ASM_EXPORT_ENTRY_FIRST(0x5c566c, public_5c566c)
        ASM_EXPORT_ENTRY(0x5c5677, public_5c5677)
        ASM_EXPORT_ENTRY(0x5c5683, public_5c5683)
        ASM_EXPORT_ENTRY(0x5c568f, public_5c568f)
        ASM_EXPORT_ENTRY(0x5c569b, public_5c569b)
        ASM_EXPORT_ENTRY_LAST(0x5c56a6, public_5c56a6)
    }
}

#undef public_5c566c
#undef public_5c5677
#undef public_5c5683
#undef public_5c568f
#undef public_5c569b
#undef public_5c56a6

#pragma init_seg(compiler)
extern "C" void const* const public_5c566c = __AsmFindLabelExport(&internal_5c5660, 0x5c566c);
extern "C" void const* const public_5c5677 = __AsmFindLabelExport(&internal_5c5660, 0x5c5677);
extern "C" void const* const public_5c5683 = __AsmFindLabelExport(&internal_5c5660, 0x5c5683);
extern "C" void const* const public_5c568f = __AsmFindLabelExport(&internal_5c5660, 0x5c568f);
extern "C" void const* const public_5c569b = __AsmFindLabelExport(&internal_5c5660, 0x5c569b);
extern "C" void const* const public_5c56a6 = __AsmFindLabelExport(&internal_5c5660, 0x5c56a6);
