#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41ae0);

PROC_DECLARE(0x6f41ae0, internal_6f41ae0, public_6f41ae0);
extern "C" NAKED register_t __cdecl internal_6f41ae0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[ecx+0xC8]
        mov ecx, 0x24
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f41ae0)
    }
}
