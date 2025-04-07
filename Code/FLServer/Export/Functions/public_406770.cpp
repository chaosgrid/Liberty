#include "FLServer-PCH.h"

PROC_DECLARE(0x406770, internal_406770, public_406770);
extern "C" NAKED register_t __cdecl internal_406770()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_4261fc], ax
        mov byte ptr ds : [public_4261fe], al
        ret 
        UNREACHABLE_TRAP(0x406770)
    }
}
