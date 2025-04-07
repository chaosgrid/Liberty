#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63ff0, internal_6b63ff0, public_6b63ff0);
extern "C" NAKED register_t __cdecl internal_6b63ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e978]
        mov dword ptr ds : [public_6b744cc], eax
        ret 
        UNREACHABLE_TRAP(0x6b63ff0)
    }
}
