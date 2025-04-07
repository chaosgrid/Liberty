#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61210, internal_6b61210, public_6b61210);
extern "C" NAKED register_t __cdecl internal_6b61210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e830]
        mov dword ptr ds : [public_6b743cc], eax
        ret 
        UNREACHABLE_TRAP(0x6b61210)
    }
}
