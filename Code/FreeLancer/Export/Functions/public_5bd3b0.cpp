#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd3b9 _public_5bd3b9
#define public_5bd3c2 _public_5bd3c2

PROC_DECLARE(0x5bd3b0, internal_5bd3b0, public_5bd3b0);
/* CHUNK of public_4ba5a0 */
extern "C" NAKED register_t __cdecl internal_5bd3b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_5c6098]
        public_5bd3b9 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c6098]
        public_5bd3c2 : nop
        mov eax, offset public_5f76bc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd3b0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd3b9, public_5bd3b9)
        ASM_EXPORT_ENTRY_LAST(0x5bd3c2, public_5bd3c2)
    }
}

#undef public_5bd3b9
#undef public_5bd3c2

#pragma init_seg(compiler)
extern "C" void const* const public_5bd3b9 = __AsmFindLabelExport(&internal_5bd3b0, 0x5bd3b9);
extern "C" void const* const public_5bd3c2 = __AsmFindLabelExport(&internal_5bd3b0, 0x5bd3c2);
