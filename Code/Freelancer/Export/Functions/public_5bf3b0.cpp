#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf3b9 _public_5bf3b9
#define public_5bf3c2 _public_5bf3c2

PROC_DECLARE(0x5bf3b0, internal_5bf3b0, public_5bf3b0);
/* CHUNK of public_4f5e50 */
extern "C" NAKED register_t __cdecl internal_5bf3b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7090]
        public_5bf3b9 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c7090]
        public_5bf3c2 : nop
        mov eax, offset public_5f92f8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf3b0)
        ASM_EXPORT_ENTRY_FIRST(0x5bf3b9, public_5bf3b9)
        ASM_EXPORT_ENTRY_LAST(0x5bf3c2, public_5bf3c2)
    }
}

#undef public_5bf3b9
#undef public_5bf3c2

#pragma init_seg(compiler)
extern "C" void const* const public_5bf3b9 = __AsmFindLabelExport(&internal_5bf3b0, 0x5bf3b9);
extern "C" void const* const public_5bf3c2 = __AsmFindLabelExport(&internal_5bf3b0, 0x5bf3c2);
