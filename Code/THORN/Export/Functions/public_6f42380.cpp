#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f42380);

PROC_DECLARE(0x6f42380, internal_6f42380, public_6f42380);
extern "C" NAKED register_t __cdecl internal_6f42380()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[ecx+0xC8]
        mov ecx, 8
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f42380)
    }
}
