#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b547a0, internal_6b547a0, public_6b547a0);
extern "C" NAKED register_t __cdecl internal_6b547a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e438]
        mov dword ptr ds : [public_6b7401c], eax
        ret 
        UNREACHABLE_TRAP(0x6b547a0)
    }
}
