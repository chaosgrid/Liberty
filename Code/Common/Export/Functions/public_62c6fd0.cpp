#include "Common-PCH.h"

PROC_DECLARE(0x62c6fd0, internal_62c6fd0, public_62c6fd0);
extern "C" NAKED register_t __cdecl internal_62c6fd0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x28]
        and al, 0xFE
        or al, 2
        mov byte ptr ds : [ecx+0x28], al
        xor eax, eax
        mov dword ptr ds : [ecx+0x2D8], eax
        mov dword ptr ds : [ecx+0x2DC], eax
        mov dword ptr ds : [ecx+0x2E0], eax
        mov dword ptr ds : [ecx+0x2E4], eax
        mov byte ptr ds : [ecx+0x2E8], al
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x62c6fd0)
    }
}
