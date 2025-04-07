#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece730);

PROC_DECLARE(0x6ece730, internal_6ece730, public_6ece730);
extern "C" NAKED register_t __cdecl internal_6ece730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov dword ptr ds : [esi], offset public_6fb6018
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ece730)
    }
}
