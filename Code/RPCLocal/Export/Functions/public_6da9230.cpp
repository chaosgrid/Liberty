#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da9230, internal_6da9230, public_6da9230);
extern "C" NAKED register_t __cdecl internal_6da9230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62d8]
        mov dword ptr ds : [public_6dbc160], eax
        ret 
        UNREACHABLE_TRAP(0x6da9230)
    }
}
