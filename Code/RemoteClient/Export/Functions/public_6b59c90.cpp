#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59c90, internal_6b59c90, public_6b59c90);
extern "C" NAKED register_t __cdecl internal_6b59c90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5b4]
        mov dword ptr ds : [public_6b74194], eax
        ret 
        UNREACHABLE_TRAP(0x6b59c90)
    }
}
