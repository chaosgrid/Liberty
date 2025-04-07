#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd10c0, internal_6bd10c0, public_6bd10c0);
extern "C" NAKED register_t __cdecl internal_6bd10c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b294]
        mov dword ptr ds : [public_6c137c8], eax
        ret 
        UNREACHABLE_TRAP(0x6bd10c0)
    }
}
