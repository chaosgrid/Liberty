#include "Common-PCH.h"

PROC_DECLARE(0x6328020, internal_6328020, public_6328020);
extern "C" NAKED register_t __cdecl internal_6328020()
{
    __asm
    {
        movzx eax, byte ptr ds : [ecx+0x1C]
        imul eax, 0x7C
        mov eax, dword ptr ds : [eax+public_64019ac]
        ret 
        UNREACHABLE_TRAP(0x6328020)
    }
}
