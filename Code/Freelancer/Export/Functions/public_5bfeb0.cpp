#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfebc _public_5bfebc
#define public_5bfec7 _public_5bfec7
#define public_5bfed3 _public_5bfed3
#define public_5bfedf _public_5bfedf

PROC_DECLARE(0x5bfeb0, internal_5bfeb0, public_5bfeb0);
/* CHUNK of public_51a2b0 */
extern "C" NAKED register_t __cdecl internal_5bfeb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1578]
        jmp dword ptr ds : [public_5c6048]
        public_5bfebc : nop
        lea ecx, ss:[ebp-0x1578]
        jmp public_40edf0
        public_5bfec7 : nop
        mov ecx, dword ptr ss : [ebp-0x1588]
        jmp dword ptr ds : [public_5c7090]
        public_5bfed3 : nop
        lea ecx, ss:[ebp-0x1578]
        jmp dword ptr ds : [public_5c7090]
        public_5bfedf : nop
        mov eax, offset public_5f9e5c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfeb0)
        ASM_EXPORT_ENTRY_FIRST(0x5bfebc, public_5bfebc)
        ASM_EXPORT_ENTRY(0x5bfec7, public_5bfec7)
        ASM_EXPORT_ENTRY(0x5bfed3, public_5bfed3)
        ASM_EXPORT_ENTRY_LAST(0x5bfedf, public_5bfedf)
    }
}

#undef public_5bfebc
#undef public_5bfec7
#undef public_5bfed3
#undef public_5bfedf

#pragma init_seg(compiler)
extern "C" void const* const public_5bfebc = __AsmFindLabelExport(&internal_5bfeb0, 0x5bfebc);
extern "C" void const* const public_5bfec7 = __AsmFindLabelExport(&internal_5bfeb0, 0x5bfec7);
extern "C" void const* const public_5bfed3 = __AsmFindLabelExport(&internal_5bfeb0, 0x5bfed3);
extern "C" void const* const public_5bfedf = __AsmFindLabelExport(&internal_5bfeb0, 0x5bfedf);
