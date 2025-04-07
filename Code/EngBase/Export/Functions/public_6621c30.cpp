#include "EngBase-PCH.h"

PROC_DECLARE(0x6621c30, internal_6621c30, public_6621c30);
extern "C" NAKED register_t __cdecl internal_6621c30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_662b124]
        ret 8
        UNREACHABLE_TRAP(0x6621c30)
    }
}
