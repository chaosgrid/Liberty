#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efd050);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6efd050, internal_6efd050, public_6efd050);
extern "C" NAKED register_t __cdecl internal_6efd050()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efd050)
    }
}
