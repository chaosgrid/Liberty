#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_466770);

PROC_DECLARE(0x466730, internal_466730, public_466730);
extern "C" NAKED register_t __cdecl internal_466730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [public_66da70]
        push 0
        push edx
        call public_466770
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [public_66da70]
        push edx
        call public_466770
        push eax
        call dword ptr ds : [public_5c62fc]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x466730)
    }
}
