#include "Common-PCH.h"

PROC_DECLARE(0x6325b90, internal_6325b90, public_6325b90);
extern "C" NAKED register_t __cdecl internal_6325b90()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dx, word ptr ds : [ecx+4]
        mov word ptr ds : [eax+4], dx
        ret 4
        UNREACHABLE_TRAP(0x6325b90)
    }
}
