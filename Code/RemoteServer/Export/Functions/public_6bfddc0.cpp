#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfddc0, internal_6bfddc0, public_6bfddc0);
extern "C" NAKED register_t __cdecl internal_6bfddc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e384]
        mov dword ptr ds : [public_6c13fec], eax
        ret 
        UNREACHABLE_TRAP(0x6bfddc0)
    }
}
