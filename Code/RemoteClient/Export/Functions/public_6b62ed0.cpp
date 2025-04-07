#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62ed0, internal_6b62ed0, public_6b62ed0);
extern "C" NAKED register_t __cdecl internal_6b62ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e92c]
        mov dword ptr ds : [public_6b7448c], eax
        ret 
        UNREACHABLE_TRAP(0x6b62ed0)
    }
}
