#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a70b _public_6b6a70b

PROC_DECLARE(0x6b6a700, internal_6b6a700, public_6b6a700);
/* CHUNK of public_6b3a6a0 */
extern "C" NAKED register_t __cdecl internal_6b6a700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a70b : nop
        mov eax, offset public_6b6edc4
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a700)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a70b, public_6b6a70b)
    }
}

#undef public_6b6a70b

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a70b = __AsmFindLabelExport(&internal_6b6a700, 0x6b6a70b);
