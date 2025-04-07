#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62050, internal_6b62050, public_6b62050);
extern "C" NAKED register_t __cdecl internal_6b62050()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8d8]
        mov dword ptr ds : [public_6b74440], eax
        ret 
        UNREACHABLE_TRAP(0x6b62050)
    }
}
