#include "Server-PCH.h"

PROC_DECLARE(0x6d55e20, internal_6d55e20, public_6d55e20);
extern "C" NAKED register_t __cdecl internal_6d55e20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call dword ptr ds : [eax+0x174]
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d55e20)
    }
}
