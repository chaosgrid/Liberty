#include "FLServer-PCH.h"

PROC_DECLARE(0x401060, internal_401060, public_401060);
extern "C" NAKED register_t __cdecl internal_401060()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_425f00], ax
        mov byte ptr ds : [public_425f02], al
        ret 
        UNREACHABLE_TRAP(0x401060)
    }
}
