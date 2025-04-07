#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53640, internal_6b53640, public_6b53640);
extern "C" NAKED register_t __cdecl internal_6b53640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3ec]
        mov dword ptr ds : [public_6b73fc4], eax
        ret 
        UNREACHABLE_TRAP(0x6b53640)
    }
}
