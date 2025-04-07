#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419d2a _public_419d2a

PROC_DECLARE(0x419d20, internal_419d20, public_419d20);
/* CHUNK of public_406610 */
extern "C" NAKED register_t __cdecl internal_419d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_403af0
        ret 
        public_419d2a : nop
        mov eax, offset public_41ee44
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419d20)
        ASM_EXPORT_ENTRY_SINGLE(0x419d2a, public_419d2a)
    }
}

#undef public_419d2a

#pragma init_seg(compiler)
extern "C" void const* const public_419d2a = __AsmFindLabelExport(&internal_419d20, 0x419d2a);
