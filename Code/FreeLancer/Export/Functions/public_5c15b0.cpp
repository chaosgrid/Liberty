#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c15bc _public_5c15bc
#define public_5c15c8 _public_5c15c8
#define public_5c15d3 _public_5c15d3
#define public_5c15de _public_5c15de
#define public_5c15ea _public_5c15ea
#define public_5c15f6 _public_5c15f6

PROC_DECLARE(0x5c15b0, internal_5c15b0, public_5c15b0);
/* CHUNK of public_559db0 */
extern "C" NAKED register_t __cdecl internal_5c15b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c15bc : nop
        lea ecx, ss:[ebp-0x169C]
        jmp dword ptr ds : [public_5c7090]
        public_5c15c8 : nop
        lea ecx, ss:[ebp-0x169C]
        jmp public_4dd9a0
        public_5c15d3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c15de : nop
        mov ecx, dword ptr ss : [ebp-0x16CC]
        jmp dword ptr ds : [public_5c7090]
        public_5c15ea : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c15f6 : nop
        mov eax, offset public_5fb98c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c15b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c15bc, public_5c15bc)
        ASM_EXPORT_ENTRY(0x5c15c8, public_5c15c8)
        ASM_EXPORT_ENTRY(0x5c15d3, public_5c15d3)
        ASM_EXPORT_ENTRY(0x5c15de, public_5c15de)
        ASM_EXPORT_ENTRY(0x5c15ea, public_5c15ea)
        ASM_EXPORT_ENTRY_LAST(0x5c15f6, public_5c15f6)
    }
}

#undef public_5c15bc
#undef public_5c15c8
#undef public_5c15d3
#undef public_5c15de
#undef public_5c15ea
#undef public_5c15f6

#pragma init_seg(compiler)
extern "C" void const* const public_5c15bc = __AsmFindLabelExport(&internal_5c15b0, 0x5c15bc);
extern "C" void const* const public_5c15c8 = __AsmFindLabelExport(&internal_5c15b0, 0x5c15c8);
extern "C" void const* const public_5c15d3 = __AsmFindLabelExport(&internal_5c15b0, 0x5c15d3);
extern "C" void const* const public_5c15de = __AsmFindLabelExport(&internal_5c15b0, 0x5c15de);
extern "C" void const* const public_5c15ea = __AsmFindLabelExport(&internal_5c15b0, 0x5c15ea);
extern "C" void const* const public_5c15f6 = __AsmFindLabelExport(&internal_5c15b0, 0x5c15f6);
