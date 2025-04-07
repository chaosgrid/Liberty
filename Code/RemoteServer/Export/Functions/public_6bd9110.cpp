#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9110, internal_6bd9110, public_6bd9110);
extern "C" NAKED register_t __cdecl internal_6bd9110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b7bc]
        mov dword ptr ds : [public_6c13a58], eax
        ret 
        UNREACHABLE_TRAP(0x6bd9110)
    }
}
