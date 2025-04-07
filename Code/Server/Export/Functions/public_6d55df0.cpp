#include "Server-PCH.h"

PROC_DECLARE(0x6d55df0, internal_6d55df0, public_6d55df0);
extern "C" NAKED register_t __cdecl internal_6d55df0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call dword ptr ds : [eax+0x17C]
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d55df0)
    }
}
