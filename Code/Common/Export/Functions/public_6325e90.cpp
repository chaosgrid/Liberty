#include "Common-PCH.h"

PROC_DECLARE(0x6325e90, internal_6325e90, public_6325e90);
extern "C" NAKED register_t __cdecl internal_6325e90()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        ret 4
        UNREACHABLE_TRAP(0x6325e90)
    }
}
