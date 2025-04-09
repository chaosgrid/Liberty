#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be5b8 _public_5be5b8
#define public_5be5c1 _public_5be5c1
#define public_5be5c9 _public_5be5c9

PROC_DECLARE(0x5be5b0, internal_5be5b0, public_5be5b0);
/* CHUNK of public_4dd730 */
extern "C" NAKED register_t __cdecl internal_5be5b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_4de730
        public_5be5b8 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c7090]
        public_5be5c1 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_4dd9a0
        public_5be5c9 : nop
        mov eax, offset public_5f87e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be5b0)
        ASM_EXPORT_ENTRY_FIRST(0x5be5b8, public_5be5b8)
        ASM_EXPORT_ENTRY(0x5be5c1, public_5be5c1)
        ASM_EXPORT_ENTRY_LAST(0x5be5c9, public_5be5c9)
    }
}

#undef public_5be5b8
#undef public_5be5c1
#undef public_5be5c9

#pragma init_seg(compiler)
extern "C" void const* const public_5be5b8 = __AsmFindLabelExport(&internal_5be5b0, 0x5be5b8);
extern "C" void const* const public_5be5c1 = __AsmFindLabelExport(&internal_5be5b0, 0x5be5c1);
extern "C" void const* const public_5be5c9 = __AsmFindLabelExport(&internal_5be5b0, 0x5be5c9);
