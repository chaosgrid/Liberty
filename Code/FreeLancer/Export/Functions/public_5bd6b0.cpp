#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd6bb _public_5bd6bb

PROC_DECLARE(0x5bd6b0, internal_5bd6b0, public_5bd6b0);
/* CHUNK of public_4c3810 */
extern "C" NAKED register_t __cdecl internal_5bd6b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd6bb : nop
        mov eax, offset public_5f7a44
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd6b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd6bb, public_5bd6bb)
    }
}

#undef public_5bd6bb

#pragma init_seg(compiler)
extern "C" void const* const public_5bd6bb = __AsmFindLabelExport(&internal_5bd6b0, 0x5bd6bb);
