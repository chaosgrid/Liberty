#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b2e0);

PROC_DECLARE(0x41b2e0, internal_41b2e0, public_41b2e0);
extern "C" NAKED register_t __cdecl internal_41b2e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        push 0
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [public_5c6d7c]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [ecx]
        push esi
        push 0xFFFFFFFF
        call dword ptr ds : [eax+0x18]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x41b2e0)
    }
}
