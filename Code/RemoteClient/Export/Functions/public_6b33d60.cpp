#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33d60, internal_6b33d60, public_6b33d60);
extern "C" NAKED register_t __cdecl internal_6b33d60()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6b738fc], ax
        mov byte ptr ds : [public_6b738fe], al
        ret 
        UNREACHABLE_TRAP(0x6b33d60)
    }
}
