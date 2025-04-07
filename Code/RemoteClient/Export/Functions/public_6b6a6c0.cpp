#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a6cb _public_6b6a6cb

PROC_DECLARE(0x6b6a6c0, internal_6b6a6c0, public_6b6a6c0);
/* CHUNK of public_6b39880 */
extern "C" NAKED register_t __cdecl internal_6b6a6c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a6cb : nop
        mov eax, offset public_6b6ed7c
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a6c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a6cb, public_6b6a6cb)
    }
}

#undef public_6b6a6cb

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a6cb = __AsmFindLabelExport(&internal_6b6a6c0, 0x6b6a6cb);
