#include "Freelancer-PCH.h"

PROC_DECLARE(0x4666d0, internal_4666d0, public_4666d0);
extern "C" NAKED register_t __cdecl internal_4666d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+4]
        push 0
        push ecx
        push eax
        call dword ptr ds : [public_5c62fc]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4666d0)
    }
}
