#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd7c0);

PROC_DECLARE(0x6cfd7c0, internal_6cfd7c0, public_6cfd7c0);
extern "C" NAKED register_t __cdecl internal_6cfd7c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6d643b4]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cfd7c0)
    }
}
