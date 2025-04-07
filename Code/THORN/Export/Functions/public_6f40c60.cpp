#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40c60);

PROC_DECLARE(0x6f40c60, internal_6f40c60, public_6f40c60);
extern "C" NAKED register_t __cdecl internal_6f40c60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[ecx+0x44]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f40c60)
    }
}
