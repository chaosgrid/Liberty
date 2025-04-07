#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217ab0);

PROC_DECLARE(0x6217ab0, internal_6217ab0, public_6217ab0);
extern "C" NAKED register_t __cdecl internal_6217ab0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        mov ecx, 0xC
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6217ab0)
    }
}
