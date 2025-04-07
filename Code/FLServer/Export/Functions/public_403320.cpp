#include "FLServer-PCH.h"

PROC_DECLARE(0x403320, internal_403320, public_403320);
extern "C" NAKED register_t __cdecl internal_403320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        imul edx, 0x3F8
        lea eax, ds:[edx+eax-0x3F8]
        ret 4
        UNREACHABLE_TRAP(0x403320)
    }
}
