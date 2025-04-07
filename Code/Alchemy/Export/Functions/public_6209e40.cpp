#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209e40, internal_6209e40, public_6209e40);
extern "C" NAKED register_t __cdecl internal_6209e40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x94]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6209e40)
    }
}
