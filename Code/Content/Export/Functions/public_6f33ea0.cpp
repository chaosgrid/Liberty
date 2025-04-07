#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33ea0);

PROC_DECLARE(0x6f33ea0, internal_6f33ea0, public_6f33ea0);
extern "C" NAKED register_t __cdecl internal_6f33ea0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x188], 1
        push esi
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0x190]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x18C], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f33ea0)
    }
}
