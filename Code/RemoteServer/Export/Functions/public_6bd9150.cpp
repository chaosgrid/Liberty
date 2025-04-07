#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9150, internal_6bd9150, public_6bd9150);
extern "C" NAKED register_t __cdecl internal_6bd9150()
{
    __asm
    {
        mov word ptr ds : [public_6c13a48], 0
        mov byte ptr ds : [public_6c13a4a], 1
        ret 
        UNREACHABLE_TRAP(0x6bd9150)
    }
}
