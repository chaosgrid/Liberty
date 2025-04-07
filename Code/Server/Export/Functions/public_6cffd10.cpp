#include "Server-PCH.h"

PROC_DECLARE(0x6cffd10, internal_6cffd10, public_6cffd10);
extern "C" NAKED register_t __cdecl internal_6cffd10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6d8d900], eax
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6cffd10)
    }
}
