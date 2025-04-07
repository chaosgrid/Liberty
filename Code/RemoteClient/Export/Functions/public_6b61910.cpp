#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61910, internal_6b61910, public_6b61910);
extern "C" NAKED register_t __cdecl internal_6b61910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e85c]
        mov dword ptr ds : [public_6b74400], eax
        ret 
        UNREACHABLE_TRAP(0x6b61910)
    }
}
