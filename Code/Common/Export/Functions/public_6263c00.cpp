#include "Common-PCH.h"

PROC_DECLARE(0x6263c00, internal_6263c00, public_6263c00);
extern "C" NAKED register_t __cdecl internal_6263c00()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+2]
        mov edx, dword ptr ss : [esp+4]
        xor ecx, ecx
        cmp ax, word ptr ds : [edx+2]
        setne cl
        mov al, cl
        ret 4
        UNREACHABLE_TRAP(0x6263c00)
    }
}
