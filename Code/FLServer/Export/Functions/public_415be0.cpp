#include "FLServer-PCH.h"

PROC_DECLARE(0x415be0, internal_415be0, public_415be0);
extern "C" NAKED register_t __cdecl internal_415be0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_429560], ax
        mov byte ptr ds : [public_429562], al
        ret 
        UNREACHABLE_TRAP(0x415be0)
    }
}
