#include "Freelancer-PCH.h"

PROC_DECLARE(0x454530, internal_454530, public_454530);
extern "C" NAKED register_t __cdecl internal_454530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_66d2ae]
        and ecx, 0xFF
        mov dword ptr ds : [eax], ecx
        movzx edx, byte ptr ds : [public_66d2ad]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [public_66d2ac]
        and ecx, 0xFF
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x454530)
    }
}
