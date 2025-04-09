#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b6c0);

PROC_DECLARE(0x5690f0, internal_5690f0, public_5690f0);
extern "C" NAKED register_t __cdecl internal_5690f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x230]
        push 0
        push edx
        call public_46b6c0
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x230]
        push edx
        call public_46b6c0
        add esp, 4
        push eax
        call dword ptr ds : [public_5c62fc]
        add esp, 0xC
        neg eax
        ret 
        UNREACHABLE_TRAP(0x5690f0)
    }
}
