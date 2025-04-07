#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54d80, internal_6b54d80, public_6b54d80);
extern "C" NAKED register_t __cdecl internal_6b54d80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e464]
        mov dword ptr ds : [public_6b74060], eax
        ret 
        UNREACHABLE_TRAP(0x6b54d80)
    }
}
