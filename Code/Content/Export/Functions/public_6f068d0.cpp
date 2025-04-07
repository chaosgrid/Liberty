#include "Content-PCH.h"

PROC_DECLARE(0x6f068d0, internal_6f068d0, public_6f068d0);
extern "C" NAKED register_t __cdecl internal_6f068d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [ecx+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [ecx+0x14], esi
        mov esi, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [ecx+0x1C], esi
        mov dword ptr ds : [ecx+0x18], eax
        mov dword ptr ds : [ecx+0x20], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f068d0)
    }
}
