#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d7a0);
CLANG_FORWARD_PROC_SYMBOL(public_661e3d0);

PROC_DECLARE(0x661e3d0, internal_661e3d0, public_661e3d0);
extern "C" NAKED register_t __cdecl internal_661e3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_661d7a0
        mov edx, eax
        mov eax, dword ptr ds : [ecx+0x14]
        imul eax, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [edx]
        add eax, esi
        pop esi
        add eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x661e3d0)
    }
}
