#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c30);

PROC_DECLARE(0x6ce7c30, internal_6ce7c30, public_6ce7c30);
extern "C" NAKED register_t __cdecl internal_6ce7c30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0xC
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce7c30)
    }
}
