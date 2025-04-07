#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03ca0, internal_6c03ca0, public_6c03ca0);
extern "C" NAKED register_t __cdecl internal_6c03ca0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e544]
        mov dword ptr ds : [public_6c141d8], eax
        ret 
        UNREACHABLE_TRAP(0x6c03ca0)
    }
}
