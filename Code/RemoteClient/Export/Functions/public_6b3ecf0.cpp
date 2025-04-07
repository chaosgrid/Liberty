#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3ecf0, internal_6b3ecf0, public_6b3ecf0);
extern "C" NAKED register_t __cdecl internal_6b3ecf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c16c]
        mov dword ptr ds : [public_6b73e3c], eax
        ret 
        UNREACHABLE_TRAP(0x6b3ecf0)
    }
}
