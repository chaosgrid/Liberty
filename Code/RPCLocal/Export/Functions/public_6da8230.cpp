#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8230, internal_6da8230, public_6da8230);
extern "C" NAKED register_t __cdecl internal_6da8230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db624c]
        mov dword ptr ds : [public_6dbc0ec], eax
        ret 
        UNREACHABLE_TRAP(0x6da8230)
    }
}
