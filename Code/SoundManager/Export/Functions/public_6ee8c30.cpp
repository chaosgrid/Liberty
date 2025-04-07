#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8c30);

#define public_6ee8c51 _public_6ee8c51

PROC_DECLARE(0x6ee8c30, internal_6ee8c30, public_6ee8c30);
extern "C" NAKED register_t __cdecl internal_6ee8c30()
{
    __asm
    {
        cmp dword ptr ds : [ecx+4], 0xFFFFFFFF
        je public_6ee8c51
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        add eax, edx
        cmp eax, esi
        pop esi
        ja public_6ee8c51
        mov eax, dword ptr ds : [ecx+8]
        add eax, edx
        ret 8
        public_6ee8c51 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee8c30)
    }
}

#undef public_6ee8c51
