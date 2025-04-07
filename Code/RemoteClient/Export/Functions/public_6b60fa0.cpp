#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60fa0, internal_6b60fa0, public_6b60fa0);
extern "C" NAKED register_t __cdecl internal_6b60fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e81c]
        mov dword ptr ds : [public_6b743c4], eax
        ret 
        UNREACHABLE_TRAP(0x6b60fa0)
    }
}
