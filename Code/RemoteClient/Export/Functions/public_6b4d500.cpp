#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b4d500, internal_6b4d500, public_6b4d500);
extern "C" NAKED register_t __cdecl internal_6b4d500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6dcec]
        mov dword ptr ds : [public_6b73f0c], eax
        ret 
        UNREACHABLE_TRAP(0x6b4d500)
    }
}
