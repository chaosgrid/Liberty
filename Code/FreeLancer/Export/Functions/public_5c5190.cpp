#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a68c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5199 _public_5c5199
#define public_5c51a2 _public_5c51a2
#define public_5c51aa _public_5c51aa

PROC_DECLARE(0x5c5190, internal_5c5190, public_5c5190);
/* CHUNK of public_5a6380 */
extern "C" NAKED register_t __cdecl internal_5c5190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp dword ptr ds : [public_5c7058]
        public_5c5199 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c7058]
        public_5c51a2 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_5a68c0
        public_5c51aa : nop
        mov eax, offset public_5ff024
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5190)
        ASM_EXPORT_ENTRY_FIRST(0x5c5199, public_5c5199)
        ASM_EXPORT_ENTRY(0x5c51a2, public_5c51a2)
        ASM_EXPORT_ENTRY_LAST(0x5c51aa, public_5c51aa)
    }
}

#undef public_5c5199
#undef public_5c51a2
#undef public_5c51aa

#pragma init_seg(compiler)
extern "C" void const* const public_5c5199 = __AsmFindLabelExport(&internal_5c5190, 0x5c5199);
extern "C" void const* const public_5c51a2 = __AsmFindLabelExport(&internal_5c5190, 0x5c51a2);
extern "C" void const* const public_5c51aa = __AsmFindLabelExport(&internal_5c5190, 0x5c51aa);
