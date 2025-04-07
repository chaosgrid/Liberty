#include "FLServer-PCH.h"

PROC_DECLARE(0x417e30, internal_417e30, public_417e30);
extern "C" NAKED register_t __cdecl internal_417e30()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_429e00], ax
        mov byte ptr ds : [public_429e02], al
        ret 
        UNREACHABLE_TRAP(0x417e30)
    }
}
