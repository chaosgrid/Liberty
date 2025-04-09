#include "FreeLancer-PCH.h"

PROC_DECLARE(0x501fd0, internal_501fd0, public_501fd0);
extern "C" NAKED register_t __cdecl internal_501fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da77c]
        mov dword ptr ds : [public_674fe8], eax
        ret 
        UNREACHABLE_TRAP(0x501fd0)
    }
}
