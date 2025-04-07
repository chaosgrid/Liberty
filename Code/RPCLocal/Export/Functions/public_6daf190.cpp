#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf190, internal_6daf190, public_6daf190);
extern "C" NAKED register_t __cdecl internal_6daf190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db664c]
        mov dword ptr ds : [public_6dbc47c], eax
        ret 
        UNREACHABLE_TRAP(0x6daf190)
    }
}
