#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdc18 _public_5bdc18

PROC_DECLARE(0x5bdc10, internal_5bdc10, public_5bdc10);
/* CHUNK of public_4ceb50 */
extern "C" NAKED register_t __cdecl internal_5bdc10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_48e5f0
        public_5bdc18 : nop
        mov eax, offset public_5f8060
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdc10)
        ASM_EXPORT_ENTRY_SINGLE(0x5bdc18, public_5bdc18)
    }
}

#undef public_5bdc18

#pragma init_seg(compiler)
extern "C" void const* const public_5bdc18 = __AsmFindLabelExport(&internal_5bdc10, 0x5bdc18);
