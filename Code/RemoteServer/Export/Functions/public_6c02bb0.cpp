#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02bb0, internal_6c02bb0, public_6c02bb0);
extern "C" NAKED register_t __cdecl internal_6c02bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e49c]
        mov dword ptr ds : [public_6c14154], eax
        ret 
        UNREACHABLE_TRAP(0x6c02bb0)
    }
}
