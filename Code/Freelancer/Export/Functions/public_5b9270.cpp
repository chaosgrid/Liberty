#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9279 _public_5b9279

PROC_DECLARE(0x5b9270, internal_5b9270, public_5b9270);
/* CHUNK of public_437a70 */
extern "C" NAKED register_t __cdecl internal_5b9270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_5c6148]
        public_5b9279 : nop
        mov eax, offset public_5f31e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9270)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9279, public_5b9279)
    }
}

#undef public_5b9279

#pragma init_seg(compiler)
extern "C" void const* const public_5b9279 = __AsmFindLabelExport(&internal_5b9270, 0x5b9279);
