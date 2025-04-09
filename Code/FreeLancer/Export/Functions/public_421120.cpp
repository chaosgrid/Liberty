#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421120);

PROC_DECLARE(0x421120, internal_421120, public_421120);
extern "C" NAKED register_t __cdecl internal_421120()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push 0
        push 0
        push esi
        push 0x3F800000
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x421120)
    }
}
