#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf820, internal_6daf820, public_6daf820);
extern "C" NAKED register_t __cdecl internal_6daf820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db66ec]
        mov dword ptr ds : [public_6dbc4ec], eax
        ret 
        UNREACHABLE_TRAP(0x6daf820)
    }
}
