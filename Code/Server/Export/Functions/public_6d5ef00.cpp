#include "Server-PCH.h"

PROC_DECLARE(0x6d5ef00, internal_6d5ef00, public_6d5ef00);
extern "C" NAKED register_t __cdecl internal_6d5ef00()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x1EC]
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d5ef00)
    }
}
