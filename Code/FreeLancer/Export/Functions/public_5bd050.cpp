#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd059 _public_5bd059

PROC_DECLARE(0x5bd050, internal_5bd050, public_5bd050);
/* CHUNK of public_4b39b0 */
extern "C" NAKED register_t __cdecl internal_5bd050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp dword ptr ds : [public_5c60fc]
        public_5bd059 : nop
        mov eax, offset public_5f72dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd050)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd059, public_5bd059)
    }
}

#undef public_5bd059

#pragma init_seg(compiler)
extern "C" void const* const public_5bd059 = __AsmFindLabelExport(&internal_5bd050, 0x5bd059);
