#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2de0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d2e00 _public_65d2e00

PROC_DECLARE(0x65d2de0, internal_65d2de0, public_65d2de0);
extern "C" NAKED register_t __cdecl internal_65d2de0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], offset public_65e1318
        test eax, eax
        je public_65d2e00
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_65d2e00 : nop
        mov dword ptr ds : [esi+8], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d2de0)
    }
}

#undef public_65d2e00
