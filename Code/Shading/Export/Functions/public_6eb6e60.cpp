#include "Shading-PCH.h"

PROC_DECLARE(0x6eb6e60, internal_6eb6e60, public_6eb6e60);
extern "C" NAKED register_t __cdecl internal_6eb6e60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x74]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6eb6e60)
    }
}
