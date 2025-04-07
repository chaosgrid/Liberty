#include "Freelancer-PCH.h"

PROC_DECLARE(0x429e70, internal_429e70, public_429e70);
extern "C" NAKED register_t __cdecl internal_429e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x60], eax
        add edx, 0x24
        mov eax, dword ptr ds : [edx]
        add ecx, 0x30
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        ret 8
        UNREACHABLE_TRAP(0x429e70)
    }
}
