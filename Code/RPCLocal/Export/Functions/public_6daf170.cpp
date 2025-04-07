#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf170, internal_6daf170, public_6daf170);
extern "C" NAKED register_t __cdecl internal_6daf170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6648]
        mov dword ptr ds : [public_6dbc480], eax
        ret 
        UNREACHABLE_TRAP(0x6daf170)
    }
}
