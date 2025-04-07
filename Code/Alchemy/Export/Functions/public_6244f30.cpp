#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244f30);

#define public_6244f51 _public_6244f51

PROC_DECLARE(0x6244f30, internal_6244f30, public_6244f30);
extern "C" NAKED register_t __cdecl internal_6244f30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, 0xFFFFFFFF
        je public_6244f51
        mov ecx, dword ptr ds : [public_6257bbc]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x70]
        pop esi
        public_6244f51 : nop
        ret 8
        UNREACHABLE_TRAP(0x6244f30)
    }
}

#undef public_6244f51
