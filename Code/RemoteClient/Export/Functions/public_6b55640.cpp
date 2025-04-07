#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55640, internal_6b55640, public_6b55640);
extern "C" NAKED register_t __cdecl internal_6b55640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e488]
        mov dword ptr ds : [public_6b74094], eax
        ret 
        UNREACHABLE_TRAP(0x6b55640)
    }
}
