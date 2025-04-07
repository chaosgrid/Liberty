#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6280240);
CLANG_FORWARD_PROC_SYMBOL(public_6280540);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392deb _public_6392deb
#define public_6392df3 _public_6392df3
#define public_6392dfb _public_6392dfb
#define public_6392e09 _public_6392e09
#define public_6392e11 _public_6392e11

PROC_DECLARE(0x6392de0, internal_6392de0, public_6392de0);
/* CHUNK of public_627fc80 */
extern "C" NAKED register_t __cdecl internal_6392de0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xFC]
        jmp public_6280540
        public_6392deb : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_627f9d0
        public_6392df3 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6280240
        public_6392dfb : nop
        mov ecx, dword ptr ss : [ebp-0xE4]
        add ecx, 0x20
        jmp public_6269110
        public_6392e09 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6269110
        public_6392e11 : nop
        mov eax, offset public_63abd5c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392de0)
        ASM_EXPORT_ENTRY_FIRST(0x6392deb, public_6392deb)
        ASM_EXPORT_ENTRY(0x6392df3, public_6392df3)
        ASM_EXPORT_ENTRY(0x6392dfb, public_6392dfb)
        ASM_EXPORT_ENTRY(0x6392e09, public_6392e09)
        ASM_EXPORT_ENTRY_LAST(0x6392e11, public_6392e11)
    }
}

#undef public_6392deb
#undef public_6392df3
#undef public_6392dfb
#undef public_6392e09
#undef public_6392e11

#pragma init_seg(compiler)
extern "C" void const* const public_6392deb = __AsmFindLabelExport(&internal_6392de0, 0x6392deb);
extern "C" void const* const public_6392df3 = __AsmFindLabelExport(&internal_6392de0, 0x6392df3);
extern "C" void const* const public_6392dfb = __AsmFindLabelExport(&internal_6392de0, 0x6392dfb);
extern "C" void const* const public_6392e09 = __AsmFindLabelExport(&internal_6392de0, 0x6392e09);
extern "C" void const* const public_6392e11 = __AsmFindLabelExport(&internal_6392de0, 0x6392e11);
