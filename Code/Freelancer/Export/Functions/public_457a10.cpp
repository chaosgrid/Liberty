#include "Freelancer-PCH.h"

PROC_DECLARE(0x457a10, internal_457a10, public_457a10);
extern "C" NAKED register_t __cdecl internal_457a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x68]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x457a10)
    }
}
