#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9430);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

PROC_DECLARE(0x65f9430, internal_65f9430, public_65f9430);
extern "C" NAKED register_t __cdecl internal_65f9430()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6600bb0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f9430)
    }
}
