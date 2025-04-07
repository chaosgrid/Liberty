#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daee30, internal_6daee30, public_6daee30);
extern "C" NAKED register_t __cdecl internal_6daee30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6618]
        mov dword ptr ds : [public_6dbc440], eax
        ret 
        UNREACHABLE_TRAP(0x6daee30)
    }
}
