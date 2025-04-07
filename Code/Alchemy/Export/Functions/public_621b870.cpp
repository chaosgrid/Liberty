#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245b30);

PROC_DECLARE(0x621b870, internal_621b870, public_621b870);
extern "C" NAKED register_t __cdecl internal_621b870()
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
        UNREACHABLE_TRAP(0x621b870)
    }
}
