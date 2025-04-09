#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53fd40, internal_53fd40, public_53fd40);
extern "C" NAKED register_t __cdecl internal_53fd40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[ecx+eax*4+0x10]
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53fd40)
    }
}
