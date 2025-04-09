#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_447bb0);

PROC_DECLARE(0x447bb0, internal_447bb0, public_447bb0);
extern "C" NAKED register_t __cdecl internal_447bb0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        mov ecx, 9
        mov edi, eax
        rep movsd
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x24]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x447bb0)
    }
}
