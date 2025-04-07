#include "Freelancer-PCH.h"

PROC_DECLARE(0x457740, internal_457740, public_457740);
extern "C" NAKED register_t __cdecl internal_457740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x457740)
    }
}
