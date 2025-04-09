#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9bbb _public_5b9bbb

PROC_DECLARE(0x5b9bb0, internal_5b9bb0, public_5b9bb0);
/* CHUNK of public_44a3a0 */
extern "C" NAKED register_t __cdecl internal_5b9bb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9bbb : nop
        mov eax, offset public_5f3c48
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9bb0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9bbb, public_5b9bbb)
    }
}

#undef public_5b9bbb

#pragma init_seg(compiler)
extern "C" void const* const public_5b9bbb = __AsmFindLabelExport(&internal_5b9bb0, 0x5b9bbb);
