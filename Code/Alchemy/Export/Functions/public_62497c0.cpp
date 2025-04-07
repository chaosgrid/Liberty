#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62497cb _public_62497cb

PROC_DECLARE(0x62497c0, internal_62497c0, public_62497c0);
/* CHUNK of public_622f480 */
extern "C" NAKED register_t __cdecl internal_62497c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62497cb : nop
        mov eax, offset public_6252764
        jmp public_6246126
        UNREACHABLE_TRAP(0x62497c0)
        ASM_EXPORT_ENTRY_SINGLE(0x62497cb, public_62497cb)
    }
}

#undef public_62497cb

#pragma init_seg(compiler)
extern "C" void const* const public_62497cb = __AsmFindLabelExport(&internal_62497c0, 0x62497cb);
