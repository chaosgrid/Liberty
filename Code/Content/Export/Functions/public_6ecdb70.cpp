#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecdb70);

PROC_DECLARE(0x6ecdb70, internal_6ecdb70, public_6ecdb70);
extern "C" NAKED register_t __cdecl internal_6ecdb70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov dword ptr ds : [esi], offset public_6fb5fb4
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecdb70)
    }
}
