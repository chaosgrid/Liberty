#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b57ef0, internal_6b57ef0, public_6b57ef0);
extern "C" NAKED register_t __cdecl internal_6b57ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e554]
        mov dword ptr ds : [public_6b74110], eax
        ret 
        UNREACHABLE_TRAP(0x6b57ef0)
    }
}
