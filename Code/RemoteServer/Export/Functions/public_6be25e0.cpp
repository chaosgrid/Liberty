#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be25e0, internal_6be25e0, public_6be25e0);
extern "C" NAKED register_t __cdecl internal_6be25e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd10]
        mov dword ptr ds : [public_6c13b18], eax
        ret 
        UNREACHABLE_TRAP(0x6be25e0)
    }
}
