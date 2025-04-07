#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faafab _public_6faafab

PROC_DECLARE(0x6faafa0, internal_6faafa0, public_6faafa0);
/* CHUNK of public_6ecbda0 */
extern "C" NAKED register_t __cdecl internal_6faafa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6faafab : nop
        mov eax, offset public_6fbf40c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faafa0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faafab, public_6faafab)
    }
}

#undef public_6faafab

#pragma init_seg(compiler)
extern "C" void const* const public_6faafab = __AsmFindLabelExport(&internal_6faafa0, 0x6faafab);
