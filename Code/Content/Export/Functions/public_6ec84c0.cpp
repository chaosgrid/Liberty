#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec84c0);

PROC_DECLARE(0x6ec84c0, internal_6ec84c0, public_6ec84c0);
extern "C" NAKED register_t __cdecl internal_6ec84c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov dword ptr ds : [esi], offset public_6fb5c10
        mov dword ptr ds : [esi+0xC], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec84c0)
    }
}
