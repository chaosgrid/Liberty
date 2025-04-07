#include "Freelancer-PCH.h"

PROC_DECLARE(0x4573b0, internal_4573b0, public_4573b0);
extern "C" NAKED register_t __cdecl internal_4573b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x9C]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ds:[eax-0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x54]
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4573b0)
    }
}
