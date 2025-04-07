#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1220, internal_6db1220, public_6db1220);
extern "C" NAKED register_t __cdecl internal_6db1220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6768]
        mov dword ptr ds : [public_6dbc570], eax
        ret 
        UNREACHABLE_TRAP(0x6db1220)
    }
}
