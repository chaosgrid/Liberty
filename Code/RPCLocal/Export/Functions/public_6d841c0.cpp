#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d841c0);

PROC_DECLARE(0x6d841c0, internal_6d841c0, public_6d841c0);
extern "C" NAKED register_t __cdecl internal_6d841c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        lea esi, ds:[ecx+0x2C]
        mov ecx, 0xD
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d841c0)
    }
}
