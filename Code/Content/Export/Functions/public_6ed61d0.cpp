#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6ed61d0, internal_6ed61d0, public_6ed61d0);
extern "C" NAKED register_t __cdecl internal_6ed61d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb6254
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ed61d0)
    }
}
