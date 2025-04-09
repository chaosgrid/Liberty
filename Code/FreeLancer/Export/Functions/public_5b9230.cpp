#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9239 _public_5b9239

PROC_DECLARE(0x5b9230, internal_5b9230, public_5b9230);
/* CHUNK of public_4378f0 */
extern "C" NAKED register_t __cdecl internal_5b9230()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_5c6130]
        public_5b9239 : nop
        mov eax, offset public_5f3198
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9230)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9239, public_5b9239)
    }
}

#undef public_5b9239

#pragma init_seg(compiler)
extern "C" void const* const public_5b9239 = __AsmFindLabelExport(&internal_5b9230, 0x5b9239);
