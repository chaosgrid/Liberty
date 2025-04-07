#include "FLServer-PCH.h"

PROC_DECLARE(0x40af00, internal_40af00, public_40af00);
extern "C" NAKED register_t __cdecl internal_40af00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_4277d8]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        ret 
        UNREACHABLE_TRAP(0x40af00)
    }
}
