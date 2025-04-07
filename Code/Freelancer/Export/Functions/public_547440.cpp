#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5392d0);
CLANG_FORWARD_PROC_SYMBOL(public_547440);

PROC_DECLARE(0x547440, internal_547440, public_547440);
extern "C" NAKED register_t __cdecl internal_547440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_5392d0
        mov byte ptr ds : [esi+0xA8], 0
        mov dword ptr ds : [esi], offset public_5e00a4
        mov dword ptr ds : [esi+4], offset public_5e0024
        mov dword ptr ds : [esi+0xC], offset public_5e0018
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x547440)
    }
}
