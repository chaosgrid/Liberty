#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf508 _public_5bf508

PROC_DECLARE(0x5bf500, internal_5bf500, public_5bf500);
/* CHUNK of public_4fd920 */
extern "C" NAKED register_t __cdecl internal_5bf500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4f8dd0
        public_5bf508 : nop
        mov eax, offset public_5f94ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf500)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf508, public_5bf508)
    }
}

#undef public_5bf508

#pragma init_seg(compiler)
extern "C" void const* const public_5bf508 = __AsmFindLabelExport(&internal_5bf500, 0x5bf508);
