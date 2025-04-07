#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d613cb _public_6d613cb

PROC_DECLARE(0x6d613c0, internal_6d613c0, public_6d613c0);
/* CHUNK of public_6d07170 */
extern "C" NAKED register_t __cdecl internal_6d613c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d613cb : nop
        mov eax, offset public_6d71ff0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d613c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d613cb, public_6d613cb)
    }
}

#undef public_6d613cb

#pragma init_seg(compiler)
extern "C" void const* const public_6d613cb = __AsmFindLabelExport(&internal_6d613c0, 0x6d613cb);
