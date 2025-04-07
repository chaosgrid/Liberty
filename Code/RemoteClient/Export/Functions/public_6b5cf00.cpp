#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5cf00, internal_6b5cf00, public_6b5cf00);
extern "C" NAKED register_t __cdecl internal_6b5cf00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6bc]
        mov dword ptr ds : [public_6b7428c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5cf00)
    }
}
