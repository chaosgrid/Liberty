#include "THORN-PCH.h"

PROC_DECLARE(0x6f356c0, internal_6f356c0, public_6f356c0);
extern "C" NAKED register_t __cdecl internal_6f356c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax-8]
        push esi
        lea esi, ds:[eax-8]
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [esi]
        lea edi, ds:[eax+eax*4]
        push esi
        shl edi, 3
        call dword ptr ds : [edx+0x14]
        imul eax, 0x33
        lea eax, ds:[eax+edi+0xA]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f356c0)
    }
}
