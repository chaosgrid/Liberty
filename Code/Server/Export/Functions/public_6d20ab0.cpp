#include "Server-PCH.h"

PROC_DECLARE(0x6d20ab0, internal_6d20ab0, public_6d20ab0);
extern "C" NAKED register_t __cdecl internal_6d20ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x18], eax
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6d20ab0)
    }
}
