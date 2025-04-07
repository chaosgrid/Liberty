#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b666f0, internal_6b666f0, public_6b666f0);
extern "C" NAKED register_t __cdecl internal_6b666f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea20]
        mov dword ptr ds : [public_6b74560], eax
        ret 
        UNREACHABLE_TRAP(0x6b666f0)
    }
}
