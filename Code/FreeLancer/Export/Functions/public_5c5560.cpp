#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c556b _public_5c556b
#define public_5c5577 _public_5c5577
#define public_5c5583 _public_5c5583
#define public_5c558f _public_5c558f
#define public_5c559a _public_5c559a

PROC_DECLARE(0x5c5560, internal_5c5560, public_5c5560);
/* CHUNK of public_5a9440 */
extern "C" NAKED register_t __cdecl internal_5c5560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA8]
        jmp public_5686b0
        public_5c556b : nop
        lea ecx, ss:[ebp-0x174]
        jmp dword ptr ds : [public_5c7058]
        public_5c5577 : nop
        lea ecx, ss:[ebp-0x164]
        jmp dword ptr ds : [public_5c7058]
        public_5c5583 : nop
        lea ecx, ss:[ebp-0x154]
        jmp dword ptr ds : [public_5c7058]
        public_5c558f : nop
        lea ecx, ss:[ebp-0x144]
        jmp public_5686b0
        public_5c559a : nop
        mov eax, offset public_5ff3a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5560)
        ASM_EXPORT_ENTRY_FIRST(0x5c556b, public_5c556b)
        ASM_EXPORT_ENTRY(0x5c5577, public_5c5577)
        ASM_EXPORT_ENTRY(0x5c5583, public_5c5583)
        ASM_EXPORT_ENTRY(0x5c558f, public_5c558f)
        ASM_EXPORT_ENTRY_LAST(0x5c559a, public_5c559a)
    }
}

#undef public_5c556b
#undef public_5c5577
#undef public_5c5583
#undef public_5c558f
#undef public_5c559a

#pragma init_seg(compiler)
extern "C" void const* const public_5c556b = __AsmFindLabelExport(&internal_5c5560, 0x5c556b);
extern "C" void const* const public_5c5577 = __AsmFindLabelExport(&internal_5c5560, 0x5c5577);
extern "C" void const* const public_5c5583 = __AsmFindLabelExport(&internal_5c5560, 0x5c5583);
extern "C" void const* const public_5c558f = __AsmFindLabelExport(&internal_5c5560, 0x5c558f);
extern "C" void const* const public_5c559a = __AsmFindLabelExport(&internal_5c5560, 0x5c559a);
