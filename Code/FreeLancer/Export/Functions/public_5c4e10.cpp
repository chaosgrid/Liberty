#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4e18 _public_5c4e18

PROC_DECLARE(0x5c4e10, internal_5c4e10, public_5c4e10);
/* CHUNK of public_59d080 */
extern "C" NAKED register_t __cdecl internal_5c4e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x40]
        jmp public_576010
        public_5c4e18 : nop
        mov eax, offset public_5febc4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4e10)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4e18, public_5c4e18)
    }
}

#undef public_5c4e18

#pragma init_seg(compiler)
extern "C" void const* const public_5c4e18 = __AsmFindLabelExport(&internal_5c4e10, 0x5c4e18);
