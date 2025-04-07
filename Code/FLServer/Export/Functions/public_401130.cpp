#include "FLServer-PCH.h"

PROC_DECLARE(0x401130, internal_401130, public_401130);
extern "C" NAKED register_t __cdecl internal_401130()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        ret 4
        UNREACHABLE_TRAP(0x401130)
    }
}
