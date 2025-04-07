#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c55f0);

PROC_DECLARE(0x4c55f0, internal_4c55f0, public_4c55f0);
extern "C" NAKED register_t __cdecl internal_4c55f0()
{
    __asm
    {
        sub esp, 0x80
        mov ecx, dword ptr ds : [public_67ecd0]
        push 4
        lea edx, ss:[esp+4]
        push edx
        mov edx, dword ptr ds : [public_673344]
        mov dword ptr ds : [public_67338c], 0xFFFFFFFF
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x138]
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4c55f0)
    }
}
