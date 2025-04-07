#include "FLServer-PCH.h"

PROC_DECLARE(0x40aee0, internal_40aee0, public_40aee0);
extern "C" NAKED register_t __cdecl internal_40aee0()
{
    __asm
    {
        push 0
        push 0
        push 0
        call dword ptr ds : [public_41b188]
        mov dword ptr ds : [public_4277d8], eax
        ret 
        UNREACHABLE_TRAP(0x40aee0)
    }
}
