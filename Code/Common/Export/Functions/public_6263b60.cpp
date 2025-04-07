#include "Common-PCH.h"

PROC_DECLARE(0x6263b60, internal_6263b60, public_6263b60);
extern "C" NAKED register_t __cdecl internal_6263b60()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        ret 4
        UNREACHABLE_TRAP(0x6263b60)
    }
}
