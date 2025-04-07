#include "Content-PCH.h"

PROC_DECLARE(0x6f9cfd0, internal_6f9cfd0, public_6f9cfd0);
extern "C" NAKED register_t __cdecl internal_6f9cfd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        ret 8
        UNREACHABLE_TRAP(0x6f9cfd0)
    }
}
