#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a72b _public_6b6a72b

PROC_DECLARE(0x6b6a720, internal_6b6a720, public_6b6a720);
/* CHUNK of public_6b3a820 */
extern "C" NAKED register_t __cdecl internal_6b6a720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a72b : nop
        mov eax, offset public_6b6ede8
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a720)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a72b, public_6b6a72b)
    }
}

#undef public_6b6a72b

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a72b = __AsmFindLabelExport(&internal_6b6a720, 0x6b6a72b);
