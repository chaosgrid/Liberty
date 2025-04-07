#include "Common-PCH.h"

PROC_DECLARE(0x634de90, internal_634de90, public_634de90);
extern "C" NAKED register_t __cdecl internal_634de90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        and eax, 0xFFFFFFF0
        mov edx, dword ptr ds : [eax]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x48]
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        mov dword ptr ds : [edx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x634de90)
    }
}
