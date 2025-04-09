#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c599c _public_5c599c
#define public_5c59a7 _public_5c59a7
#define public_5c59b3 _public_5c59b3
#define public_5c59bf _public_5c59bf

PROC_DECLARE(0x5c5990, internal_5c5990, public_5c5990);
/* CHUNK of public_5b38d0 */
extern "C" NAKED register_t __cdecl internal_5c5990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x177C]
        jmp dword ptr ds : [public_5c6048]
        public_5c599c : nop
        lea ecx, ss:[ebp-0x177C]
        jmp public_40edf0
        public_5c59a7 : nop
        mov ecx, dword ptr ss : [ebp-0x1788]
        jmp dword ptr ds : [public_5c7090]
        public_5c59b3 : nop
        lea ecx, ss:[ebp-0x177C]
        jmp dword ptr ds : [public_5c7090]
        public_5c59bf : nop
        mov eax, offset public_5ff7ac
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5990)
        ASM_EXPORT_ENTRY_FIRST(0x5c599c, public_5c599c)
        ASM_EXPORT_ENTRY(0x5c59a7, public_5c59a7)
        ASM_EXPORT_ENTRY(0x5c59b3, public_5c59b3)
        ASM_EXPORT_ENTRY_LAST(0x5c59bf, public_5c59bf)
    }
}

#undef public_5c599c
#undef public_5c59a7
#undef public_5c59b3
#undef public_5c59bf

#pragma init_seg(compiler)
extern "C" void const* const public_5c599c = __AsmFindLabelExport(&internal_5c5990, 0x5c599c);
extern "C" void const* const public_5c59a7 = __AsmFindLabelExport(&internal_5c5990, 0x5c59a7);
extern "C" void const* const public_5c59b3 = __AsmFindLabelExport(&internal_5c5990, 0x5c59b3);
extern "C" void const* const public_5c59bf = __AsmFindLabelExport(&internal_5c5990, 0x5c59bf);
