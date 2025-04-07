#include "Shading-PCH.h"

PROC_DECLARE(0x6eb4490, internal_6eb4490, public_6eb4490);
extern "C" NAKED register_t __cdecl internal_6eb4490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6eb4490)
    }
}
