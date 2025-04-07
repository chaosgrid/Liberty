#include "Common-PCH.h"

PROC_DECLARE(0x6325b70, internal_6325b70, public_6325b70);
extern "C" NAKED register_t __cdecl internal_6325b70()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a3e54
        mov dx, word ptr ds : [ecx+4]
        mov word ptr ds : [eax+4], dx
        mov dword ptr ds : [eax], offset public_63a442c
        ret 4
        UNREACHABLE_TRAP(0x6325b70)
    }
}
