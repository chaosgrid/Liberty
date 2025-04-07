#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1130, internal_6bd1130, public_6bd1130);
extern "C" NAKED register_t __cdecl internal_6bd1130()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6c13898], ax
        mov byte ptr ds : [public_6c1389a], al
        ret 
        UNREACHABLE_TRAP(0x6bd1130)
    }
}
