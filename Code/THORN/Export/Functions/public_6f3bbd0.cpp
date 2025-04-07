#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

PROC_DECLARE(0x6f3bbd0, internal_6f3bbd0, public_6f3bbd0);
extern "C" NAKED register_t __cdecl internal_6f3bbd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3bbd0)
    }
}
