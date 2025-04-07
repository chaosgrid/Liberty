#include "Common-PCH.h"

PROC_DECLARE(0x627bda0, internal_627bda0, public_627bda0);
extern "C" NAKED register_t __cdecl internal_627bda0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b590]
        mov dword ptr ds : [public_63fbfe4], eax
        ret 
        UNREACHABLE_TRAP(0x627bda0)
    }
}
