#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54ba0, internal_6b54ba0, public_6b54ba0);
extern "C" NAKED register_t __cdecl internal_6b54ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e458]
        mov dword ptr ds : [public_6b74054], eax
        ret 
        UNREACHABLE_TRAP(0x6b54ba0)
    }
}
