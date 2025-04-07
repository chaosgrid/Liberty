#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62cd0, internal_6b62cd0, public_6b62cd0);
extern "C" NAKED register_t __cdecl internal_6b62cd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e918]
        mov dword ptr ds : [public_6b74484], eax
        ret 
        UNREACHABLE_TRAP(0x6b62cd0)
    }
}
