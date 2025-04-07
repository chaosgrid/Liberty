#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e1f0);

PROC_DECLARE(0x630e1f0, internal_630e1f0, public_630e1f0);
extern "C" NAKED register_t __cdecl internal_630e1f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ds : [esi], 0
        call public_630dda0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630e1f0)
    }
}
