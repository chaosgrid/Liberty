#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd10a0, internal_6bd10a0, public_6bd10a0);
extern "C" NAKED register_t __cdecl internal_6bd10a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b290]
        mov dword ptr ds : [public_6c13894], eax
        ret 
        UNREACHABLE_TRAP(0x6bd10a0)
    }
}
