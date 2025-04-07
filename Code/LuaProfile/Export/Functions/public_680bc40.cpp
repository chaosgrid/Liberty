#include "LuaProfile-PCH.h"

PROC_DECLARE(0x680bc40, internal_680bc40, public_680bc40);
extern "C" NAKED register_t __cdecl internal_680bc40()
{
    __asm
    {
        jmp dword ptr ds : [public_680c014]
        UNREACHABLE_TRAP(0x680bc40)
    }
}
