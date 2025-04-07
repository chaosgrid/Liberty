#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6dab);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f0d);

PROC_DECLARE(0x65d6f0d, internal_65d6f0d, public_65d6f0d);
extern "C" NAKED register_t __cdecl internal_65d6f0d()
{
    __asm
    {
        push esi
        mov esi, ecx
        push dword ptr ss : [esp+8]
        call public_65d6dab
        mov dword ptr ds : [esi], offset public_65e159c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d6f0d)
    }
}
