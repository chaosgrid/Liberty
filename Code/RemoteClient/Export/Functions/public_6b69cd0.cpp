#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69cd0, internal_6b69cd0, public_6b69cd0);
extern "C" NAKED register_t __cdecl internal_6b69cd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6eabc]
        mov dword ptr ds : [public_6b74634], eax
        ret 
        UNREACHABLE_TRAP(0x6b69cd0)
    }
}
