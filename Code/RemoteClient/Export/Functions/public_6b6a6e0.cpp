#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a6eb _public_6b6a6eb

PROC_DECLARE(0x6b6a6e0, internal_6b6a6e0, public_6b6a6e0);
/* CHUNK of public_6b3a510 */
extern "C" NAKED register_t __cdecl internal_6b6a6e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a6eb : nop
        mov eax, offset public_6b6eda0
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a6e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a6eb, public_6b6a6eb)
    }
}

#undef public_6b6a6eb

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a6eb = __AsmFindLabelExport(&internal_6b6a6e0, 0x6b6a6eb);
