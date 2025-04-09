#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b91b9 _public_5b91b9

PROC_DECLARE(0x5b91b0, internal_5b91b0, public_5b91b0);
/* CHUNK of public_437540 */
extern "C" NAKED register_t __cdecl internal_5b91b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c60fc]
        public_5b91b9 : nop
        mov eax, offset public_5f3108
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b91b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b91b9, public_5b91b9)
    }
}

#undef public_5b91b9

#pragma init_seg(compiler)
extern "C" void const* const public_5b91b9 = __AsmFindLabelExport(&internal_5b91b0, 0x5b91b9);
