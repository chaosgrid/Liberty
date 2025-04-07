#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245b30);

PROC_DECLARE(0x621d200, internal_621d200, public_621d200);
extern "C" NAKED register_t __cdecl internal_621d200()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        call public_6245b30
        mov eax, dword ptr ds : [edi+0xF0]
        pop edi
        mov dword ptr ds : [esi+0xF0], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x621d200)
    }
}
