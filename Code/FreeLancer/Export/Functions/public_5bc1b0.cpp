#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc1b9 _public_5bc1b9
#define public_5bc1c1 _public_5bc1c1
#define public_5bc1ca _public_5bc1ca

PROC_DECLARE(0x5bc1b0, internal_5bc1b0, public_5bc1b0);
/* CHUNK of public_4877f0 */
extern "C" NAKED register_t __cdecl internal_5bc1b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c7058]
        public_5bc1b9 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_487c30
        public_5bc1c1 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c7058]
        public_5bc1ca : nop
        mov eax, offset public_5f65b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc1b0)
        ASM_EXPORT_ENTRY_FIRST(0x5bc1b9, public_5bc1b9)
        ASM_EXPORT_ENTRY(0x5bc1c1, public_5bc1c1)
        ASM_EXPORT_ENTRY_LAST(0x5bc1ca, public_5bc1ca)
    }
}

#undef public_5bc1b9
#undef public_5bc1c1
#undef public_5bc1ca

#pragma init_seg(compiler)
extern "C" void const* const public_5bc1b9 = __AsmFindLabelExport(&internal_5bc1b0, 0x5bc1b9);
extern "C" void const* const public_5bc1c1 = __AsmFindLabelExport(&internal_5bc1b0, 0x5bc1c1);
extern "C" void const* const public_5bc1ca = __AsmFindLabelExport(&internal_5bc1b0, 0x5bc1ca);
