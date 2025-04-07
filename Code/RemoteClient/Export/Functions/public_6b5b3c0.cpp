#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b3c0, internal_6b5b3c0, public_6b5b3c0);
extern "C" NAKED register_t __cdecl internal_6b5b3c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e60c]
        mov dword ptr ds : [public_6b74200], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b3c0)
    }
}
