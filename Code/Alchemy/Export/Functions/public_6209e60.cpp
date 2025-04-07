#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209e60, internal_6209e60, public_6209e60);
extern "C" NAKED register_t __cdecl internal_6209e60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x95]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6209e60)
    }
}
