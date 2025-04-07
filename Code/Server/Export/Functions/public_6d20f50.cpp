#include "Server-PCH.h"

PROC_DECLARE(0x6d20f50, internal_6d20f50, public_6d20f50);
extern "C" NAKED register_t __cdecl internal_6d20f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x28], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x2C], eax
        ret 4
        UNREACHABLE_TRAP(0x6d20f50)
    }
}
