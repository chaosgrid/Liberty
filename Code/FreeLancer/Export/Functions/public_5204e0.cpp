#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5204e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x5204e0, internal_5204e0, public_5204e0);
/* CHUNK of public_5201e0 */
extern "C" NAKED register_t __cdecl internal_5204e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5204e0)
    }
}
