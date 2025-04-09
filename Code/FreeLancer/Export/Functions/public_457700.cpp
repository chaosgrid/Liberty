#include "Freelancer-PCH.h"

PROC_DECLARE(0x457700, internal_457700, public_457700);
extern "C" NAKED register_t __cdecl internal_457700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x457700)
    }
}
