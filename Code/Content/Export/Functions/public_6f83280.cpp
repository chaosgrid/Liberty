#include "Content-PCH.h"

PROC_DECLARE(0x6f83280, internal_6f83280, public_6f83280);
extern "C" NAKED register_t __cdecl internal_6f83280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor edx, edx
        mov byte ptr ds : [ecx+8], dl
        mov ecx, dword ptr ds : [eax+0xA4]
        mov dword ptr ds : [eax+0x84], edx
        mov dword ptr ds : [eax+0xA0], ecx
        mov dword ptr ds : [eax+0xB4], edx
        ret 4
        UNREACHABLE_TRAP(0x6f83280)
    }
}
