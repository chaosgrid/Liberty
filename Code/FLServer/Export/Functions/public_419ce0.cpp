#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419cea _public_419cea

PROC_DECLARE(0x419ce0, internal_419ce0, public_419ce0);
/* CHUNK of public_406370 */
extern "C" NAKED register_t __cdecl internal_419ce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_403af0
        ret 
        public_419cea : nop
        mov eax, offset public_41edfc
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419ce0)
        ASM_EXPORT_ENTRY_SINGLE(0x419cea, public_419cea)
    }
}

#undef public_419cea

#pragma init_seg(compiler)
extern "C" void const* const public_419cea = __AsmFindLabelExport(&internal_419ce0, 0x419cea);
