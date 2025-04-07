#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62ae0, internal_6b62ae0, public_6b62ae0);
extern "C" NAKED register_t __cdecl internal_6b62ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8fc]
        mov dword ptr ds : [public_6b7445c], eax
        ret 
        UNREACHABLE_TRAP(0x6b62ae0)
    }
}
