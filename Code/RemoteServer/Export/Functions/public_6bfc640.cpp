#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfc640, internal_6bfc640, public_6bfc640);
extern "C" NAKED register_t __cdecl internal_6bfc640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e30c]
        mov dword ptr ds : [public_6c13f88], eax
        ret 
        UNREACHABLE_TRAP(0x6bfc640)
    }
}
