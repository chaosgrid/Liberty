#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecd340);

PROC_DECLARE(0x6ecd340, internal_6ecd340, public_6ecd340);
extern "C" NAKED register_t __cdecl internal_6ecd340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov dword ptr ds : [esi], offset public_6fb5f24
        mov dword ptr ds : [esi+0xC], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecd340)
    }
}
