#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be4120, internal_6be4120, public_6be4120);
extern "C" NAKED register_t __cdecl internal_6be4120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bdbc]
        mov dword ptr ds : [public_6c13b74], eax
        ret 
        UNREACHABLE_TRAP(0x6be4120)
    }
}
