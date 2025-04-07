#include "Freelancer-PCH.h"

PROC_DECLARE(0x454570, internal_454570, public_454570);
extern "C" NAKED register_t __cdecl internal_454570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_66d2b0], eax
        mov dword ptr ds : [public_66d2b4], ecx
        mov dword ptr ds : [public_66d2b8], edx
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x454570)
    }
}
