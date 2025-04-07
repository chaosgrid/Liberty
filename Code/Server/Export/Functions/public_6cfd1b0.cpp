#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

PROC_DECLARE(0x6cfd1b0, internal_6cfd1b0, public_6cfd1b0);
extern "C" NAKED register_t __cdecl internal_6cfd1b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d64548]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        call public_6d5ffb0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfd1b0)
    }
}
