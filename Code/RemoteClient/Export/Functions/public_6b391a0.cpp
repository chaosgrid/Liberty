#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b391a0, internal_6b391a0, public_6b391a0);
extern "C" NAKED register_t __cdecl internal_6b391a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b328]
        mov dword ptr ds : [public_6b73d48], eax
        ret 
        UNREACHABLE_TRAP(0x6b391a0)
    }
}
