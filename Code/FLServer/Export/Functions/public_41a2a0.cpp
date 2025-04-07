#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a2aa _public_41a2aa

PROC_DECLARE(0x41a2a0, internal_41a2a0, public_41a2a0);
/* CHUNK of public_40e6e0 */
extern "C" NAKED register_t __cdecl internal_41a2a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_403af0
        ret 
        public_41a2aa : nop
        mov eax, offset public_41f418
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a2a0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a2aa, public_41a2aa)
    }
}

#undef public_41a2aa

#pragma init_seg(compiler)
extern "C" void const* const public_41a2aa = __AsmFindLabelExport(&internal_41a2a0, 0x41a2aa);
