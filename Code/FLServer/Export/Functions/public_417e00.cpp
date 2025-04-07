#include "FLServer-PCH.h"

PROC_DECLARE(0x417e00, internal_417e00, public_417e00);
extern "C" NAKED register_t __cdecl internal_417e00()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_429e04], ax
        mov byte ptr ds : [public_429e06], al
        ret 
        UNREACHABLE_TRAP(0x417e00)
    }
}
