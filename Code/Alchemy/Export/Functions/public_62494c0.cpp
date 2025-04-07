#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62494cb _public_62494cb

PROC_DECLARE(0x62494c0, internal_62494c0, public_62494c0);
/* CHUNK of public_622bcc0 */
extern "C" NAKED register_t __cdecl internal_62494c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62494cb : nop
        mov eax, offset public_6252434
        jmp public_6246126
        UNREACHABLE_TRAP(0x62494c0)
        ASM_EXPORT_ENTRY_SINGLE(0x62494cb, public_62494cb)
    }
}

#undef public_62494cb

#pragma init_seg(compiler)
extern "C" void const* const public_62494cb = __AsmFindLabelExport(&internal_62494c0, 0x62494cb);
