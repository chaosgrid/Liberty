#include "Content-PCH.h"

PROC_DECLARE(0x6f858b0, internal_6f858b0, public_6f858b0);
extern "C" NAKED register_t __cdecl internal_6f858b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x48]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6f858b0)
    }
}
