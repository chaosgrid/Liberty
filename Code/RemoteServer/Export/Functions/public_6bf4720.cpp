#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf4720, internal_6bf4720, public_6bf4720);
extern "C" NAKED register_t __cdecl internal_6bf4720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e06c]
        mov dword ptr ds : [public_6c13d58], eax
        ret 
        UNREACHABLE_TRAP(0x6bf4720)
    }
}
